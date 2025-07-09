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
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_lt Astridale_EventScript_Gym_Door_Man_Dialogue_1
# 50 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_eq Astridale_EventScript_Gym_Door_Man_Dialogue_2
# 57 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 58 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_2, MSGBOX_NPC
	return

Astridale_EventScript_Gym_Door_Man_Dialogue_1:
# 44 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 45 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_EventScript_Gym_Door_Man_Dialogue_2:
# 51 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gym_Door_Man, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 52 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gym_Door_Man_Dialogue_Text_1, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan1_Dialogue::
# 65 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 0
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 65 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 1
	goto_if_eq Astridale_EventScript_ConstructionMan1_Dialogue_1
# 76 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 77 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_NPC
	return

Astridale_EventScript_ConstructionMan1_Dialogue_1:
# 66 "data/maps/Astridale/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 2
# 67 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 68 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan2_Dialogue::
# 87 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 88 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan2_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Machoke1_Dialogue::
# 97 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Machoke1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 98 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Machoke1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Machoke2_Dialogue::
# 103 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Machoke2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 104 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Machoke1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Vigorith1_Dialogue::
# 109 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Vigoroth1, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 110 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Vigorith1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Vigorith2_Dialogue::
# 115 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Vigoroth2, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 116 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Vigorith1_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Gameboy_Kid_Dialogue::
# 121 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Gameboy_Kid, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 122 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_OldMan_Dialogue::
# 128 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldMan, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 129 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldMan_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_OldWoman_Dialogue::
# 135 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_OldWoman, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 136 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_OldWoman_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_Lady_Dialogue::
# 142 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Lady, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 143 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Lady_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan3_Dialogue::
# 149 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 9
	goto_if_lt Astridale_EventScript_ConstructionMan3_Dialogue_1
# 153 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_ConstructionMan3_Dialogue_Post_Gym, MSGBOX_NPC
	return

Astridale_EventScript_ConstructionMan3_Dialogue_1:
# 150 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_ConstructionMan3_Dialogue_Pre_Gym, MSGBOX_NPC
	return


Astridale_EventScript_ConstructionMan3_Trigger::
# 158 "data/maps/Astridale/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 9
	goto_if_lt Astridale_EventScript_ConstructionMan3_Trigger_1
	return

Astridale_EventScript_ConstructionMan3_Trigger_1:
# 159 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan3, Astridale_EventScript_ConstructionMan3_Trigger_Movement_0
# 160 "data/maps/Astridale/scripts.pory"
	playse SE_PIN
# 161 "data/maps/Astridale/scripts.pory"
	waitse
# 162 "data/maps/Astridale/scripts.pory"
	waitmovement 0
# 163 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan3, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 164 "data/maps/Astridale/scripts.pory"
	waitmovement 0
# 165 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_ConstructionMan3_Dialogue_Pre_Gym, MSGBOX_AUTOCLOSE
# 166 "data/maps/Astridale/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_EventScript_ConstructionMan3_Trigger_Movement_1
# 167 "data/maps/Astridale/scripts.pory"
	waitmovement 0
# 168 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan3, Astridale_EventScript_ConstructionMan3_Trigger_Movement_2
# 169 "data/maps/Astridale/scripts.pory"
	waitmovement 0
	return


Astridale_EventScript_ConstructionMan_Cutter_Dialogue::
# 174 "data/maps/Astridale/scripts.pory"
	lockall
# 175 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_ConstructionMan_Cutter, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 176 "data/maps/Astridale/scripts.pory"
	waitmovement 0
# 177 "data/maps/Astridale/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, Astridale_EventScript_ConstructionMan_Cutter_Dialogue_2
# 185 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan_Cutter_Dialogue_Text_1, MSGBOX_AUTOCLOSE
# 189 "data/maps/Astridale/scripts.pory"
	giveitem ITEM_HM_CUT
# 190 "data/maps/Astridale/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 191 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan_Cutter_Dialogue_Text_0, MSGBOX_AUTOCLOSE
Astridale_EventScript_ConstructionMan_Cutter_Dialogue_1:
# 197 "data/maps/Astridale/scripts.pory"
	releaseall
	return

Astridale_EventScript_ConstructionMan_Cutter_Dialogue_2:
# 178 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_ConstructionMan_Cutter_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	goto Astridale_EventScript_ConstructionMan_Cutter_Dialogue_1


Astridale_EventScript_Scyther_Dialogue::
# 201 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Scyther, Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0
# 202 "data/maps/Astridale/scripts.pory"
	msgbox Astridale_EventScript_Scyther_Dialogue_Text_0, MSGBOX_NPC
# 204 "data/maps/Astridale/scripts.pory"
	applymovement Astridale_Scyther, Astridale_EventScript_Scyther_Dialogue_Movement_0
	return


# 44 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_Gym_Door_Man_Dialogue_Movement_0:
# 44 "data/maps/Astridale/scripts.pory"
	face_player
	step_end

# 159 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_ConstructionMan3_Trigger_Movement_0:
# 159 "data/maps/Astridale/scripts.pory"
	emote_exclamation_mark
	step_end

# 166 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_ConstructionMan3_Trigger_Movement_1:
# 166 "data/maps/Astridale/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_ConstructionMan3_Trigger_Movement_2:
# 168 "data/maps/Astridale/scripts.pory"
	face_down
	step_end

# 204 "data/maps/Astridale/scripts.pory"
Astridale_EventScript_Scyther_Dialogue_Movement_0:
# 204 "data/maps/Astridale/scripts.pory"
	face_right
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
	.string "Leader: Viviane\l"
	.string "The soft-spoken fairy beauty$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_0:
# 45 "data/maps/Astridale/scripts.pory"
	.string "The Gym Leader, Viviane, is not in today.\p"
	.string "Sigh… she's been acting strange lately.\p"
	.string "Ever since the construction on the\n"
	.string "other side of the city began, she hasn't\l"
	.string "been herself.\p"
	.string "She's not taking any challengers at the\n"
	.string "moment. You'll have to come back later.$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_1:
# 52 "data/maps/Astridale/scripts.pory"
	.string "The Gym Leader, Viviane, just came back\n"
	.string "to the gym.\p"
	.string "She seems to be in a bad mood, though…\p"
	.string "I'd proceed with caution if I were you.$"

Astridale_EventScript_Gym_Door_Man_Dialogue_Text_2:
# 58 "data/maps/Astridale/scripts.pory"
	.string "Viviane seems to be a in a better mood\n"
	.string "lately.\p"
	.string "She really went a bit crazy about the\n"
	.string "construction for a while.\p"
	.string "I wonder what was going on?$"

Astridale_EventScript_ConstructionMan1_Dialogue_Text_0:
# 68 "data/maps/Astridale/scripts.pory"
	.string "Hey ho! The construction's halted for\n"
	.string "the time being.\p"
	.string "There have been strange happenings\n"
	.string "lately.\p"
	.string "Our equipment keeps mysteriously\n"
	.string "breaking, materials have gone missing…\p"
	.string "We don't know what to make of it.\p"
	.string "It would be crazy if someone were\n"
	.string "sabotaging us, wouldn't it?\p"
	.string "Hahahaha!$"

Astridale_EventScript_ConstructionMan2_Dialogue_Text_0:
# 88 "data/maps/Astridale/scripts.pory"
	.string "…zzz…\p"
	.string "…zzz…\p"
	.string "Huh? Oh, sorry, I must've dozed off.\p"
	.string "This is the warehouse where we keep all\n"
	.string "our construction equipment and\l"
	.string "materials.\p"
	.string "I'm supposed to be keeping watch, but\n"
	.string "I'm just so tired…\p"
	.string "…zzz…$"

Astridale_EventScript_Machoke1_Dialogue_Text_0:
# 98 "data/maps/Astridale/scripts.pory"
	.string "Machoke is stomping down some soil.\l"
	.string "It looks like it's working hard.$"

Astridale_EventScript_Vigorith1_Dialogue_Text_0:
# 110 "data/maps/Astridale/scripts.pory"
	.string "Vigoroth is carrying a heavy load of\n"
	.string "construction materials.\l"
	.string "It looks like it's working hard.$"

Astridale_EventScript_Gameboy_Kid_Dialogue_Text_0:
# 122 "data/maps/Astridale/scripts.pory"
	.string "I'm excited about the construction!\p"
	.string "I hear they're building a biiiig\n"
	.string "department store!\p"
	.string "I bet they'll have lots of games to sell!$"

Astridale_EventScript_OldMan_Dialogue_Text_0:
# 129 "data/maps/Astridale/scripts.pory"
	.string "The citizens of Astridale are divided\n"
	.string "about the construction.\p"
	.string "The younger crowd seems excited about\n"
	.string "it, while us old folk…\p"
	.string "Well, we worry.$"

Astridale_EventScript_OldWoman_Dialogue_Text_0:
# 136 "data/maps/Astridale/scripts.pory"
	.string "The construction on the other side of\n"
	.string "the city is a bad idea.\p"
	.string "It's going to ruin the peaceful\n"
	.string "atmosphere of Astridale.\p"
	.string "I don't like it one bit.$"

Astridale_EventScript_Lady_Dialogue_Text_0:
# 143 "data/maps/Astridale/scripts.pory"
	.string "The Gym Leader, Viviane, lives in that\n"
	.string "old house on the hill, with her family.\p"
	.string "They're sweet people, usually, but\n"
	.string "Viviane's been so mean lately…\p"
	.string "I wonder what's going on…$"

Astridale_EventScript_ConstructionMan_Cutter_Dialogue_Text_0:
# 178 "data/maps/Astridale/scripts.pory"
	.string "That Hidden Machine, or HM for short, is\n"
	.string "Cut.\p"
	.string "An HM move can be used by Pokémon\n"
	.string "outside of battle.\p"
	.string "Any Pokémon that's learned Cut can\n"
	.string "chop down thin trees if the trainer has\l"
	.string "earned the Charm Badge.\p"
	.string "And, unlike a TM, an HM can be used more\n"
	.string "than once.\p"
	.string "Isn't that nifty?$"

Astridale_EventScript_ConstructionMan_Cutter_Dialogue_Text_1:
# 185 "data/maps/Astridale/scripts.pory"
	.string "I'm having my Pokémon use Cut on the\n"
	.string "trees here to make way for the\l"
	.string "construction.\p"
	.string "You look like a promising young trainer.\p"
	.string "I have an extra, so why don't you take\n"
	.string "it?\p"
	.string "It's mighty useful.$"

Astridale_EventScript_Scyther_Dialogue_Text_0:
# 202 "data/maps/Astridale/scripts.pory"
	.string "Scyther is using Cut to cut down some\n"
	.string "trees.\l"
	.string "It looks like it's working hard.$"

VivianeName::
# 9 "data/maps/Astridale/scripts.pory"
	.string "Viviane$"

Astridale_ConstructionMan3_Dialogue_Pre_Gym::
# 207 "data/maps/Astridale/scripts.pory"
	.string "Hey kid!\p"
	.string "Sorry, but I can't let you through here.\p"
	.string "We have some heavy construction\n"
	.string "equipment coming through soon, and the\l"
	.string "way is blocked.$"

Astridale_ConstructionMan3_Dialogue_Post_Gym::
# 213 "data/maps/Astridale/scripts.pory"
	.string "The construction was halted for a\n"
	.string "while, but now it's back on track.$"
