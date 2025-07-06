AstridaleCity_House2_MapScripts::
	.byte 0


Astridale_House2_EventScript_Girl_Dialogue::
# 6 "data/maps/AstridaleCity_House2/scripts.pory"
	applymovement Astridale_House2_Girl, Astridale_House2_EventScript_Girl_Dialogue_Movement_0
# 7 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_House2_EventScript_Man_Dialogue::
# 12 "data/maps/AstridaleCity_House2/scripts.pory"
	applymovement Astridale_House2_Man, Astridale_House2_EventScript_Girl_Dialogue_Movement_0
# 13 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Man_Dialogue_Text_0, MSGBOX_NPC
	return


# 6 "data/maps/AstridaleCity_House2/scripts.pory"
Astridale_House2_EventScript_Girl_Dialogue_Movement_0:
# 6 "data/maps/AstridaleCity_House2/scripts.pory"
	face_player
	step_end

Astridale_House2_EventScript_Girl_Dialogue_Text_0:
# 7 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "I like to watch my favorite show during\n"
	.string "the day, but the construction is so\l"
	.string "loud that I sometimes can't hear it.\l"
	.string "I'm excited for all the new things, but I\l"
	.string "hope they stop soon!$"

Astridale_House2_EventScript_Man_Dialogue_Text_0:
# 13 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "The power of technology nowadays is\n"
	.string "amazing.\l"
	.string "I'm sure the construction will bring\l"
	.string "even more of it to Astridale.\l"
	.string "I just hope it doesn't change things\l"
	.string "too much.$"
