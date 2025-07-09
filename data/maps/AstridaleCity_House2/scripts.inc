AstridaleCity_House2_MapScripts::
	.byte 0


Astridale_House2_EventScript_Girl_Dialogue::
# 6 "data/maps/AstridaleCity_House2/scripts.pory"
	lockall
# 7 "data/maps/AstridaleCity_House2/scripts.pory"
	applymovement Astridale_House2_Girl, Astridale_House2_EventScript_Girl_Dialogue_Movement_0
# 8 "data/maps/AstridaleCity_House2/scripts.pory"
	goto_if_set FLAG_ASTRIDALE_NPC_TRADE_COMPLETED, Astridale_House2_EventScript_Girl_Dialogue_2
# 13 "data/maps/AstridaleCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TINKATINK
# 14 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 15 "data/maps/AstridaleCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 16 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 17 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_1, MSGBOX_YESNO
# 20 "data/maps/AstridaleCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Astridale_House2_EventScript_Girl_Dialogue_5
# 24 "data/maps/AstridaleCity_House2/scripts.pory"
	special ChoosePartyMon
# 25 "data/maps/AstridaleCity_House2/scripts.pory"
	waitstate
# 26 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 27 "data/maps/AstridaleCity_House2/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Astridale_House2_EventScript_Girl_Dialogue_8
# 31 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 32 "data/maps/AstridaleCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 33 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 34 "data/maps/AstridaleCity_House2/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Astridale_House2_EventScript_Girl_Dialogue_11
# 38 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 39 "data/maps/AstridaleCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 40 "data/maps/AstridaleCity_House2/scripts.pory"
	special CreateInGameTradePokemon
# 41 "data/maps/AstridaleCity_House2/scripts.pory"
	special DoInGameTradeScene
# 42 "data/maps/AstridaleCity_House2/scripts.pory"
	waitstate
# 43 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_4, MSGBOX_DEFAULT
# 44 "data/maps/AstridaleCity_House2/scripts.pory"
	SETFLAG FLAG_ASTRIDALE_NPC_TRADE_COMPLETED
Astridale_House2_EventScript_Girl_Dialogue_1:
# 49 "data/maps/AstridaleCity_House2/scripts.pory"
	releaseall
	return

Astridale_House2_EventScript_Girl_Dialogue_2:
# 9 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	goto Astridale_House2_EventScript_Girl_Dialogue_1

Astridale_House2_EventScript_Girl_Dialogue_5:
# 21 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_2, MSGBOX_DEFAULT
	goto Astridale_House2_EventScript_Girl_Dialogue_1

Astridale_House2_EventScript_Girl_Dialogue_8:
# 28 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_2, MSGBOX_DEFAULT
	goto Astridale_House2_EventScript_Girl_Dialogue_1

Astridale_House2_EventScript_Girl_Dialogue_11:
# 35 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Girl_Dialogue_Text_3, MSGBOX_DEFAULT
	goto Astridale_House2_EventScript_Girl_Dialogue_1


Astridale_House2_EventScript_Man_Dialogue::
# 53 "data/maps/AstridaleCity_House2/scripts.pory"
	applymovement Astridale_House2_Man, Astridale_House2_EventScript_Girl_Dialogue_Movement_0
# 54 "data/maps/AstridaleCity_House2/scripts.pory"
	msgbox Astridale_House2_EventScript_Man_Dialogue_Text_0, MSGBOX_NPC
	return


# 7 "data/maps/AstridaleCity_House2/scripts.pory"
Astridale_House2_EventScript_Girl_Dialogue_Movement_0:
# 7 "data/maps/AstridaleCity_House2/scripts.pory"
	face_player
	step_end

Astridale_House2_EventScript_Girl_Dialogue_Text_0:
# 9 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "How's my Tink doing?\n"
	.string "I hope you've been taking good care of\l"
	.string "it!$"

Astridale_House2_EventScript_Girl_Dialogue_Text_1:
# 17 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "Hi! I'm a big fan of Bulbasaur!\p"
	.string "I hear they live in Whispering Grove,\n"
	.string "but I'm too young to go that far.\p"
	.string "Would you trade me a {STR_VAR_1} for\n"
	.string "my {STR_VAR_2}?$"

Astridale_House2_EventScript_Girl_Dialogue_Text_2:
# 21 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "Oh, if you don't want to, that's ok.$"

Astridale_House2_EventScript_Girl_Dialogue_Text_3:
# 35 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "Huh? That doesn't look anything like a\n"
	.string "Bulbasaur to me.$"

Astridale_House2_EventScript_Girl_Dialogue_Text_4:
# 43 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "Please be good to my {STR_VAR_1}.$"

Astridale_House2_EventScript_Man_Dialogue_Text_0:
# 54 "data/maps/AstridaleCity_House2/scripts.pory"
	.string "The power of technology nowadays is\n"
	.string "amazing.\p"
	.string "I'm sure the construction will bring\n"
	.string "even more of it to Astridale.\p"
	.string "I just hope it doesn't change things\n"
	.string "too much.$"
