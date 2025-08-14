#ifndef GUARD_INTRO_CG_H
#define GUARD_INTRO_CG_H

#include "gba/types.h"
#include "main.h"
#include "script.h"
#include "global.h"
#include "constants/intro_cg.h"

struct IntroScreenData {
    const u32 *tiles;
    const u32 *tilemap;
    const u16 *palette;
};

void OpenIntroCg_FromScript(struct ScriptContext *ctx);
void IntroCg_Init(MainCallback callback, enum IntroCgScreens screen);

#endif