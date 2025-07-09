AstridaleCity_House1_MapScripts::
	.byte 0


Astridale_House1_EventScript_Woman_Dialogue::
# 6 "data/maps/AstridaleCity_House1/scripts.pory"
	applymovement Astridale_House1_Woman, Astridale_House1_EventScript_Woman_Dialogue_Movement_0
# 7 "data/maps/AstridaleCity_House1/scripts.pory"
	msgbox Astridale_House1_EventScript_Woman_Dialogue_Text_0, MSGBOX_NPC
	return


# 6 "data/maps/AstridaleCity_House1/scripts.pory"
Astridale_House1_EventScript_Woman_Dialogue_Movement_0:
# 6 "data/maps/AstridaleCity_House1/scripts.pory"
	face_player
	step_end

Astridale_House1_EventScript_Woman_Dialogue_Text_0:
# 7 "data/maps/AstridaleCity_House1/scripts.pory"
	.string "It's horrible living right next to the\n"
	.string "construction.\p"
	.string "It's so loud during the day, and they\n"
	.string "keep the lights on at night…\p"
	.string "I can hardly hear myself think!\p"
	.string "I hope they finish up soon…$"
