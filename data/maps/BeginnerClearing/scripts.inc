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
	delay 10
# 28 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


EventScript_JirachiIntroEncounter::
# 32 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 33 "data/maps/BeginnerClearing/scripts.pory"
	msgbox EventScript_JirachiIntroEncounter_Text_0
# 34 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 35 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 36 "data/maps/BeginnerClearing/scripts.pory"
	msgbox EventScript_JirachiIntroEncounter_Text_1
# 37 "data/maps/BeginnerClearing/scripts.pory"
# 13 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_WalkUpToJirachi:
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
# 15 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 15 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
# 16 "data/maps/BeginnerClearing/scripts.pory"
	face_right
	step_end

# 19 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraRunsIn:
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
	emote_exclamation_mark
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
# 23 "data/maps/BeginnerClearing/scripts.pory"
	walk_fast_up
	step_end

# 26 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_MyraTurnsToYou:
# 27 "data/maps/BeginnerClearing/scripts.pory"
	face_left
	step_end

BeginnerClearing_EventScript_JirachiIntro::
# 31 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 32 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 33 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 34 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_WalkUpToJirachi
# 35 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 36 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_0
# 37 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 38 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_QuestionMark
# 39 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 40 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_1
# 41 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 42 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraRunsIn
# 43 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 44 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_2
# 45 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_3
# 46 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_4
# 47 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_5
# 48 "data/maps/BeginnerClearing/scripts.pory"
	applymovement ProfMyra, BeginnerClearing_MyraTurnsToYou
# 49 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 50 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_6
# 51 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 52 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_8
# 53 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_9
# 54 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_10
# 55 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_7
# 56 "data/maps/BeginnerClearing/scripts.pory"
	msgbox BeginnerClearing_EventScript_JirachiIntro_Text_11
# 57 "data/maps/BeginnerClearing/scripts.pory"
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

EventScript_JirachiIntroEncounter_Text_0:
# 33 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

EventScript_JirachiIntroEncounter_Text_1:
# 36 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_EventScript_JirachiIntro_Text_0:
# 36 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

BeginnerClearing_EventScript_JirachiIntro_Text_1:
# 40 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"

BeginnerClearing_EventScript_JirachiIntro_Text_2:
# 44 "data/maps/BeginnerClearing/scripts.pory"
	.string "Is that a Jirachi? Quick, I have a potion!$"

BeginnerClearing_EventScript_JirachiIntro_Text_3:
# 45 "data/maps/BeginnerClearing/scripts.pory"
	.string "It should be ok for now, but it needs rest.$"

BeginnerClearing_EventScript_JirachiIntro_Text_4:
# 46 "data/maps/BeginnerClearing/scripts.pory"
	.string " The poor thing's definitely in bad shape.$"

BeginnerClearing_EventScript_JirachiIntro_Text_5:
# 47 "data/maps/BeginnerClearing/scripts.pory"
	.string "I wonder what happened...$"

BeginnerClearing_EventScript_JirachiIntro_Text_6:
# 50 "data/maps/BeginnerClearing/scripts.pory"
	.string "What's your name?$"

BeginnerClearing_EventScript_JirachiIntro_Text_7:
# 51 "data/maps/BeginnerClearing/scripts.pory"
	.string "...$"

BeginnerClearing_EventScript_JirachiIntro_Text_8:
# 52 "data/maps/BeginnerClearing/scripts.pory"
	.string "{PLAYER}, is it?$"

BeginnerClearing_EventScript_JirachiIntro_Text_9:
# 53 "data/maps/BeginnerClearing/scripts.pory"
	.string " We are lucky you found it so quickly.$"

BeginnerClearing_EventScript_JirachiIntro_Text_10:
# 54 "data/maps/BeginnerClearing/scripts.pory"
	.string "We should take it somewhere to recover.$"

BeginnerClearing_EventScript_JirachiIntro_Text_11:
# 56 "data/maps/BeginnerClearing/scripts.pory"
	.string "You said Jirachi spoke to you? And that it said it's being chased?$"
