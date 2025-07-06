Astridale_Gym_MapScripts::
	.byte 0


Astridale_Gym_EventScript_Viviane::
# 6 "data/maps/Astridale_Gym/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_ge Astridale_Gym_EventScript_Viviane_1
	return

Astridale_Gym_EventScript_Viviane_1:
# 7 "data/maps/Astridale_Gym/scripts.pory"
	applymovement Astridale_Gym_Viviane, Astridale_Gym_EventScript_Viviane_Movement_0
# 8 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 9 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_0, MSGBOX_NPC
# 19 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_1, MSGBOX_YESNO
# 20 "data/maps/Astridale_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Astridale_Gym_EventScript_Viviane_3
# 25 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_3, MSGBOX_AUTOCLOSE
# 26 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 27 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_4, MSGBOX_NPC
# 32 "data/maps/Astridale_Gym/scripts.pory"
	warpwhitefade MAP_ASTRIDALE_MINDSCAPE, 19, 75
	return

Astridale_Gym_EventScript_Viviane_3:
# 21 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 22 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_2, MSGBOX_NPC
	return


# 7 "data/maps/Astridale_Gym/scripts.pory"
Astridale_Gym_EventScript_Viviane_Movement_0:
# 7 "data/maps/Astridale_Gym/scripts.pory"
	face_player
	step_end

Astridale_Gym_EventScript_Viviane_Text_0:
# 9 "data/maps/Astridale_Gym/scripts.pory"
	.string "So you're back.\p"
	.string "I suggest you forget what you saw at\n"
	.string "the warehouse.\l"
	.string "It's really none of your business, you\l"
	.string "know.\l"
	.string "You shouldn't go meddling in other\l"
	.string "people's affairs.\l"
	.string "The construction is bad for Astridale,\l"
	.string "and I need to do everything I can to\l"
	.string "stop it!\l"
	.string "You won't be able to stop me, even if\l"
	.string "you try!\p"
	.string "I'm a gym leader, you know.\l"
	.string "You think a kid like you can beat me?\p"
	.string "...\p"
	.string "What's that? You've got something for\n"
	.string "me?$"

Astridale_Gym_EventScript_Viviane_Text_1:
# 19 "data/maps/Astridale_Gym/scripts.pory"
	.string "Give Viviane her Clefairy doll?$"

Astridale_Gym_EventScript_Viviane_Text_2:
# 22 "data/maps/Astridale_Gym/scripts.pory"
	.string "That's right, scram!$"

Astridale_Gym_EventScript_Viviane_Text_3:
# 25 "data/maps/Astridale_Gym/scripts.pory"
	.string "You gave Viviane her Clefairy doll.$"

Astridale_Gym_EventScript_Viviane_Text_4:
# 27 "data/maps/Astridale_Gym/scripts.pory"
	.string "...\p"
	.string "...oh...\p"
	.string "...my beloved Clefairy doll...\p"
	.string "...\p"
	.string "...ugh, what's happening? I don't feel\n"
	.string "well...$"
