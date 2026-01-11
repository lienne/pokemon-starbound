Route3_EchoRidge_MapScripts::
	.byte 0


Route3_EchoRidge_EventScript_RouteSign::
# 6 "data/maps/Route3_EchoRidge/scripts.pory"
	lockall
# 7 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_EventScript_RouteSign_Text_0
# 9 "data/maps/Route3_EchoRidge/scripts.pory"
	releaseall
	return


Route3_EchoRidge_EventScript_Hiker_Eli::
# 13 "data/maps/Route3_EchoRidge/scripts.pory"
	trainerbattle_single TRAINER_ELI, Route3_EchoRidge_Hiker_Eli_Intro_Text, Route3_EchoRidge_Hiker_Eli_Lose_Text
# 14 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_Hiker_Eli_Dialogue, MSGBOX_NPC
	return


Route3_EchoRidge_EventScript_Beauty_Sheila::
# 18 "data/maps/Route3_EchoRidge/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, Route3_EchoRidge_Beauty_Sheila_Intro_Text, Route3_EchoRidge_Beauty_Sheila_Lose_Text
# 19 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_Beauty_Sheila_Dialogue, MSGBOX_NPC
	return


Route3_EchoRidge_EventScript_Black_Belt_Takao::
# 23 "data/maps/Route3_EchoRidge/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, Route3_EchoRidge_Black_Belt_Takao_Intro_Text, Route3_EchoRidge_Black_Belt_Takao_Lose_Text
# 24 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_Black_Belt_Takao_Dialogue, MSGBOX_NPC
	return


Route3_EchoRidge_EventScript_Artist_Anabelle::
# 28 "data/maps/Route3_EchoRidge/scripts.pory"
	trainerbattle_single TRAINER_ANABELLE, Route3_EchoRidge_Artist_Anabelle_Intro_Text, Route3_EchoRidge_Artist_Anabelle_Lose_Text
# 29 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_Artist_Anabelle_Dialogue, MSGBOX_NPC
	return


Route3_EchoRidge_EventScript_Ruin_Maniac_Dusty::
# 33 "data/maps/Route3_EchoRidge/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route3_EchoRidge_Ruin_Maniac_Dusty_Intro_Text, Route3_EchoRidge_Ruin_Maniac_Dusty_Lose_Text
# 34 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_Ruin_Maniac_Dusty_Dialogue, MSGBOX_NPC
	return


Route3_EchoRidge_EventScript_RouteSign_Text_0:
# 7 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Echo Ridge\n"
	.string "“Where the echoes of the past linger”$"

Route3_EchoRidge_Hiker_Eli_Intro_Text::
# 37 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "You look like you can handle yourself!\n"
	.string "Care for a battle?$"

Route3_EchoRidge_Hiker_Eli_Lose_Text::
# 42 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Not bad at all! You've got some skills!$"

Route3_EchoRidge_Hiker_Eli_Dialogue::
# 46 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "The mountains here are filled with\n"
	.string "history.\p"
	.string "Some say you can still hear the echoes\n"
	.string "of ancient Pokémon battles if you\l"
	.string "listen closely enough.$"

Route3_EchoRidge_Beauty_Sheila_Intro_Text::
# 51 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "If you can beat me, I'll give you a kiss!$"

Route3_EchoRidge_Beauty_Sheila_Lose_Text::
# 55 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Oh… I wasn't expecting you'd actually\n"
	.string "win…$"

Route3_EchoRidge_Beauty_Sheila_Dialogue::
# 59 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "…I'll have my Pokémon give you a kiss\n"
	.string "instead.$"

Route3_EchoRidge_Black_Belt_Takao_Intro_Text::
# 63 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "HIYAAAAAA!!!$"

Route3_EchoRidge_Black_Belt_Takao_Lose_Text::
# 67 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Pant… pant…$"

Route3_EchoRidge_Black_Belt_Takao_Dialogue::
# 71 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Going up the mountain… it's harder than\n"
	.string "I thought…$"

Route3_EchoRidge_Artist_Anabelle_Intro_Text::
# 75 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Art is the truest form of expression!$"

Route3_EchoRidge_Artist_Anabelle_Lose_Text::
# 79 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Your skills are… inspiring.$"

Route3_EchoRidge_Artist_Anabelle_Dialogue::
# 83 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "The beauty of nature here at Echo\n"
	.string "Ridge is my greatest muse.\p"
	.string "Every rock, tree, and Pokémon tells a\n"
	.string "story waiting to be captured on canvas.$"

Route3_EchoRidge_Ruin_Maniac_Dusty_Intro_Text::
# 88 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "I'm on my way to the ruins in Celestine\n"
	.string "Way!$"

Route3_EchoRidge_Ruin_Maniac_Dusty_Lose_Text::
# 92 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Those ruins will have to wait…$"

Route3_EchoRidge_Ruin_Maniac_Dusty_Dialogue::
# 96 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "The ancient ruins are said to hold\n"
	.string "secrets of a lost civilization.\p"
	.string "I can't wait to explore them and\n"
	.string "uncover their mysteries!$"
