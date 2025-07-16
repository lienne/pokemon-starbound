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
# 37 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
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
# 31 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 32 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	startquest QUEST_1_MEDS_FOR_JIRACHI
# 33 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	openquestmenu
	end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 38 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_INTRO_SCENE, 4
# 39 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	addobject ProfMyrasLab_Rival_Intro_2
# 40 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 41 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 42 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 43 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 44 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay 50
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1
# 46 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 47 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 48 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 51 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 52 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1
# 56 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 57 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2
# 60 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 61 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3
# 65 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 66 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4, MSGBOX_AUTOCLOSE
# 68 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5, MSGBOX_AUTOCLOSE
# 70 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2
# 72 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 74 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 75 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement
# 76 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call RivalName
# 77 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6, MSGBOX_AUTOCLOSE
# 83 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, ProfMyrasLab_Movement_PlayerWatchRivalExit
# 84 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, ProfMyrasLab_Movement_RivalExit
# 85 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 86 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_DOOR
# 87 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitse
# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeobject ProfMyrasLab_Rival_Intro_2
# 89 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3
# 91 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 92 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 93 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7
# 98 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername NULL
# 100 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 101 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8, MSGBOX_AUTOCLOSE
# 102 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 103 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9, MSGBOX_YESNO
# 104 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1:
# 107 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 108 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10, MSGBOX_AUTOCLOSE
# 118 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	updatequest QUEST_1_MEDS_FOR_JIRACHI, VAR_MEDICINE_FOR_JIRACHI_STATE
	end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2:
# 105 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1


RivalName::
# 125 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	checkplayergender
# 126 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalName_1
# 129 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername RivalName_Text_1
	return

RivalName_1:
# 127 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername RivalName_Text_0
	return


ProfMyrasLab_EventScript_ProfMyra_Dialogue::
# 134 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_lt ProfMyrasLab_EventScript_ProfMyra_Dialogue_1
# 138 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_eq ProfMyrasLab_EventScript_ProfMyra_Dialogue_2
# 141 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GEN6_EXP_SHARE, ProfMyrasLab_EventScript_ProfMyra_Dialogue_3
# 146 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 147 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_3, MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_1:
# 135 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 136 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0, MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_2:
# 139 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 140 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1, MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_3:
# 142 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	speakername ProfMyraName
# 143 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_2, MSGBOX_NPC
	return


ProfMyrasLab_EventScript_JirachiNPC::
# 156 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 157 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
	return


ProfMyrasLab_EventScript_Assistant_Dialogue::
# 161 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq ProfMyrasLab_EventScript_Assistant_Dialogue_1
# 165 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Assistant, ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0
# 166 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_Assistant_Dialogue_Text_1, MSGBOX_NPC
	return

ProfMyrasLab_EventScript_Assistant_Dialogue_1:
# 162 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Assistant, ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0
# 163 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_Assistant_Dialogue_Text_0, MSGBOX_NPC
	return


# 171 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_Movement_RivalExit:
# 172 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_right
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 173 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
	step_end

# 176 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_Movement_PlayerWatchRivalExit:
# 177 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay_16
# 178 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay_16
# 180 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
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

# 40 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 40 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1:
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 45 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2:
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_down
	step_end

# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3:
# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
ProfMyrasLab_EventScript_Assistant_Dialogue_Movement_0:
# 162 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_player
	step_end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 22 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Jirachi seems to be doing a bit better\n"
	.string "now, thanks to you, {PLAYER}.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "However, I think it's best if we get it\n"
	.string "some more potent medicine.\p"
	.string "I know you've done a lot already, but\n"
	.string "would you be willing to go to Solstice\l"
	.string "Town to pick it up?\p"
	.string "It's just the next town over.\p"
	.string "You can take the Pokémon I lent you, of\n"
	.string "course.\p"
	.string "The PokéMart attendant will have it\n"
	.string "ready for you at my request.\p"
	.string "Thank you, {PLAYER}. We'll see you\n"
	.string "when you get back!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 48 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Professor Myra! I want a Pokémon too!\p"
	.string "{PLAYER} already got one! It's not\n"
	.string "fair that only {PLAYER} gets one!\p"
	.string "I'll treat it well! We'll get strong\n"
	.string "together! Please believe me!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
# 52 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hmmm… These Pokémon were part of a\n"
	.string "special research assignment.\p"
	.string "They weren't meant for trainers - not\n"
	.string "yet.\p"
	.string "But I see it in your eyes… you're\n"
	.string "serious.\p"
	.string "You really want to prove you're ready,\n"
	.string "don't you?$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2:
# 57 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I've ALWAYS been ready!\p"
	.string "If {PLAYER} is out there, then I\n"
	.string "should be too!\p"
	.string "Please, Professor! I want to be a\n"
	.string "Pokémon Trainer!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3:
# 61 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "… Very well.\p"
	.string "But know this: once you take this step,\n"
	.string "there's no going back.\p"
	.string "This journey will challenge more than\n"
	.string "just your strength.\p"
	.string "Choose carefully.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4:
# 66 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you, Professor Myra!!\p"
	.string "I promise I won't let you down!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5:
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{RIVAL} received a Pokémon!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6:
# 77 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I told you I'd get a Pokémon too!\p"
	.string "Now we're even. Don't think you'll stay\n"
	.string "one step ahead for long!\p"
	.string "…but, uh, I'm still glad we're doing this\n"
	.string "together.\p"
	.string "Even if I AM gonna beat you!\p"
	.string "Catch you later!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7:
# 93 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "You came at just the right time.\p"
	.string "I ended up giving your friend a Pokémon.\p"
	.string "For the sake of being fair, I think you\n"
	.string "should keep the one I lent you earlier.\p"
	.string "After all, it looks like you two have\n"
	.string "already started bonding.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8:
# 101 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "{STR_VAR_1}!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9:
# 103 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10:
# 108 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I see you've also retrieved the\n"
	.string "medicine from Solstice Town.\p"
	.string "Thank you for that, {PLAYER}.\p"
	.string "However, Jirachi has already left.\p"
	.string "I'm worried about it, since it was badly\n"
	.string "injured.\p"
	.string "You might not know this, but Jirachi is a\n"
	.string "very special Pokémon.\p"
	.string "Whoever those Team Eclipse strangers\n"
	.string "were, I don't think they had good\l"
	.string "intentions towards Jirachi.\p"
	.string "If it went anywhere… it must have\n"
	.string "returned to the place where you found\l"
	.string "it.\p"
	.string "You should go back to {COLOR RED}Starfall Clearing\n"
	.string "{COLOR DARK_GRAY}to look for it.\p"
	.string "If it chose to show itself to you, it\n"
	.string "might do so again.\p"
	.string "Please look for Jirachi, {PLAYER}, and\n"
	.string "make sure it is safe.$"

RivalName_Text_0:
# 127 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Selene$"

RivalName_Text_1:
# 129 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Cassian$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0:
# 136 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you for agreeing to get the\n"
	.string "medicine from Solstice Town for Jirachi.\p"
	.string "It's imperative we help it recover.$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1:
# 140 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Please look for Jirachi, {PLAYER}, and\n"
	.string "make sure it is safe.$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_2:
# 143 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hello, {PLAYER}.\p"
	.string "{COLOR RED}Have you stopped home to say goodbye\n"
	.string "to your mother yet?$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_3:
# 147 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I hope your journey's off to a good\n"
	.string "start, {PLAYER}.\p"
	.string "Don't forget - you're not alone out\n"
	.string "there.\p"
	.string "Oh, and remember to register Pokémon in\n"
	.string "your Pokédex.\p"
	.string "The more you learn, the stronger you'll\n"
	.string "become.\p"
	.string "Safe travels, {PLAYER}.$"

ProfMyrasLab_EventScript_Assistant_Dialogue_Text_0:
# 163 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Prof. Myra went out. I'm not sure where\n"
	.string "she went.$"

ProfMyrasLab_EventScript_Assistant_Dialogue_Text_1:
# 166 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Prof. Myra is an astrologer. She's very\n"
	.string "interested in the stars.\p"
	.string "That's why she moved to Lumen Village -\n"
	.string "there's a lot less light pollution\l"
	.string "around here.$"
