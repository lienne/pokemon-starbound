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
	msgbox SunfadeTrail_BugCatcher_Simeon_Dialogue, MSGBOX_NPC
	return


SunfadeTrail_EventScript_Boy_Tim::
# 18 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_TIM, SunfadeTrail_Boy_Tim_Intro_Text, SunfadeTrail_Boy_Tim_Lose_Text
# 19 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Boy_Tim_Dialogue, MSGBOX_NPC
	return


SunfadeTrail_EventScript_Youngster_Billy::
# 23 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_BILLY, SunfadeTrail_Youngster_Billy_Intro_Text, SunfadeTrail_Youngster_Billy_Lose_Text
# 24 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Youngster_Billy_Dialogue, MSGBOX_NPC
	return


SunfadeTrail_EventScript_Anabel::
# 28 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Anabel_Dialogue, MSGBOX_NPC
	return


SunfadeTrail_EventScript_House_OldMan::
# 32 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_OldMan_Dialogue, MSGBOX_NPC
	return


SunfadeTrail_EventScript_Healing_Lady::
# 36 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	applymovement SunfadeTrail_Healing_Lady, SunfadeTrail_EventScript_Healing_Lady_Movement_0
# 37 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Healing_Lady_Dialogue, MSGBOX_NPC
# 39 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


SunfadeTrail_EventScript_Lass_Haley::
# 43 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, SunfadeTrail_Lass_Haley_Intro_Text, SunfadeTrail_Lass_Haley_Lose_Text
# 44 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	msgbox SunfadeTrail_Lass_Haley_Dialogue, MSGBOX_NPC
	return


# 36 "data/maps/Route2_Sunfade_Trail/scripts.pory"
SunfadeTrail_EventScript_Healing_Lady_Movement_0:
# 36 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	face_player
	step_end

SunfadeTrail_EventScript_RouteSign_Text_0:
# 7 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Sunfade Trail\n"
	.string "“A gentle path where day quietly gives\l"
	.string "way to dusk”$"

SunfadeTrail_BugCatcher_Simeon_Intro_Text::
# 47 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Passing through?\n"
	.string "Not without meeting my Bug Pokémon you\l"
	.string "aren't!$"

SunfadeTrail_BugCatcher_Simeon_Lose_Text::
# 52 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "You were supposed to meet them, not\n"
	.string "beat them…$"

SunfadeTrail_BugCatcher_Simeon_Dialogue::
# 56 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Bug Pokémon are my favorite… when\n"
	.string "they're not nibbling on me!$"

SunfadeTrail_Boy_Tim_Intro_Text::
# 60 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I'm training to get through Whispering\n"
	.string "Grove.\p"
	.string "Want to train with me?$"

SunfadeTrail_Boy_Tim_Lose_Text::
# 65 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Wow! Amazing Pokémon!$"

SunfadeTrail_Boy_Tim_Dialogue::
# 69 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Whispering Grove has lots of\n"
	.string "Poison-type Pokémon… I keep getting\l"
	.string "overwhelmed!$"

SunfadeTrail_Youngster_Billy_Intro_Text::
# 73 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I found a rare Pokémon in Sunfade Trail!\p"
	.string "Wanna see?$"

SunfadeTrail_Youngster_Billy_Lose_Text::
# 78 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I guess rare Pokémon aren't necessarily\n"
	.string "stronger…$"

SunfadeTrail_Youngster_Billy_Dialogue::
# 82 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Apparently Seedot are more common in\n"
	.string "Whispering Grove.$"

SunfadeTrail_Anabel_Dialogue::
# 86 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Lumen Village is a bit isolated from the\n"
	.string "rest of Astrea.\p"
	.string "You have to get through Whispering\n"
	.string "Grove and Solstice Town to get there.$"

SunfadeTrail_OldMan_Dialogue::
# 91 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I moved here from Myrren Town in my\n"
	.string "retirement.\p"
	.string "My old bones couldn't really take the\n"
	.string "cold anymore.$"

SunfadeTrail_Healing_Lady_Dialogue::
# 96 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I'm having a picnic by the water.\p"
	.string "It's really peaceful here.\p"
	.string "Why don't you stay for a minute and\n"
	.string "take a rest with me?$"

SunfadeTrail_Lass_Haley_Intro_Text::
# 102 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Did you hear? Astridale's under\n"
	.string "construction!$"

SunfadeTrail_Lass_Haley_Lose_Text::
# 106 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "Awee…$"

SunfadeTrail_Lass_Haley_Dialogue::
# 110 "data/maps/Route2_Sunfade_Trail/scripts.pory"
	.string "I hear that Astridale's Gym Leader isn't\n"
	.string "very happy with the expansion.$"
