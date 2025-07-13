Route1_StarlitPath_MapScripts::
	.byte 0


StarlitPath_EventScript_RouteSign::
# 6 "data/maps/Route1_StarlitPath/scripts.pory"
	lockall
# 7 "data/maps/Route1_StarlitPath/scripts.pory"
	msgbox StarlitPath_EventScript_RouteSign_Text_0
# 9 "data/maps/Route1_StarlitPath/scripts.pory"
	releaseall
	return


StarlitPath_LittleGirl_Dialogue::
# 13 "data/maps/Route1_StarlitPath/scripts.pory"
	applymovement StarlitPath_LittleGirl, StarlitPath_LittleGirl_Dialogue_Movement_0
# 14 "data/maps/Route1_StarlitPath/scripts.pory"
	msgbox StarlitPath_LittleGirl_Dialogue_Text_0, MSGBOX_NPC
	return


StarlitPath_Youngster_Dialogue::
# 19 "data/maps/Route1_StarlitPath/scripts.pory"
	applymovement StarlitPath_Youngster, StarlitPath_LittleGirl_Dialogue_Movement_0
# 20 "data/maps/Route1_StarlitPath/scripts.pory"
	msgbox StarlitPath_Youngster_Dialogue_Text_0, MSGBOX_NPC
	return


StarlitPath_OldWoman_Dialogue::
# 25 "data/maps/Route1_StarlitPath/scripts.pory"
	applymovement StarlitPath_OldWoman, StarlitPath_LittleGirl_Dialogue_Movement_0
# 26 "data/maps/Route1_StarlitPath/scripts.pory"
	msgbox StarlitPath_OldWoman_Dialogue_Text_0, MSGBOX_NPC
	return


# 13 "data/maps/Route1_StarlitPath/scripts.pory"
StarlitPath_LittleGirl_Dialogue_Movement_0:
# 13 "data/maps/Route1_StarlitPath/scripts.pory"
	face_player
	step_end

StarlitPath_EventScript_RouteSign_Text_0:
# 7 "data/maps/Route1_StarlitPath/scripts.pory"
	.string "Starlit Path\n"
	.string "“Where the stars walk with you”$"

StarlitPath_LittleGirl_Dialogue_Text_0:
# 14 "data/maps/Route1_StarlitPath/scripts.pory"
	.string "The flowers here glow at night…\p"
	.string "Grandma says it's because the stars\n"
	.string "shine on them!$"

StarlitPath_Youngster_Dialogue_Text_0:
# 20 "data/maps/Route1_StarlitPath/scripts.pory"
	.string "If your Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Solstice\n"
	.string "Town nearby.$"

StarlitPath_OldWoman_Dialogue_Text_0:
# 26 "data/maps/Route1_StarlitPath/scripts.pory"
	.string "I love looking at the stars!\p"
	.string "They make me feel so small…$"
