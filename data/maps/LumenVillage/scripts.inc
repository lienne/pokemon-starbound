LumenVillage_MapScripts::
# 11 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/LumenVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/LumenVillage/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

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
# 49 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 50 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_GoBack_LeftTrigger_Movement_0
# 51 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 52 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_GoBack_UpTrigger::
# 57 "data/maps/LumenVillage/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, LumenVillage_EventScript_GoBack_UpTrigger_1
	return

LumenVillage_EventScript_GoBack_UpTrigger_1:
# 58 "data/maps/LumenVillage/scripts.pory"
	lockall
# 59 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_GoBack_LeftTrigger_Text_0
# 61 "data/maps/LumenVillage/scripts.pory"
	playse SE_SELECT
# 62 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_GoBack_UpTrigger_Movement_0
# 63 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 64 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags::
# 69 "data/maps/LumenVillage/scripts.pory"
	lockall
# 70 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 71 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_SetIntroFlags_1
# 74 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Female
	return

LumenVillage_EventScript_SetIntroFlags_1:
# 72 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_SetIntroFlags_Male
	return


LumenVillage_EventScript_SetIntroFlags_Male::
# 79 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 80 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_MOM
# 81 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_RIVAL_MOM
# 82 "data/maps/LumenVillage/scripts.pory"
	addobject Cassians_House_Mom
# 83 "data/maps/LumenVillage/scripts.pory"
	addobject Selenes_House_Rival_Mom
# 84 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SetIntroFlags_Female::
# 88 "data/maps/LumenVillage/scripts.pory"
	setrespawn HEAL_LOCATION_LUMEN_VILLAGE
# 89 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_SELENES_HOUSE_MOM
# 90 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_CASSIANS_HOUSE_RIVAL_MOM
# 91 "data/maps/LumenVillage/scripts.pory"
	addobject Selenes_House_Mom
# 92 "data/maps/LumenVillage/scripts.pory"
	addobject Cassians_House_Rival_Mom
# 93 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfLabSign::
# 97 "data/maps/LumenVillage/scripts.pory"
	lockall
# 98 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 99 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_SelenesHouseSign::
# 103 "data/maps/LumenVillage/scripts.pory"
	lockall
# 104 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 105 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LumenVillage_EventScript_SelenesHouseSign_2
# 108 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_SelenesHouseSign_Text_0
LumenVillage_EventScript_SelenesHouseSign_1:
# 110 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_SelenesHouseSign_2:
# 106 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_SelenesHouseSign_1


LumenVillage_EventScript_CassiansHouseSign::
# 114 "data/maps/LumenVillage/scripts.pory"
	lockall
# 115 "data/maps/LumenVillage/scripts.pory"
	checkplayergender
# 116 "data/maps/LumenVillage/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LumenVillage_EventScript_CassiansHouseSign_2
# 119 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
LumenVillage_EventScript_CassiansHouseSign_1:
# 121 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return

LumenVillage_EventScript_CassiansHouseSign_2:
# 117 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_Text_PlayersHouse_Sign
	goto LumenVillage_EventScript_CassiansHouseSign_1


LumenVillage_EventScript_VillageSign::
# 125 "data/maps/LumenVillage/scripts.pory"
	lockall
# 126 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 128 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 132 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 133 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_OldLady_Dialogue::
# 138 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_OldLady, LumenVillage_FatMan_Dialogue_Movement_0
# 139 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_OldLady_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_LittleGirl_Dialogue::
# 143 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_LittleGirl, LumenVillage_FatMan_Dialogue_Movement_0
# 144 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_LittleGirl_Dialogue_Text_0, type = MSGBOX_NPC
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA::
# 153 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_1:
# 154 "data/maps/LumenVillage/scripts.pory"
	lock
# 155 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 156 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 157 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 158 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 159 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 160 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 161 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 162 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 163 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA
# 164 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 165 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1
# 166 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 167 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 168 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB::
# 173 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotB_1:
# 174 "data/maps/LumenVillage/scripts.pory"
	lock
# 175 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 176 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 177 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
# 178 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 179 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 180 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 181 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 182 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 183 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB
# 184 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 185 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 186 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC::
# 191 "data/maps/LumenVillage/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1
	return

LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_1:
# 192 "data/maps/LumenVillage/scripts.pory"
	lock
# 193 "data/maps/LumenVillage/scripts.pory"
	setvar VAR_INTRO_SCENE, 6
# 194 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 195 "data/maps/LumenVillage/scripts.pory"
	removeitem ITEM_PARCEL
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
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0
# 217 "data/maps/LumenVillage/scripts.pory"
	playse SE_PIN
# 218 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 219 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 220 "data/maps/LumenVillage/scripts.pory"
	addobject LumenVillage_ProfMyra
# 221 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD
# 222 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 223 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0
# 224 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 225 "data/maps/LumenVillage/scripts.pory"
	call LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue
# 226 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue::
# 231 "data/maps/LumenVillage/scripts.pory"
	lockall
# 232 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 233 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0
# 245 "data/maps/LumenVillage/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/LumenVillage/scripts.pory"
	speakername NULL
# 247 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_1
# 248 "data/maps/LumenVillage/scripts.pory"
	waitfanfare
# 249 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 250 "data/maps/LumenVillage/scripts.pory"
	special SetUnlockedPokedexFlags
# 251 "data/maps/LumenVillage/scripts.pory"
	speakername ProfMyraName
# 252 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2
# 253 "data/maps/LumenVillage/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 254 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3, MSGBOX_AUTOCLOSE
# 261 "data/maps/LumenVillage/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0
# 262 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_ProfMyra, LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1
# 263 "data/maps/LumenVillage/scripts.pory"
	waitmovement 0
# 264 "data/maps/LumenVillage/scripts.pory"
	setflag FLAG_HIDE_MYRA_IN_LUMEN_VILLAGE
# 265 "data/maps/LumenVillage/scripts.pory"
	removeobject LumenVillage_ProfMyra
# 266 "data/maps/LumenVillage/scripts.pory"
	clearflag FLAG_HIDE_MYRA_IN_LAB
# 267 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


# 270 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotA:
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 271 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 272 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 275 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotB:
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 276 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
	step_end

# 279 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotC:
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 280 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 281 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 284 "data/maps/LumenVillage/scripts.pory"
LumenVillage_Movement_ProfMyraApproachesPlayerInSpotD:
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 285 "data/maps/LumenVillage/scripts.pory"
	walk_fast_up
# 286 "data/maps/LumenVillage/scripts.pory"
	walk_fast_right
# 287 "data/maps/LumenVillage/scripts.pory"
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

# 50 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_GoBack_LeftTrigger_Movement_0:
# 50 "data/maps/LumenVillage/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_GoBack_UpTrigger_Movement_0:
# 62 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

# 132 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 132 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

# 158 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_0:
# 158 "data/maps/LumenVillage/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 158 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 165 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotA_Movement_1:
# 165 "data/maps/LumenVillage/scripts.pory"
	face_right
	step_end

# 203 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyraApproachesPlayerInSpotC_Movement_0:
# 203 "data/maps/LumenVillage/scripts.pory"
	face_left
	step_end

# 261 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_0:
# 261 "data/maps/LumenVillage/scripts.pory"
	delay_16
# 261 "data/maps/LumenVillage/scripts.pory"
	face_down
	step_end

# 262 "data/maps/LumenVillage/scripts.pory"
LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Movement_1:
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
# 262 "data/maps/LumenVillage/scripts.pory"
	walk_down
	step_end

LumenVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 28 "data/maps/LumenVillage/scripts.pory"
	.string "Hey, {PLAYER}! What are you doing out\n"
	.string "here?\l"
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

LumenVillage_EventScript_GoBack_LeftTrigger_Text_0:
# 47 "data/maps/LumenVillage/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

LumenVillage_EventScript_ProfLabSign_Text_0:
# 98 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_SelenesHouseSign_Text_0:
# 108 "data/maps/LumenVillage/scripts.pory"
	.string "Selene's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 119 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 126 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "“A quiet place beneath the stars”$"

LumenVillage_FatMan_Dialogue_Text_0:
# 133 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing! You can now use\n"
	.string "satellites to chart the stars in\l"
	.string "Astrea!$"

LumenVillage_OldLady_Dialogue_Text_0:
# 139 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village must be the safest place\n"
	.string "in Astrea, but I swear I hear rustling in\l"
	.string "the night lately...$"

LumenVillage_LittleGirl_Dialogue_Text_0:
# 144 "data/maps/LumenVillage/scripts.pory"
	.string "The water looks so nice!\n"
	.string "But I'm not allowed to swim yet...$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_0:
# 233 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER}! Wait!\p"
	.string "Did you find Jirachi? Is it safe?\p"
	.string "...\p"
	.string "You... you spoke to it...? And it... it told\n"
	.string "you all of that??\p"
	.string "...\p"
	.string "...I see. This is incredible, {PLAYER}.\p"
	.string "You must be truly special to be able to\n"
	.string "speak to Jirachi directly.\l"
	.string "It sounds as if this situation is bigger\l"
	.string "than all of us.\l"
	.string "Jirachi needs your help, and you're the\l"
	.string "only one it trusts right now.\l"
	.string "If you're really going to do this -\l"
	.string "travel the region, help it find its\l"
	.string "friend...\l"
	.string "then you'll need this.\l"
	.string "This is a Pokédex, a device that records\l"
	.string "data on all Pokémon you encounter.$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_1:
# 247 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_2:
# 252 "data/maps/LumenVillage/scripts.pory"
	.string "And take these Pokéballs - you'll need\n"
	.string "them.$"

LumenVillage_EventScript_ProfMyra_Dialogue_After_Jirachi_Dialogue_Text_3:
# 254 "data/maps/LumenVillage/scripts.pory"
	.string "I won't stop you, {PLAYER}... but\n"
	.string "please be careful.\l"
	.string "You're walking into something vast and\l"
	.string "dangerous.\l"
	.string "Use the items I gave you to get\l"
	.string "stronger. You'll need all the help you\l"
	.string "can get to help Jirachi.\l"
	.string "...Before you go, why don't you stop\l"
	.string "home and say goodbye to your mother?\l"
	.string "I know she'll want to see you off.\l"
	.string "And of course, if you ever need\l"
	.string "anything, feel free to come back here.\l"
	.string "I wish you all the luck on your journey,\l"
	.string "{PLAYER}!$"

LumenVillage_Text_PlayersHouse_Sign::
# 148 "data/maps/LumenVillage/scripts.pory"
	.string "{PLAYER}'s House$"
