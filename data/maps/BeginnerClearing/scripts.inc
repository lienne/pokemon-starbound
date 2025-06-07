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
	removeobject GruntA
# 5 "data/maps/BeginnerClearing/scripts.pory"
	removeobject GruntB
# 6 "data/maps/BeginnerClearing/scripts.pory"
	removeobject ProfMyra
# 7 "data/maps/BeginnerClearing/scripts.pory"
	removeobject MyrasBag
# 8 "data/maps/BeginnerClearing/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	return


# 13 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 14 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_QuestionMark:
# 18 "data/maps/BeginnerClearing/scripts.pory"
	emote_question_mark
	step_end

# 21 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromA:
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 23 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 23 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 24 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 27 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromB:
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 29 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 29 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 29 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 30 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 33 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInA:
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 37 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInB:
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 42 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
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
BeginnerClearing_GruntBWalksIn:
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 50 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 51 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 51 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 52 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 53 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 56 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 57 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 57 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntARunsToPlayer:
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 62 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 65 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBRunsToProfMyra:
# 66 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 66 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 66 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 69 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_LeftSideOfBag:
# 70 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 71 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 74 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_TopSideOfBag:
# 75 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 76 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 76 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 77 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 77 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 77 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 80 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_RightSideOfBag:
# 81 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 82 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 82 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 82 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 85 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_BottomSideOfBag:
# 86 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 86 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

BeginnerClearing_SetPlayerFacingDir::
# 90 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_SetPlayerFacingDir_Movement_0
	return


BeginnerClearing_EventScript_GoBack::
# 94 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 95 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 96 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 98 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 99 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 100 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 101 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 106 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 107 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 108 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 109 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 110 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 111 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 112 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 113 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 114 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 115 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 116 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 120 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 121 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 122 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 123 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 124 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 125 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 126 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 127 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 128 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 129 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 130 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_ProfMyra::
# 134 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_ProfMyra_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntA::
# 139 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntA_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntB::
# 143 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntB_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_JirachiNPC::
# 147 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 148 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
	return


BeginnerClearing_EventScript_JirachiIntro::
# 152 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 153 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 154 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 155 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 156 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 157 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 158 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 159 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 160 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 161 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 162 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 163 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 164 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 165 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 166 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 167 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 168 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 169 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 170 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 171 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 172 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 173 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 174 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 175 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 176 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 177 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 180 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 181 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 182 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 183 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5, MSGBOX_AUTOCLOSE
# 190 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 191 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 192 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 193 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 194 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 195 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 196 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 197 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 198 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 199 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 200 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 201 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 202 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 203 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 204 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 205 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 206 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 207 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 208 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 209 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 210 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 211 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 212 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 213 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 214 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 215 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 216 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 217 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 218 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 219 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 220 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 221 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 222 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 223 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 224 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 225 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 226 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 227 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 228 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 229 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 230 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 231 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 232 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 233 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 234 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 235 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 236 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_16
# 238 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 239 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 240 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 244 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 245 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 247 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 248 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 249 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 253 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 254 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
# 255 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBRunsToProfMyra
# 256 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 257 "data/maps/BeginnerClearing/scripts.pory"
	switch VAR_FACING
# 258 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_EAST, BeginnerClearing_EventScript_GruntABattle_3
# 260 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_SOUTH, BeginnerClearing_EventScript_GruntABattle_4
# 262 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_WEST, BeginnerClearing_EventScript_GruntABattle_5
# 264 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_NORTH, BeginnerClearing_EventScript_GruntABattle_6
BeginnerClearing_EventScript_GruntABattle_1:
# 267 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement LOCALID_PLAYER
# 268 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, BeginnerClearing_EventScript_AfterBattle
# 269 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_GruntABattle_3:
# 259 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_LeftSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_4:
# 261 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_TopSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_5:
# 263 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_RightSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_6:
# 265 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_BottomSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1


BeginnerClearing_EventScript_AfterBattle::
# 273 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 274 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_0
# 276 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 277 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 278 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 279 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_1
# 280 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 281 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 282 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 283 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_AfterBattle_Movement_1
# 286 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_AfterBattle_Movement_2
# 287 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 288 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_2
# 291 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 292 "data/maps/BeginnerClearing/scripts.pory"
	warpsilent MAP_LUMEN_VILLAGE_PROFESSOR_MYRAS_LAB, 6, 7
# 293 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 90 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_SetPlayerFacingDir_Movement_0:
# 90 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 99 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 99 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 181 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 181 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 277 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_0:
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 277 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 283 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_1:
# 284 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 285 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

# 286 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_2:
# 286 "data/maps/BeginnerClearing/scripts.pory"
	face_down
	step_end

BeginnerClearing_EventScript_GoBack_Text_0:
# 96 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_ProfMyra_Text_0:
# 134 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\nwe can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntA_Text_0:
# 139 "data/maps/BeginnerClearing/scripts.pory"
	.string "Fool! Hand Jirachi over and don't\n"
	.string "interfere!$"

BeginnerClearing_EventScript_GruntB_Text_0:
# 143 "data/maps/BeginnerClearing/scripts.pory"
	.string "Don't meddle where you aren't supposed\n"
	.string "to!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 153 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi: Help... they're coming after\n"
	.string "me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 160 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 172 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: Is that a Jirachi? Oh, it's\n"
	.string "hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 174 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a Potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 177 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be okay for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 183 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?\l"
	.string "...\l"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 205 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 207 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 218 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 220 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You think a little dweeb like\n"
	.string "you can get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 222 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: And who are you? What do\n"
	.string "you want with this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 224 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: That's none of your business,\n"
	.string "lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 226 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Just hand over the Jirachi and\n"
	.string "no one gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 230 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, do you have any\n"
	.string "Pokémon?$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 232 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 234 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation\n"
	.string "calls for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_16:
# 236 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\n"
	.string "we can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntABattle_Text_0:
# 268 "data/maps/BeginnerClearing/scripts.pory"
	.string "You're going down, kid!$"

BeginnerClearing_EventScript_GruntABattle_Text_1:
# 268 "data/maps/BeginnerClearing/scripts.pory"
	.string "Impossible...$"

BeginnerClearing_EventScript_AfterBattle_Text_0:
# 274 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: How is this possible??\l"
	.string "You little brat... You'll regret this!$"

BeginnerClearing_EventScript_AfterBattle_Text_1:
# 279 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You don't mess with Team\n"
	.string "Eclipse and get away with it!$"

BeginnerClearing_EventScript_AfterBattle_Text_2:
# 288 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, you were\n"
	.string "amazing!\l"
	.string "I'm so glad you were here.\l"
	.string "Now let's take this Jirachi back to my\l"
	.string "lab so it can rest.$"
