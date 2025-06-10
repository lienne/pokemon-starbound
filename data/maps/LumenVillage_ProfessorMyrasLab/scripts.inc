LumenVillage_ProfessorMyrasLab_MapScripts::
# 8 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeobject ProfMyrasLab_Rival_Intro_2
# 5 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	return

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 0, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 28 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 3, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_INTRO_SCENE, 1
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 15 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 16 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 17 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 18 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
	end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 29 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setvar VAR_INTRO_SCENE, 4
# 30 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	addobject ProfMyrasLab_Rival_Intro_2
# 31 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 32 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 33 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 34 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 35 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	delay 50
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1
# 37 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 38 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 41 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1
# 46 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2
# 49 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3
# 53 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4, MSGBOX_AUTOCLOSE
# 55 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 56 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5, MSGBOX_AUTOCLOSE
# 57 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 58 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2
# 59 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 60 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 61 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_PIN
# 62 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement
# 63 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6, MSGBOX_AUTOCLOSE
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3
# 70 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_4
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_5
# 72 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement ProfMyrasLab_Rival_Intro_2, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_6
# 74 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement ProfMyrasLab_Rival_Intro_2
# 75 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement LOCALID_PLAYER
# 76 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playse SE_DOOR
# 77 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitse
# 78 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeobject ProfMyrasLab_Rival_Intro_2
# 79 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	applymovement LOCALID_PLAYER, LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_7
# 81 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmovement 0
# 82 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7
# 87 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8, MSGBOX_AUTOCLOSE
# 89 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9
# 92 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10
# 95 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setflag FLAG_DELIVERED_JIRACHI_MEDICINE
# 96 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	removeitem ITEM_PARCEL
# 97 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_11
# 99 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitfanfare
# 101 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 102 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 103 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_12, MSGBOX_AUTOCLOSE
	end


ProfMyrasLab_EventScript_ProfMyra_Dialogue::
# 113 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	goto_if_unset FLAG_RECEIVED_JIRACHI_MEDICINE, ProfMyrasLab_EventScript_ProfMyra_Dialogue_1
# 116 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1, type = MSGBOX_NPC
	return

ProfMyrasLab_EventScript_ProfMyra_Dialogue_1:
# 114 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	msgbox ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0, type = MSGBOX_NPC
	return


ProfMyrasLab_EventScript_JirachiNPC::
# 122 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 123 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	waitmoncry
	return


# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 14 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 31 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	emote_exclamation_mark
	step_end

# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_1:
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
# 36 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_2:
# 58 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_down
	step_end

# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_3:
# 69 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_right
	step_end

# 70 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_4:
# 70 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	face_right
	step_end

# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_5:
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 71 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
	step_end

# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_6:
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
# 73 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_fast_down
	step_end

# 80 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_7:
# 80 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	walk_up
	step_end

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 16 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Jirachi seems to be doing a bit better\n"
	.string "now, thanks to you, {PLAYER}.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 19 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "However, I think it's best if we get it\n"
	.string "some more potent medicine.\l"
	.string "I know you've done a lot already, but\l"
	.string "would you be willing to go to Solstice\l"
	.string "Town to pick it up?\l"
	.string "It's just the next town over.\l"
	.string "You can take the Pokémon I lent you, of\l"
	.string "course.\l"
	.string "The PokéMart attendant will have it\l"
	.string "ready for you at my request.\l"
	.string "Thank you, {PLAYER}. We'll see you\l"
	.string "when you get back!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 38 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Professor Myra! I want a Pokémon too!\n"
	.string "{PLAYER} already got one! It's not\l"
	.string "fair that only {PLAYER} gets one!\l"
	.string "I'll treat it well! We'll get strong\l"
	.string "together! Please believe me!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
# 41 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hmmm... These Pokémon were part of a\n"
	.string "special research assignment.\l"
	.string "They weren't meant for trainers... not\l"
	.string "yet.\l"
	.string "But I see it in yours eyes - you're\l"
	.string "serious.\l"
	.string "This isn't about catching up, is it?\l"
	.string "It's about proving you're ready.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2:
# 46 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I've ALWAYS been ready!\n"
	.string "If {PLAYER} is out there, then I\l"
	.string "should be too!\l"
	.string "Please, Professor! I want to be a\l"
	.string "Pokémon Trainer!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3:
# 49 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "...very well.\n"
	.string "But know this: once you take this step,\l"
	.string "there's no going back.\l"
	.string "This journey will challenge more than\l"
	.string "just your strength.\l"
	.string "Choose carefully.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_4:
# 53 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you, Professor Myra!!\n"
	.string "I promise I won't let you down!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_5:
# 56 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Rival received a Pokémon!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_6:
# 63 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "{PLAYER}!\n"
	.string "I told you I'd get a Pokémon too!\l"
	.string "Now we're even. Don't think you'll stay\l"
	.string "one step ahead for long!\l"
	.string "...but, uh, I'm still glad we're doing this\l"
	.string "together.\l"
	.string "Even if I AM gonna beat you!\l"
	.string "Catch you later!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_7:
# 82 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Hi {PLAYER}!\n"
	.string "You came at just the right time.\l"
	.string "I ended up giving your friend a Pokémon.\l"
	.string "For the sake of being fair, I think you\l"
	.string "should keep the one I lent you earlier.\l"
	.string "After all, it looks like you two have\l"
	.string "already started bonding.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_8:
# 88 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "You received a Pokémon!$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_9:
# 90 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Would you like to give a nickname to the\n"
	.string "Pokémon?$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_10:
# 92 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I see you've also retrieved the\n"
	.string "medicine from Solstice Town.\l"
	.string "Thank you for that, {PLAYER}.\l"
	.string "I think Jirachi will be able to recover\l"
	.string "now.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_11:
# 97 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Since you're keeping the Pokémon I lent\n"
	.string "you, I think it's only fair that you take\l"
	.string "this as well.\l"
	.string "It's a Pokédex, a device that records\l"
	.string "data on all Pokémon you encounter.$"

LumenVillage_ProfessorMyrasLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_12:
# 104 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "I hope you'll use it to learn more about\n"
	.string "the world of Pokémon.\l"
	.string "And of course, if you ever need\l"
	.string "anything, feel free to come back here.\l"
	.string "Good luck on your journey, {PLAYER}!$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_0:
# 114 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Thank you for agreeing to get the\n"
	.string "medicine from Solstice Town for Jirachi.\l"
	.string "It's imperative we help it recover.$"

ProfMyrasLab_EventScript_ProfMyra_Dialogue_Text_1:
# 116 "data/maps/LumenVillage_ProfessorMyrasLab/scripts.pory"
	.string "Welcome back, {PLAYER}!\l"
	.string "Jirachi is doing much better now,\l"
	.string "thanks to you!$"
