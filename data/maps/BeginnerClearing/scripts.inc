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
BeginnerClearing_MyraRunsIn:
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 26 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 27 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
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
# 28 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 29 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 32 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntAWalksIn:
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
	step_end

# 36 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_GruntBWalksIn:
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
	step_end

# 40 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_PlayerRunsInFrontOfGrunts:
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_down
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_left
# 43 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

# 46 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ProfMyraWalksToPlayer:
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 47 "data/maps/BeginnerClearing/scripts.pory"
	walk_down
# 48 "data/maps/BeginnerClearing/scripts.pory"
	walk_left
	step_end

BeginnerClearing_EventScript_GoBack::
# 52 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 53 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 54 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 56 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 57 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 58 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromA::
# 63 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 64 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 65 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 66 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromA
# 67 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 68 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 69 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_WalkFromB::
# 73 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 74 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 75 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 76 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachiFromB
# 77 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 78 "data/maps/BeginnerClearing/scripts.pory"
	call BeginnerClearing_EventScript_JirachiIntro
# 79 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_JirachiIntro::
# 83 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 84 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 85 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 86 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 87 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 88 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 89 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 90 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsIn
# 91 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 92 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 93 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 94 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 95 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 96 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_EventScript_JirachiIntro_Movement_0
# 97 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 98 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 99 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 100 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 101 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 102 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 103 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 104 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 105 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_GruntAWalksIn
# 106 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_GruntBWalksIn
# 107 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 108 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntA, BeginnerClearing_ExclamationMark
# 109 "data/maps/BeginnerClearing/scripts.pory"
	applymovement GruntB, BeginnerClearing_ExclamationMark
# 110 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 111 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_12
# 112 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_13
# 113 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 114 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ExclamationMark
# 115 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 116 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_PlayerRunsInFrontOfGrunts
# 117 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 118 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_14
# 119 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_15
# 120 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_16
# 121 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_17
# 122 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_18
# 123 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_ProfMyraWalksToPlayer
# 124 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 125 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_19
# 126 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 127 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_20
# 128 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_21
# 129 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_22
# 130 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 56 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 56 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Movement_0:
# 96 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

BeginnerClearing_EventScript_GoBack_Text_0:
# 54 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 84 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 88 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 92 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Quick, I have a\n"
	.string "potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 93 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 94 "data/maps/BeginnerClearing/scripts.pory"
	.string "The poor thing's definitely in bad\n"
	.string "shape.$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 95 "data/maps/BeginnerClearing/scripts.pory"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 98 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 99 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 100 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 101 "data/maps/BeginnerClearing/scripts.pory"
	.string "We are lucky you found it so quickly.$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 102 "data/maps/BeginnerClearing/scripts.pory"
	.string "We should take it somewhere to recover.$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 104 "data/maps/BeginnerClearing/scripts.pory"
	.string "You said Jirachi spoke to you? And that\n"
	.string "it said it's being chased?$"

BeginnerClearing_EventScript_JirachiIntro_Text_12:
# 111 "data/maps/BeginnerClearing/scripts.pory"
	.string "Here it is! Grab it!$"

BeginnerClearing_EventScript_JirachiIntro_Text_13:
# 112 "data/maps/BeginnerClearing/scripts.pory"
	.string "You! Hand over that Jirachi!$"

BeginnerClearing_EventScript_JirachiIntro_Text_14:
# 118 "data/maps/BeginnerClearing/scripts.pory"
	.string "Huh? Who are you?$"

BeginnerClearing_EventScript_JirachiIntro_Text_15:
# 119 "data/maps/BeginnerClearing/scripts.pory"
	.string "You think a little dweeb like you can\n"
	.string "get in our way?$"

BeginnerClearing_EventScript_JirachiIntro_Text_16:
# 120 "data/maps/BeginnerClearing/scripts.pory"
	.string "And who are you? What do you want with\n"
	.string "this Jirachi?$"

BeginnerClearing_EventScript_JirachiIntro_Text_17:
# 121 "data/maps/BeginnerClearing/scripts.pory"
	.string "That's none of your business, lady!$"

BeginnerClearing_EventScript_JirachiIntro_Text_18:
# 122 "data/maps/BeginnerClearing/scripts.pory"
	.string "Just hand over the Jirachi and no one\n"
	.string "gets hurt!$"

BeginnerClearing_EventScript_JirachiIntro_Text_19:
# 125 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, do you have any Pokémon?$"

BeginnerClearing_EventScript_JirachiIntro_Text_20:
# 127 "data/maps/BeginnerClearing/scripts.pory"
	.string "Hmmm, I see. I think this situation calls\n"
	.string "for special circumstances.$"

BeginnerClearing_EventScript_JirachiIntro_Text_21:
# 128 "data/maps/BeginnerClearing/scripts.pory"
	.string "I will lend you one of my Pokémon so we\n"
	.string "can defend this Jirachi together.$"

BeginnerClearing_EventScript_JirachiIntro_Text_22:
# 129 "data/maps/BeginnerClearing/scripts.pory"
	.string "Please grab a Pokéball from my bag.$"
