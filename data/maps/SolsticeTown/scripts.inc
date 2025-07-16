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
	msgbox SolsticeTown_EventScript_Girl1_Dialogue_Text_0, MSGBOX_NPC
# 18 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
	return


SolsticeTown_EventScript_Boy1_Dialogue::
# 22 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 23 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Boy1_Dialogue_Text_0, MSGBOX_NPC
# 24 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
	return


SolsticeTown_EventScript_Girl2_Dialogue::
# 28 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 29 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl2_Dialogue_Text_0, MSGBOX_NPC
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotA::
# 34 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1
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
	compare VAR_INTRO_SCENE, 7
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1
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
	compare VAR_INTRO_SCENE, 7
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1
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
	compare VAR_INTRO_SCENE, 7
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_1
# 83 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 84 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PostDelivery, MSGBOX_NPC
	return

SolsticeTown_EventScript_Boy2_Dialogue_1:
# 80 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 81 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_NPC
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtA::
# 89 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 7
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
	hidefollower
# 98 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 99 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 100 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtA
# 102 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 104 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 105 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 106 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtB::
# 111 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtB_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtB_1:
# 112 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 113 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 114 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 115 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 116 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 117 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 118 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 120 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 121 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 122 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtB
# 124 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 126 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 128 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtC::
# 133 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtC_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtC_1:
# 134 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 135 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 136 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 137 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 138 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 139 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 140 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 142 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 143 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 144 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtC
# 146 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 148 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 150 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtD::
# 155 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtD_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtD_1:
# 156 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 157 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 158 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 159 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 160 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 161 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 162 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 164 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 165 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 166 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtD
# 168 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 170 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 172 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Rival_First_Battle::
# 177 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 178 "data/maps/SolsticeTown/scripts.pory"
	checkplayergender
# 179 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SolsticeTown_EventScript_Rival_First_Battle_2
# 183 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalCassian
SolsticeTown_EventScript_Rival_First_Battle_1:
# 185 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return

SolsticeTown_EventScript_Rival_First_Battle_2:
# 180 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalSelene
	goto SolsticeTown_EventScript_Rival_First_Battle_1


SolsticeTown_EventScript_RivalSelene::
# 189 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 190 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 191 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 192 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalSelene_2
# 194 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalSelene_3
# 196 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalSelene_4
	return

SolsticeTown_EventScript_RivalSelene_2:
# 193 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSprigatito
	return

SolsticeTown_EventScript_RivalSelene_3:
# 195 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSquirtle
	return

SolsticeTown_EventScript_RivalSelene_4:
# 197 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleFennekin
	return


SolsticeTown_EventScript_RivalCassian::
# 202 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 203 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 204 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 205 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalCassian_2
# 207 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalCassian_3
# 209 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalCassian_4
	return

SolsticeTown_EventScript_RivalCassian_2:
# 206 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSprigatito
	return

SolsticeTown_EventScript_RivalCassian_3:
# 208 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSquirtle
	return

SolsticeTown_EventScript_RivalCassian_4:
# 210 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleFennekin
	return


SolsticeTown_EventScript_StartSeleneBattleSprigatito::
# 215 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 216 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleFennekin::
# 220 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 221 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleSquirtle::
# 225 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 226 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSprigatito::
# 230 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 231 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleFennekin::
# 235 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 236 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSquirtle::
# 240 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 241 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_RivalExit::
# 245 "data/maps/SolsticeTown/scripts.pory"
	setvar VAR_INTRO_SCENE, 8
# 246 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_After_Battle_Dialogue, MSGBOX_AUTOCLOSE
# 247 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalExit
# 248 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/SolsticeTown/scripts.pory"
	fadedefaultbgm
# 250 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 251 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
# 252 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


# 286 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_ExclamationMark:
# 287 "data/maps/SolsticeTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 290 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotA:
# 291 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
# 291 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 294 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotA:
# 295 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 295 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 296 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 299 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotB:
# 300 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 303 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotB:
# 304 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 305 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 308 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtA:
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
# 309 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 310 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 313 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtB:
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
	face_up
	step_end

# 318 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtC:
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
	face_right
	step_end

# 323 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtD:
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 324 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 329 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalExit:
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 330 "data/maps/SolsticeTown/scripts.pory"
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

# 99 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0:
# 99 "data/maps/SolsticeTown/scripts.pory"
	face_down
	step_end

SolsticeTown_EventScript_TownSign_Text_0:
# 10 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town\n"
	.string "“The balance between light and shadow”$"

SolsticeTown_EventScript_Girl1_Dialogue_Text_0:
# 17 "data/maps/SolsticeTown/scripts.pory"
	.string "Did you know you can press Start to\n"
	.string "check your Pokémon Summary?$"

SolsticeTown_EventScript_Boy1_Dialogue_Text_0:
# 23 "data/maps/SolsticeTown/scripts.pory"
	.string "I use the Pokémon Summary screen to\n"
	.string "check my Pokémon's nature.$"

SolsticeTown_EventScript_Girl2_Dialogue_Text_0:
# 29 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town doesn't have a Gym.\p"
	.string "It's a bit too out of the way for us to\n"
	.string "have one.$"

SolsticeTown_Boy2_Dialogue_PreDelivery::
# 255 "data/maps/SolsticeTown/scripts.pory"
	.string "WHOA there, superstar! The road ahead's\n"
	.string "closed.\p"
	.string "Not by law or anything, I'm just\n"
	.string "standing here real confidently.\p"
	.string "You look like you've got something\n"
	.string "important to do back home anyway.$"

SolsticeTown_Boy2_Dialogue_PostDelivery::
# 261 "data/maps/SolsticeTown/scripts.pory"
	.string "Ahh, the hero returns!\p"
	.string "I'd move out of the way dramatically,\n"
	.string "but my back's acting up.\p"
	.string "Just pretend I did a cool spin or\n"
	.string "something.$"

SolsticeTown_Rival_Battle_Intro_Dialogue::
# 267 "data/maps/SolsticeTown/scripts.pory"
	.string "{PLAYER}, wait!\p"
	.string "So you're leaving on an adventure too,\n"
	.string "huh?\p"
	.string "Now that I have a Pokémon, I also want\n"
	.string "to go out and explore the world!\p"
	.string "We'll take the Pokémon League challenge\n"
	.string "together and see who comes out on top!\p"
	.string "Before we leave, how about a battle?\p"
	.string "I'll give you a taste of what it means to\n"
	.string "compete with me!$"

SolsticeTown_Rival_Battle_Defeat_Dialogue::
# 276 "data/maps/SolsticeTown/scripts.pory"
	.string "What…? Maybe I picked the wrong\n"
	.string "Pokémon…$"

SolsticeTown_Rival_After_Battle_Dialogue::
# 280 "data/maps/SolsticeTown/scripts.pory"
	.string "Humph… You only won because you had a\n"
	.string "head start.\p"
	.string "You won't be so lucky next time, though!\p"
	.string "Me and my Pokémon will train and get\n"
	.string "much stronger, you'll see!$"
