LumenVillage_CassiansHouse_1F_MapScripts::
	.byte 0


PlayersHouse_EventScript_RivalMom_Dialogue::
# 6 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 7
	goto_if_lt PlayersHouse_EventScript_RivalMom_Dialogue_1
# 12 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	applymovement Rival_Mom_1F, PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0
# 13 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_RivalMom_Dialogue_Text_1, MSGBOX_NPC
	return

PlayersHouse_EventScript_RivalMom_Dialogue_1:
# 7 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	applymovement Rival_Mom_1F, PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0
# 8 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_RivalMom_Dialogue_Text_0, MSGBOX_NPC
	return


# 7 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0:
# 7 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	face_player
	step_end

PlayersHouse_EventScript_RivalMom_Dialogue_Text_0:
# 8 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	.string "Oh hi, {PLAYER}!\p"
	.string "{RIVAL} went out to Starlit Path a\n"
	.string "little while ago.\p"
	.string "That child just can't stay quietly at\n"
	.string "home.$"

PlayersHouse_EventScript_RivalMom_Dialogue_Text_1:
# 13 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "Pokémon to ever visit home.\p"
	.string "You should stop home every so often\n"
	.string "too, to let your mother know you're ok.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}.$"
