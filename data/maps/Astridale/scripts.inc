Astridale_MapScripts::
	.byte 0


Astridale_EventScript_CitySign::
# 10 "data/maps/Astridale/scripts.pory"
	lockall
# 11 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_CitySign_Text_0
# 13 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_ConstructionSign::
# 17 "data/maps/Astridale/scripts.pory"
	lockall
# 18 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionSign_Text_0
# 20 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_DeptStoreSign::
# 24 "data/maps/Astridale/scripts.pory"
	lockall
# 25 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_DeptStoreSign_Text_0
# 27 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_GymSign::
# 31 "data/maps/Astridale/scripts.pory"
	lockall
# 32 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_GymSign_Text_0
# 35 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_Gym_Door_Man_Dialogue::
# 39 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 0
	goto_if_eq Astridale_EventScript_Gym_Door_Man_Dialogue_1
# 48 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 49 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return

Astridale_EventScript_Gym_Door_Man_Dialogue_1:
# 40 "data/maps/Astridale/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 1
# 41 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 42 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


Astridale_EventScript_ConstructionMan1_Dialogue::
# 57 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 0
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 57 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 1
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 68 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 69 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return

Astridale_EventScript_ConstructionMan1_Dialogue_1:
# 58 "data/maps/Astridale/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 2
# 59 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 60 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


Astridale_EventScript_Gameboy_Kid_Dialogue::
# 79 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gameboy_Kid, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 80 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


Astridale_EventScript_OldMan_Dialogue::
# 86 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldMan, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 87 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldMan_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


Astridale_EventScript_OldWoman_Dialogue::
# 93 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldWoman, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 94 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldWoman_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


Astridale_EventScript_Lady_Dialogue::
# 100 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Lady, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 101 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Lady_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	return


# 41 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0:
# 41 "data/maps/Astridale/scripts.pory"
	face_player
	step_end

Astridale_EventScript_CitySign_Text_0:
# 11 "data/maps/Astridale/scripts.pory"
	.string "Astridale\n"
	.string "“Growing towards tomorrow without forgetting yesterday”$"

Astridale_EventScript_ConstructionSign_Text_0:
# 18 "data/maps/Astridale/scripts.pory"
	.string "Construction Site\n"
	.string "Mind the dust!$"

Astridale_EventScript_DeptStoreSign_Text_0:
# 25 "data/maps/Astridale/scripts.pory"
	.string "Astridale Department Store\n"
	.string "Coming soon!$"

Astridale_EventScript_GymSign_Text_0:
# 32 "data/maps/Astridale/scripts.pory"
	.string "Astridale Gym\n"
	.string "Leader: Viviane\n"
	.string "The soft-spoken fairy beauty$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0:
# 42 "data/maps/Astridale/scripts.pory"
	.string "The gym leader, Viviane, is not in today.\n"
	.string "Sigh... she's been acting strange lately.\l"
	.string "Ever since the construction on the\l"
	.string "other side of the city began, she hasn't\l"
	.string "been herself.\l"
	.string "She's not taking any challengers at the\l"
	.string "moment. You'll have to come back later.$"

Astridale_EventScript_ConstructionMan1_Dialogue_Text_0:
# 60 "data/maps/Astridale/scripts.pory"
	.string "Hey ho! The construction's halted for\n"
	.string "the time being.\l"
	.string "There have been strange happenings\l"
	.string "lately.\l"
	.string "Our equipment keeps mysteriously\l"
	.string "breaking, materials have gone missing...\l"
	.string "We don't know what to make of it.\l"
	.string "It would be crazy if someone were\l"
	.string "sabotaging us, wouldn't it?\l"
	.string "Hahahaha!$"

Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0:
# 80 "data/maps/Astridale/scripts.pory"
	.string "I'm excited about the construction!\n"
	.string "I hear they're building a biiiig\l"
	.string "department store!\l"
	.string "I bet they'll have lots of games to sell!$"

Astridale_EventScript_OldMan_Dialogue_Text_0:
# 87 "data/maps/Astridale/scripts.pory"
	.string "The citizens of Astridale are divided\n"
	.string "about the construction.\l"
	.string "The younger crowd seems excited about\l"
	.string "it, while us old folk ...\l"
	.string "Well, we worry.$"

Astridale_EventScript_OldWoman_Dialogue_Text_0:
# 94 "data/maps/Astridale/scripts.pory"
	.string "The construction on the other side of\n"
	.string "the city is a bad idea.\l"
	.string "It's going to ruin the peaceful\l"
	.string "atmosphere of Astridale.\l"
	.string "I don't like it one bit.$"

Astridale_EventScript_Lady_Dialogue_Text_0:
# 101 "data/maps/Astridale/scripts.pory"
	.string "The gym leader, Viviane, lives in that\n"
	.string "old house on the hill, with her family.\l"
	.string "They're sweet people, usually, but\l"
	.string "Viviane's been so mean lately...\l"
	.string "I wonder what's going on...$"

VivianeName::
# 5 "data/maps/Astridale/scripts.pory"
	.string "Viviane$"
