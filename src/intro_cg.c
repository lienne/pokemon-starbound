#include "intro_cg.h"

#include "gba/types.h"
#include "gba/defines.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "text_window.h"
#include "window.h"
#include "constants/characters.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"

#include "constants/songs.h"
#include "sound.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"

#include "gpu_regs.h"
#include "line_break.h"

#include "script.h"
#include "palette.h"
#include "overworld.h"

#include "constants/intro_cg.h"

struct IntroCGState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 mode;
    enum IntroCgScreens screen;
};

enum WindowIds
{
    WINDOW_0
};

enum { LOAD_TILES, LOAD_MAP, LOAD_PAL, LOAD_DONE };

static EWRAM_DATA struct IntroCGState *sIntroCGState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static const struct BgTemplate sBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 2
    }
};

static const struct WindowTemplate sIntroCgWindowTemplates[] =
{
    [WINDOW_0] =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 2,
        .width = 32,
        .height = 20,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

static const u32 sTiles_Cassian[] = INCBIN_U32("graphics/intro_cg/cassian.4bpp.lz");
static const u32 sMap_Cassian[]   = INCBIN_U32("graphics/intro_cg/cassian.bin.lz");
static const u16 sPal_Cassian[]   = INCBIN_U16("graphics/intro_cg/cassian.gbapal");

static const u32 sTiles_Selene[] = INCBIN_U32("graphics/intro_cg/selene.4bpp.lz");
static const u32 sMap_Selene[]   = INCBIN_U32("graphics/intro_cg/selene.bin.lz");
static const u16 sPal_Selene[]   = INCBIN_U16("graphics/intro_cg/selene.gbapal");

static const u32 *sTiles;
static const u32 *sMap;
static const u16 *sPal;

static const struct IntroScreenData sScreenData[] =
{
    [INTROCG_CASSIAN] =
    {
        .tiles = sTiles_Cassian,
        .tilemap = sMap_Cassian,
        .palette = sPal_Cassian
    },
    [INTROCG_SELENE] =
    {
        .tiles = sTiles_Selene,
        .tilemap = sMap_Selene,
        .palette = sPal_Selene
    }
};

// Callbacks
static void IntroCg_SetupCB(void);
static void IntroCg_MainCB(void);
static void IntroCg_VBlankCB(void);

// Tasks
static void Task_IntroCgWaitFadeIn(u8 taskId);
static void Task_IntroCgMainInput(u8 taskId);
static void Task_IntroCgWaitFadeAndBail(u8 taskId);
static void Task_IntroCgWaitFadeAndExitGracefully(u8 taskId);

// Helper functions
void IntroCg_Init(MainCallback callback, enum IntroCgScreens screen);
static void IntroCg_ResetGpuRegsAndBgs(void);
static bool8 IntroCg_InitBgs(void);
static void IntroCg_FadeAndBail(void);
static bool8 IntroCg_LoadGraphics(void);
static void IntroCg_FreeResources(void);
static void FieldCB_ForceBlackScreen(void);

void IntroCg_Init(MainCallback callback, enum IntroCgScreens screen)
{
    sIntroCGState = AllocZeroed(sizeof(struct IntroCGState));
    if (sIntroCGState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sIntroCGState->loadState = 0;
    sIntroCGState->savedCallback = callback;
    sIntroCGState->screen = screen;

    SetMainCallback2(IntroCg_SetupCB);
}

static void IntroCg_ResetGpuRegsAndBgs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WIN1H, 0);
    SetGpuReg(REG_OFFSET_WIN1V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    CpuFill16(0, (void *)VRAM, VRAM_SIZE);
    CpuFill32(0, (void *)OAM, OAM_SIZE);
}

static void IntroCg_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        IntroCg_ResetGpuRegsAndBgs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (IntroCg_InitBgs())
        {
            sIntroCGState->loadState = 0;
            gMain.state++;
        }
        else 
        {
            IntroCg_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (IntroCg_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        gMain.state++;
        break;
    case 5:
        CreateTask(Task_IntroCgWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(IntroCg_VBlankCB);
        SetMainCallback2(IntroCg_MainCB);
        break;
    }
}

static void IntroCg_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void IntroCg_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_IntroCgWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_IntroCgMainInput;
    }
}

static void Task_IntroCgMainInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_IntroCgWaitFadeAndExitGracefully;
    }
}

static void Task_IntroCgWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sIntroCGState->savedCallback);
        IntroCg_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_IntroCgWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sIntroCGState->savedCallback);
        IntroCg_FreeResources();
        DestroyTask(taskId);
    }
}

#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 IntroCg_InitBgs(void)
{
    ResetAllBgsCoordinates();
    
    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, NELEMS(sBgTemplates));
    
    SetBgTilemapBuffer(0, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(0);

    ShowBg(0);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void IntroCg_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_IntroCgWaitFadeAndBail, 0);
    SetVBlankCallback(IntroCg_VBlankCB);
    SetMainCallback2(IntroCg_MainCB);
}

static bool8 IntroCg_LoadGraphics(void)
{
    switch (sIntroCGState->loadState)
    {
    case LOAD_TILES:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(0, sScreenData[sIntroCGState->screen].tiles, 0, 0, 0);
        sIntroCGState->loadState++;
        break;
    case LOAD_MAP:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sScreenData[sIntroCGState->screen].tilemap, sBg1TilemapBuffer);
            sIntroCGState->loadState++;
        }
        break;
    case LOAD_PAL:
        LoadPalette(sScreenData[sIntroCGState->screen].palette, BG_PLTT_ID(0), 4*PLTT_SIZE_4BPP);
        sIntroCGState->loadState++;
        break;
    default:
        sIntroCGState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void IntroCg_FreeResources(void)
{
    if (sIntroCGState != NULL)
    {
        Free(sIntroCGState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static void FieldCB_ForceBlackScreen(void)
{
    BlendPalettes(PALETTES_ALL, 16, RGB(0, 0, 0));
    gFieldCallback = NULL; 
}

void OpenIntroCg_FromScript(struct ScriptContext *ctx)
{
    if (gPaletteFade.active)
        return;
    
    enum IntroCgScreens screen = ScriptReadByte(ctx);

    if (screen == INTROCG_SELENE)
    {
        sTiles = sTiles_Selene;
        sMap   = sMap_Selene;
        sPal   = sPal_Selene;
    }
    else
    {
        sTiles = sTiles_Cassian;
        sMap   = sMap_Cassian;
        sPal   = sPal_Cassian;
    }

    CleanupOverworldWindowsAndTilemaps();
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, 0);
    IntroCg_Init(CB2_ReturnToFieldContinueScriptPlayMapMusic, screen);
    ScriptContext_Stop();
}