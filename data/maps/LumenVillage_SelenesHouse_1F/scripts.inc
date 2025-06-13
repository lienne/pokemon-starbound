LumenVillage_SelenesHouse_1F_MapScripts::
	.byte 0


PlayersHouse_EventScript_Mom_Dialogue::
# 10 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_lt PlayersHouse_EventScript_Mom_Dialogue_1
# 20 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 5
	goto_if_eq PlayersHouse_EventScript_Mom_Dialogue_2
# 20 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_eq PlayersHouse_EventScript_Mom_Dialogue_2
# 37 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 38 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 39 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_4, type = MSGBOX_NPC
# 44 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 45 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_1, type = MSGBOX_NPC
	return

PlayersHouse_EventScript_Mom_Dialogue_1:
# 11 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 13 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_0, type = MSGBOX_NPC
# 18 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 19 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_1, type = MSGBOX_NPC
	return

PlayersHouse_EventScript_Mom_Dialogue_2:
# 21 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 22 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 23 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_2, type = MSGBOX_NPC
# 34 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 35 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_3, type = MSGBOX_NPC
	return


# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
PlayersHouse_EventScript_Mom_Dialogue_Movement_0:
# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	face_player
	step_end

PlayersHouse_EventScript_Mom_Dialogue_Text_0:
# 13 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Welcome home, sweetie.\p"
	.string "Oh, that's a cute Pokémon you've got\n"
	.string "there.\l"
	.string "Did you get it from Professor Myra?\l"
	.string "You should take good care of it.\l"
	.string "Why don't you take a quick rest?$"

PlayersHouse_EventScript_Mom_Dialogue_Text_1:
# 19 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Take care, honey!$"

PlayersHouse_EventScript_Mom_Dialogue_Text_2:
# 23 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Hi, honey!\p"
	.string "...\p"
	.string "So, you're finally leaving home.\l"
	.string "It's really happening, isn't it?\l"
	.string "You've always had a gentle heart.\l"
	.string "But now, I see something else too.\l"
	.string "Courage.\l"
	.string "I won't try to stop you.\p"
	.string "Just... promise me you'll be careful out\n"
	.string "there.\l"
	.string "And remember, you'll always have a home\l"
	.string "to come back to.\l"
	.string "Why don't you take a quick rest before\l"
	.string "leaving?$"

PlayersHouse_EventScript_Mom_Dialogue_Text_3:
# 35 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Bye sweetie, I love you!$"

PlayersHouse_EventScript_Mom_Dialogue_Text_4:
# 39 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Oh, {PLAYER}! You're back!\p"
	.string "Just for a visit, I hope - not trouble?\l"
	.string "You look different already.\l"
	.string "I've kept your bed made.\l"
	.string "Why don't you take a quick rest?$"

MomName::
# 5 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Mom$"
