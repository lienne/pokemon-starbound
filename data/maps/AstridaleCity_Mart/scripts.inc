AstridaleCity_Mart_MapScripts::
	.byte 0


Astridale_Mart_Employee_Dialogue::
# 6 "data/maps/AstridaleCity_Mart/scripts.pory"
	applymovement Astridale_Mart_Employee, Astridale_Mart_Employee_Dialogue_Movement_0
# 7 "data/maps/AstridaleCity_Mart/scripts.pory"
	msgbox Astridale_Mart_Employee_Dialogue_Text_0, MSGBOX_NPC
# 8 "data/maps/AstridaleCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/AstridaleCity_Mart/scripts.pory"
	pokemart Astridale_Mart_Items
# 10 "data/maps/AstridaleCity_Mart/scripts.pory"
	msgbox Astridale_Mart_Employee_Dialogue_Text_1, MSGBOX_NPC
	return


	.align 2
# 13 "data/maps/AstridaleCity_Mart/scripts.pory"
Astridale_Mart_Items:
# 14 "data/maps/AstridaleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 15 "data/maps/AstridaleCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data/maps/AstridaleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 17 "data/maps/AstridaleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 18 "data/maps/AstridaleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

Astridale_Mart_Beauty_Dialogue::
# 22 "data/maps/AstridaleCity_Mart/scripts.pory"
	applymovement Astridale_Mart_Beauty, Astridale_Mart_Employee_Dialogue_Movement_0
# 23 "data/maps/AstridaleCity_Mart/scripts.pory"
	msgbox Astridale_Mart_Beauty_Dialogue_Text_0, MSGBOX_NPC
# 25 "data/maps/AstridaleCity_Mart/scripts.pory"
	applymovement Astridale_Mart_Beauty, Astridale_Mart_Beauty_Dialogue_Movement_0
	return


Astridale_Mart_BlackBelt_Dialogue::
# 29 "data/maps/AstridaleCity_Mart/scripts.pory"
	applymovement Astridale_Mart_BlackBelt, Astridale_Mart_Employee_Dialogue_Movement_0
# 30 "data/maps/AstridaleCity_Mart/scripts.pory"
	msgbox Astridale_Mart_BlackBelt_Dialogue_Text_0, MSGBOX_NPC
# 31 "data/maps/AstridaleCity_Mart/scripts.pory"
	applymovement Astridale_Mart_BlackBelt, Astridale_Mart_BlackBelt_Dialogue_Movement_0
	return


# 6 "data/maps/AstridaleCity_Mart/scripts.pory"
Astridale_Mart_Employee_Dialogue_Movement_0:
# 6 "data/maps/AstridaleCity_Mart/scripts.pory"
	face_player
	step_end

# 25 "data/maps/AstridaleCity_Mart/scripts.pory"
Astridale_Mart_Beauty_Dialogue_Movement_0:
# 25 "data/maps/AstridaleCity_Mart/scripts.pory"
	face_up
	step_end

# 31 "data/maps/AstridaleCity_Mart/scripts.pory"
Astridale_Mart_BlackBelt_Dialogue_Movement_0:
# 31 "data/maps/AstridaleCity_Mart/scripts.pory"
	face_right
	step_end

Astridale_Mart_Employee_Dialogue_Text_0:
# 7 "data/maps/AstridaleCity_Mart/scripts.pory"
	.string "Welcome to the Solstice Town Mart!$"

Astridale_Mart_Employee_Dialogue_Text_1:
# 10 "data/maps/AstridaleCity_Mart/scripts.pory"
	.string "Thank you for shopping with us!$"

Astridale_Mart_Beauty_Dialogue_Text_0:
# 23 "data/maps/AstridaleCity_Mart/scripts.pory"
	.string "I'm buying beauty products for me and\n"
	.string "my Pokémon.\p"
	.string "What? I can't be the only one looking\n"
	.string "beautiful.$"

Astridale_Mart_BlackBelt_Dialogue_Text_0:
# 30 "data/maps/AstridaleCity_Mart/scripts.pory"
	.string "It's incredible how many different\n"
	.string "products you can find at PokéMarts.$"
