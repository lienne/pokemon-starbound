CaelesticCity_PokemonCenter_1F_MapScripts::
	.byte 0


CaelesticCity_PokemonCenter_1F_EventScript_Nurse::
# 6 "data/maps/CaelesticCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, Caelestic_Nurse
# 7 "data/maps/CaelesticCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 8 "data/maps/CaelesticCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 9 "data/maps/CaelesticCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 10 "data/maps/CaelesticCity_PokemonCenter_1F/scripts.pory"
	release
	return

