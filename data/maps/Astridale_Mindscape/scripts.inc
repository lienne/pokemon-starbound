Astridale_Mindscape_MapScripts::
# 2 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_NO_CATCHING
# 4 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_FORCE_NO_SHINY
	return

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script_2 VAR_ASTRIDALE_STATE, 4, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 9 "data/maps/Astridale_Mindscape/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 5
# 10 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_EventScript_Intro_Dialogue
# 11 "data/maps/Astridale_Mindscape/scripts.pory"
	setobjectxyperm Astridale_Mindscape_Jirachi, 20, 75
	end


Astridale_Mindscape_EventScript_Intro_Dialogue::
# 18 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 19 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_0
# 20 "data/maps/Astridale_Mindscape/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Astridale_Mindscape/scripts.pory"
	waitse
# 22 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 23 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_1
# 24 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_2
# 26 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement Astridale_Mindscape_Jirachi
# 27 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_3
# 28 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement Astridale_Mindscape_Jirachi
# 29 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_4
# 30 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 31 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 32 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Intro_Dialogue_Text_0, MSGBOX_NPC
# 45 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return


Astridale_Mindscape_EventScript_Jirachi_Dialogue::
# 49 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0
# 50 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 51 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_0, MSGBOX_NPC
# 52 "data/maps/Astridale_Mindscape/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 53 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 54 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_1, MSGBOX_AUTOCLOSE
	return


Astridale_Mindscape_EventScript_Munna_PC::
# 59 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Munna, Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0
# 60 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Munna_PC_Text_0, MSGBOX_NPC
# 61 "data/maps/Astridale_Mindscape/scripts.pory"
	special ShowPokemonStorageSystemPC
# 62 "data/maps/Astridale_Mindscape/scripts.pory"
	waitstate
# 63 "data/maps/Astridale_Mindscape/scripts.pory"
	closemessage
	return


# 19 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_0:
# 19 "data/maps/Astridale_Mindscape/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_1:
# 23 "data/maps/Astridale_Mindscape/scripts.pory"
	face_up
	step_end

# 25 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_2:
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 25 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
	step_end

# 27 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_3:
# 27 "data/maps/Astridale_Mindscape/scripts.pory"
	face_left
	step_end

# 29 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_4:
# 29 "data/maps/Astridale_Mindscape/scripts.pory"
	face_right
	step_end

# 49 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0:
# 49 "data/maps/Astridale_Mindscape/scripts.pory"
	face_player
	step_end

Astridale_Mindscape_EventScript_Intro_Dialogue_Text_0:
# 32 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}{PLAYER}.\p"
	.string "This is the realm of dreams.\n"
	.string "You are in Viviane's mindscape now.\l"
	.string "I was able to pull you in once you\l"
	.string "showed her the Clefairy doll.\l"
	.string "You did well, {PLAYER}.\l"
	.string "Now we should be able to look for her\l"
	.string "here and see if she's under mind\l"
	.string "control.\l"
	.string "I should warn you, mindscapes can be\l"
	.string "very unpredictable.\l"
	.string "They reflect a person's innermost self,\l"
	.string "and there might be challenges you face\l"
	.string "before you can find Viviane.\l"
	.string "Every person's mindscape is different,\l"
	.string "so I can't tell you what you'll find here.\l"
	.string "But just keep in mind that nothing you\l"
	.string "encounter here is real - people,\l"
	.string "pokémon, items.\l"
	.string "Whatever pokémon you find here, you\l"
	.string "won't be able to catch, since they don't\l"
	.string "exist in the real world - only in\l"
	.string "Viviane's consciousness.\l"
	.string "Likewise, anyone you encounter,\l"
	.string "besides Viviane herself, is only a\l"
	.string "figment of her mind.\l"
	.string "I'll stay here to support you, so please\l"
	.string "go and find Viviane.$"

Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_0:
# 51 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}{PLAYER}, you should rest while you\n"
	.string "can.$"

Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_1:
# 54 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}Your party has been healed.\n"
	.string "I'm counting on you, {PLAYER}.$"

Astridale_Mindscape_EventScript_Munna_PC_Text_0:
# 60 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Muuuunn...$"
