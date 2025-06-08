SolsticeTown_MapScripts::
	.byte 0


SolsticeTown_EventScript_TownSign::
# 6 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 7 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_TownSign_Text_0
# 9 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Girl1_Dialogue::
# 13 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 14 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl1_Dialogue_Text_0, type = MSGBOX_NPC
# 15 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
	return


SolsticeTown_EventScript_Boy1_Dialogue::
# 19 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 20 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Boy1_Dialogue_Text_0, type = MSGBOX_NPC
# 21 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
	return


SolsticeTown_EventScript_Girl2_Dialogue::
# 25 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 26 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl2_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 13 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_0:
# 13 "data/maps/SolsticeTown/scripts.pory"
	face_player
	step_end

# 15 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_1:
# 15 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 21 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy1_Dialogue_Movement_0:
# 21 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

SolsticeTown_EventScript_TownSign_Text_0:
# 7 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town\n"
	.string "“The balance point between light and\l"
	.string "shadow”$"

SolsticeTown_EventScript_Girl1_Dialogue_Text_0:
# 14 "data/maps/SolsticeTown/scripts.pory"
	.string "Did you know you can press Start to\n"
	.string "check your Pokémon summary?$"

SolsticeTown_EventScript_Boy1_Dialogue_Text_0:
# 20 "data/maps/SolsticeTown/scripts.pory"
	.string "I use the Pokémon Summary screen to\n"
	.string "check my Pokémon's nature.$"

SolsticeTown_EventScript_Girl2_Dialogue_Text_0:
# 26 "data/maps/SolsticeTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"
