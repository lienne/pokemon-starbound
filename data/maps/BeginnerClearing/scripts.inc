BeginnerClearing_MapScripts::
	.byte 0


# 5 "data/maps/BeginnerClearing/scripts.pory"
BeginnerClearing_ExclamationMark:
# 6 "data/maps/BeginnerClearing/scripts.pory"
	emote_exclamation_mark
	step_end

BeginnerClearing_EventScript_ExclamationMark::
# 10 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 11 "data/maps/BeginnerClearing/scripts.pory"
	applymovement LOCALID_PLAYER, BeginnerClearing_ExclamationMark
# 12 "data/maps/BeginnerClearing/scripts.pory"
	waitmovement 0
# 13 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 14 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


EventScript_JirachiIntroEncounter::
# 18 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 19 "data/maps/BeginnerClearing/scripts.pory"
	applymovement jirachi, BeginnerClearing_ExclamationMark
# 20 "data/maps/BeginnerClearing/scripts.pory"
	msgbox EventScript_JirachiIntroEncounter_Text_0
# 21 "data/maps/BeginnerClearing/scripts.pory"
	delay 10
# 22 "data/maps/BeginnerClearing/scripts.pory"
	msgbox EventScript_JirachiIntroEncounter_Text_1
# 23 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


EventScript_JirachiIntroEncounter_Text_0:
# 20 "data/maps/BeginnerClearing/scripts.pory"
	.string "Help... they're coming after me...$"

EventScript_JirachiIntroEncounter_Text_1:
# 22 "data/maps/BeginnerClearing/scripts.pory"
	.string "They took my friend... help...$"
