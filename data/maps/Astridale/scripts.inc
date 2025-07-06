Astridale_MapScripts::
# 2 "data/maps/Astridale/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Astridale_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Astridale_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_ge Astridale_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Astridale_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Astridale/scripts.pory"
	setobjectxyperm Astridale_Gym_Door_Man, 22, 17
	return


Astridale_EventScript_CitySign::
# 14 "data/maps/Astridale/scripts.pory"
	lockall
# 15 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_CitySign_Text_0
# 17 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_ConstructionSign::
# 21 "data/maps/Astridale/scripts.pory"
	lockall
# 22 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionSign_Text_0
# 24 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_DeptStoreSign::
# 28 "data/maps/Astridale/scripts.pory"
	lockall
# 29 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_DeptStoreSign_Text_0
# 31 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_GymSign::
# 35 "data/maps/Astridale/scripts.pory"
	lockall
# 36 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_GymSign_Text_0
# 39 "data/maps/Astridale/scripts.pory"
	releaseall
	return


Astridale_EventScript_Gym_Door_Man_Dialogue::
# 43 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 0
	goto_if_eq Astridale_EventScript_Gym_Door_Man_Dialogue_1
# 51 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_eq Astridale_EventScript_Gym_Door_Man_Dialogue_2
# 58 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 59 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_EventScript_Gym_Door_Man_Dialogue_1:
# 44 "data/maps/Astridale/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 1
# 45 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 46 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_EventScript_Gym_Door_Man_Dialogue_2:
# 52 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 53 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_1, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan1_Dialogue::
# 67 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 0
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 67 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 1
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 78 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 79 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_EventScript_ConstructionMan1_Dialogue_1:
# 68 "data/maps/Astridale/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 2
# 69 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 70 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan2_Dialogue::
# 89 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 90 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan2_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Machoke1_Dialogue::
# 99 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Machoke1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 100 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Machoke1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Machoke2_Dialogue::
# 105 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Machoke2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 106 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Machoke1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Vigorith1_Dialogue::
# 111 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Vigoroth1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 112 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Vigorith1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Vigorith2_Dialogue::
# 117 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Vigoroth2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 118 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Vigorith1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Gameboy_Kid_Dialogue::
# 123 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gameboy_Kid, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 124 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_OldMan_Dialogue::
# 130 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldMan, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 131 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldMan_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_OldWoman_Dialogue::
# 137 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldWoman, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 138 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldWoman_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Lady_Dialogue::
# 144 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Lady, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 145 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Lady_Dialogue_Text_0, MSGBOX_NPC
	return


# 45 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0:
# 45 "data/maps/Astridale/scripts.pory"
	face_player
	step_end

Astridale_EventScript_CitySign_Text_0:
# 15 "data/maps/Astridale/scripts.pory"
	.string "Astridale\n"
	.string "“Growing towards tomorrow without\l"
	.string "forgetting yesterday”$"

Astridale_EventScript_ConstructionSign_Text_0:
# 22 "data/maps/Astridale/scripts.pory"
	.string "Construction Site\n"
	.string "Mind the dust!$"

Astridale_EventScript_DeptStoreSign_Text_0:
# 29 "data/maps/Astridale/scripts.pory"
	.string "Astridale Department Store\n"
	.string "Coming soon!$"

Astridale_EventScript_GymSign_Text_0:
# 36 "data/maps/Astridale/scripts.pory"
	.string "Astridale Gym\n"
	.string "Leader: Viviane\n"
	.string "The soft-spoken fairy beauty$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0:
# 46 "data/maps/Astridale/scripts.pory"
	.string "The gym leader, Viviane, is not in today.\n"
	.string "Sigh... she's been acting strange lately.\l"
	.string "Ever since the construction on the\l"
	.string "other side of the city began, she hasn't\l"
	.string "been herself.\l"
	.string "She's not taking any challengers at the\l"
	.string "moment. You'll have to come back later.$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_1:
# 53 "data/maps/Astridale/scripts.pory"
	.string "The gym leader, Viviane, just came back\n"
	.string "to the gym.\l"
	.string "She seems to be in a bad mood, though...\l"
	.string "I'd proceed with caution if I were you.$"

Astridale_EventScript_ConstructionMan1_Dialogue_Text_0:
# 70 "data/maps/Astridale/scripts.pory"
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

Astridale_EventScript_ConstructionMan2_Dialogue_Text_0:
# 90 "data/maps/Astridale/scripts.pory"
	.string "...zzz...\n"
	.string "...zzz...\l"
	.string "Huh? Oh, sorry, I must've dozed off.\l"
	.string "This is the warehouse where we keep all\l"
	.string "our construction equipment and\l"
	.string "materials.\l"
	.string "I'm supposed to be keeping watch, but\l"
	.string "I'm just so tired...\l"
	.string "...zzz...$"

Astridale_EventScript_Machoke1_Dialogue_Text_0:
# 100 "data/maps/Astridale/scripts.pory"
	.string "Machoke is stomping down some soil. It\n"
	.string "looks like it's working hard.$"

Astridale_EventScript_Vigorith1_Dialogue_Text_0:
# 112 "data/maps/Astridale/scripts.pory"
	.string "Vigoroth is carrying a heavy load of\n"
	.string "construction materials.\l"
	.string "It looks like it's working hard.$"

Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0:
# 124 "data/maps/Astridale/scripts.pory"
	.string "I'm excited about the construction!\n"
	.string "I hear they're building a biiiig\l"
	.string "department store!\l"
	.string "I bet they'll have lots of games to sell!$"

Astridale_EventScript_OldMan_Dialogue_Text_0:
# 131 "data/maps/Astridale/scripts.pory"
	.string "The citizens of Astridale are divided\n"
	.string "about the construction.\l"
	.string "The younger crowd seems excited about\l"
	.string "it, while us old folk ...\l"
	.string "Well, we worry.$"

Astridale_EventScript_OldWoman_Dialogue_Text_0:
# 138 "data/maps/Astridale/scripts.pory"
	.string "The construction on the other side of\n"
	.string "the city is a bad idea.\l"
	.string "It's going to ruin the peaceful\l"
	.string "atmosphere of Astridale.\l"
	.string "I don't like it one bit.$"

Astridale_EventScript_Lady_Dialogue_Text_0:
# 145 "data/maps/Astridale/scripts.pory"
	.string "The gym leader, Viviane, lives in that\n"
	.string "old house on the hill, with her family.\l"
	.string "They're sweet people, usually, but\l"
	.string "Viviane's been so mean lately...\l"
	.string "I wonder what's going on...$"

VivianeName::
# 9 "data/maps/Astridale/scripts.pory"
	.string "Viviane$"
