SolsticeTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SolsticeTown_PokemonCenter_1F_OnTransition
	.byte 0


SolsticeTown_PokemonCenter_1F_OnTransition::
# 6 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOLSTICE_TOWN
	return


SolsticeTown_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, SOLSTICE_TOWN_NURSE
# 11 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 13 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	release
	return


SolsticeTown_PokemonCenter_Gentleman_Dialogue::
# 18 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	applymovement SolsticeTown_PokemonCenter_Gentleman, SolsticeTown_PokemonCenter_Gentleman_Dialogue_Movement_0
# 19 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	msgbox SolsticeTown_PokemonCenter_Gentleman_Dialogue_Text_0, type = MSGBOX_NPC
	return


SolsticeTown_PokemonCenter_LittleGirl_Dialogue::
# 24 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	applymovement SolsticeTown_PokemonCenter_LittleGirl, SolsticeTown_PokemonCenter_Gentleman_Dialogue_Movement_0
# 25 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	msgbox SolsticeTown_PokemonCenter_LittleGirl_Dialogue_Text_0, type = MSGBOX_NPC
	return


# 18 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
SolsticeTown_PokemonCenter_Gentleman_Dialogue_Movement_0:
# 18 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

SolsticeTown_PokemonCenter_Gentleman_Dialogue_Text_0:
# 19 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is for any\n"
	.string "Pokémon trainer to use.\l"
	.string "Naturally, that means you're welcome to\l"
	.string "use it, too.$"

SolsticeTown_PokemonCenter_LittleGirl_Dialogue_Text_0:
# 25 "data/maps/SolsticeTown_PokemonCenter_1F/scripts.pory"
	.string "I love the Pokémon Center!\l"
	.string "It's so cozy and warm in here!$"
