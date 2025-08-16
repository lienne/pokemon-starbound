Caelestic_MapScripts::
# 2 "data/maps/Caelestic/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Caelestic_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Caelestic_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Caelestic/scripts.pory"
	setflag FLAG_VISITED_CAELESTIC
	return

