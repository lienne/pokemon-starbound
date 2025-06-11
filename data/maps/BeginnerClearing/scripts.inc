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
# 102 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 103 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromA_2
BeginnerClearing_EventScript_WalkFromA_1:
# 114 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromA_2:
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
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 111 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 112 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromA_1


BeginnerClearing_EventScript_WalkFromB::
# 118 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 119 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromB_2
BeginnerClearing_EventScript_WalkFromB_1:
# 130 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromB_2:
# 120 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 121 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 122 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 123 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 124 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 125 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 126 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 127 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 128 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromB_1


BeginnerClearing_EventScript_ProfMyra::
# 134 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 135 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_ProfMyra_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntA::
# 140 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 141 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntA_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntB::
# 145 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 146 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntB_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_JirachiNPC::
# 150 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 151 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
	return


BeginnerClearing_EventScript_JirachiIntro::
# 155 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 156 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_HIDE_CLEARING_NPCS
# 157 "data/maps/BeginnerClearing/scripts.pory"
	speakername JirachiName
# 158 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 159 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 160 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 161 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 162 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 163 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 164 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 165 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1, MSGBOX_AUTOCLOSE
# 166 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 167 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 168 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 169 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 170 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 171 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 172 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 173 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 174 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 175 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 176 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 177 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 178 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 179 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 180 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 181 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 182 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 183 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 186 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 187 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 188 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 189 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 192 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 193 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7, MSGBOX_AUTOCLOSE
# 199 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 200 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 201 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 202 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 203 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 204 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 205 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 206 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 207 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 208 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 209 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 210 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 211 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 212 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 213 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 214 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 215 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 216 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 217 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 218 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9, MSGBOX_AUTOCLOSE
# 219 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 220 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 221 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 222 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 223 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 224 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 225 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 226 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 227 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 228 "data/maps/BeginnerClearing/scripts.pory"
	delay 30
# 229 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 230 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 231 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 232 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 233 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 234 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 235 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 236 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 237 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 238 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 239 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 240 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 241 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 242 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14, MSGBOX_AUTOCLOSE
# 243 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 244 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 245 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 246 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 247 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 252 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntA, 7, 14
# 253 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntB, 7, 15
# 254 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm ProfMyra, 11, 15
# 255 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 259 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 260 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 261 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 262 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 263 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 264 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 268 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 269 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
# 270 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBRunsToProfMyra
# 271 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 272 "data/maps/BeginnerClearing/scripts.pory"
	switch VAR_FACING
# 273 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_EAST, BeginnerClearing_EventScript_GruntABattle_3
# 275 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_SOUTH, BeginnerClearing_EventScript_GruntABattle_4
# 277 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_WEST, BeginnerClearing_EventScript_GruntABattle_5
# 279 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_NORTH, BeginnerClearing_EventScript_GruntABattle_6
BeginnerClearing_EventScript_GruntABattle_1:
# 282 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement LOCALID_PLAYER
# 283 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 284 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, BeginnerClearing_EventScript_AfterBattle
# 285 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_GruntABattle_3:
# 274 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_LeftSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_4:
# 276 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_TopSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_5:
# 278 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_RightSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_6:
# 280 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_BottomSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1


BeginnerClearing_EventScript_AfterBattle::
# 289 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 290 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 291 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 293 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 294 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 295 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 296 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 297 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 298 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 299 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 300 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 301 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_AfterBattle_Movement_1
# 304 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_AfterBattle_Movement_2
# 305 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 306 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 307 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_2
# 310 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 311 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 312 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_NPCS
# 313 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_JIRACHI
# 314 "data/maps/BeginnerClearing/scripts.pory"
	special HealPlayerParty
# 315 "data/maps/BeginnerClearing/scripts.pory"
	warpsilent MAP_LUMEN_VILLAGE_PROFESSOR_MYRAS_LAB, 6, 12
# 316 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 187 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 187 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 294 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_0:
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 294 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 301 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_1:
# 302 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 303 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

# 304 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_2:
# 304 "data/maps/BeginnerClearing/scripts.pory"
	face_down
	step_end

BeginnerClearing_EventScript_ProfMyra_Text_0:
# 135 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\nwe can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntA_Text_0:
# 141 "data/maps/BeginnerClearing/scripts.pory"
	.string "Fool! Hand Jirachi over and don't\n"
	.string "interfere!$"

BeginnerClearing_EventScript_GruntB_Text_0:
# 146 "data/maps/BeginnerClearing/scripts.pory"
	.string "Don't meddle where you aren't supposed\n"
	.string "to!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 158 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 165 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... Help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 178 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Oh, it's hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 180 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a Potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 183 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be okay for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 189 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 192 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 194 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 215 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 218 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 230 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 233 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a dweeb like you can get in\n"
	.string "our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 236 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 239 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 242 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 247 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?\p"
	.string "...\p"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.\l"
	.string "I will lend you one of my Pokémon so we\l"
	.string "can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntABattle_Text_0:
# 284 "data/maps/BeginnerClearing/scripts.pory"
	.string "You're going down, kid!$"

BeginnerClearing_EventScript_GruntABattle_Text_1:
# 284 "data/maps/BeginnerClearing/scripts.pory"
	.string "Impossible...$"

BeginnerClearing_EventScript_AfterBattle_Text_0:
# 291 "data/maps/BeginnerClearing/scripts.pory"
	.string "How is this possible!?\l"
	.string "You little brat... You'll regret this!$"

BeginnerClearing_EventScript_AfterBattle_Text_1:
# 297 "data/maps/BeginnerClearing/scripts.pory"
	.string "You don't mess with Team Eclipse and\n"
	.string "get away with it!$"

BeginnerClearing_EventScript_AfterBattle_Text_2:
# 307 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, you were amazing!\l"
	.string "I'm so glad you were here.\l"
	.string "Now let's take this Jirachi back to my\l"
	.string "lab so it can rest.$"

ProfMyraName::
# 85 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra$"

JirachiName::
# 89 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi$"

GruntAName::
# 93 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1$"

GruntBName::
# 97 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2$"
