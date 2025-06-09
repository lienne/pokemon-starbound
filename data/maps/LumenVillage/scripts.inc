LumenVillage_MapScripts::
# 2 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage/scripts.pory"
	map_script_2 1, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/LumenVillage/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 2
# 11 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_Rival_Intro
# 12 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 14 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 15 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 16 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 18 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 19 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 27 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 28 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro
	end


BeginnerClearing_EventScript_GoBack_LeftTrigger::
# 35 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_LeftTrigger_1
	return

BeginnerClearing_EventScript_GoBack_LeftTrigger_1:
# 36 "data/maps/LumenVillage/scripts.pory"
	lockall
# 37 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 39 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 40 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0
# 41 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 42 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GoBack_UpTrigger::
# 47 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_UpTrigger_1
	return

BeginnerClearing_EventScript_GoBack_UpTrigger_1:
# 48 "data/maps/LumenVillage/scripts.pory"
	lockall
# 49 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 51 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 52 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0
# 53 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 54 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 59 "data/maps/LumenVillage/scripts.pory"
	lockall
# 60 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 61 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SelenesHouseSign::
# 65 "data/maps/LumenVillage/scripts.pory"
	lockall
# 66 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_SelenesHouseSign_Text_0
# 67 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_CassiansHouseSign::
# 71 "data/maps/LumenVillage/scripts.pory"
	lockall
# 72 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
# 73 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_VillageSign::
# 77 "data/maps/LumenVillage/scripts.pory"
	lockall
# 78 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 80 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 84 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 85 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 12 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 16 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 16 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 16 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 16 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 17 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 17 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 17 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 26 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
	step_end

# 40 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0:
# 40 "data/maps/LumenVillage/scripts.pory"
	walk_right
	step_end

# 52 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0:
# 52 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 84 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 84 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 19 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian: Hey, {PLAYER}! What are you\n"
	.string "doing out here?\l"
	.string "WHOA - hold up! You've got a Pokémon?!\l"
	.string "Wait a second... you SERIOUSLY already\l"
	.string "got a Pokémon??\l"
	.string "I can't believe this! After all these\l"
	.string "years training together, and you didn't\l"
	.string "even tell me??\l"
	.string "Tch... classic {PLAYER}. Always one\l"
	.string "step ahead, huh?\l"
	.string "Well, guess what - I'm not letting you\l"
	.string "leave me in the dust!\l"
	.string "I'll get my own Pokémon too, you'll see!$"

BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0:
# 37 "data/maps/LumenVillage/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 60 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 66 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 72 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 78 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 85 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing! You can now use\n"
	.string "sattelites to chart the stars in\l"
	.string "Astrea!$"
