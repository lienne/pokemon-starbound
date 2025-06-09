LumenVillage_MapScripts::
# 2 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage/scripts.pory"
	map_script_2 1, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 5 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_HIDE_CLEARING_JIRACHI, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 6 "data/maps/LumenVillage/scripts.pory"
	playbgm MUS_NONE, 1
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LumenVillage/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 2
# 14 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_Rival_Intro
# 15 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 16 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 17 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 18 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 19 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 21 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 22 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 30 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 31 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro
	end


BeginnerClearing_EventScript_GoBack_LeftTrigger::
# 38 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_LeftTrigger_1
	return

BeginnerClearing_EventScript_GoBack_LeftTrigger_1:
# 39 "data/maps/LumenVillage/scripts.pory"
	lockall
# 40 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 42 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 43 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0
# 44 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 45 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GoBack_UpTrigger::
# 50 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_UpTrigger_1
	return

BeginnerClearing_EventScript_GoBack_UpTrigger_1:
# 51 "data/maps/LumenVillage/scripts.pory"
	lockall
# 52 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 54 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 55 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0
# 56 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 57 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 62 "data/maps/LumenVillage/scripts.pory"
	lockall
# 63 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 64 "data/maps/LumenVillage/scripts.pory"
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
# 74 "data/maps/LumenVillage/scripts.pory"
	lockall
# 75 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
# 76 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_VillageSign::
# 80 "data/maps/LumenVillage/scripts.pory"
	lockall
# 81 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 83 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 87 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 88 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_OldLady_Dialogue::
# 93 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_OldLady, LumenVillage_FatMan_Dialogue_Movement_0
# 94 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_OldLady_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_LittleGirl_Dialogue::
# 99 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_LittleGirl, LumenVillage_FatMan_Dialogue_Movement_0
# 100 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_LittleGirl_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 15 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 15 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 19 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 19 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 19 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 19 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 29 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 29 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
	step_end

# 43 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0:
# 43 "data/maps/LumenVillage/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0:
# 55 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 87 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 22 "data/maps/LumenVillage/scripts.pory"
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
# 40 "data/maps/LumenVillage/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 63 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 66 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 75 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 81 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 88 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing! You can now use\n"
	.string "satellites to chart the stars in\l"
	.string "Astrea!$"

LumenVillage_OldLady_Dialogue_Text_0:
# 94 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village must be the safest place\n"
	.string "in Astrea,\n"
	.string "but I swear I hear rustling in the night\l"
	.string "lately...$"

LumenVillage_LittleGirl_Dialogue_Text_0:
# 100 "data/maps/LumenVillage/scripts.pory"
	.string "The water looks so nice!\n"
	.string "But I'm not allowed to swim yet...$"
