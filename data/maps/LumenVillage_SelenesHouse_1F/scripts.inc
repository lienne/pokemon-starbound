LumenVillage_SelenesHouse_1F_MapScripts::
# 2 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_SelenesHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LumenVillage_SelenesHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call LumenVillage_SelenesHouse_1F_EventScript_SpawnMom
	return


LumenVillage_SelenesHouse_1F_EventScript_SpawnMom::
# 8 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	setobjectxyperm Selenes_House_Mom, 8, 6
	return

