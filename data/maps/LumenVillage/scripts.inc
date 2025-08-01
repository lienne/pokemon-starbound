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
	map_script_2 VAR_INTRO_SCENE, 2, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 17 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 3
# 18 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 19 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
# 44 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_Rival_Intro_Female
# 45 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Female, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 46 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 47 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 48 "data/maps/LumenVillage/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 49 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 50 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Female, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 52 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 53 "data/maps/LumenVillage/scripts.pory"
	call RivalName
# 54 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Female, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 63 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 64 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_HIDE_RIVAL_INTRO_NPC
# 65 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro_Female
# 66 "data/maps/LumenVillage/scripts.pory"
	fadedefaultbgm
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
	end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 20 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_Rival_Intro_Male
# 21 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Male, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 22 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 23 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 24 "data/maps/LumenVillage/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 25 "data/maps/LumenVillage/scripts.pory"
	delay 50
# 26 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Male, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 28 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 29 "data/maps/LumenVillage/scripts.pory"
	call RivalName
# 30 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_Rival_Intro_Male, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 39 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 40 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_HIDE_RIVAL_INTRO_NPC
# 41 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_Rival_Intro_Male
# 42 "data/maps/LumenVillage/scripts.pory"
	fadedefaultbgm
	goto LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


LumenVillage_EventScript_GoBack_UpTrigger::
# 74 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, LumenVillage_EventScript_GoBack_UpTrigger_1
	return

LumenVillage_EventScript_GoBack_UpTrigger_1:
# 75 "data/maps/LumenVillage/scripts.pory"
	lockall
# 76 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_GoBack_UpTrigger_Text_0
# 77 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 78 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_GoBack_UpTrigger_Movement_0
# 79 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 80 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags::
# 85 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 86 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_SetIntroFlags_1
# 89 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Female
	return

LumenVillage_EventScript_SetIntroFlags_1:
# 87 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Male
	return


LumenVillage_EventScript_SetIntroFlags_Male::
# 94 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 95 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_MOM
# 96 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_RIVAL_MOM
# 97 "data/maps/LumenVillage/scripts.pory"
	addobject Player_Mom_1F
# 98 "data/maps/LumenVillage/scripts.pory"
	addobject Rival_Mom_1F
# 99 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags_Female::
# 103 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 104 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_MOM
# 105 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_RIVAL_MOM
# 106 "data/maps/LumenVillage/scripts.pory"
	addobject Player_Mom_1F
# 107 "data/maps/LumenVillage/scripts.pory"
	addobject Rival_Mom_1F
# 108 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 112 "data/maps/LumenVillage/scripts.pory"
	lockall
# 113 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 114 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SelenesHouseSign::
# 118 "data/maps/LumenVillage/scripts.pory"
	lockall
# 119 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 120 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LumenVillage_EventScript_SelenesHouseSign_2
# 123 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_SelenesHouseSign_Text_0
LumenVillage_EventScript_SelenesHouseSign_1:
# 125 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_SelenesHouseSign_2:
# 121 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_SelenesHouseSign_1


LumenVillage_EventScript_CassiansHouseSign::
# 129 "data/maps/LumenVillage/scripts.pory"
	lockall
# 130 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 131 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_CassiansHouseSign_2
# 134 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
LumenVillage_EventScript_CassiansHouseSign_1:
# 136 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_CassiansHouseSign_2:
# 132 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_CassiansHouseSign_1


LumenVillage_EventScript_VillageSign::
# 140 "data/maps/LumenVillage/scripts.pory"
	lockall
# 141 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 143 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 147 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 148 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_OldLady_Dialogue::
# 153 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_OldLady, LumenVillage_FatMan_Dialogue_Movement_0
# 154 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_OldLady_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_LittleGirl_Dialogue::
# 158 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_LittleGirl, LumenVillage_FatMan_Dialogue_Movement_0
# 159 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_LittleGirl_Dialogue_Text_0, MSGBOX_NPC
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA::
# 168 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1:
# 169 "data/maps/LumenVillage/scripts.pory"
	lock
# 170 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 171 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 172 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 173 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 174 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 175 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 176 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 177 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 178 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 179 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA
# 180 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 181 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1
# 182 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 183 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 184 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB::
# 189 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1:
# 190 "data/maps/LumenVillage/scripts.pory"
	lock
# 191 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 192 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 193 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 194 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 195 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 196 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 197 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 198 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 199 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 200 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB
# 201 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 202 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 203 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC::
# 208 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1:
# 209 "data/maps/LumenVillage/scripts.pory"
	lock
# 210 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 211 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 212 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 213 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 214 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 215 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 216 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 217 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 218 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 219 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotC
# 220 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 221 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0
# 222 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 223 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 224 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD::
# 229 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotD_1:
# 230 "data/maps/LumenVillage/scripts.pory"
	lock
# 231 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 232 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 233 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 234 "data/maps/LumenVillage/scripts.pory"
	hidefollower
# 235 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 236 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 237 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 238 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 239 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 240 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD
# 241 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 242 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0
# 243 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 244 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 245 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue::
# 250 "data/maps/LumenVillage/scripts.pory"
	lockall
# 251 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 252 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0
# 264 "data/maps/LumenVillage/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/LumenVillage/scripts.pory"
	speakername NULL
# 266 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_1
# 267 "data/maps/LumenVillage/scripts.pory"
	waitfanfare
# 268 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 269 "data/maps/LumenVillage/scripts.pory"
	special SetUnlockedPokedexFlags
# 270 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 271 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2
# 272 "data/maps/LumenVillage/scripts.pory"
	speakername NULL
# 273 "data/maps/LumenVillage/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 274 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 275 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3, MSGBOX_AUTOCLOSE
# 282 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0
# 283 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1
# 284 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 285 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 286 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_ProfMyra
# 287 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LAB
# 288 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


# 291 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA:
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 292 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 293 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 296 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB:
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 297 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 300 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotC:
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 301 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 302 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 305 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD:
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 306 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 307 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 308 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 21 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 21 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 26 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 27 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 27 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 37 "data/maps/LumenVillage/scripts.pory"
LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 37 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 37 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 37 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 37 "data/maps/LumenVillage/scripts.pory"
	walk_fast_left
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 38 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 78 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_GoBack_UpTrigger_Movement_0:
# 78 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 147 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

# 174 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0:
# 174 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
# 174 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 174 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 181 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1:
# 181 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 221 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0:
# 221 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 282 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0:
# 282 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 282 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 283 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1:
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 283 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 30 "data/maps/LumenVillage/scripts.pory"
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

LumenVillage_EventScript_GoBack_UpTrigger_Text_0:
# 76 "data/maps/LumenVillage/scripts.pory"
	.string "The shooting star fell in the clearing!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 113 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 123 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 134 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 141 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 148 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing!\p"
	.string "You can now use satellites to chart the\n"
	.string "stars in Astrea!$"

LumenVillage_OldLady_Dialogue_Text_0:
# 154 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village must be the safest place\n"
	.string "in Astrea, but I swear I hear rustling in\l"
	.string "the night lately…$"

LumenVillage_LittleGirl_Dialogue_Text_0:
# 159 "data/maps/LumenVillage/scripts.pory"
	.string "The water looks so nice!\n"
	.string "But I'm not allowed to swim yet…$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0:
# 252 "data/maps/LumenVillage/scripts.pory"
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
# 266 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2:
# 271 "data/maps/LumenVillage/scripts.pory"
	.string "And take these Pokéballs - you'll need\n"
	.string "them.$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3:
# 275 "data/maps/LumenVillage/scripts.pory"
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
# 163 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER}'s House$"
