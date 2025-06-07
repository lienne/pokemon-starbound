StarlitPath_MapScripts::
	.byte 0


StarlitPath_EventScript_RouteSign::
# 6 "data/maps/StarlitPath/scripts.pory"
	lockall
# 7 "data/maps/StarlitPath/scripts.pory"
	msgbox StarlitPath_EventScript_RouteSign_Text_0
# 9 "data/maps/StarlitPath/scripts.pory"
	releaseall
	return


StarlitPath_LittleGirl_Dialogue::
# 13 "data/maps/StarlitPath/scripts.pory"
	lockall
# 14 "data/maps/StarlitPath/scripts.pory"
	applymovement StarlitPath_LittleGirl, StarlitPath_LittleGirl_Dialogue_Movement_0
# 15 "data/maps/StarlitPath/scripts.pory"
	msgbox StarlitPath_LittleGirl_Dialogue_Text_0
# 17 "data/maps/StarlitPath/scripts.pory"
	releaseall
	return


StarlitPath_Youngster_Dialogue::
# 21 "data/maps/StarlitPath/scripts.pory"
	lockall
# 22 "data/maps/StarlitPath/scripts.pory"
	applymovement StarlitPath_Youngster, StarlitPath_LittleGirl_Dialogue_Movement_0
# 23 "data/maps/StarlitPath/scripts.pory"
	msgbox StarlitPath_Youngster_Dialogue_Text_0
# 25 "data/maps/StarlitPath/scripts.pory"
	releaseall
	return


StarlitPath_OldWoman_Dialogue::
# 29 "data/maps/StarlitPath/scripts.pory"
	lockall
# 30 "data/maps/StarlitPath/scripts.pory"
	applymovement StarlitPath_OldWoman, StarlitPath_LittleGirl_Dialogue_Movement_0
# 31 "data/maps/StarlitPath/scripts.pory"
	msgbox StarlitPath_OldWoman_Dialogue_Text_0
# 33 "data/maps/StarlitPath/scripts.pory"
	releaseall
	return


# 14 "data/maps/StarlitPath/scripts.pory"
StarlitPath_LittleGirl_Dialogue_Movement_0:
# 14 "data/maps/StarlitPath/scripts.pory"
	face_player
	step_end

StarlitPath_EventScript_RouteSign_Text_0:
# 7 "data/maps/StarlitPath/scripts.pory"
	.string "Starlit Path\n"
	.string "Where the stars walk with you$"

StarlitPath_LittleGirl_Dialogue_Text_0:
# 15 "data/maps/StarlitPath/scripts.pory"
	.string "The flowers here glow at night...\l"
	.string "Grandma says it's because\nthe stars shine on them!$"

StarlitPath_Youngster_Dialogue_Text_0:
# 23 "data/maps/StarlitPath/scripts.pory"
	.string "If your Pokémon get tired, take them to\na Pokémon Center.\l"
	.string "There's a Pokémon Center in Solstice\nTown nearby.$"

StarlitPath_OldWoman_Dialogue_Text_0:
# 31 "data/maps/StarlitPath/scripts.pory"
	.string "I love looking at the stars!\l"
	.string "They make me feel so small...$"
