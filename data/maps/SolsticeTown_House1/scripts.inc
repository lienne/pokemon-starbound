SolsticeTown_House1_MapScripts::
	.byte 0


SolsticeTown_House1_EventScript_Woman_Dialogue::
# 6 "data/maps/SolsticeTown_House1/scripts.pory"
	applymovement SolsticeTown_House1_Woman, SolsticeTown_House1_EventScript_Woman_Dialogue_Movement_0
# 7 "data/maps/SolsticeTown_House1/scripts.pory"
	msgbox SolsticeTown_House1_EventScript_Woman_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 6 "data/maps/SolsticeTown_House1/scripts.pory"
SolsticeTown_House1_EventScript_Woman_Dialogue_Movement_0:
# 6 "data/maps/SolsticeTown_House1/scripts.pory"
	face_player
	step_end

SolsticeTown_House1_EventScript_Woman_Dialogue_Text_0:
# 7 "data/maps/SolsticeTown_House1/scripts.pory"
	.string "I used to send Mail on my Pidove to a\n"
	.string "friend in Astridale... but lately, they\l"
	.string "haven't sent anything back!\l"
	.string "Do you think they don't like me\l"
	.string "anymore!?$"
