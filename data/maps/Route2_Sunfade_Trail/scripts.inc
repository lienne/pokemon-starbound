Route2_Sunfade_Trail_MapScripts::
	.byte 0


SunfadeTrail_EventScript_RouteSign::
# 6 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_EventScript_RouteSign_Text_0, type = MSGBOX_SIGN
	return


SunfadeTrail_EventScript_BugCatcher_Simeon::
# 10 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_SIMEON, SunfadeTrail_EventScript_BugCatcher_Simeon_Text_0, SunfadeTrail_EventScript_BugCatcher_Simeon_Text_1
# 11 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_EventScript_BugCatcher_Simeon_Text_2, type = MSGBOX_NPC
	return


SunfadeTrail_EventScript_Boy_Tim::
# 15 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_TIM, SunfadeTrail_EventScript_Boy_Tim_Text_0, SunfadeTrail_EventScript_Boy_Tim_Text_1
# 16 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_EventScript_Boy_Tim_Text_2, type = MSGBOX_NPC
	return


SunfadeTrail_EventScript_RouteSign_Text_0:
# 6 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Sunfade Trail$"

SunfadeTrail_EventScript_BugCatcher_Simeon_Text_0:
# 10 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Passing through?\nNot without meeting my Bug\lPokémon you aren't!$"

SunfadeTrail_EventScript_BugCatcher_Simeon_Text_1:
# 10 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "You were supposed to meet them,\nnot beat them...$"

SunfadeTrail_EventScript_BugCatcher_Simeon_Text_2:
# 11 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Bug Pokémon are my favorite... when\n"
	.string "they're not nibbling on me!$"

SunfadeTrail_EventScript_Boy_Tim_Text_0:
# 15 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I'm training to get through\nWhispering Grove.\lWant to train with me?$"

SunfadeTrail_EventScript_Boy_Tim_Text_1:
# 15 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Wow! Amazing Pokémon!$"

SunfadeTrail_EventScript_Boy_Tim_Text_2:
# 16 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Whispering Grove has lots of\n"
	.string "Poison-type Pokémon... I keep getting\l"
	.string "overwhelmed!$"
