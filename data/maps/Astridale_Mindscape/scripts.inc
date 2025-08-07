Astridale_Mindscape_MapScripts::
# 2 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME
# 17 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_NO_CATCHING
# 4 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_FORCE_NO_SHINY
# 5 "data/maps/Astridale_Mindscape/scripts.pory"
	setrespawn HEAL_LOCATION_ASTRIDALE_MINDSCAPE
# 6 "data/maps/Astridale_Mindscape/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 6
	goto_if_eq Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 10 "data/maps/Astridale_Mindscape/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 7
	goto_if_eq Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME_2
	return

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 7 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_Set_Key_Metatiles
# 8 "data/maps/Astridale_Mindscape/scripts.pory"
	setobjectxyperm Astridale_Mindscape_Jirachi, 20, 75
	return

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 11 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_Set_Key_Metatiles
# 12 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_Set_LockBox_Metatiles
# 13 "data/maps/Astridale_Mindscape/scripts.pory"
	setobjectxyperm Astridale_Mindscape_Jirachi, 20, 75
	return

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/Astridale_Mindscape/scripts.pory"
	map_script_2 VAR_ASTRIDALE_STATE, 4, Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Astridale_Mindscape_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 19 "data/maps/Astridale_Mindscape/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 5
# 20 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_EventScript_Intro_Dialogue
# 21 "data/maps/Astridale_Mindscape/scripts.pory"
	setobjectxyperm Astridale_Mindscape_Jirachi, 20, 75
	end


Astridale_Mindscape_EventScript_Intro_Dialogue::
# 28 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 29 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_0
# 30 "data/maps/Astridale_Mindscape/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Astridale_Mindscape/scripts.pory"
	waitse
# 32 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 33 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_1
# 34 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_2
# 36 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement Astridale_Mindscape_Jirachi
# 37 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_3
# 38 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement Astridale_Mindscape_Jirachi
# 39 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_4
# 40 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement LOCALID_PLAYER
# 41 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 42 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Intro_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return


Astridale_Mindscape_EventScript_Jirachi_Dialogue::
# 59 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Jirachi, Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0
# 60 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 61 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_0, MSGBOX_NPC
# 62 "data/maps/Astridale_Mindscape/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 63 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername JirachiName
# 64 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_1, MSGBOX_AUTOCLOSE
	return


Astridale_Mindscape_EventScript_Munna_PC::
# 68 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Munna, Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0
# 69 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Munna_PC_Text_0, MSGBOX_NPC
# 70 "data/maps/Astridale_Mindscape/scripts.pory"
	special ShowPokemonStorageSystemPC
# 71 "data/maps/Astridale_Mindscape/scripts.pory"
	waitstate
# 72 "data/maps/Astridale_Mindscape/scripts.pory"
	closemessage
	return


Astridale_Mindscape_EventScript_LockBox_Trigger::
# 76 "data/maps/Astridale_Mindscape/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 7
	goto_if_lt Astridale_Mindscape_EventScript_LockBox_Trigger_1
	return

Astridale_Mindscape_EventScript_LockBox_Trigger_1:
# 77 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 78 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_LockBox_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 79 "data/maps/Astridale_Mindscape/scripts.pory"
	playse SE_SELECT
# 80 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Mindscape_EventScript_LockBox_Trigger_Movement_0
# 81 "data/maps/Astridale_Mindscape/scripts.pory"
	waitmovement 0
# 82 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return


Astridale_Mindscape_EventScript_Key::
# 87 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 88 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Key_Text_0, MSGBOX_YESNO
# 91 "data/maps/Astridale_Mindscape/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Astridale_Mindscape_EventScript_Key_2
# 95 "data/maps/Astridale_Mindscape/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 6
# 96 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_HIDE_ASTRIDALE_MINDSCAPE_INV_BRENDAN_KEY
# 97 "data/maps/Astridale_Mindscape/scripts.pory"
	removeobject Astridale_Mindscape_Invisible_Brendan_Key
# 98 "data/maps/Astridale_Mindscape/scripts.pory"
	playse SE_ITEMFINDER
# 99 "data/maps/Astridale_Mindscape/scripts.pory"
	waitse
# 100 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Key_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_Set_Key_Metatiles
Astridale_Mindscape_EventScript_Key_1:
# 103 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return

Astridale_Mindscape_EventScript_Key_2:
# 92 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_Key_Text_1, MSGBOX_AUTOCLOSE
	goto Astridale_Mindscape_EventScript_Key_1


Astridale_Mindscape_Set_Key_Metatiles::
# 107 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 53, 18, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 108 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 51, 19, METATILE_AstridaleMindscape_astridale_mindscape_maze_middle_edge, TRUE
# 109 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 51, 20, METATILE_AstridaleMindscape_astridale_mindscape_maze_bottom_edge, TRUE
# 110 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 52, 19, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 111 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 52, 20, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 112 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 53, 19, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 113 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 53, 20, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 114 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 54, 19, METATILE_AstridaleMindscape_astridale_mindscape_maze_middle_edge, TRUE
# 115 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 54, 20, METATILE_AstridaleMindscape_astridale_mindscape_maze_bottom_edge, TRUE
# 116 "data/maps/Astridale_Mindscape/scripts.pory"
	special DrawWholeMapView
	return


Astridale_Mindscape_EventScript_LockBox::
# 120 "data/maps/Astridale_Mindscape/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 6
	goto_if_lt Astridale_Mindscape_EventScript_LockBox_1
# 127 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 128 "data/maps/Astridale_Mindscape/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 7
# 129 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_LockBox_Text_1, MSGBOX_AUTOCLOSE
# 130 "data/maps/Astridale_Mindscape/scripts.pory"
	setflag FLAG_HIDE_ASTRIDALE_MINDSCAPE_INV_BRENDAN_LOCKBOX
# 131 "data/maps/Astridale_Mindscape/scripts.pory"
	removeobject Astridale_Mindscape_Invisible_Brendan_LockBox
# 132 "data/maps/Astridale_Mindscape/scripts.pory"
	call Astridale_Mindscape_Set_LockBox_Metatiles
# 133 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return

Astridale_Mindscape_EventScript_LockBox_1:
# 121 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 122 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_LockBox_Text_0, MSGBOX_AUTOCLOSE
# 124 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return


Astridale_Mindscape_Set_LockBox_Metatiles::
# 138 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 39, 61, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 139 "data/maps/Astridale_Mindscape/scripts.pory"
	setmetatile 39, 62, METATILE_AstridaleMindscape_astridale_mindscape_ground, FALSE
# 140 "data/maps/Astridale_Mindscape/scripts.pory"
	special DrawWholeMapView
	return


Astridale_Mindscape_EventScript_Viviane::
# 144 "data/maps/Astridale_Mindscape/scripts.pory"
	lockall
# 145 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername VivianeName
# 146 "data/maps/Astridale_Mindscape/scripts.pory"
	trainerbattle_single TRAINER_VIVIANE_1, Astridale_Mindscape_Text_VivianeIntro, Astridale_Mindscape_Text_VivianeDefeat, Astridale_Mindscape_EventScript_VivianeDefeated, NO_MUSIC
# 147 "data/maps/Astridale_Mindscape/scripts.pory"
	releaseall
	return


Astridale_Mindscape_EventScript_VivianeDefeated::
# 163 "data/maps/Astridale_Mindscape/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 8
# 164 "data/maps/Astridale_Mindscape/scripts.pory"
	applymovement Astridale_Mindscape_Viviane, Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0
# 165 "data/maps/Astridale_Mindscape/scripts.pory"
	speakername VivianeName
# 166 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_EventScript_VivianeDefeated_Text_0, MSGBOX_AUTOCLOSE
# 170 "data/maps/Astridale_Mindscape/scripts.pory"
	warpwhitefade MAP_ASTRIDALE_GYM, 7, 3
	return


Astridale_Mindscape_EventScript_Beauty_Melissa::
# 174 "data/maps/Astridale_Mindscape/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, Astridale_Mindscape_Beauty_Melissa_Intro_Text, Astridale_Mindscape_Beauty_Melissa_Lose_Text
# 175 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_Beauty_Melissa_Dialogue, MSGBOX_NPC
	return


Astridale_Mindscape_EventScript_Lass_Tiana::
# 179 "data/maps/Astridale_Mindscape/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Astridale_Mindscape_Lass_Tiana_Intro_Text, Astridale_Mindscape_Lass_Tiana_Lose_Text
# 180 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_Lass_Tiana_Dialogue, MSGBOX_NPC
	return


Astridale_Mindscape_EventScript_Lady_Cindy::
# 184 "data/maps/Astridale_Mindscape/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Astridale_Mindscape_Lady_Cindy_Intro_Text, Astridale_Mindscape_Lady_Cindy_Lose_Text
# 185 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_Lady_Cindy_Dialogue, MSGBOX_NPC
	return


Astridale_Mindscape_EventScript_AromaLady_Daisy::
# 189 "data/maps/Astridale_Mindscape/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Astridale_Mindscape_AromaLady_Daisy_Intro_Text, Astridale_Mindscape_AromaLady_Daisy_Lose_Text
# 190 "data/maps/Astridale_Mindscape/scripts.pory"
	msgbox Astridale_Mindscape_AromaLady_Daisy_Dialogue, MSGBOX_NPC
	return


# 29 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_0:
# 29 "data/maps/Astridale_Mindscape/scripts.pory"
	emote_exclamation_mark
	step_end

# 33 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_1:
# 33 "data/maps/Astridale_Mindscape/scripts.pory"
	face_up
	step_end

# 35 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_2:
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
# 35 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_slow_down
	step_end

# 37 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_3:
# 37 "data/maps/Astridale_Mindscape/scripts.pory"
	face_left
	step_end

# 39 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Intro_Dialogue_Movement_4:
# 39 "data/maps/Astridale_Mindscape/scripts.pory"
	face_right
	step_end

# 59 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_Jirachi_Dialogue_Movement_0:
# 59 "data/maps/Astridale_Mindscape/scripts.pory"
	face_player
	step_end

# 80 "data/maps/Astridale_Mindscape/scripts.pory"
Astridale_Mindscape_EventScript_LockBox_Trigger_Movement_0:
# 80 "data/maps/Astridale_Mindscape/scripts.pory"
	walk_left
	step_end

Astridale_Mindscape_EventScript_Intro_Dialogue_Text_0:
# 42 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}{PLAYER}.\p"
	.string "This is the realm of dreams.\p"
	.string "You are in Viviane's mindscape now.\p"
	.string "I was able to pull you in once you\n"
	.string "showed her the Clefairy doll.\p"
	.string "You did well, {PLAYER}.\p"
	.string "Now we should be able to look for her\n"
	.string "here and see if she's under mind\l"
	.string "control.\p"
	.string "I should warn you, mindscapes can be\n"
	.string "very unpredictable.\p"
	.string "They reflect a person's innermost self,\n"
	.string "and there might be challenges you face\l"
	.string "before you can find Viviane.\p"
	.string "Every person's mindscape is different,\n"
	.string "so I can't tell you what you'll find here.\p"
	.string "But just keep in mind that nothing you\n"
	.string "encounter here is real - people,\l"
	.string "Pokémon, items.\p"
	.string "Whatever Pokémon you find here, you\n"
	.string "won't be able to catch, since they don't\l"
	.string "exist in the real world - only in\l"
	.string "Viviane's consciousness.\p"
	.string "Likewise, anyone you encounter,\n"
	.string "besides Viviane herself, is only a\l"
	.string "figment of her mind.\p"
	.string "I'll stay here to support you, so please\n"
	.string "go and find Viviane.$"

Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_0:
# 61 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}{PLAYER}, you should rest while you\n"
	.string "can.$"

Astridale_Mindscape_EventScript_Jirachi_Dialogue_Text_1:
# 64 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "{COLOR RED}I'm counting on you, {PLAYER}.$"

Astridale_Mindscape_EventScript_Munna_PC_Text_0:
# 69 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Muuuunn…$"

Astridale_Mindscape_EventScript_LockBox_Trigger_Text_0:
# 78 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "A strange force doesn't allow you\n"
	.string "through…$"

Astridale_Mindscape_EventScript_Key_Text_0:
# 88 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "You found a key!\p"
	.string "It looks like it might open a lock box.\p"
	.string "Would you like to pick it up?$"

Astridale_Mindscape_EventScript_Key_Text_1:
# 92 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "You decided not to pick up the key.$"

Astridale_Mindscape_EventScript_Key_Text_2:
# 100 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "You picked up the key.$"

Astridale_Mindscape_EventScript_LockBox_Text_0:
# 122 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "The lock box is locked.\p"
	.string "It looks like it might be opened with a\n"
	.string "key.$"

Astridale_Mindscape_EventScript_LockBox_Text_1:
# 129 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "You opened the lock box with the key\n"
	.string "you found.$"

Astridale_Mindscape_EventScript_VivianeDefeated_Text_0:
# 166 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "…I… I can't remember…\p"
	.string "What was I doing?\p"
	.string "I feel so tired…\p"
	.string "I think I need to rest for a while…$"

Astridale_Mindscape_Text_VivianeIntro::
# 150 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "…\p"
	.string "I must destroy the construction in\n"
	.string "Astridale…\p"
	.string "You wouldn't understand…\p"
	.string "I must… I must…\p"
	.string "I…$"

Astridale_Mindscape_Text_VivianeDefeat::
# 158 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "No… I can't lose…$"

Astridale_Mindscape_Beauty_Melissa_Intro_Text::
# 193 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "This place feels like a dream, doesn't\n"
	.string "it?$"

Astridale_Mindscape_Beauty_Melissa_Lose_Text::
# 197 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "You sparkle brighter than I expected…$"

Astridale_Mindscape_Beauty_Melissa_Dialogue::
# 201 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Lady Viviane says every challenger\n"
	.string "adds a new shimmer to her world. I think\l"
	.string "yours was a whole constellation.$"

Astridale_Mindscape_Lass_Tiana_Intro_Text::
# 205 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "I'm gonna be just like Miss Viviane one\n"
	.string "day! Wanna see what I've learned?$"

Astridale_Mindscape_Lass_Tiana_Lose_Text::
# 209 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "W-wait, I wasn't ready! … Okay, maybe I\n"
	.string "was.$"

Astridale_Mindscape_Lass_Tiana_Dialogue::
# 213 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Viviane says losing helps you grow. So\n"
	.string "I'm gonna grow like a Sunkern in the\l"
	.string "sun!$"

Astridale_Mindscape_Lady_Cindy_Intro_Text::
# 217 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "The battlefield is our stage. Let's make\n"
	.string "this a dazzling duet!$"

Astridale_Mindscape_Lady_Cindy_Lose_Text::
# 221 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Oh! That finale… was magnificent!$"

Astridale_Mindscape_Lady_Cindy_Dialogue::
# 225 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Viviane taught me that grace and\n"
	.string "strength are not opposites. They're\l"
	.string "partners.$"

Astridale_Mindscape_AromaLady_Daisy_Intro_Text::
# 229 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "I made cupcakes for the Pokémon… but\n"
	.string "you? You'll get a fairy-type smackdown\l"
	.string "instead!$"

Astridale_Mindscape_AromaLady_Daisy_Lose_Text::
# 233 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Oh dear! I dropped my whisk AND the\n"
	.string "match!$"

Astridale_Mindscape_AromaLady_Daisy_Dialogue::
# 237 "data/maps/Astridale_Mindscape/scripts.pory"
	.string "Viviane has such a sweet tooth for\n"
	.string "kindness… and battle strategy!$"
