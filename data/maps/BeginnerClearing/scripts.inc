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
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 89 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 90 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 91 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 92 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 93 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 94 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 95 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 99 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 100 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 101 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 102 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 103 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 104 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 105 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 106 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 107 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiIntro::
# 111 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 112 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 113 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 114 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 115 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 116 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 117 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 118 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 119 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 120 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 121 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 122 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 123 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 124 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 125 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 126 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 127 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 128 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 129 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 130 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 131 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 132 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 133 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 134 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 135 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 138 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 139 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 140 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 141 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 148 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 149 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 150 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 151 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 152 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 153 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 154 "data/maps/BeginnerClearing/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 155 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 156 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 157 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 158 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 159 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 160 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 161 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 162 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 163 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 164 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 165 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 166 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 167 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 168 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 169 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 170 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 171 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 172 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 173 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 174 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 175 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 176 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 177 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 178 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 179 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 180 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 181 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 182 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 183 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 184 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 185 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 186 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 188 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 189 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 190 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 191 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 193 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 194 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 195 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 199 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 200 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 202 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 203 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_GruntABattle
# 204 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GruntABattle::
# 208 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 209 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntARunsToPlayer
# 210 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 211 "data/maps/BeginnerClearing/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, BeginnerClearing_EventScript_GruntABattle_Text_0, BeginnerClearing_EventScript_GruntABattle_Text_1, FALSE
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

# 139 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 139 "data/maps/BeginnerClearing/scripts.pory"
	face_left
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

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 112 "data/maps/BeginnerClearing/scripts.pory"
	.string "Jirachi: Help... they're coming after\n"
	.string "me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 119 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 131 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: Is that a Jirachi? Oh, it's\n"
	.string "hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 133 "data/maps/BeginnerClearing/scripts.pory"
	.string "Quick, I have a potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 135 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 141 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?\l"
	.string "...\l"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 161 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 163 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 174 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 176 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: You think a little dweeb like\n"
	.string "you can get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 178 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: And who are you? What do\n"
	.string "you want with this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 180 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 2: That's none of your business,\n"
	.string "lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 182 "data/maps/BeginnerClearing/scripts.pory"
	.string "Grunt 1: Just hand over the Jirachi and\n"
	.string "no one gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 186 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prof. Myra: {PLAYER}, do you have any\n"
	.string "Pokémon?\l"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 189 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation\n"
	.string "calls for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 191 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\n"
	.string "we can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"

BeginnerClearing_EventScript_GruntABattle_Text_0:
# 211 "data/maps/BeginnerClearing/scripts.pory"
	.string "Intro Text$"

BeginnerClearing_EventScript_GruntABattle_Text_1:
# 211 "data/maps/BeginnerClearing/scripts.pory"
	.string "Defeat Text$"
