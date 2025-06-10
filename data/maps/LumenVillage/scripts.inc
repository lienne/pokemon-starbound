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
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 19 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 20 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 22 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 23 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 31 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 32 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro
# 33 "data/maps/LumenVillage/scripts.pory"
	fadedefaultbgm
	end


BeginnerClearing_EventScript_GoBack_LeftTrigger::
# 40 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_LeftTrigger_1
	return

BeginnerClearing_EventScript_GoBack_LeftTrigger_1:
# 41 "data/maps/LumenVillage/scripts.pory"
	lockall
# 42 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 44 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 45 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0
# 46 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 47 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GoBack_UpTrigger::
# 52 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_UpTrigger_1
	return

BeginnerClearing_EventScript_GoBack_UpTrigger_1:
# 53 "data/maps/LumenVillage/scripts.pory"
	lockall
# 54 "data/maps/LumenVillage/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_LeftTrigger_Text_0
# 56 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 57 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0
# 58 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 59 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 64 "data/maps/LumenVillage/scripts.pory"
	lockall
# 65 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 66 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SelenesHouseSign::
# 70 "data/maps/LumenVillage/scripts.pory"
	lockall
# 71 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_SelenesHouseSign_Text_0
# 72 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_CassiansHouseSign::
# 76 "data/maps/LumenVillage/scripts.pory"
	lockall
# 77 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
# 78 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_VillageSign::
# 82 "data/maps/LumenVillage/scripts.pory"
	lockall
# 83 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 85 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 89 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 90 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_OldLady_Dialogue::
# 95 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_OldLady, LumenVillage_FatMan_Dialogue_Movement_0
# 96 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_OldLady_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_LittleGirl_Dialogue::
# 100 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_LittleGirl, LumenVillage_FatMan_Dialogue_Movement_0
# 101 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_LittleGirl_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 15 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 15 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 20 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 20 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 21 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 21 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 21 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 30 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 30 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
	step_end

# 45 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_LeftTrigger_Movement_0:
# 45 "data/maps/LumenVillage/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/LumenVillage/scripts.pory"
BeginnerClearing_EventScript_GoBack_UpTrigger_Movement_0:
# 57 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 89 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 23 "data/maps/LumenVillage/scripts.pory"
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
# 42 "data/maps/LumenVillage/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 65 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 71 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 77 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 83 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 90 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing! You can now use\n"
	.string "satellites to chart the stars in\l"
	.string "Astrea!$"

LumenVillage_OldLady_Dialogue_Text_0:
# 96 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village must be the safest place\n"
	.string "in Astrea, but I swear I hear rustling in\l"
	.string "the night lately...$"

LumenVillage_LittleGirl_Dialogue_Text_0:
# 101 "data/maps/LumenVillage/scripts.pory"
	.string "The water looks so nice!\n"
	.string "But I'm not allowed to swim yet...$"
