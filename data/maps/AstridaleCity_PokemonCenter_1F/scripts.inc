AstridaleCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AstridaleCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AstridaleCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ASTRIDALE
	return


AstridaleCity_PokemonCenter_1F_EventScript_Nurse::
# 8 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, Astridale_Nurse
# 9 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 10 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 11 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 12 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	release
	return


Astridale_PokemonCenter_Construction_Supervisor_Dialogue::
# 16 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	msgbox Astridale_PokemonCenter_Construction_Supervisor_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_PokemonCenter_Youngster_Dialogue::
# 22 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	msgbox Astridale_PokemonCenter_Youngster_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_PokemonCenter_Woman_Dialogue::
# 27 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	msgbox Astridale_PokemonCenter_Woman_Dialogue_Text_0, MSGBOX_NPC
	return


Astridale_PokemonCenter_Construction_Supervisor_Dialogue_Text_0:
# 16 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	.string "I'm taking a break from working at the\n"
	.string "construction site.\p"
	.string "I'm the supervisor, but I still need to\n"
	.string "stand around in the sun all day.\p"
	.string "It's exhausting.$"

Astridale_PokemonCenter_Youngster_Dialogue_Text_0:
# 22 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	.string "I hope they build a place where I can\n"
	.string "ride my skateboard.\p"
	.string "I keep being told I can't ride it around\n"
	.string "the towncenter…$"

Astridale_PokemonCenter_Woman_Dialogue_Text_0:
# 27 "data/maps/AstridaleCity_PokemonCenter_1F/scripts.pory"
	.string "I'm honestly on the fence about the\n"
	.string "construction.\p"
	.string "I know progress is inevitable, but I\n"
	.string "also worry about our traditions.$"
