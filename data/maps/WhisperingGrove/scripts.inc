WhisperingGrove_MapScripts::
	.byte 0


WhisperingGrove_EventScript_RouteSign::
# 6 "data/maps/WhisperingGrove/scripts.pory"
	lockall
# 7 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_EventScript_RouteSign_Text_0
# 9 "data/maps/WhisperingGrove/scripts.pory"
	releaseall
	return


WhisperingGrove_EventScript_BugCatcher_Lyle::
# 13 "data/maps/WhisperingGrove/scripts.pory"
	trainerbattle_single TRAINER_LYLE, WhisperingGrove_BugCatcher_Lyle_Intro_Text, WhisperingGrove_BugCatcher_Lyle_Lose_Text
# 14 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_BugCatcher_Lyle_Dialogue, type = MSGBOX_NPC
	return


WhisperingGrove_EventScript_AromaLady_Jaclyn::
# 18 "data/maps/WhisperingGrove/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, WhisperingGrove_AromaLady_Jaclyn_Intro_Text, WhisperingGrove_AromaLady_Jaclyn_Lose_Text
# 19 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_AromaLady_Jaclyn_Dialogue, type = MSGBOX_NPC
	return


WhisperingGrove_EventScript_Boy1::
# 23 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_Boy1_Dialogue, type = MSGBOX_NPC
	return


WhisperingGrove_EventScript_BugCatcher_James::
# 27 "data/maps/WhisperingGrove/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, WhisperingGrove_BugCatcher_James_Intro_Text, WhisperingGrove_BugCatcher_James_Lose_Text
# 28 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_BugCatcher_James_Dialogue, type = MSGBOX_NPC
	return


WhisperingGrove_EventScript_BugCatcher_Rick::
# 32 "data/maps/WhisperingGrove/scripts.pory"
	trainerbattle_single TRAINER_RICK, WhisperingGrove_BugCatcher_Rick_Intro_Text, WhisperingGrove_BugCatcher_Rick_Lose_Text
# 33 "data/maps/WhisperingGrove/scripts.pory"
	msgbox WhisperingGrove_BugCatcher_Rick_Dialogue, type = MSGBOX_NPC
	return


WhisperingGrove_EventScript_RouteSign_Text_0:
# 7 "data/maps/WhisperingGrove/scripts.pory"
	.string "Whispering Grove\n"
	.string "“Where the trees murmur secrets”$"

WhisperingGrove_BugCatcher_Lyle_Intro_Text::
# 36 "data/maps/WhisperingGrove/scripts.pory"
	.string "Shhh! I've been trying to catch this\n"
	.string "Metapod all morning!$"

WhisperingGrove_BugCatcher_Lyle_Lose_Text::
# 40 "data/maps/WhisperingGrove/scripts.pory"
	.string "Aw man... maybe I need quieter shoes.$"

WhisperingGrove_BugCatcher_Lyle_Dialogue::
# 44 "data/maps/WhisperingGrove/scripts.pory"
	.string "I hear there are some rare Pokémon in\n"
	.string "this forest.\l"
	.string "I've been looking for hours...$"

WhisperingGrove_AromaLady_Jaclyn_Intro_Text::
# 49 "data/maps/WhisperingGrove/scripts.pory"
	.string "I like to match my Pokémon with the\n"
	.string "colors of the flowers!\l"
	.string "It's just more fun that way!$"

WhisperingGrove_AromaLady_Jaclyn_Lose_Text::
# 54 "data/maps/WhisperingGrove/scripts.pory"
	.string "Looks like I need a new strategy... and\n"
	.string "maybe a new outfit!$"

WhisperingGrove_AromaLady_Jaclyn_Dialogue::
# 58 "data/maps/WhisperingGrove/scripts.pory"
	.string "I like cute, but powerful Pokémon.$"

WhisperingGrove_Boy1_Dialogue::
# 62 "data/maps/WhisperingGrove/scripts.pory"
	.string "Forest tip: if you toast Oran Berries\n"
	.string "just right, they taste like blueberry\l"
	.string "pie.$"

WhisperingGrove_BugCatcher_James_Intro_Text::
# 66 "data/maps/WhisperingGrove/scripts.pory"
	.string "My net's ready and my eyes are sharp!\n"
	.string "Let's bug battle!$"

WhisperingGrove_BugCatcher_James_Lose_Text::
# 70 "data/maps/WhisperingGrove/scripts.pory"
	.string "Drat! You're slipperier than a Yanma in\n"
	.string "tall grass!$"

WhisperingGrove_BugCatcher_James_Dialogue::
# 74 "data/maps/WhisperingGrove/scripts.pory"
	.string "I like bug Pokémon because they grow\n"
	.string "very quickly.$"

WhisperingGrove_BugCatcher_Rick_Intro_Text::
# 78 "data/maps/WhisperingGrove/scripts.pory"
	.string "My Pokémon are small, but they've got\n"
	.string "BIG energy!$"

WhisperingGrove_BugCatcher_Rick_Lose_Text::
# 82 "data/maps/WhisperingGrove/scripts.pory"
	.string "I bet your team eats more berries than\n"
	.string "mine!$"

WhisperingGrove_BugCatcher_Rick_Dialogue::
# 86 "data/maps/WhisperingGrove/scripts.pory"
	.string "Did you know Bug type Pokémon are\n"
	.string "strong against Psychic types?$"
