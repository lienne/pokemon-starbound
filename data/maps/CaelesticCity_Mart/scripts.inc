CaelesticCity_Mart_MapScripts::
	.byte 0


Caelestic_Mart_Employee_Dialogue::
# 6 "data/maps/CaelesticCity_Mart/scripts.pory"
	applymovement Caelestic_Mart_Employee, Caelestic_Mart_Employee_Dialogue_Movement_0
# 7 "data/maps/CaelesticCity_Mart/scripts.pory"
	msgbox Caelestic_Mart_Employee_Dialogue_Text_0, MSGBOX_NPC
# 8 "data/maps/CaelesticCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/CaelesticCity_Mart/scripts.pory"
	pokemart Caelestic_Mart_Items
# 10 "data/maps/CaelesticCity_Mart/scripts.pory"
	msgbox Caelestic_Mart_Employee_Dialogue_Text_1, MSGBOX_NPC
	return


	.align 2
# 13 "data/maps/CaelesticCity_Mart/scripts.pory"
Caelestic_Mart_Items:
# 14 "data/maps/CaelesticCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 15 "data/maps/CaelesticCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data/maps/CaelesticCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 17 "data/maps/CaelesticCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 18 "data/maps/CaelesticCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

# 6 "data/maps/CaelesticCity_Mart/scripts.pory"
Caelestic_Mart_Employee_Dialogue_Movement_0:
# 6 "data/maps/CaelesticCity_Mart/scripts.pory"
	face_player
	step_end

Caelestic_Mart_Employee_Dialogue_Text_0:
# 7 "data/maps/CaelesticCity_Mart/scripts.pory"
	.string "Welcome to the Caelestic City Mart!$"

Caelestic_Mart_Employee_Dialogue_Text_1:
# 10 "data/maps/CaelesticCity_Mart/scripts.pory"
	.string "Thank you for shopping with us!$"
