SolsticeTown_House2_MapScripts::
	.byte 0


SolsticeTown_House2_EventScript_Man_Dialogue::
# 6 "data/maps/SolsticeTown_House2/scripts.pory"
	applymovement SolsticeTown_House2_Man, SolsticeTown_House2_EventScript_Man_Dialogue_Movement_0
# 7 "data/maps/SolsticeTown_House2/scripts.pory"
	msgbox SolsticeTown_House2_EventScript_Man_Dialogue_Text_0, MSGBOX_NPC
	return


# 6 "data/maps/SolsticeTown_House2/scripts.pory"
SolsticeTown_House2_EventScript_Man_Dialogue_Movement_0:
# 6 "data/maps/SolsticeTown_House2/scripts.pory"
	face_player
	step_end

SolsticeTown_House2_EventScript_Man_Dialogue_Text_0:
# 7 "data/maps/SolsticeTown_House2/scripts.pory"
	.string "I'm a teacher.\p"
	.string "We used to have a “bring your Pokémon\n"
	.string "to school” day.\p"
	.string "Nowadays, kids bring their Pokémon to\n"
	.string "school every day…$"
