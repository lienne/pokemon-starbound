BeginnerClearing_MapScripts::
# 2 "data/maps/BeginnerClearing/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MapScript_IntroCutscene
	.byte 0


MapScript_IntroCutscene::
# 6 "data/maps/BeginnerClearing/scripts.pory"
	lockall
# 7 "data/maps/BeginnerClearing/scripts.pory"
	msgbox MapScript_IntroCutscene_Text_0
# 8 "data/maps/BeginnerClearing/scripts.pory"
	msgbox MapScript_IntroCutscene_Text_1
# 9 "data/maps/BeginnerClearing/scripts.pory"
	msgbox MapScript_IntroCutscene_Text_2
# 10 "data/maps/BeginnerClearing/scripts.pory"
	releaseall
	return


MapScript_IntroCutscene_Text_0:
# 7 "data/maps/BeginnerClearing/scripts.pory"
	.string "Welcome to the Beginner Clearing!$"

MapScript_IntroCutscene_Text_1:
# 8 "data/maps/BeginnerClearing/scripts.pory"
	.string "This is where your adventure begins.$"

MapScript_IntroCutscene_Text_2:
# 9 "data/maps/BeginnerClearing/scripts.pory"
	.string "Prepare yourself for the journey ahead.$"
