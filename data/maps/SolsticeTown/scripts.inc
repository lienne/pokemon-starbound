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
# 33 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1:
# 34 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 35 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 36 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 37 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotA
# 39 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 40 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 41 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 42 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotA
# 44 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotB::
# 49 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1:
# 50 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 51 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 52 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 53 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotB
# 55 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 56 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 57 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 58 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotB
# 60 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotC::
# 65 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1:
# 66 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 67 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 68 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 69 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 71 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 72 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 73 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue::
# 78 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_1
# 82 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 83 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PostDelivery, type = MSGBOX_NPC
	return

SolsticeTown_EventScript_Boy2_Dialogue_1:
# 79 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 80 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, type = MSGBOX_NPC
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtA::
# 88 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtA_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtA_1:
# 89 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 90 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 91 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 92 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 93 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 94 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 95 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 97 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 98 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 99 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtA
# 100 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 102 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 104 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtB::
# 109 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtB_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtB_1:
# 110 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 111 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 112 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 113 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 114 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 115 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 116 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 117 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 118 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 119 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtB
# 121 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 123 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 125 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtC::
# 130 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtC_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtC_1:
# 131 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 132 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 133 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 134 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 135 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 136 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 137 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 139 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 140 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtC
# 142 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 144 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 146 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtD::
# 151 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtD_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtD_1:
# 152 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 153 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 154 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 155 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 156 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 157 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 158 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 160 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 161 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtD
# 163 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 165 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 167 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Rival_First_Battle::
# 172 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 173 "data/maps/SolsticeTown/scripts.pory"
	checkplayergender
# 174 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SolsticeTown_EventScript_Rival_First_Battle_2
# 178 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalCassian
SolsticeTown_EventScript_Rival_First_Battle_1:
# 180 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return

SolsticeTown_EventScript_Rival_First_Battle_2:
# 175 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalSelene
	goto SolsticeTown_EventScript_Rival_First_Battle_1


SolsticeTown_EventScript_RivalSelene::
# 184 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 185 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 186 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 187 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalSelene_2
# 189 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalSelene_3
# 191 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalSelene_4
	return

SolsticeTown_EventScript_RivalSelene_2:
# 188 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSprigatito
	return

SolsticeTown_EventScript_RivalSelene_3:
# 190 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSquirtle
	return

SolsticeTown_EventScript_RivalSelene_4:
# 192 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleFennekin
	return


SolsticeTown_EventScript_RivalCassian::
# 197 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 198 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 199 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 200 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalCassian_2
# 202 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalCassian_3
# 204 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalCassian_4
	return

SolsticeTown_EventScript_RivalCassian_2:
# 201 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSprigatito
	return

SolsticeTown_EventScript_RivalCassian_3:
# 203 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSquirtle
	return

SolsticeTown_EventScript_RivalCassian_4:
# 205 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleFennekin
	return


SolsticeTown_EventScript_StartSeleneBattleSprigatito::
# 210 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 211 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleFennekin::
# 215 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 216 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleSquirtle::
# 220 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 221 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSprigatito::
# 225 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 226 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleFennekin::
# 230 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 231 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSquirtle::
# 235 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 236 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_RivalExit::
# 240 "data/maps/SolsticeTown/scripts.pory"
	setvar VAR_INTRO_SCENE, 7
# 241 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_After_Battle_Dialogue, MSGBOX_AUTOCLOSE
# 242 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalExit
# 243 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/SolsticeTown/scripts.pory"
	fadedefaultbgm
# 245 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 246 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
# 247 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


# 281 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_ExclamationMark:
# 282 "data/maps/SolsticeTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 285 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotA:
# 286 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
# 286 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 289 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotA:
# 290 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 290 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 291 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 294 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotB:
# 295 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 298 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotB:
# 299 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 300 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 303 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtA:
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 308 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtB:
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	face_up
	step_end

# 313 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtC:
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 315 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 318 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtD:
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 324 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalExit:
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 325 "data/maps/SolsticeTown/scripts.pory"
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

# 41 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0:
# 41 "data/maps/SolsticeTown/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0:
# 97 "data/maps/SolsticeTown/scripts.pory"
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
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

SolsticeTown_Boy2_Dialogue_PreDelivery::
# 250 "data/maps/SolsticeTown/scripts.pory"
	.string "WHOA there, superstar! The road ahead's\n"
	.string "closed.\l"
	.string "Not by law or anything, I'm just\l"
	.string "standing here real confidently.\l"
	.string "You look like you've got something\l"
	.string "important to do back home anyway.$"

SolsticeTown_Boy2_Dialogue_PostDelivery::
# 256 "data/maps/SolsticeTown/scripts.pory"
	.string "Ahh, the hero returns!\n"
	.string "I'd move out of the way dramatically,\l"
	.string "but my back's acting up.\l"
	.string "Just pretend I did a cool spin or\l"
	.string "something.$"

SolsticeTown_Rival_Battle_Intro_Dialogue::
# 262 "data/maps/SolsticeTown/scripts.pory"
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
# 271 "data/maps/SolsticeTown/scripts.pory"
	.string "What...? Maybe I picked the wrong\n"
	.string "Pokémon...$"

SolsticeTown_Rival_After_Battle_Dialogue::
# 275 "data/maps/SolsticeTown/scripts.pory"
	.string "Humpft... You only won because you had a\n"
	.string "head start.\l"
	.string "You won't be so lucky next time, though!\l"
	.string "Me and my Pokémon will train and get\l"
	.string "much stronger, you'll see!$"
