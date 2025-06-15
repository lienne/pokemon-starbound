Route2_Sunfade_Trail_MapScripts::
	.byte 0


SunfadeTrail_EventScript_RouteSign::
# 6 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	lockall
# 7 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_EventScript_RouteSign_Text_0
# 9 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	releaseall
	return


SunfadeTrail_EventScript_BugCatcher_Simeon::
# 13 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_SIMEON, SunfadeTrail_BugCatcher_Simeon_Intro_Text, SunfadeTrail_BugCatcher_Simeon_Lose_Text
# 14 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_BugCatcher_Simeon_Dialogue, type = MSGBOX_NPC
	return


SunfadeTrail_EventScript_Boy_Tim::
# 18 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_TIM, SunfadeTrail_Boy_Tim_Intro_Text, SunfadeTrail_Boy_Tim_Lose_Text
# 19 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Boy_Tim_Dialogue, type = MSGBOX_NPC
	return


SunfadeTrail_EventScript_Healing_Lady::
# 23 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	applymovement SunfadeTrail_Healing_Lady, SunfadeTrail_EventScript_Healing_Lady_Movement_0
# 24 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_EventScript_Healing_Lady_Text_0, type = MSGBOX_NPC
# 28 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


# 23 "data/maps/Route2_Sunfade_Trail/scripts.pory"
SunfadeTrail_EventScript_Healing_Lady_Movement_0:
# 23 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	face_player
	step_end

SunfadeTrail_EventScript_RouteSign_Text_0:
# 7 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Sunfade Trail\n"
	.string "“A gentle path where day quietly gives\l"
	.string "way to dusk”$"

SunfadeTrail_EventScript_Healing_Lady_Text_0:
# 25 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I'm having a picnic by the water.\n"
	.string "It's really peaceful here.\l"
	.string "Why don't you stay for a minute and\l"
	.string "take a rest with me?$"

SunfadeTrail_BugCatcher_Simeon_Intro_Text::
# 31 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Passing through?\n"
	.string "Not without meeting my Bug\l"
	.string "Pokémon you aren't!$"

SunfadeTrail_BugCatcher_Simeon_Lose_Text::
# 35 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "You were supposed to meet them,\n"
	.string "not beat them...$"

SunfadeTrail_BugCatcher_Simeon_Dialogue::
# 39 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Bug Pokémon are my favorite... when\n"
	.string "they're not nibbling on me!$"

SunfadeTrail_Boy_Tim_Intro_Text::
# 44 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I'm training to get through\n"
	.string "Whispering Grove.\l"
	.string "Want to train with me?$"

SunfadeTrail_Boy_Tim_Lose_Text::
# 48 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Wow! Amazing Pokémon!$"

SunfadeTrail_Boy_Tim_Dialogue::
# 52 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Whispering Grove has lots of\n"
	.string "Poison-type Pokémon... I keep getting\l"
	.string "overwhelmed!$"
