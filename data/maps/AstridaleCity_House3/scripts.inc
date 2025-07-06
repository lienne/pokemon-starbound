AstridaleCity_House3_MapScripts::
	.byte 0


Astridale_House3_EventScript_Man_Dialogue::
# 6 "data/maps/AstridaleCity_House3/scripts.pory"
	applymovement Astridale_House3_Man, Astridale_House3_EventScript_Man_Dialogue_Movement_0
# 7 "data/maps/AstridaleCity_House3/scripts.pory"
	msgbox Astridale_House3_EventScript_Man_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_House3_EventScript_Woman_Dialogue::
# 13 "data/maps/AstridaleCity_House3/scripts.pory"
	applymovement Astridale_House3_Woman, Astridale_House3_EventScript_Man_Dialogue_Movement_0
# 14 "data/maps/AstridaleCity_House3/scripts.pory"
	msgbox Astridale_House3_EventScript_Woman_Dialogue_Text_0, MSGBOX_NPC
	return


# 6 "data/maps/AstridaleCity_House3/scripts.pory"
Astridale_House3_EventScript_Man_Dialogue_Movement_0:
# 6 "data/maps/AstridaleCity_House3/scripts.pory"
	face_player
	step_end

Astridale_House3_EventScript_Man_Dialogue_Text_0:
# 7 "data/maps/AstridaleCity_House3/scripts.pory"
	.string "My girlfriend and I have been bickering\n"
	.string "a lot lately.\l"
	.string "I'm against the new construction, while\l"
	.string "she's for it.\l"
	.string "We moved here to have a more peaceful\l"
	.string "life, and now all this noise and mess is\l"
	.string "gonna mess everything up.$"

Astridale_House3_EventScript_Woman_Dialogue_Text_0:
# 14 "data/maps/AstridaleCity_House3/scripts.pory"
	.string "I can't wait for the construction to\n"
	.string "finish.\l"
	.string "I hear they're building a new shopping\l"
	.string "mall.\l"
	.string "I hope it has a lot of new stores!$"
