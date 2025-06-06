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

TestSound::
# 61 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 62 "data/maps/BeginnerClearing/scripts.pory"
	msgbox TestSound_Text_0
# 66 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_GoBack::
# 70 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 71 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 72 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 74 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 75 "data/maps/BeginnerClearing/scripts.pory"
	waitse
# 76 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 77 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 78 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 83 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 84 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 85 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 86 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 87 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 88 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 89 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 90 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 91 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 95 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 96 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 97 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 98 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 99 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 100 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 101 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 102 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 103 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiIntro::
# 107 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 108 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 109 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 110 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 111 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 112 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 113 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 114 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 115 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 116 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 117 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 118 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 119 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 120 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 121 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 122 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 123 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 124 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 125 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 126 "data/maps/BeginnerClearing/scripts.pory"
	addobject MyrasBag
# 127 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 128 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_USE_ITEM
# 129 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 132 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 133 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 134 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 135 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 142 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 143 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 144 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 145 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 146 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 147 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 148 "data/maps/BeginnerClearing/scripts.pory"
	delay 40
# 149 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 150 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 151 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 152 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 153 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 154 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 155 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 156 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 157 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 158 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 159 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 160 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 161 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_PIN
# 162 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 163 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 164 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 165 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 166 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 167 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 168 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 169 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 170 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 171 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 172 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 173 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 174 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 175 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 176 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 177 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 178 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 179 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 182 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 183 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 185 "data/maps/BeginnerClearing/scripts.pory"
	playse SE_SELECT
# 186 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 187 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 191 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 192 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 193 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 194 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 195 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 76 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 76 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 133 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 133 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

TestSound_Text_0:
# 62 "data/maps/BeginnerClearing/scripts.pory"
	.string "Does this play a sound?\l"
	.string "If it does, then the sound system is\nworking!\l"
	.string "If it doesn't, then something is wrong.\l"
	.string "This is a test message.$"

BeginnerClearing_EventScript_GoBack_Text_0:
# 72 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 108 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 115 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Oh, it's hurt.\n"
	.string "Quick, I have a potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 129 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.\l"
	.string "The poor thing's definitely in bad\l"
	.string "shape.\l"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 135 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?\l"
	.string "...\l"
	.string "{PLAYER}, is it?\l"
	.string "We are lucky you found it so quickly.\l"
	.string "We should take it somewhere to recover.\l"
	.string "...\l"
	.string "You said Jirachi spoke to you? And\n"
	.string "that it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 154 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 156 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 167 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 169 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a little dweeb like you can\n"
	.string "get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 171 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 173 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 175 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 179 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?\l"
	.string "...\l"
	.string "Hmmm, I see. I think this situation\n"
	.string "calls for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 183 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so\n"
	.string "we can defend this Jirachi together.\l"
	.string "Please grab a Pokéball from my bag.$"
