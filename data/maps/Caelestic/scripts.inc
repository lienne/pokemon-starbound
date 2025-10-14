Caelestic_MapScripts::
# 2 "data/maps/Caelestic/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Caelestic_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Caelestic_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Caelestic/scripts.pory"
	setflag FLAG_VISITED_CAELESTIC
	return


Caelestic_EventScript_CitySign::
# 8 "data/maps/Caelestic/scripts.pory"
	lockall
# 9 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_CitySign_Text_0
# 11 "data/maps/Caelestic/scripts.pory"
	releaseall
	return


Caelestic_EventScript_GymSign::
# 15 "data/maps/Caelestic/scripts.pory"
	lockall
# 16 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_GymSign_Text_0
# 19 "data/maps/Caelestic/scripts.pory"
	releaseall
	return


Caelestic_EventScript_StatueSign::
# 23 "data/maps/Caelestic/scripts.pory"
	lockall
# 24 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_StatueSign_Text_0
# 28 "data/maps/Caelestic/scripts.pory"
	releaseall
	return


Caelestic_EventScript_OldManByStatueDialogue::
# 34 "data/maps/Caelestic/scripts.pory"
	lockall
# 35 "data/maps/Caelestic/scripts.pory"
	applymovement Caelestic_OldManByStatue, Caelestic_EventScript_OldManByStatueDialogue_Movement_0
# 36 "data/maps/Caelestic/scripts.pory"
	waitmovement 0
# 37 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_OldManByStatueDialogue_Text_0, MSGBOX_YESNO
# 41 "data/maps/Caelestic/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Caelestic_EventScript_OldManByStatueDialogue_2
# 54 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_OldManByStatueDialogue_Text_2, MSGBOX_AUTOCLOSE
Caelestic_EventScript_OldManByStatueDialogue_1:
# 56 "data/maps/Caelestic/scripts.pory"
	releaseall
	return

Caelestic_EventScript_OldManByStatueDialogue_2:
# 42 "data/maps/Caelestic/scripts.pory"
	msgbox Caelestic_EventScript_OldManByStatueDialogue_Text_1, MSGBOX_AUTOCLOSE
	goto Caelestic_EventScript_OldManByStatueDialogue_1


# 35 "data/maps/Caelestic/scripts.pory"
Caelestic_EventScript_OldManByStatueDialogue_Movement_0:
# 35 "data/maps/Caelestic/scripts.pory"
	face_player
	step_end

Caelestic_EventScript_CitySign_Text_0:
# 9 "data/maps/Caelestic/scripts.pory"
	.string "Caelestic\n"
	.string "“Home of the Celestial Guardian\l"
	.string "Jirachi”$"

Caelestic_EventScript_GymSign_Text_0:
# 16 "data/maps/Caelestic/scripts.pory"
	.string "Caelestic Gym\n"
	.string "Leader: Percival\l"
	.string "The soaring sentinel with a gentle soul$"

Caelestic_EventScript_StatueSign_Text_0:
# 24 "data/maps/Caelestic/scripts.pory"
	.string "Here stands the statue of Jirachi, the\n"
	.string "Celestial Wishkeeper.\p"
	.string "It is said that Jirachi grants wishes to\n"
	.string "those who are pure of heart.\p"
	.string "May its light guide all those who look to\n"
	.string "the stars.\p"
	.string "(Dedicated by the Caelestic City\n"
	.string "Council, Year 2025 of the Star Calendar)$"

Caelestic_EventScript_OldManByStatueDialogue_Text_0:
# 37 "data/maps/Caelestic/scripts.pory"
	.string "It's beautiful, isn't it?\p"
	.string "This statue of Jirachi has been here\n"
	.string "for as long as I can remember.\p"
	.string "I often come here to reflect and find\n"
	.string "peace.\p"
	.string "Would you like to hear the story behind\n"
	.string "this statue?$"

Caelestic_EventScript_OldManByStatueDialogue_Text_1:
# 42 "data/maps/Caelestic/scripts.pory"
	.string "Long ago, when Astrea was still being\n"
	.string "settled, the land was wild and\l"
	.string "unpredictable.\p"
	.string "Storms struck without warning, crops\n"
	.string "withered, and the people struggled to\l"
	.string "survive.\p"
	.string "The people faced many challenges, but\n"
	.string "they never lost hope.\p"
	.string "According to legend, one night a\n"
	.string "brilliant star fell from the heavens and\l"
	.string "landed where we now call Caelestic City.\p"
	.string "It was said that the fallen star was\n"
	.string "Jirachi, a celestial being who had come\l"
	.string "to grant the people's wishes.\p"
	.string "A young child, pure of heart,\n"
	.string "approached the fallen star and made a\l"
	.string "wish for peace and prosperity for the\l"
	.string "land.\p"
	.string "The next morning, the skies were clear,\n"
	.string "the rivers ran steady, and the crops\l"
	.string "flourished.\p"
	.string "In gratitude, the people of Caelestic\n"
	.string "built this statue to honor Jirachi's\l"
	.string "kindness and to remind us of the power\l"
	.string "of hope and dreams.\p"
	.string "Since then, Jirachi became a symbol of\n"
	.string "peace, balance, and celestial harmony\l"
	.string "across the land.\p"
	.string "Over time, the statue also became a\n"
	.string "place where people come to make wishes,\l"
	.string "especially before important life events\l"
	.string "like starting a journey, taking on a gym,\l"
	.string "or welcoming a new child.\p"
	.string "Thank you for listening to an old man's\n"
	.string "story.$"

Caelestic_EventScript_OldManByStatueDialogue_Text_2:
# 54 "data/maps/Caelestic/scripts.pory"
	.string "That's alright. Not everyone is\n"
	.string "interested in old stories.$"
