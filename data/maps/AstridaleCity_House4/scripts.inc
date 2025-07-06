AstridaleCity_House4_MapScripts::
	.byte 0


Astridale_House4_EventScript_OldMan_Dialogue::
# 6 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_lt Astridale_House4_EventScript_OldMan_Dialogue_1
# 12 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_eq Astridale_House4_EventScript_OldMan_Dialogue_2
# 12 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_eq Astridale_House4_EventScript_OldMan_Dialogue_2
# 18 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldMan, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 19 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldMan_Dialogue_Text_2, MSGBOX_NPC
	return

Astridale_House4_EventScript_OldMan_Dialogue_1:
# 7 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldMan, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 8 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldMan_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_House4_EventScript_OldMan_Dialogue_2:
# 13 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldMan, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 14 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldMan_Dialogue_Text_1, MSGBOX_NPC
	return


Astridale_House4_EventScript_OldWoman_Dialogue::
# 26 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_lt Astridale_House4_EventScript_OldWoman_Dialogue_1
# 33 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_eq Astridale_House4_EventScript_OldWoman_Dialogue_2
# 33 "data/maps/AstridaleCity_House4/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_eq Astridale_House4_EventScript_OldWoman_Dialogue_2
# 39 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldWoman, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 40 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldWoman_Dialogue_Text_2, MSGBOX_NPC
	return

Astridale_House4_EventScript_OldWoman_Dialogue_1:
# 27 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldWoman, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 28 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldWoman_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_House4_EventScript_OldWoman_Dialogue_2:
# 34 "data/maps/AstridaleCity_House4/scripts.pory"
	applymovement Astridale_House4_OldWoman, Astridale_House4_EventScript_OldMan_Dialogue_Movement_0
# 35 "data/maps/AstridaleCity_House4/scripts.pory"
	msgbox Astridale_House4_EventScript_OldWoman_Dialogue_Text_1, MSGBOX_NPC
	return


# 7 "data/maps/AstridaleCity_House4/scripts.pory"
Astridale_House4_EventScript_OldMan_Dialogue_Movement_0:
# 7 "data/maps/AstridaleCity_House4/scripts.pory"
	face_player
	step_end

Astridale_House4_EventScript_OldMan_Dialogue_Text_0:
# 8 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "Our daughter Viviane has not been\n"
	.string "herself lately.\l"
	.string "She hardly ever comes home anymore...$"

Astridale_House4_EventScript_OldMan_Dialogue_Text_1:
# 14 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "Viviane hasn't been home in a while.\n"
	.string "It's not like her. She usually can't\l"
	.string "sleep without her Clefairy doll.$"

Astridale_House4_EventScript_OldMan_Dialogue_Text_2:
# 19 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "I used to be a sailor, you know.\n"
	.string "But I got tired of the sea and settled\l"
	.string "down here in Astridale with my family.\l"
	.string "It's a peaceful life, and I like it that\l"
	.string "way.$"

Astridale_House4_EventScript_OldWoman_Dialogue_Text_0:
# 28 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "I'm worried about our daughter.\n"
	.string "She was excited about the construction\l"
	.string "before, but now she seems to hate the\l"
	.string "very idea.\l"
	.string "Something must have happened for her\l"
	.string "to change her mind so suddenly.$"

Astridale_House4_EventScript_OldWoman_Dialogue_Text_1:
# 35 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "Viviane keeps her beloved Clefairy doll\n"
	.string "in her room.\l"
	.string "She used to take it everywhere with\l"
	.string "her, but now...$"

Astridale_House4_EventScript_OldWoman_Dialogue_Text_2:
# 40 "data/maps/AstridaleCity_House4/scripts.pory"
	.string "I used to be a sailor's wife.\n"
	.string "Now I just enjoy the peace and quiet of\l"
	.string "Astridale.\l"
	.string "Our daughter, Viviane, became the gym\l"
	.string "leader after we moved here.$"
