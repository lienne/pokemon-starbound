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
	.string "They took my friend... help...$"
