BeginnerClearing_MapScripts::
	.byte 0


# 5 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 6 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

# 9 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_QuestionMark:
# 10 "data/maps/BeginnerClearing/scripts.pory"
	emote_question_mark
	step_end

# 13 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromA:
# 14 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 14 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 14 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 14 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 14 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 15 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 15 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 16 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 19 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachiFromB:
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
# 21 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 22 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 25 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInA:
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 29 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsInB:
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 30 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 31 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 34 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
# 35 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 35 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 35 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 35 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 38 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBWalksIn:
# 39 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
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
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 43 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 44 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 45 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 48 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 49 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 49 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 50 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

BeginnerClearing_EventScript_GoBack::
# 54 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 55 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 56 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 58 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 59 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 60 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 65 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 66 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 67 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 68 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 69 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 70 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 71 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 75 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 76 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 77 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 78 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 79 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 80 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 81 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiIntro::
# 85 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 86 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 87 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 88 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 89 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 90 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 91 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 92 "data/maps/BeginnerClearing/scripts.pory"
	showobjectat ProfMyra, MAP_BEGINNER_CLEARING
# 93 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInA
# 94 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 95 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 96 "data/maps/BeginnerClearing/scripts.pory"
	delay 100
# 97 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsInB
# 98 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 99 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 100 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 101 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 102 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 103 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 104 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 105 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 106 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 107 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 108 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 109 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 110 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 111 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 112 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 113 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 114 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 115 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 116 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 117 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 118 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 119 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 120 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 121 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 122 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 123 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 124 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 125 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 126 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 127 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_16
# 128 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_17
# 129 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_18
# 130 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 131 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 132 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_19
# 133 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 134 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_20
# 135 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_21
# 136 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_22
# 137 "data/maps/BeginnerClearing/scripts.pory"
	clearflag FLAG_CAN_LEAVE_BEGINNER_CLEARING
# 138 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_MyrasBag::
# 142 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 143 "data/maps/BeginnerClearing/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/maps/BeginnerClearing/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 145 "data/maps/BeginnerClearing/scripts.pory"
	special ChooseStarter
# 146 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 58 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 58 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 103 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

BeginnerClearing_EventScript_GoBack_Text_0:
# 56 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 86 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 90 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 99 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Oh, it's hurt. Quick, I\n"
	.string "have a potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 100 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 101 "data/maps/BeginnerClearing/scripts.pory"
	.string "The poor thing's definitely in bad\n"
	.string "shape.$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 102 "data/maps/BeginnerClearing/scripts.pory"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 105 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 106 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 107 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 108 "data/maps/BeginnerClearing/scripts.pory"
	.string "We are lucky you found it so quickly.$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 109 "data/maps/BeginnerClearing/scripts.pory"
	.string "We should take it somewhere to recover.$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 111 "data/maps/BeginnerClearing/scripts.pory"
	.string "You said Jirachi spoke to you? And that\n"
	.string "it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 118 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 119 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 125 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 126 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a little dweeb like you can\n"
	.string "get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_16:
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_17:
# 128 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_18:
# 129 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_19:
# 132 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?$"

BeginnerClearing_EventScript_JirachiIntro_Text_20:
# 134 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_21:
# 135 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so we\n"
	.string "can defend this Jirachi together.$"

BeginnerClearing_EventScript_JirachiIntro_Text_22:
# 136 "data/maps/BeginnerClearing/scripts.pory"
	.string "Please grab a Pokéball from my bag.$"
