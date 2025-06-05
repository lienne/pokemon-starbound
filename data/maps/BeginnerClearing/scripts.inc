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

BeginnerClearing_EventScript_GoBack::
# 14 "data/maps/BeginnerClearing/scripts.pory"
	goto_if_unset FLAG_CAN_LEAVE_BEGINNER_CLEARING, BeginnerClearing_EventScript_GoBack_1
	return

BeginnerClearing_EventScript_GoBack_1:
# 15 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 16 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_GoBack_Text_0
# 18 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_EventScript_GoBack_Movement_0
# 19 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 20 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


BeginnerClearing_EventScript_ExclamationMark::
# 25 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 26 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 27 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 28 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 29 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 32 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachi:
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 33 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 34 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 35 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 38 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsIn:
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
# 40 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 41 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_right
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 42 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 45 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraTurnsToYou:
# 46 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

BeginnerClearing_EventScript_JirachiIntro::
# 50 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 51 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 52 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 53 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachi
# 54 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 55 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 56 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 57 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 58 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 59 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 60 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 61 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsIn
# 62 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 63 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 64 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 65 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 66 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 67 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraTurnsToYou
# 68 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement ProfMyra
# 69 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 70 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 71 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 72 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 73 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 74 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 75 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 76 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


# 18 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_GoBack_Movement_0:
# 18 "data/maps/BeginnerClearing/scripts.pory"
	walk_right
	step_end

BeginnerClearing_EventScript_GoBack_Text_0:
# 16 "data/maps/BeginnerClearing/scripts.pory"
	.string "You can't ignore the cries of\n"
	.string "a hurt Pokémon!$"

BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 55 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 59 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 63 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Quick, I have a\n"
	.string "potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 64 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs\n"
	.string "rest.$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 65 "data/maps/BeginnerClearing/scripts.pory"
	.string "The poor thing's definitely in bad\n"
	.string "shape.$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 66 "data/maps/BeginnerClearing/scripts.pory"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 69 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 70 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 71 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 72 "data/maps/BeginnerClearing/scripts.pory"
	.string "We are lucky you found it so quickly.$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 73 "data/maps/BeginnerClearing/scripts.pory"
	.string "We should take it somewhere to recover.$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 75 "data/maps/BeginnerClearing/scripts.pory"
	.string "You said Jirachi spoke to you? And that\n"
	.string "it said it's being chased?$"
