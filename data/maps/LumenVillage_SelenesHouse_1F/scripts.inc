LumenVillage_SelenesHouse_1F_MapScripts::
	.byte 0


PlayersHouse_EventScript_Mom_Dialogue::
# 10 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 6
	goto_if_le PlayersHouse_EventScript_Mom_Dialogue_1
# 20 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 9
	goto_if_ge PlayersHouse_EventScript_Mom_Dialogue_5
PlayersHouse_EventScript_Mom_Dialogue_4:
# 30 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_ge PlayersHouse_EventScript_Mom_Dialogue_3
	return

PlayersHouse_EventScript_Mom_Dialogue_1:
# 11 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 13 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_0, MSGBOX_NPC
# 18 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 19 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_1, MSGBOX_NPC
	return

PlayersHouse_EventScript_Mom_Dialogue_2:
# 21 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 22 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 23 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_2, MSGBOX_NPC
# 28 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 29 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_1, MSGBOX_NPC
	return

PlayersHouse_EventScript_Mom_Dialogue_3:
# 31 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GEN6_EXP_SHARE, PlayersHouse_EventScript_Mom_Dialogue_9
# 57 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 58 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_6, MSGBOX_NPC
# 61 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 62 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_5, MSGBOX_NPC
	return

PlayersHouse_EventScript_Mom_Dialogue_5:
# 20 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GEN6_EXP_SHARE, PlayersHouse_EventScript_Mom_Dialogue_2
	goto PlayersHouse_EventScript_Mom_Dialogue_4

PlayersHouse_EventScript_Mom_Dialogue_9:
# 33 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	setvar VAR_INTRO_SCENE, 8
# 34 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	speakername MomName
# 35 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	applymovement Player_Mom_1F, PlayersHouse_EventScript_Mom_Dialogue_Movement_0
# 36 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_3, MSGBOX_NPC
# 47 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 48 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 49 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_GEN6_EXP_SHARE
# 50 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_4, MSGBOX_NPC
# 52 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 53 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_Mom_Dialogue_Text_5, MSGBOX_NPC
	return


# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
PlayersHouse_EventScript_Mom_Dialogue_Movement_0:
# 12 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	face_player
	step_end

PlayersHouse_EventScript_Mom_Dialogue_Text_0:
# 13 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Hi, sweetie.\p"
	.string "Oh, that's a cute Pokémon you've got\n"
	.string "there.\p"
	.string "Did you get it from Professor Myra?\p"
	.string "You should take good care of it.\p"
	.string "Why don't you take a quick rest?$"

PlayersHouse_EventScript_Mom_Dialogue_Text_1:
# 19 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Take care, honey!$"

PlayersHouse_EventScript_Mom_Dialogue_Text_2:
# 23 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Oh, {PLAYER}! You're back!\p"
	.string "Just for a visit, I hope - not trouble?\p"
	.string "You look different already.\p"
	.string "I've kept your bed made.\p"
	.string "Why don't you take a quick rest?$"

PlayersHouse_EventScript_Mom_Dialogue_Text_3:
# 36 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Hi, honey!\p"
	.string "…\p"
	.string "So, you're finally leaving home.\p"
	.string "It's really happening, isn't it?\p"
	.string "You've always had a gentle heart.\p"
	.string "But now, I see something else too.\p"
	.string "Courage.\p"
	.string "I won't try to stop you.\p"
	.string "Just… promise me you'll be careful out\n"
	.string "there.\p"
	.string "And remember, you'll always have a home\n"
	.string "to come back to.\p"
	.string "Here, I kept this for you.$"

PlayersHouse_EventScript_Mom_Dialogue_Text_4:
# 50 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "This should help you on your journey.\p"
	.string "You should also take this map, so you\n"
	.string "don't get lost.$"

PlayersHouse_EventScript_Mom_Dialogue_Text_5:
# 54 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Bye sweetie, I love you!$"

PlayersHouse_EventScript_Mom_Dialogue_Text_6:
# 58 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Take care on your journey, sweetie.\p"
	.string "Don't forget to come home sometimes.\p"
	.string "Why don't you take a quick rest before\n"
	.string "leaving?$"

MomName::
# 5 "data/maps/LumenVillage_SelenesHouse_1F/scripts.pory"
	.string "Mom$"
