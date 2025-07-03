AstridaleCity_House4_2F_MapScripts::
	.byte 0


Astridale_House4_2F_EventScript_Clefairy_Doll::
# 6 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_lt Astridale_House4_2F_EventScript_Clefairy_Doll_1
# 10 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 3
	goto_if_eq Astridale_House4_2F_EventScript_Clefairy_Doll_2
	return

Astridale_House4_2F_EventScript_Clefairy_Doll_1:
# 7 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	applymovement Astridale_House4_2F_ClefairyDoll, Astridale_House4_2F_EventScript_Clefairy_Doll_Movement_0
# 8 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	msgbox Astridale_House4_2F_EventScript_Clefairy_Doll_Text_0, MSGBOX_AUTOCLOSE
	return

Astridale_House4_2F_EventScript_Clefairy_Doll_2:
# 11 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	applymovement Astridale_House4_2F_ClefairyDoll, Astridale_House4_2F_EventScript_Clefairy_Doll_Movement_0
# 12 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	msgbox Astridale_House4_2F_EventScript_Clefairy_Doll_Text_1, MSGBOX_YESNO
# 14 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Astridale_House4_2F_EventScript_Clefairy_Doll_5
# 20 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	msgbox Astridale_House4_2F_EventScript_Clefairy_Doll_Text_3, MSGBOX_AUTOCLOSE
	return

Astridale_House4_2F_EventScript_Clefairy_Doll_5:
# 15 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 4
# 16 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	setflag FLAG_HIDE_VIVIANES_CLEFAIRY_DOLL
# 17 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	removeobject Astridale_House4_2F_ClefairyDoll
# 18 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	msgbox Astridale_House4_2F_EventScript_Clefairy_Doll_Text_2, MSGBOX_AUTOCLOSE
	return


# 7 "data/maps/AstridaleCity_House4_2F/scripts.pory"
Astridale_House4_2F_EventScript_Clefairy_Doll_Movement_0:
# 7 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	face_player
	step_end

Astridale_House4_2F_EventScript_Clefairy_Doll_Text_0:
# 8 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	.string "It's Viviane's Clefairy doll.$"

Astridale_House4_2F_EventScript_Clefairy_Doll_Text_1:
# 12 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	.string "It's Viviane's Clefairy doll.\l"
	.string "Would you like to take it?$"

Astridale_House4_2F_EventScript_Clefairy_Doll_Text_2:
# 18 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	.string "You took the Clefairy doll.$"

Astridale_House4_2F_EventScript_Clefairy_Doll_Text_3:
# 20 "data/maps/AstridaleCity_House4_2F/scripts.pory"
	.string "You decided not to take it.$"
