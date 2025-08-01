LumenVillage_SelenesHouse_2F_MapScripts::
# 25 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 26 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	compare VAR_INTRO_SCENE, 1
	goto_if_lt LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	playbgm MUS_NONE, 1
	return

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 1, LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	setvar VAR_INTRO_SCENE, 2
# 5 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	checkplayergender
# 6 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
	return

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 7 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LUMEN_VILLAGE_NPCS
# 8 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_INTRO_NPC
# 9 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	delay 60
# 10 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 11 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	playse SE_LEDGE
# 12 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	waitse
# 13 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	msgbox LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 16 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	special StartWallClock
# 17 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	waitstate
# 18 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 19 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	startquest QUEST_1_MEDS_FOR_JIRACHI
# 20 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	openquestmenu
	return


# 10 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 10 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	jump_left
	step_end

LumenVillage_SelenesHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 14 "data/maps/LumenVillage_SelenesHouse_2F/scripts.pory"
	.string "What time is it?$"
