BeginnerClearing_MapScripts::
# 2 "data/maps/BeginnerClearing/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BeginnerClearing_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BeginnerClearing_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/BeginnerClearing/scripts.pory"
	map_script_2 1, 1, BeginnerClearing_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BeginnerClearing_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/BeginnerClearing/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return


# 9 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 10 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

# 13 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_QuestionMark:
# 14 "data/maps/BeginnerClearing/scripts.pory"
	emote_question_mark
	step_end

# 17 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromA:
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 19 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 19 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 20 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 23 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromB:
# 24 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 24 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 24 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 24 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 24 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 25 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 25 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 25 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 26 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 29 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInA:
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 33 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInB:
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 35 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 38 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 42 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBWalksIn:
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 46 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 48 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 49 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 52 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 53 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 53 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 54 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 54 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntARunsToPlayer:
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 61 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBRunsToProfMyra:
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 65 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_LeftSideOfBag:
# 66 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 67 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 70 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_TopSideOfBag:
# 71 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 72 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 72 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 73 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 73 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 73 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 76 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_RightSideOfBag:
# 77 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 78 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 78 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 78 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 81 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_BottomSideOfBag:
# 82 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 82 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

BeginnerClearing_EventScript_WalkFromA::
# 86 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 87 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromA_2
BeginnerClearing_EventScript_WalkFromA_1:
# 98 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromA_2:
# 88 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 89 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 90 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 91 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 92 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 93 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 94 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 95 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 96 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromA_1


BeginnerClearing_EventScript_WalkFromB::
# 102 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 103 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromB_2
BeginnerClearing_EventScript_WalkFromB_1:
# 114 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromB_2:
# 104 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 105 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 106 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 107 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 108 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 109 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 110 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 111 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 112 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromB_1


BeginnerClearing_EventScript_ProfMyra::
# 118 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_ProfMyra_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntA::
# 123 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntA_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntB::
# 127 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntB_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_JirachiNPC::
# 131 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 132 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
	return


BeginnerClearing_EventScript_JirachiIntro::
# 136 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 137 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_HIDE_CLEARING_NPCS
# 138 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 139 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 140 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 141 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 142 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 143 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 144 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 145 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1, MSGBOX_AUTOCLOSE
# 146 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 147 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 148 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 149 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 150 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 151 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 152 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 153 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 154 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 155 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 156 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 157 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 158 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 159 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 160 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 161 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 162 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 165 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 166 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 167 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 168 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 169 "data/maps/BeginnerClearing/scripts.pory"
	special DoPlayerNamingScreen
# 170 "data/maps/BeginnerClearing/scripts.pory"
	waitstate
# 171 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6, MSGBOX_AUTOCLOSE
# 177 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 178 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 179 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 180 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 181 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 182 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 183 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 184 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 185 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 186 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 187 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 188 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 189 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 190 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 191 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 192 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 193 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 194 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8, MSGBOX_AUTOCLOSE
# 195 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 196 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 197 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 198 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 199 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 200 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 201 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 202 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 203 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 204 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 205 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 206 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 207 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 208 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 209 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 210 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 211 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 212 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 213 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13, MSGBOX_AUTOCLOSE
# 214 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 215 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 216 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 217 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 222 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntA, 7, 14
# 223 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntB, 7, 15
# 224 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm ProfMyra, 11, 15
# 225 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 229 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 230 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 232 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 233 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 234 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 238 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 239 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
# 240 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBRunsToProfMyra
# 241 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 242 "data/maps/BeginnerClearing/scripts.pory"
	switch VAR_FACING
# 243 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_EAST, BeginnerClearing_EventScript_GruntABattle_3
# 245 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_SOUTH, BeginnerClearing_EventScript_GruntABattle_4
# 247 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_WEST, BeginnerClearing_EventScript_GruntABattle_5
# 249 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_NORTH, BeginnerClearing_EventScript_GruntABattle_6
BeginnerClearing_EventScript_GruntABattle_1:
# 252 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement LOCALID_PLAYER
# 253 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 254 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, BeginnerClearing_EventScript_AfterBattle
# 255 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_GruntABattle_3:
# 244 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_LeftSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_4:
# 246 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_TopSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_5:
# 248 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_RightSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_6:
# 250 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_BottomSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1


BeginnerClearing_EventScript_AfterBattle::
# 259 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 260 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 262 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 263 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 264 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 265 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 266 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 267 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 268 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 269 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_AfterBattle_Movement_1
# 272 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_AfterBattle_Movement_2
# 273 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 274 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_2
# 277 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 278 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 279 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_NPCS
# 280 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_JIRACHI
# 281 "data/maps/BeginnerClearing/scripts.pory"
	warpsilent MAP_LUMEN_VILLAGE_PROFESSOR_MYRAS_LAB, 6, 12
# 282 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 166 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 166 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 263 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_0:
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 263 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 269 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_1:
# 270 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 271 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

# 272 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_2:
# 272 "data/maps/BeginnerClearing/scripts.pory"
	face_down
	step_end

BeginnerClearing_EventScript_ProfMyra_Text_0:
# 118 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\nwe can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntA_Text_0:
# 123 "data/maps/BeginnerClearing/scripts.pory"
	.string "Fool! Hand Jirachi over and don't\n"
	.string "interfere!$"

BeginnerClearing_EventScript_GruntB_Text_0:
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "Don't meddle where you aren't supposed\n"
	.string "to!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 138 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi: Help... they're coming after\n"
	.string "me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 145 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... Help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 157 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: Is that a Jirachi? Oh, it's\n"
	.string "hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 159 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a Potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 162 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be okay for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 168 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 172 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 192 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 194 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 205 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 207 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You think a dweeb like you can\n"
	.string "get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 209 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: And who are you? What do\n"
	.string "you want with this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 211 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: That's none of your business,\n"
	.string "lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 213 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Just hand over the Jirachi and\n"
	.string "no one gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 217 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, do you have any\n"
	.string "Pokémon?\p"
	.string "...\p"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.\l"
	.string "I will lend you one of my Pokémon so we\l"
	.string "can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntABattle_Text_0:
# 254 "data/maps/BeginnerClearing/scripts.pory"
	.string "You're going down, kid!$"

BeginnerClearing_EventScript_GruntABattle_Text_1:
# 254 "data/maps/BeginnerClearing/scripts.pory"
	.string "Impossible...$"

BeginnerClearing_EventScript_AfterBattle_Text_0:
# 260 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: How is this possible!?\l"
	.string "You little brat... You'll regret this!$"

BeginnerClearing_EventScript_AfterBattle_Text_1:
# 265 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You don't mess with Team\n"
	.string "Eclipse and get away with it!$"

BeginnerClearing_EventScript_AfterBattle_Text_2:
# 274 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, you were\n"
	.string "amazing!\l"
	.string "I'm so glad you were here.\l"
	.string "Now let's take this Jirachi back to my\l"
	.string "lab so it can rest.$"
