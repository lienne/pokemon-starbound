SolsticeTown_House3_MapScripts::
	.byte 0


SolsticeTown_House3_EventScript_Man_Dialogue::
# 6 "data/maps/SolsticeTown_House3/scripts.pory"
	goto_if_unset FLAG_GOT_POKEBALL_SOLSTICE, SolsticeTown_House3_EventScript_Man_Dialogue_1
# 18 "data/maps/SolsticeTown_House3/scripts.pory"
	applymovement SolsticeTown_House3_Man, SolsticeTown_House3_EventScript_Man_Dialogue_Movement_0
# 19 "data/maps/SolsticeTown_House3/scripts.pory"
	msgbox SolsticeTown_House3_EventScript_Man_Dialogue_Text_2, MSGBOX_NPC
	return

SolsticeTown_House3_EventScript_Man_Dialogue_1:
# 7 "data/maps/SolsticeTown_House3/scripts.pory"
	lockall
# 8 "data/maps/SolsticeTown_House3/scripts.pory"
	applymovement SolsticeTown_House3_Man, SolsticeTown_House3_EventScript_Man_Dialogue_Movement_0
# 9 "data/maps/SolsticeTown_House3/scripts.pory"
	msgbox SolsticeTown_House3_EventScript_Man_Dialogue_Text_0
# 12 "data/maps/SolsticeTown_House3/scripts.pory"
	giveitem ITEM_POKE_BALL
# 13 "data/maps/SolsticeTown_House3/scripts.pory"
	waitmessage
# 14 "data/maps/SolsticeTown_House3/scripts.pory"
	msgbox SolsticeTown_House3_EventScript_Man_Dialogue_Text_1
# 15 "data/maps/SolsticeTown_House3/scripts.pory"
	setflag FLAG_GOT_POKEBALL_SOLSTICE
# 16 "data/maps/SolsticeTown_House3/scripts.pory"
	releaseall
	return


SolsticeTown_House3_EventScript_Woman_Dialogue::
# 24 "data/maps/SolsticeTown_House3/scripts.pory"
	applymovement SolsticeTown_House3_Girl, SolsticeTown_House3_EventScript_Man_Dialogue_Movement_0
# 25 "data/maps/SolsticeTown_House3/scripts.pory"
	msgbox SolsticeTown_House3_EventScript_Woman_Dialogue_Text_0, MSGBOX_NPC
	return


# 8 "data/maps/SolsticeTown_House3/scripts.pory"
SolsticeTown_House3_EventScript_Man_Dialogue_Movement_0:
# 8 "data/maps/SolsticeTown_House3/scripts.pory"
	face_player
	step_end

SolsticeTown_House3_EventScript_Man_Dialogue_Text_0:
# 9 "data/maps/SolsticeTown_House3/scripts.pory"
	.string "Are you going on a Pokémon adventure?\n"
	.string "That's so cool…\p"
	.string "I always wanted to, but I had to stay\n"
	.string "here.\p"
	.string "Here, take this.$"

SolsticeTown_House3_EventScript_Man_Dialogue_Text_1:
# 14 "data/maps/SolsticeTown_House3/scripts.pory"
	.string "I won't need it anyways. I hope it helps!$"

SolsticeTown_House3_EventScript_Man_Dialogue_Text_2:
# 19 "data/maps/SolsticeTown_House3/scripts.pory"
	.string "I hope your Pokémon adventure is going\n"
	.string "well!$"

SolsticeTown_House3_EventScript_Woman_Dialogue_Text_0:
# 25 "data/maps/SolsticeTown_House3/scripts.pory"
	.string "Sigh…\n"
	.string "I always thought he wanted to stay in\l"
	.string "Solstice Town, but maybe it's too small\l"
	.string "for us…$"
