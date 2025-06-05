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
	return


# 11 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 12 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

# 15 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_QuestionMark:
# 16 "data/maps/BeginnerClearing/scripts.pory"
	emote_question_mark
	step_end

# 19 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromA:
# 20 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 20 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 20 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 20 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 20 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 22 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 25 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromB:
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 27 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 28 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 31 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInA:
# 32 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 32 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 32 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 35 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInB:
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 36 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 37 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 40 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 44 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBWalksIn:
# 45 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 45 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 45 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 45 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 45 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 48 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 49 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 49 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 50 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 51 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 54 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 55 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 55 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 56 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

BeginnerClearing_EventScript_GoBack::
# 60 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 61 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 62 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 64 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 65 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 66 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 71 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 72 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 73 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 74 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 75 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 76 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 77 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 81 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 82 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 83 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 84 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 85 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 86 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 87 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiIntro::
# 91 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 92 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 93 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 94 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 95 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 96 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 97 "data/maps/BeginnerClearing/scripts.pory"
	addobject ProfMyra
# 98 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 99 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 100 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 101 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 102 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 103 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 104 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 105 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 106 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 107 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 108 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 109 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 110 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 111 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 112 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 113 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 114 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 115 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 116 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 117 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntA
# 118 "data/maps/BeginnerClearing/scripts.pory"
	addobject GruntB
# 119 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 120 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 121 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 122 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 123 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 124 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 125 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 126 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 127 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 128 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 129 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 130 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 131 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 132 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 133 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 134 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 135 "data/maps/BeginnerClearing/scripts.pory"
	delay 50
# 136 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 137 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 138 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_16
# 139 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_17
# 140 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_18
# 141 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 142 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 143 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_19
# 144 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 145 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_20
# 146 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_21
# 147 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_22
# 148 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 149 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 153 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 154 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 156 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 157 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 64 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 64 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 108 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 108 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

BeginnerClearing_EventScript_GoBack_Text_0:
# 62 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 92 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 96 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 104 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Oh, it's hurt. Quick, I\n"
	.string "have a potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 105 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 106 "data/maps/BeginnerClearing/scripts.pory"
	.string "The poor thing's definitely in bad\n"
	.string "shape.$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 107 "data/maps/BeginnerClearing/scripts.pory"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 110 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 111 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 112 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 113 "data/maps/BeginnerClearing/scripts.pory"
	.string "We are lucky you found it so quickly.$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 114 "data/maps/BeginnerClearing/scripts.pory"
	.string "We should take it somewhere to recover.$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 116 "data/maps/BeginnerClearing/scripts.pory"
	.string "You said Jirachi spoke to you? And that\n"
	.string "it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 128 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 136 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 137 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a little dweeb like you can\n"
	.string "get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_16:
# 138 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_17:
# 139 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_18:
# 140 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_19:
# 143 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?$"

BeginnerClearing_EventScript_JirachiIntro_Text_20:
# 145 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_21:
# 146 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so we\n"
	.string "can defend this Jirachi together.$"

BeginnerClearing_EventScript_JirachiIntro_Text_22:
# 147 "data/maps/BeginnerClearing/scripts.pory"
	.string "Please grab a Pokéball from my bag.$"
