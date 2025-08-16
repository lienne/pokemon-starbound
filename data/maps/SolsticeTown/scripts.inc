SolsticeTown_MapScripts::
# 2 "data/maps/SolsticeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SolsticeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SolsticeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 4 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_VISITED_SOLSTICE_TOWN
# 5 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
	return


SolsticeTown_EventScript_TownSign::
# 10 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 11 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_TownSign_Text_0
# 13 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Girl1_Dialogue::
# 17 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 18 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl1_Dialogue_Text_0, MSGBOX_NPC
# 19 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
	return


SolsticeTown_EventScript_Boy1_Dialogue::
# 23 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 24 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Boy1_Dialogue_Text_0, MSGBOX_NPC
# 25 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
	return


SolsticeTown_EventScript_Girl2_Dialogue::
# 29 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 30 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl2_Dialogue_Text_0, MSGBOX_NPC
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotA::
# 35 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1:
# 36 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 37 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 38 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 39 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotA
# 41 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 42 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 43 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 44 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotA
# 46 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotB::
# 51 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1:
# 52 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 53 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 54 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 55 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotB
# 57 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 58 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 59 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 60 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotB
# 62 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotC::
# 67 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1:
# 68 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 69 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 70 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 71 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 73 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 74 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 75 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue::
# 80 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_lt SolsticeTown_EventScript_Boy2_Dialogue_1
# 84 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 85 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PostDelivery, MSGBOX_NPC
	return

SolsticeTown_EventScript_Boy2_Dialogue_1:
# 81 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 82 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_NPC
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtA::
# 90 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtA_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtA_1:
# 91 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 92 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 93 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 94 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 95 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 96 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 97 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 98 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 99 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 100 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 101 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtA
# 103 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 105 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 107 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtB::
# 112 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtB_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtB_1:
# 113 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 114 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 115 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 116 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 117 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 118 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 119 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 121 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 122 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 123 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtB
# 125 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 127 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 129 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtC::
# 134 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtC_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtC_1:
# 135 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 136 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 137 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 138 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 139 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 140 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 141 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 143 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 144 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 145 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtC
# 147 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 149 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 151 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_RivalRunsToPlayerAtD::
# 156 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_eq SolsticeTown_EventScript_RivalRunsToPlayerAtD_1
	return

SolsticeTown_EventScript_RivalRunsToPlayerAtD_1:
# 157 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 158 "data/maps/SolsticeTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 159 "data/maps/SolsticeTown/scripts.pory"
	addobject SolsticeTown_Rival
# 160 "data/maps/SolsticeTown/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 161 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_ExclamationMark
# 162 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 163 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/SolsticeTown/scripts.pory"
	hidefollower
# 165 "data/maps/SolsticeTown/scripts.pory"
	delay 20
# 166 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0
# 167 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalRunsToPlayerAtD
# 169 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
# 171 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_Rival_First_Battle
# 173 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Rival_First_Battle::
# 178 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 179 "data/maps/SolsticeTown/scripts.pory"
	checkplayergender
# 180 "data/maps/SolsticeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SolsticeTown_EventScript_Rival_First_Battle_2
# 184 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalCassian
SolsticeTown_EventScript_Rival_First_Battle_1:
# 186 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return

SolsticeTown_EventScript_Rival_First_Battle_2:
# 181 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalSelene
	goto SolsticeTown_EventScript_Rival_First_Battle_1


SolsticeTown_EventScript_RivalSelene::
# 190 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 191 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 192 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 193 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalSelene_2
# 195 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalSelene_3
# 197 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalSelene_4
	return

SolsticeTown_EventScript_RivalSelene_2:
# 194 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSprigatito
	return

SolsticeTown_EventScript_RivalSelene_3:
# 196 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleSquirtle
	return

SolsticeTown_EventScript_RivalSelene_4:
# 198 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartSeleneBattleFennekin
	return


SolsticeTown_EventScript_RivalCassian::
# 203 "data/maps/SolsticeTown/scripts.pory"
	call RivalName
# 204 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_Battle_Intro_Dialogue
# 205 "data/maps/SolsticeTown/scripts.pory"
	switch VAR_STARTER_MON
# 206 "data/maps/SolsticeTown/scripts.pory"
	case 0, SolsticeTown_EventScript_RivalCassian_2
# 208 "data/maps/SolsticeTown/scripts.pory"
	case 1, SolsticeTown_EventScript_RivalCassian_3
# 210 "data/maps/SolsticeTown/scripts.pory"
	case 2, SolsticeTown_EventScript_RivalCassian_4
	return

SolsticeTown_EventScript_RivalCassian_2:
# 207 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSprigatito
	return

SolsticeTown_EventScript_RivalCassian_3:
# 209 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleSquirtle
	return

SolsticeTown_EventScript_RivalCassian_4:
# 211 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_StartCassianBattleFennekin
	return


SolsticeTown_EventScript_StartSeleneBattleSprigatito::
# 216 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 217 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleFennekin::
# 221 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 222 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartSeleneBattleSquirtle::
# 226 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SELENE_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 227 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSprigatito::
# 231 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SPRIGATITO, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 232 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleFennekin::
# 236 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_FENNEKIN, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 237 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_StartCassianBattleSquirtle::
# 241 "data/maps/SolsticeTown/scripts.pory"
	trainerbattle_no_intro TRAINER_CASSIAN_SOLSTICE_SQUIRTLE, SolsticeTown_Rival_Battle_Defeat_Dialogue
# 242 "data/maps/SolsticeTown/scripts.pory"
	call SolsticeTown_EventScript_RivalExit
	return


SolsticeTown_EventScript_RivalExit::
# 246 "data/maps/SolsticeTown/scripts.pory"
	setvar VAR_INTRO_SCENE, 10
# 247 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Rival_After_Battle_Dialogue, MSGBOX_AUTOCLOSE
# 248 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Rival, SolsticeTown_Movement_RivalExit
# 249 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/SolsticeTown/scripts.pory"
	fadedefaultbgm
# 251 "data/maps/SolsticeTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_IN_SOLSTICE_TOWN
# 252 "data/maps/SolsticeTown/scripts.pory"
	removeobject SolsticeTown_Rival
# 253 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


# 287 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_ExclamationMark:
# 288 "data/maps/SolsticeTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 291 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotA:
# 292 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
# 292 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 295 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotA:
# 296 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 296 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 297 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 300 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotB:
# 301 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 304 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotB:
# 305 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 306 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 309 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtA:
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
# 310 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 311 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 314 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtB:
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
	face_up
	step_end

# 319 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtC:
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
	face_right
	step_end

# 324 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalRunsToPlayerAtD:
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_up
# 326 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 330 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Movement_RivalExit:
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
# 331 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_down
	step_end

# 17 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_0:
# 17 "data/maps/SolsticeTown/scripts.pory"
	face_player
	step_end

# 19 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_1:
# 19 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 25 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy1_Dialogue_Movement_0:
# 25 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 43 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0:
# 43 "data/maps/SolsticeTown/scripts.pory"
	walk_down
	step_end

# 100 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_RivalRunsToPlayerAtA_Movement_0:
# 100 "data/maps/SolsticeTown/scripts.pory"
	face_down
	step_end

SolsticeTown_EventScript_TownSign_Text_0:
# 11 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town\n"
	.string "“The balance between light and shadow”$"

SolsticeTown_EventScript_Girl1_Dialogue_Text_0:
# 18 "data/maps/SolsticeTown/scripts.pory"
	.string "Did you know you can press Start to\n"
	.string "check your Pokémon Summary?$"

SolsticeTown_EventScript_Boy1_Dialogue_Text_0:
# 24 "data/maps/SolsticeTown/scripts.pory"
	.string "I use the Pokémon Summary screen to\n"
	.string "check my Pokémon's nature.$"

SolsticeTown_EventScript_Girl2_Dialogue_Text_0:
# 30 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town doesn't have a Gym.\p"
	.string "It's a bit too out of the way for us to\n"
	.string "have one.$"

SolsticeTown_Boy2_Dialogue_PreDelivery::
# 256 "data/maps/SolsticeTown/scripts.pory"
	.string "WHOA there, superstar! The road ahead's\n"
	.string "closed.\p"
	.string "Not by law or anything, I'm just\n"
	.string "standing here real confidently.\p"
	.string "You look like you've got something\n"
	.string "important to do back home anyway.$"

SolsticeTown_Boy2_Dialogue_PostDelivery::
# 262 "data/maps/SolsticeTown/scripts.pory"
	.string "Ahh, the hero returns!\p"
	.string "I'd move out of the way dramatically,\n"
	.string "but my back's acting up.\p"
	.string "Just pretend I did a cool spin or\n"
	.string "something.$"

SolsticeTown_Rival_Battle_Intro_Dialogue::
# 268 "data/maps/SolsticeTown/scripts.pory"
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
# 277 "data/maps/SolsticeTown/scripts.pory"
	.string "What…? Maybe I picked the wrong\n"
	.string "Pokémon…$"

SolsticeTown_Rival_After_Battle_Dialogue::
# 281 "data/maps/SolsticeTown/scripts.pory"
	.string "Humph… You only won because you had a\n"
	.string "head start.\p"
	.string "You won't be so lucky next time, though!\p"
	.string "Me and my Pokémon will train and get\n"
	.string "much stronger, you'll see!$"
