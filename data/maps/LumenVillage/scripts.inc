LumenVillage_MapScripts::
# 8 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/LumenVillage/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 1
	goto_if_lt LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/LumenVillage/scripts.pory"
	playbgm MUS_NONE, 1
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage/scripts.pory"
	map_script_2 1, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/LumenVillage/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 1, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 2
# 18 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_Rival_Intro
# 19 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 20 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 21 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 22 "data/maps/LumenVillage/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 23 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 24 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 26 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 27 "data/maps/LumenVillage/scripts.pory"
	call RivalName
# 28 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 36 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 37 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro
# 38 "data/maps/LumenVillage/scripts.pory"
	fadedefaultbgm
	end


LumenVillage_EventScript_GoBack_LeftTrigger::
# 45 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, LumenVillage_EventScript_GoBack_LeftTrigger_1
	return

LumenVillage_EventScript_GoBack_LeftTrigger_1:
# 46 "data/maps/LumenVillage/scripts.pory"
	lockall
# 47 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_GoBack_LeftTrigger_Text_0
# 48 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 49 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_GoBack_LeftTrigger_Movement_0
# 50 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 51 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_GoBack_UpTrigger::
# 56 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, LumenVillage_EventScript_GoBack_UpTrigger_1
	return

LumenVillage_EventScript_GoBack_UpTrigger_1:
# 57 "data/maps/LumenVillage/scripts.pory"
	lockall
# 58 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_GoBack_LeftTrigger_Text_0
# 59 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 60 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_GoBack_UpTrigger_Movement_0
# 61 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 62 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags::
# 67 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 68 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_SetIntroFlags_1
# 71 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Female
	return

LumenVillage_EventScript_SetIntroFlags_1:
# 69 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Male
	return


LumenVillage_EventScript_SetIntroFlags_Male::
# 76 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 77 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_MOM
# 78 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_RIVAL_MOM
# 79 "data/maps/LumenVillage/scripts.pory"
	addobject Player_Mom_1F
# 80 "data/maps/LumenVillage/scripts.pory"
	addobject Rival_Mom_1F
# 81 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags_Female::
# 85 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 86 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_MOM
# 87 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_RIVAL_MOM
# 88 "data/maps/LumenVillage/scripts.pory"
	addobject Player_Mom_1F
# 89 "data/maps/LumenVillage/scripts.pory"
	addobject Rival_Mom_1F
# 90 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 94 "data/maps/LumenVillage/scripts.pory"
	lockall
# 95 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 96 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SelenesHouseSign::
# 100 "data/maps/LumenVillage/scripts.pory"
	lockall
# 101 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 102 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LumenVillage_EventScript_SelenesHouseSign_2
# 105 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_SelenesHouseSign_Text_0
LumenVillage_EventScript_SelenesHouseSign_1:
# 107 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_SelenesHouseSign_2:
# 103 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_SelenesHouseSign_1


LumenVillage_EventScript_CassiansHouseSign::
# 111 "data/maps/LumenVillage/scripts.pory"
	lockall
# 112 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 113 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_CassiansHouseSign_2
# 116 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
LumenVillage_EventScript_CassiansHouseSign_1:
# 118 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_CassiansHouseSign_2:
# 114 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_CassiansHouseSign_1


LumenVillage_EventScript_VillageSign::
# 122 "data/maps/LumenVillage/scripts.pory"
	lockall
# 123 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 125 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 129 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 130 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_OldLady_Dialogue::
# 135 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_OldLady, LumenVillage_FatMan_Dialogue_Movement_0
# 136 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_OldLady_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_LittleGirl_Dialogue::
# 140 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_LittleGirl, LumenVillage_FatMan_Dialogue_Movement_0
# 141 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_LittleGirl_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA::
# 150 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1:
# 151 "data/maps/LumenVillage/scripts.pory"
	lock
# 152 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 153 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 154 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 155 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 156 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 157 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 158 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 159 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 160 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 161 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA
# 162 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 163 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1
# 164 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 165 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 166 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB::
# 171 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1:
# 172 "data/maps/LumenVillage/scripts.pory"
	lock
# 173 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 174 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 175 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 176 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 177 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 178 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 179 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 180 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 181 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 182 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB
# 183 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 184 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 185 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC::
# 190 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1:
# 191 "data/maps/LumenVillage/scripts.pory"
	lock
# 192 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 193 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 194 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 195 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 196 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 197 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 198 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 199 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 200 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 201 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotC
# 202 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 203 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0
# 204 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 205 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 206 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD::
# 211 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD_1:
# 212 "data/maps/LumenVillage/scripts.pory"
	lock
# 213 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 214 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 215 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 216 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 217 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 218 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 219 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 220 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 221 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 222 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD
# 223 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 224 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0
# 225 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 226 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 227 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue::
# 232 "data/maps/LumenVillage/scripts.pory"
	lockall
# 233 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 234 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0
# 246 "data/maps/LumenVillage/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 247 "data/maps/LumenVillage/scripts.pory"
	speakername NULL
# 248 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_1
# 249 "data/maps/LumenVillage/scripts.pory"
	waitfanfare
# 250 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 251 "data/maps/LumenVillage/scripts.pory"
	special SetUnlockedPokedexFlags
# 252 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 253 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2
# 254 "data/maps/LumenVillage/scripts.pory"
	speakername NULL
# 255 "data/maps/LumenVillage/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 256 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 257 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3, MSGBOX_AUTOCLOSE
# 264 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0
# 265 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1
# 266 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 267 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 268 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_ProfMyra
# 269 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LAB
# 270 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


# 273 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA:
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 274 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 275 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 278 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB:
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 279 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 282 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotC:
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 284 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 287 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD:
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 288 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 289 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 290 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 19 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 19 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 24 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 24 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 24 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 24 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 25 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 25 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 25 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 35 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
# 35 "data/maps/LumenVillage/scripts.pory"
	walk_fast_down
	step_end

# 49 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_GoBack_LeftTrigger_Movement_0:
# 49 "data/maps/LumenVillage/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_GoBack_UpTrigger_Movement_0:
# 60 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 129 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

# 156 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0:
# 156 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
# 156 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 156 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 163 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1:
# 163 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 203 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0:
# 203 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 264 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0:
# 264 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 264 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 265 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1:
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 265 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 28 "data/maps/LumenVillage/scripts.pory"
	.string "Hey, {PLAYER}! What are you doing out\n"
	.string "here?\p"
	.string "WHOA - hold up! You've got a Pokémon?!\p"
	.string "Wait a second… you SERIOUSLY already\n"
	.string "got a Pokémon??\p"
	.string "I can't believe this! After all these\n"
	.string "years training together, and you didn't\l"
	.string "even tell me??\p"
	.string "Tch… classic {PLAYER}. Always one\n"
	.string "step ahead, huh?\p"
	.string "Well, guess what - I'm not letting you\n"
	.string "leave me in the dust!\p"
	.string "I'll get my own Pokémon too, you'll see!$"

LumenVillage_EventScript_GoBack_LeftTrigger_Text_0:
# 47 "data/maps/LumenVillage/scripts.pory"
	.string "You can't ignore the cries of a hurt\n"
	.string "Pokémon!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 95 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 105 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 116 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 123 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 130 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing!\p"
	.string "You can now use satellites to chart the\n"
	.string "stars in Astrea!$"

LumenVillage_OldLady_Dialogue_Text_0:
# 136 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village must be the safest place\n"
	.string "in Astrea, but I swear I hear rustling in\l"
	.string "the night lately…$"

LumenVillage_LittleGirl_Dialogue_Text_0:
# 141 "data/maps/LumenVillage/scripts.pory"
	.string "The water looks so nice!\n"
	.string "But I'm not allowed to swim yet…$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0:
# 234 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER}! Wait!\p"
	.string "Did you find Jirachi? Is it safe?\p"
	.string "…\p"
	.string "You… you spoke to it…? And it… it told\n"
	.string "you all of that??\p"
	.string "…\p"
	.string "…I see. This is incredible, {PLAYER}.\p"
	.string "You must be truly special to be able to\n"
	.string "speak to Jirachi directly.\p"
	.string "It sounds as if this situation is bigger\n"
	.string "than all of us.\p"
	.string "Jirachi needs your help, and you're the\n"
	.string "only one it trusts right now.\p"
	.string "If you're really going to do this -\n"
	.string "travel the region, help it find its\l"
	.string "friend…\l"
	.string "then you'll need this.\p"
	.string "This is a Pokédex, a device that records\n"
	.string "data on all Pokémon you encounter.$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_1:
# 248 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2:
# 253 "data/maps/LumenVillage/scripts.pory"
	.string "And take these Pokéballs - you'll need\n"
	.string "them.$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3:
# 257 "data/maps/LumenVillage/scripts.pory"
	.string "I won't stop you, {PLAYER}… but\n"
	.string "please be careful.\p"
	.string "You're walking into something vast and\n"
	.string "dangerous.\p"
	.string "Use the items I gave you to get\n"
	.string "stronger. You'll need all the help you\l"
	.string "can get to help Jirachi.\p"
	.string "…Before you go, {COLOR RED}why don't you stop home\n"
	.string "and say goodbye to your mother?\p"
	.string "{COLOR DARK_GRAY}I know she'll want to see you off.\p"
	.string "And of course, if you ever need\n"
	.string "anything, feel free to come back here.\p"
	.string "I wish you all the luck on your journey,\n"
	.string "{PLAYER}!$"

LumenVillage_Text_PlayersHouse_Sign::
# 145 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER}'s House$"
