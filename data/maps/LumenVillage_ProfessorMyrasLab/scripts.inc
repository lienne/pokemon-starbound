LumenVillage_ProfessorMyrasLab_MapScripts::
# 2 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_ENTER_LAB_AFTER_INTRO_SCENE, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 9 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_ENTER_LAB_AFTER_INTRO_SCENE, 1
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 11 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 12 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 13 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
# 15 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
	end


# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 10 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 12 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Jirachi seems to be doing a bit better\n"
	.string "now, thanks to you, {PLAYER}.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 15 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "However, I think it's best if we get it\n"
	.string "some more potent medicine.\l"
	.string "I know you've done a lot already, but\l"
	.string "would you be willing to go to Solstice\l"
	.string "Town to pick it up?\l"
	.string "It's just the next town over.\l"
	.string "You can take the Pokémon I lent you, of\l"
	.string "course.\l"
	.string "The PokéMart attendant will have it\l"
	.string "ready for you at my request.\l"
	.string "Thank you, {PLAYER}. We'll see you\l"
	.string "when you get back!$"
