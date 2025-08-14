LumenVillage_CassiansHouse_1F_MapScripts::
# 2 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_CassiansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LumenVillage_CassiansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 2
	goto_if_lt LumenVillage_CassiansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LumenVillage_CassiansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	playbgm MUS_NONE, 1
	return


PlayersHouse_EventScript_RivalMom_Dialogue::
# 10 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	compare VAR_INTRO_SCENE, 10
	goto_if_lt PlayersHouse_EventScript_RivalMom_Dialogue_1
# 16 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	applymovement Rival_Mom_1F, PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0
# 17 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_RivalMom_Dialogue_Text_1, MSGBOX_NPC
	return

PlayersHouse_EventScript_RivalMom_Dialogue_1:
# 11 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	applymovement Rival_Mom_1F, PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0
# 12 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	msgbox PlayersHouse_EventScript_RivalMom_Dialogue_Text_0, MSGBOX_NPC
	return


# 11 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
PlayersHouse_EventScript_RivalMom_Dialogue_Movement_0:
# 11 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	face_player
	step_end

PlayersHouse_EventScript_RivalMom_Dialogue_Text_0:
# 12 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	.string "Oh hi, {PLAYER}!\p"
	.string "{RIVAL} went out to Starlit Path a\n"
	.string "little while ago.\p"
	.string "That child just can't stay quietly at\n"
	.string "home.$"

PlayersHouse_EventScript_RivalMom_Dialogue_Text_1:
# 17 "data/maps/LumenVillage_CassiansHouse_1F/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "Pokémon to ever visit home.\p"
	.string "You should stop home every so often\n"
	.string "too, to let your mother know you're ok.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}.$"
