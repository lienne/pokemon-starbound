SolsticeTown_MapScripts::
	.byte 0


SolsticeTown_EventScript_TownSign::
# 6 "data/maps/SolsticeTown/scripts.pory"
	lockall
# 7 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_TownSign_Text_0
# 9 "data/maps/SolsticeTown/scripts.pory"
	releaseall
	return


SolsticeTown_EventScript_Girl1_Dialogue::
# 13 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 14 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl1_Dialogue_Text_0, type = MSGBOX_NPC
# 15 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
	return


SolsticeTown_EventScript_Boy1_Dialogue::
# 19 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 20 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Boy1_Dialogue_Text_0, type = MSGBOX_NPC
# 21 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy1, SolsticeTown_EventScript_Boy1_Dialogue_Movement_0
	return


SolsticeTown_EventScript_Girl2_Dialogue::
# 25 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Girl2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 26 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_EventScript_Girl2_Dialogue_Text_0, type = MSGBOX_NPC
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotA::
# 30 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotA_1:
# 31 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 32 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 33 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 34 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotA
# 36 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 37 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 38 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 39 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotA
# 41 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotB::
# 46 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotB_1:
# 47 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 48 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 49 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 50 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsToPlayer_SpotB
# 52 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 53 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 54 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 55 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_Boy2_RunsBack_SpotB
# 57 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue_SpotC::
# 62 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1
	return

SolsticeTown_EventScript_Boy2_Dialogue_SpotC_1:
# 63 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_ExclamationMark
# 64 "data/maps/SolsticeTown/scripts.pory"
	playse SE_PIN
# 65 "data/maps/SolsticeTown/scripts.pory"
	waitse
# 66 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Girl1_Dialogue_Movement_1
# 68 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, MSGBOX_AUTOCLOSE
# 69 "data/maps/SolsticeTown/scripts.pory"
	applymovement LOCALID_PLAYER, SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0
# 70 "data/maps/SolsticeTown/scripts.pory"
	waitmovement 0
	return


SolsticeTown_EventScript_Boy2_Dialogue::
# 75 "data/maps/SolsticeTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_JIRACHI_MEDICINE, SolsticeTown_EventScript_Boy2_Dialogue_1
# 79 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 80 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PostDelivery, type = MSGBOX_NPC
	return

SolsticeTown_EventScript_Boy2_Dialogue_1:
# 76 "data/maps/SolsticeTown/scripts.pory"
	applymovement SolsticeTown_Boy2, SolsticeTown_EventScript_Girl1_Dialogue_Movement_0
# 77 "data/maps/SolsticeTown/scripts.pory"
	msgbox SolsticeTown_Boy2_Dialogue_PreDelivery, type = MSGBOX_NPC
	return


# 96 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_ExclamationMark:
# 97 "data/maps/SolsticeTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 100 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotA:
# 101 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
# 101 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 104 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotA:
# 105 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 105 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 106 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 109 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsToPlayer_SpotB:
# 110 "data/maps/SolsticeTown/scripts.pory"
	walk_fast_left
	step_end

# 113 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_Boy2_RunsBack_SpotB:
# 114 "data/maps/SolsticeTown/scripts.pory"
	walk_right
# 115 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 13 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_0:
# 13 "data/maps/SolsticeTown/scripts.pory"
	face_player
	step_end

# 15 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Girl1_Dialogue_Movement_1:
# 15 "data/maps/SolsticeTown/scripts.pory"
	face_right
	step_end

# 21 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy1_Dialogue_Movement_0:
# 21 "data/maps/SolsticeTown/scripts.pory"
	face_left
	step_end

# 38 "data/maps/SolsticeTown/scripts.pory"
SolsticeTown_EventScript_Boy2_Dialogue_SpotA_Movement_0:
# 38 "data/maps/SolsticeTown/scripts.pory"
	walk_down
	step_end

SolsticeTown_EventScript_TownSign_Text_0:
# 7 "data/maps/SolsticeTown/scripts.pory"
	.string "Solstice Town\n"
	.string "“The balance point between light and\l"
	.string "shadow”$"

SolsticeTown_EventScript_Girl1_Dialogue_Text_0:
# 14 "data/maps/SolsticeTown/scripts.pory"
	.string "Did you know you can press Start to\n"
	.string "check your Pokémon summary?$"

SolsticeTown_EventScript_Boy1_Dialogue_Text_0:
# 20 "data/maps/SolsticeTown/scripts.pory"
	.string "I use the Pokémon Summary screen to\n"
	.string "check my Pokémon's nature.$"

SolsticeTown_EventScript_Girl2_Dialogue_Text_0:
# 26 "data/maps/SolsticeTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

SolsticeTown_Boy2_Dialogue_PreDelivery::
# 84 "data/maps/SolsticeTown/scripts.pory"
	.string "WHOA there, superstar! The road ahead's\n"
	.string "closed.\l"
	.string "Not by law or anything, I'm just\l"
	.string "standing here real confidently.\l"
	.string "You look like you've got something\l"
	.string "important to do back home anyway.$"

SolsticeTown_Boy2_Dialogue_PostDelivery::
# 90 "data/maps/SolsticeTown/scripts.pory"
	.string "Ahh, the hero returns!\n"
	.string "I'd move out of the way dramatically,\l"
	.string "but my back's acting up.\l"
	.string "Just pretend I did a cool spin or\l"
	.string "something.$"
