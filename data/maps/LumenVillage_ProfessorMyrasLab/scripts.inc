LumenVillage_ProfessorMyrasLab_MapScripts::
# 8 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 16 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_ge LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	clearflag FLAG_HIDE_LAB_ASSISTANT
# 12 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	addobject ProfMyrasLab_Assistant
# 13 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setobjectxyperm ProfMyrasLab_Assistant, 9, 8
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeobject ProfMyrasLab_Rival_Intro_2
# 5 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 34 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 3, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 18 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_INTRO_SCENE, 1
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 20 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 21 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 22 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 23 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 24 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
# 25 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
	end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 35 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_INTRO_SCENE, 4
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	addobject ProfMyrasLab_Rival_Intro_2
# 37 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 38 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 39 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 40 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 41 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay 50
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1
# 43 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 44 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 48 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 49 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1
# 54 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 55 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2
# 58 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 59 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3
# 63 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 64 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4, MSGBOX_AUTOCLOSE
# 66 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5, MSGBOX_AUTOCLOSE
# 68 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2
# 70 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 72 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement
# 74 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 75 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6, MSGBOX_AUTOCLOSE
# 81 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, ProfMyrasLab_Movement_PlayerWatchRivalExit
# 82 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, ProfMyrasLab_Movement_RivalExit
# 83 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 84 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_DOOR
# 85 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitse
# 86 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeobject ProfMyrasLab_Rival_Intro_2
# 87 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3
# 89 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 91 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7
# 96 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername NULL
# 98 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 99 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8, MSGBOX_AUTOCLOSE
# 100 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 101 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9, MSGBOX_YESNO
# 102 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1:
# 105 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 106 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10, MSGBOX_AUTOCLOSE
	end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2:
# 103 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1


RivalName::
# 122 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	checkplayergender
# 123 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalName_1
# 126 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername RivalName_Text_1
	return

RivalName_1:
# 124 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername RivalName_Text_0
	return


ProfMyrasLab_EventScript_ProfMyra_Dialogue::
# 131 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_lt ProfMyrasLab_EventScript_ProfMyra_Dialogue_1
# 134 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_eq ProfMyrasLab_EventScript_ProfMyra_Dialogue_2
# 138 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 139 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_2, type = MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_1:
# 132 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 133 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0, type = MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_2:
# 135 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 136 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1, type = MSGBOX_NPC
	return


ProfMyrasLab_EventScript_JirachiNPC::
# 148 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 149 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
	return


ProfMyrasLab_EventScript_Assistant_Dialogue::
# 153 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq ProfMyrasLab_EventScript_Assistant_Dialogue_1
# 157 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Assistant, ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0
# 158 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_Assistant_Dialogue_Text_1, type = MSGBOX_NPC
	return

ProfMyrasLab_EventScript_Assistant_Dialogue_1:
# 154 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Assistant, ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0
# 155 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_Assistant_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 163 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_Movement_RivalExit:
# 164 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_right
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
	step_end

# 168 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_Movement_PlayerWatchRivalExit:
# 169 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay_16
# 170 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_in_place_faster_right
# 171 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay_16
# 172 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_in_place_faster_down
	step_end

# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 37 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1:
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2:
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_down
	step_end

# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3:
# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0:
# 154 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_player
	step_end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 22 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Jirachi seems to be doing a bit better\n"
	.string "now, thanks to you, {PLAYER}.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "However, I think it's best if we get it\n"
	.string "some more potent medicine.\l"
	.string "I know you've done a lot already, but\l"
	.string "would you be willing to go to Solstice\l"
	.string "Town to pick it up?\l"
	.string "It's just the next town over.\l"
	.string "You can take the Pokémon I lent you, of\l"
	.string "course.\l"
	.string "The PokéMart attendant will have it\l"
	.string "ready for you at my request.\l"
	.string "Thank you, {PLAYER}. We'll see you\l"
	.string "when you get back!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Professor Myra! I want a Pokémon too!\n"
	.string "{PLAYER} already got one! It's not\l"
	.string "fair that only {PLAYER} gets one!\l"
	.string "I'll treat it well! We'll get strong\l"
	.string "together! Please believe me!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
# 49 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hmmm... These Pokémon were part of a\n"
	.string "special research assignment.\l"
	.string "They weren't meant for trainers - not\l"
	.string "yet.\l"
	.string "But I see it in your eyes... you're\l"
	.string "serious.\l"
	.string "This isn't about catching up, is it?\l"
	.string "It's about proving you're ready.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2:
# 55 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I've ALWAYS been ready!\n"
	.string "If {PLAYER} is out there, then I\l"
	.string "should be too!\l"
	.string "Please, Professor! I want to be a\l"
	.string "Pokémon Trainer!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3:
# 59 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "...very well.\n"
	.string "But know this: once you take this step,\l"
	.string "there's no going back.\l"
	.string "This journey will challenge more than\l"
	.string "just your strength.\l"
	.string "Choose carefully.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4:
# 64 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you, Professor Myra!!\n"
	.string "I promise I won't let you down!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5:
# 67 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{RIVAL} received a Pokémon!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6:
# 75 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I told you I'd get a Pokémon too!\l"
	.string "Now we're even. Don't think you'll stay\l"
	.string "one step ahead for long!\l"
	.string "...but, uh, I'm still glad we're doing this\l"
	.string "together.\l"
	.string "Even if I AM gonna beat you!\l"
	.string "Catch you later!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7:
# 91 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hi {PLAYER}!\n"
	.string "You came at just the right time.\l"
	.string "I ended up giving your friend a Pokémon.\l"
	.string "For the sake of being fair, I think you\l"
	.string "should keep the one I lent you earlier.\l"
	.string "After all, it looks like you two have\l"
	.string "already started bonding.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8:
# 99 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9:
# 101 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10:
# 106 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I see you've also retrieved the\n"
	.string "medicine from Solstice Town.\l"
	.string "Thank you for that, {PLAYER}.\l"
	.string "However, Jirachi has already left.\l"
	.string "I'm worried about it, since it was badly\l"
	.string "hurt.\l"
	.string "You might not know this, but Jirachi is a\l"
	.string "very special Pokémon.\l"
	.string "Whoever those Team Eclipse guys were, I\l"
	.string "don't think they had good intentions\l"
	.string "towards Jirachi.\l"
	.string "If it went anywhere... it must have\l"
	.string "returned to the place where you found\l"
	.string "it.\l"
	.string "You should go back to Starfall Clearing\l"
	.string "to look for it.\l"
	.string "If it chose to show itself to you, it\l"
	.string "might do so again.\l"
	.string "Please look for Jirachi, {PLAYER}, and\l"
	.string "make sure it is safe.$"

RivalName_Text_0:
# 124 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Selene$"

RivalName_Text_1:
# 126 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Cassian$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0:
# 133 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you for agreeing to get the\n"
	.string "medicine from Solstice Town for Jirachi.\l"
	.string "It's imperative we help it recover.$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1:
# 136 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Please look for Jirachi, {PLAYER}, and\n"
	.string "make sure it is safe.$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_2:
# 139 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I hope your journey's off to a good\n"
	.string "start, {PLAYER}.\l"
	.string "Don't forget - you're not alone out\l"
	.string "there.\l"
	.string "Oh, and remember to register Pokémon in\l"
	.string "your Pokédex.\l"
	.string "The more you learn, the stronger you'll\l"
	.string "become.\l"
	.string "Safe travels, {PLAYER}.$"

ProfMyrasLab_EventScript_Assistant_Dialogue_Text_0:
# 155 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Prof. Myra went out. I'm not sure where\n"
	.string "she went.$"

ProfMyrasLab_EventScript_Assistant_Dialogue_Text_1:
# 158 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Prof. Myra is an astrologer. She's very\n"
	.string "interested in the stars.\l"
	.string "That's why she moved to Lumen Village -\l"
	.string "there's a lot less light pollution\l"
	.string "around here.$"
