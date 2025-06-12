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

# 85 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerWalksIn_LookForJirachiFromA:
# 86 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 87 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 88 "data/maps/BeginnerClearing/scripts.pory"
	walk_up
# 89 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 90 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 91 "data/maps/BeginnerClearing/scripts.pory"
	face_left
# 92 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 93 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 94 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 95 "data/maps/BeginnerClearing/scripts.pory"
	face_right
# 96 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 97 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 98 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 99 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

# 102 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerWalksIn_LookForJirachiFromB:
# 103 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 104 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 105 "data/maps/BeginnerClearing/scripts.pory"
	walk_up
# 105 "data/maps/BeginnerClearing/scripts.pory"
	walk_up
# 106 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 107 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 108 "data/maps/BeginnerClearing/scripts.pory"
	face_left
# 109 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 110 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 111 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 112 "data/maps/BeginnerClearing/scripts.pory"
	face_right
# 113 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 114 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 115 "data/maps/BeginnerClearing/scripts.pory"
	delay_16
# 116 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

BeginnerClearing_EventScript_WalkFromA::
# 136 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 137 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromA_2
BeginnerClearing_EventScript_WalkFromA_1:
# 148 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromA_2:
# 138 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 139 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 140 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 141 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 142 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 143 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 144 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 145 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 146 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromA_1


BeginnerClearing_EventScript_WalkFromB::
# 152 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 153 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_WalkFromB_2
BeginnerClearing_EventScript_WalkFromB_1:
# 164 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_WalkFromB_2:
# 154 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 155 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
# 156 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 157 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 158 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 159 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 160 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 161 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 162 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
	goto BeginnerClearing_EventScript_WalkFromB_1


BeginnerClearing_EventScript_ProfMyra::
# 168 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 169 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_ProfMyra_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntA::
# 174 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 175 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntA_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_GruntB::
# 179 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 180 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GruntB_Text_0, type = MSGBOX_NPC
	return


BeginnerClearing_EventScript_JirachiNPC::
# 184 "data/maps/BeginnerClearing/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_FAINT
# 185 "data/maps/BeginnerClearing/scripts.pory"
	waitmoncry
	return


BeginnerClearing_EventScript_JirachiIntro::
# 189 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 190 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_HIDE_CLEARING_NPCS
# 191 "data/maps/BeginnerClearing/scripts.pory"
	speakername JirachiName
# 192 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 193 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 194 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 195 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 196 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 197 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 198 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 199 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1, MSGBOX_AUTOCLOSE
# 200 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 201 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 202 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 203 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 204 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 205 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 206 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 207 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 208 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 209 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 210 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 211 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 212 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 213 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 214 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 215 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 216 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 217 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 220 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 221 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 222 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 223 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 226 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 227 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7, MSGBOX_AUTOCLOSE
# 233 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 234 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 235 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 236 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 237 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 238 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 239 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 240 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 241 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 242 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 243 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 244 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 245 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 246 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 247 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 248 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 249 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 250 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 251 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 252 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9, MSGBOX_AUTOCLOSE
# 253 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 254 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 255 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 256 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 257 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 258 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 259 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 260 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 261 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 262 "data/maps/BeginnerClearing/scripts.pory"
	delay 30
# 263 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 264 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 265 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 266 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 267 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 268 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 269 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 270 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 271 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 272 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 273 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 274 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 275 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 276 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14, MSGBOX_AUTOCLOSE
# 277 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 278 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 279 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 280 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 281 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 286 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntA, 7, 14
# 287 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm GruntB, 7, 15
# 288 "data/maps/BeginnerClearing/scripts.pory"
	setobjectxyperm ProfMyra, 11, 15
# 289 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 293 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 294 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 295 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 296 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 297 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 298 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 302 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 303 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
# 304 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBRunsToProfMyra
# 305 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 306 "data/maps/BeginnerClearing/scripts.pory"
	switch VAR_FACING
# 307 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_EAST, BeginnerClearing_EventScript_GruntABattle_3
# 309 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_SOUTH, BeginnerClearing_EventScript_GruntABattle_4
# 311 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_WEST, BeginnerClearing_EventScript_GruntABattle_5
# 313 "data/maps/BeginnerClearing/scripts.pory"
	case DIR_NORTH, BeginnerClearing_EventScript_GruntABattle_6
BeginnerClearing_EventScript_GruntABattle_1:
# 316 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement LOCALID_PLAYER
# 317 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 318 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, BeginnerClearing_EventScript_AfterBattle
# 319 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return

BeginnerClearing_EventScript_GruntABattle_3:
# 308 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_LeftSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_4:
# 310 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_TopSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_5:
# 312 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_RightSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1

BeginnerClearing_EventScript_GruntABattle_6:
# 314 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkToGruntA_BottomSideOfBag
	goto BeginnerClearing_EventScript_GruntABattle_1


BeginnerClearing_EventScript_AfterBattle::
# 323 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 324 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntAName
# 325 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 327 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 328 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 329 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 330 "data/maps/BeginnerClearing/scripts.pory"
	speakername GruntBName
# 331 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_1, MSGBOX_AUTOCLOSE
# 332 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 333 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_EventScript_AfterBattle_Movement_0
# 334 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 335 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_AfterBattle_Movement_1
# 338 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_AfterBattle_Movement_2
# 339 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 340 "data/maps/BeginnerClearing/scripts.pory"
	speakername ProfMyraName
# 341 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_AfterBattle_Text_2, MSGBOX_AUTOCLOSE
# 344 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 345 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 346 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_NPCS
# 347 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_JIRACHI
# 348 "data/maps/BeginnerClearing/scripts.pory"
	special HealPlayerParty
# 349 "data/maps/BeginnerClearing/scripts.pory"
	warpsilent MAP_LUMEN_VILLAGE_PROFESSOR_MYRAS_LAB, 6, 12
# 350 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_LookForJirachiFromA::
# 354 "data/maps/BeginnerClearing/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_eq BeginnerClearing_EventScript_LookForJirachiFromA_1
	return

BeginnerClearing_EventScript_LookForJirachiFromA_1:
# 355 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 356 "data/maps/BeginnerClearing/scripts.pory"
	setvar VAR_INTRO_SCENE, 5
# 357 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerWalksIn_LookForJirachiFromA
# 358 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 359 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiPlayerFirstDialogue
# 360 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_LookForJirachiFromB::
# 365 "data/maps/BeginnerClearing/scripts.pory"
	compare VAR_INTRO_SCENE, 4
	goto_if_eq BeginnerClearing_EventScript_LookForJirachiFromB_1
	return

BeginnerClearing_EventScript_LookForJirachiFromB_1:
# 366 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 367 "data/maps/BeginnerClearing/scripts.pory"
	setvar VAR_INTRO_SCENE, 5
# 368 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerWalksIn_LookForJirachiFromB
# 369 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 370 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiPlayerFirstDialogue
# 371 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiPlayerFirstDialogue::
# 376 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 377 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 378 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 379 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 380 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_HIDE_CLEARING_JIRACHI2
# 381 "data/maps/BeginnerClearing/scripts.pory"
	addobject jirachi_intro_2
# 382 "data/maps/BeginnerClearing/scripts.pory"
	applymovement jirachi_intro_2, BeginnerClearing_EventScript_JirachiPlayerFirstDialogue_Movement_0
# 383 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 384 "data/maps/BeginnerClearing/scripts.pory"
	speakername JirachiName
# 385 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiPlayerFirstDialogue_Text_0
# 412 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_WHITE
# 413 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_CLEARING_JIRACHI2
# 414 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_HIDE_MYRA_IN_LAB
# 415 "data/maps/BeginnerClearing/scripts.pory"
	removeobject jirachi_intro_2
# 416 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 417 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 221 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 221 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 328 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_0:
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 328 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
	step_end

# 335 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_1:
# 336 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
# 337 "data/maps/BeginnerClearing/scripts.pory"
	face_up
	step_end

# 338 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_AfterBattle_Movement_2:
# 338 "data/maps/BeginnerClearing/scripts.pory"
	face_down
	step_end

# 382 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiPlayerFirstDialogue_Movement_0:
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 382 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
	step_end

BeginnerClearing_EventScript_ProfMyra_Text_0:
# 169 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\nwe can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntA_Text_0:
# 175 "data/maps/BeginnerClearing/scripts.pory"
	.string "Fool! Hand Jirachi over and don't\n"
	.string "interfere!$"

BeginnerClearing_EventScript_GruntB_Text_0:
# 180 "data/maps/BeginnerClearing/scripts.pory"
	.string "Don't meddle where you aren't supposed\n"
	.string "to!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 192 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 199 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... Help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 212 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Oh, it's hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 214 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a Potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 217 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be okay for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 223 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 226 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 228 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 249 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 252 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 264 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 267 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a dweeb like you can get in\n"
	.string "our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 270 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 273 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 276 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 281 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?\p"
	.string "...\p"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.\l"
	.string "I will lend you one of my Pokémon so we\l"
	.string "can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntABattle_Text_0:
# 318 "data/maps/BeginnerClearing/scripts.pory"
	.string "You're going down, kid!$"

BeginnerClearing_EventScript_GruntABattle_Text_1:
# 318 "data/maps/BeginnerClearing/scripts.pory"
	.string "Impossible...$"

BeginnerClearing_EventScript_AfterBattle_Text_0:
# 325 "data/maps/BeginnerClearing/scripts.pory"
	.string "How is this possible!?\l"
	.string "You little brat... You'll regret this!$"

BeginnerClearing_EventScript_AfterBattle_Text_1:
# 331 "data/maps/BeginnerClearing/scripts.pory"
	.string "You don't mess with Team Eclipse and\n"
	.string "get away with it!$"

BeginnerClearing_EventScript_AfterBattle_Text_2:
# 341 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, you were amazing!\n"
	.string "I'm so glad you were here.\l"
	.string "Now let's take this Jirachi back to my\l"
	.string "lab so it can rest.$"

BeginnerClearing_EventScript_JirachiPlayerFirstDialogue_Text_0:
# 385 "data/maps/BeginnerClearing/scripts.pory"
	.string "...you came.\p"
	.string "I wasn't sure you'd hear me, but... you\n"
	.string "did.\p"
	.string "Those people, they tried to take me.\n"
	.string "They hurt me.\l"
	.string "But I'm not the only one.\l"
	.string "There was another. A friend. Like me.\l"
	.string "They took him. Locked him away... and\l"
	.string "twisted his voice.\l"
	.string "His wishes... used for control. For\l"
	.string "silence.\l"
	.string "...I'm still too weak. But I can feel it...\l"
	.string "minds cracking. Dreams bending.\l"
	.string "I need help... I need to save my friend.\l"
	.string "And I need to stop them.\l"
	.string "Will you help me stop them?\l"
	.string "Will you help me bring my friend back?\p"
	.string "...\p"
	.string "Thank you, {PLAYER}.\p"
	.string "He's being held in a place far from here.\p"
	.string "A place of towers and metal... minds\n"
	.string "shine brightly there, but not freely.\l"
	.string "Zenith City, I believe is the name.\l"
	.string "They use him there. To twist thoughts.\l"
	.string "To turn strong hearts into hollow\l"
	.string "voices.\l"
	.string "One by one, they fall under the silence.\l"
	.string "Leaders. Champions. Protectors.\l"
	.string "...If we don't act soon, no one will\l"
	.string "remain untouched.\l"
	.string "I can't go with you... not yet.\l"
	.string "But I'll guide you when I can.\l"
	.string "There are other minds I can still reach.\l"
	.string "Free them, and we'll be closer to saving\l"
	.string "him, and closer to the truth.\l"
	.string "Closer to stopping the silence.\l"
	.string "Thank you for your help.\l"
	.string "Go, {PLAYER}.\l"
	.string "I'll find you again when I can.$"

ProfMyraName::
# 119 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra$"

JirachiName::
# 123 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi$"

GruntAName::
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1$"

GruntBName::
# 131 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2$"
