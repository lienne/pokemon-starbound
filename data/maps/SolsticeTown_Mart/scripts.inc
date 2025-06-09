SolsticeTown_Mart_MapScripts::
	.byte 0


SolsticeTown_Mart_Employee_Dialogue::
# 6 "data/maps/SolsticeTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECEIVED_JIRACHI_MEDICINE, SolsticeTown_Mart_Employee_Dialogue_7
SolsticeTown_Mart_Employee_Dialogue_5:
# 16 "data/maps/SolsticeTown_Mart/scripts.pory"
	goto_if_set FLAG_RECEIVED_JIRACHI_MEDICINE, SolsticeTown_Mart_Employee_Dialogue_4
SolsticeTown_Mart_Employee_Dialogue_3:
# 22 "data/maps/SolsticeTown_Mart/scripts.pory"
	applymovement SolsticeTown_Mart_Employee, SolsticeTown_Mart_Employee_Dialogue_Movement_0
# 23 "data/maps/SolsticeTown_Mart/scripts.pory"
	msgbox SolsticeTown_Mart_Employee_Dialogue_Text_2, type = MSGBOX_NPC
# 24 "data/maps/SolsticeTown_Mart/scripts.pory"
	waitmessage
# 25 "data/maps/SolsticeTown_Mart/scripts.pory"
	pokemart SolsticeTown_Mart_Items
# 26 "data/maps/SolsticeTown_Mart/scripts.pory"
	msgbox SolsticeTown_Mart_Employee_Dialogue_Text_3, type = MSGBOX_NPC
	return

SolsticeTown_Mart_Employee_Dialogue_1:
# 7 "data/maps/SolsticeTown_Mart/scripts.pory"
	lock
# 8 "data/maps/SolsticeTown_Mart/scripts.pory"
	applymovement SolsticeTown_Mart_Employee, SolsticeTown_Mart_Employee_Dialogue_Movement_0
# 9 "data/maps/SolsticeTown_Mart/scripts.pory"
	msgbox SolsticeTown_Mart_Employee_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/SolsticeTown_Mart/scripts.pory"
	giveitem ITEM_PARCEL
# 13 "data/maps/SolsticeTown_Mart/scripts.pory"
	setflag FLAG_RECEIVED_JIRACHI_MEDICINE
# 14 "data/maps/SolsticeTown_Mart/scripts.pory"
	setvar VAR_INTRO_SCENE, 3
# 15 "data/maps/SolsticeTown_Mart/scripts.pory"
	releaseall
	return

SolsticeTown_Mart_Employee_Dialogue_2:
# 17 "data/maps/SolsticeTown_Mart/scripts.pory"
	applymovement SolsticeTown_Mart_Employee, SolsticeTown_Mart_Employee_Dialogue_Movement_0
# 18 "data/maps/SolsticeTown_Mart/scripts.pory"
	msgbox SolsticeTown_Mart_Employee_Dialogue_Text_1, type = MSGBOX_NPC
	return

SolsticeTown_Mart_Employee_Dialogue_4:
# 16 "data/maps/SolsticeTown_Mart/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_Mart_Employee_Dialogue_2
	goto SolsticeTown_Mart_Employee_Dialogue_3

SolsticeTown_Mart_Employee_Dialogue_7:
# 6 "data/maps/SolsticeTown_Mart/scripts.pory"
	compare VAR_INTRO_SCENE, 2
	goto_if_eq SolsticeTown_Mart_Employee_Dialogue_1
	goto SolsticeTown_Mart_Employee_Dialogue_5


	.align 2
# 30 "data/maps/SolsticeTown_Mart/scripts.pory"
SolsticeTown_Mart_Items:
# 31 "data/maps/SolsticeTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 32 "data/maps/SolsticeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 33 "data/maps/SolsticeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 34 "data/maps/SolsticeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

# 8 "data/maps/SolsticeTown_Mart/scripts.pory"
SolsticeTown_Mart_Employee_Dialogue_Movement_0:
# 8 "data/maps/SolsticeTown_Mart/scripts.pory"
	face_player
	step_end

SolsticeTown_Mart_Employee_Dialogue_Text_0:
# 9 "data/maps/SolsticeTown_Mart/scripts.pory"
	.string "Hi! Are you {PLAYER}?\l"
	.string "Prof. Myra called ahead of time to say\l"
	.string "you'd come by.\l"
	.string "I have your package here for you.$"

SolsticeTown_Mart_Employee_Dialogue_Text_1:
# 18 "data/maps/SolsticeTown_Mart/scripts.pory"
	.string "Hi {PLAYER}!\l"
	.string "Did you deliver the package to Prof.\l"
	.string "Myra yet?\l"
	.string "You should go do that now!$"

SolsticeTown_Mart_Employee_Dialogue_Text_2:
# 23 "data/maps/SolsticeTown_Mart/scripts.pory"
	.string "Welcome to the Solstice Town Mart!$"

SolsticeTown_Mart_Employee_Dialogue_Text_3:
# 26 "data/maps/SolsticeTown_Mart/scripts.pory"
	.string "Thank you for shopping with us!$"
