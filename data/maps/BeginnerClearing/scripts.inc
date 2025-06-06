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
	return


# 12 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 13 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

# 16 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_QuestionMark:
# 17 "data/maps/BeginnerClearing/scripts.pory"
	emote_question_mark
	step_end

# 20 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromA:
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 22 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 23 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 26 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromB:
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 29 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 32 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInA:
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 36 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInB:
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 38 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 41 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 45 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBWalksIn:
# 46 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 46 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 46 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 46 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 46 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 49 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 50 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 50 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 51 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 52 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 55 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 56 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 56 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 57 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 60 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntARunsToPlayer:
# 61 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 61 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

TestSound::
# 65 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 66 "data/maps/BeginnerClearing/scripts.pory"
	applymovement test_npc, TestSound_Movement_0
# 67 "data/maps/BeginnerClearing/scripts.pory"
	msgbox TestSound_Text_0
# 71 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GoBack::
# 75 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 76 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 77 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 79 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 80 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 81 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 82 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 87 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 88 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
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
# 97 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 101 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 102 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 103 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 104 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 105 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 106 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 107 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 108 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 109 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 110 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 111 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_ProfMyra::
# 115 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_ProfMyra_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntA::
# 120 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntA_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntB::
# 124 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntB_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_JirachiNPC::
# 128 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 129 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
	return


BeginnerClearing_EventScript_JirachiIntro::
# 133 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 134 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 135 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 136 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 137 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 138 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 139 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 140 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 141 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 142 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 143 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 144 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 145 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 146 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 147 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 148 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 149 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 150 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 151 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 152 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 153 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 154 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 155 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 156 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 157 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 158 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 161 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 162 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 163 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 164 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 171 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 172 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 173 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 174 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 175 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 176 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 177 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 178 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 179 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 180 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 181 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 182 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 183 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 184 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 185 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 186 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 187 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 188 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 189 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 190 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 191 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 192 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 193 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 194 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 195 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 196 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 197 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 198 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 199 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 200 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 201 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 202 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 203 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 204 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 205 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 206 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 207 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 208 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 209 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 210 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 211 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 212 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 213 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 214 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 215 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 216 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 217 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_16
# 219 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 220 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 221 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 224 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_LeftSideOfBag:
# 225 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 229 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_TopSideOfBag:
# 230 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 231 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 231 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 232 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 232 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 232 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 232 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 235 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_RightSideOfBag:
# 236 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 237 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkToGruntA_BottomSideOfBag:
# 241 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 241 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 241 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
# 241 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

BeginnerClearing_EventScript_MyrasBag::
# 245 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 246 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 247 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 248 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 249 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 250 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 254 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 255 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
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
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, FALSE
# 269 "data/maps/BeginnerClearing/scripts.pory"
# 215 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, BeginnerClearing_EventScript_AfterBattle
# 216 "data/maps/BeginnerClearing/scripts.pory"
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
# 220 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 221 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_0
# 223 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 224 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_1
# 225 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 226 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 227 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 228 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 229 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_AfterBattle_Movement_1
# 230 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 231 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_2
# 234 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 235 "data/maps/BeginnerClearing/scripts.pory"
	warpsilent MAP_LUMEN_VILLAGE_PROFESSOR_MYRAS_LAB, 6, 7
# 236 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 66 "data/maps/BeginnerClearing/scripts.pory"
TestSound_Movement_0:
# 66 "data/maps/BeginnerClearing/scripts.pory"
	face_player
	step_end

# 80 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 80 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 162 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 226 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_0:
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 226 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 229 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_1:
# 229 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

TestSound_Text_0:
# 67 "data/maps/BeginnerClearing/scripts.pory"
	.string "Does this play a sound?\l"
	.string "If it does, then the sound system is\nworking!\l"
	.string "If it doesn't, then something is wrong.\l"
	.string "This is a test message.$"

BeginnerClearing_EventScript_GoBack_Text_0:
# 77 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_ProfMyra_Text_0:
# 115 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\nwe can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntA_Text_0:
# 120 "data/maps/BeginnerClearing/scripts.pory"
	.string "Fool! Hand Jirachi over and don't\n"
	.string "interfere!$"

BeginnerClearing_EventScript_GruntB_Text_0:
# 124 "data/maps/BeginnerClearing/scripts.pory"
	.string "Don't meddle where you aren't supposed\n"
	.string "to!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 134 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi: Help... they're coming after\n"
	.string "me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 141 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 153 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: Is that a Jirachi? Oh, it's\n"
	.string "hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 155 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a Potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 158 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be okay for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 164 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?\l"
	.string "...\l"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 186 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 188 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 199 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 201 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You think a little dweeb like\n"
	.string "you can get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 203 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: And who are you? What do\n"
	.string "you want with this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 205 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: That's none of your business,\n"
	.string "lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 207 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Just hand over the Jirachi and\n"
	.string "no one gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 211 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, do you have any\n"
	.string "Pokémon?$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 213 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 215 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation\n"
	.string "calls for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_16:
# 217 "data/maps/BeginnerClearing/scripts.pory"
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
# 221 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: How is this possible??\l"
	.string "You little brat... You'll regret this!$"

BeginnerClearing_EventScript_AfterBattle_Text_1:
# 224 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You don't mess with Team\n"
	.string "Eclipse and get away with it!$"

BeginnerClearing_EventScript_AfterBattle_Text_2:
# 231 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, you were\n"
	.string "amazing!\l"
	.string "I'm so glad you were here.\l"
	.string "Now let's take this Jirachi back to my\l"
	.string "lab so it can rest.$"
