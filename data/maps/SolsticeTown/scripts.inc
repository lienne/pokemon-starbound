SolsticeTown_MapScripts::
# 2 "data/maps/SolsticeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SolsticeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SolsticeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 4 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
	return


SolsticeTown_EventScript_TownSign::
# 9 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 10 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_TownSign_Text_0
# 12 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Girl1_Dialogue::
# 16 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 17 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl1_Dialogue_Text_0, type = MSGBOX_NPC
# 18 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
	return


SolsticeTown_EventScript_Boy1_Dialogue::
# 22 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 23 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Boy1_Dialogue_Text_0, type = MSGBOX_NPC
# 24 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
	return


SolsticeTown_EventScript_Girl2_Dialogue::
# 28 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 29 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl2_Dialogue_Text_0, type = MSGBOX_NPC
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotA::
# 34 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1:
# 35 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 36 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 37 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 38 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotA
# 40 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 41 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 42 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 43 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotA
# 45 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotB::
# 50 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1:
# 51 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 52 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 53 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 54 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotB
# 56 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 57 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 58 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 59 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotB
# 61 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotC::
# 66 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1:
# 67 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 68 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 69 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 70 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 72 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 73 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 74 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue::
# 79 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_1
# 83 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 84 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PostDelivery, type = MSGBOX_NPC
	return

SolsticeTown_EventScript_Boy2_Dialogue_1:
# 80 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 81 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, type = MSGBOX_NPC
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtA::
# 89 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtA_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtA_1:
# 90 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 91 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 92 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 93 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 94 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 95 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 96 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 98 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 99 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtA
# 101 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 103 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 105 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtB::
# 110 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtB_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtB_1:
# 111 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 112 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 113 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 114 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 115 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 116 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 117 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 119 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 120 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtB
# 122 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 124 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 126 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtC::
# 131 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtC_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtC_1:
# 132 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 133 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 134 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 135 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 136 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 137 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 138 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 140 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 141 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtC
# 143 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 145 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 147 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtD::
# 152 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtD_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtD_1:
# 153 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 154 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 155 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 156 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 157 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 158 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 161 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 162 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtD
# 164 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 165 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 166 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 168 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Rival_First_Battle::
# 173 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 174 "data/maps/SolsticeTown/scripts.pory"
	checkplayergender
# 175 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SolsticeTown_EventScript_Rival_First_Battle_2
# 179 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalCassian
SolsticeTown_EventScript_Rival_First_Battle_1:
# 181 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return

SolsticeTown_EventScript_Rival_First_Battle_2:
# 176 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalSelene
	goto SolsticeTown_EventScript_Rival_First_Battle_1


SolsticeTown_EventScript_RivalSelene::
# 185 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 186 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 187 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 188 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalSelene_2
# 190 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalSelene_3
# 192 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalSelene_4
	return

SolsticeTown_EventScript_RivalSelene_2:
# 189 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSprigatito
	return

SolsticeTown_EventScript_RivalSelene_3:
# 191 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSquirtle
	return

SolsticeTown_EventScript_RivalSelene_4:
# 193 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleFennekin
	return


SolsticeTown_EventScript_RivalCassian::
# 198 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 199 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 200 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 201 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalCassian_2
# 203 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalCassian_3
# 205 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalCassian_4
	return

SolsticeTown_EventScript_RivalCassian_2:
# 202 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSprigatito
	return

SolsticeTown_EventScript_RivalCassian_3:
# 204 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSquirtle
	return

SolsticeTown_EventScript_RivalCassian_4:
# 206 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleFennekin
	return


SolsticeTown_EventScript_StartSeleneBattleSprigatito::
# 211 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 212 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleFennekin::
# 216 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 217 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleSquirtle::
# 221 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 222 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSprigatito::
# 226 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 227 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleFennekin::
# 231 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 232 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSquirtle::
# 236 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 237 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_RivalExit::
# 241 "data/maps/SolsticeTown/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 242 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_After_Battle_Dialogue, MSGBOX_AUTOCLOSE
# 243 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalExit
# 244 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/SolsticeTown/scripts.pory"
	fadedefaultbgm
# 246 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 247 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
# 248 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


# 282 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_ExclamationMark:
# 283 "data/maps/SolsticeTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 286 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotA:
# 287 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
# 287 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 290 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotA:
# 291 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 291 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 292 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 295 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotB:
# 296 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 299 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotB:
# 300 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 301 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 304 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtA:
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 306 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 309 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtB:
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 311 "data/maps/SolsticeTown/scripts.pory"
	face_up
	step_end

# 314 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtC:
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 316 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 319 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtD:
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 321 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 325 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalExit:
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
	step_end

# 16 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_0:
# 16 "data/maps/SolsticeTown/scripts.pory"
	face_player
	step_end

# 18 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_1:
# 18 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 24 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy1_Dialogue_Movement_0:
# 24 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 42 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0:
# 42 "data/maps/SolsticeTown/scripts.pory"
	walk_down
	step_end

# 98 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0:
# 98 "data/maps/SolsticeTown/scripts.pory"
	face_down
	step_end

SolsticeTown_EventScript_TownSign_Text_0:
# 10 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town\n"
	.string "“The balance between light and shadow”$"

SolsticeTown_EventScript_Girl1_Dialogue_Text_0:
# 17 "data/maps/SolsticeTown/scripts.pory"
	.string "Did you know you can press Start to\n"
	.string "check your Pokémon summary?$"

SolsticeTown_EventScript_Boy1_Dialogue_Text_0:
# 23 "data/maps/SolsticeTown/scripts.pory"
	.string "I use the Pokémon Summary screen to\n"
	.string "check my Pokémon's nature.$"

SolsticeTown_EventScript_Girl2_Dialogue_Text_0:
# 29 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town doesn't have a gym.\n"
	.string "It's a bit too out of the way for us to\l"
	.string "have one.$"

SolsticeTown_Boy2_Dialogue_PreDelivery::
# 251 "data/maps/SolsticeTown/scripts.pory"
	.string "WHOA there, superstar! The road ahead's\n"
	.string "closed.\l"
	.string "Not by law or anything, I'm just\l"
	.string "standing here real confidently.\l"
	.string "You look like you've got something\l"
	.string "important to do back home anyway.$"

SolsticeTown_Boy2_Dialogue_PostDelivery::
# 257 "data/maps/SolsticeTown/scripts.pory"
	.string "Ahh, the hero returns!\n"
	.string "I'd move out of the way dramatically,\l"
	.string "but my back's acting up.\l"
	.string "Just pretend I did a cool spin or\l"
	.string "something.$"

SolsticeTown_Rival_Battle_Intro_Dialogue::
# 263 "data/maps/SolsticeTown/scripts.pory"
	.string "{PLAYER}, wait!\p"
	.string "So you're leaving on an adventure too,\n"
	.string "huh?\l"
	.string "Now that I have a Pokémon, I also want\l"
	.string "to go out and explore the world!\l"
	.string "We'll take the Pokémon League challenge\l"
	.string "together and see who comes out on top!\l"
	.string "Before we leave, how about a battle?\l"
	.string "I'll give you a taste of what it means to\l"
	.string "compete with me!$"

SolsticeTown_Rival_Battle_Defeat_Dialogue::
# 272 "data/maps/SolsticeTown/scripts.pory"
	.string "What...? Maybe I picked the wrong\n"
	.string "Pokémon...$"

SolsticeTown_Rival_After_Battle_Dialogue::
# 276 "data/maps/SolsticeTown/scripts.pory"
	.string "Humpft... You only won because you had a\n"
	.string "head start.\l"
	.string "You won't be so lucky next time, though!\l"
	.string "Me and my Pokémon will train and get\l"
	.string "much stronger, you'll see!$"
