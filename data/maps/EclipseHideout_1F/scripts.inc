EclipseHideout_1F_MapScripts::
# 2 "data/maps/EclipseHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EclipseHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EclipseHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EclipseHideout_1F/scripts.pory"
	map_script_2 VAR_INTRO_SCENE, 0, EclipseHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EclipseHideout_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/EclipseHideout_1F/scripts.pory"
	call EclipseHideout_EventScript_Intro
	end


EclipseHideout_EventScript_Intro::
# 23 "data/maps/EclipseHideout_1F/scripts.pory"
	lockall
# 24 "data/maps/EclipseHideout_1F/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement LOCALID_CAMERA, EclipseHideout_EventScript_Intro_Movement_0
# 26 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/EclipseHideout_1F/scripts.pory"
	special RemoveCameraObject
# 28 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt1Name
# 29 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_0
# 30 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 31 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 32 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_M, EclipseHideout_EventScript_Intro_Movement_1
# 33 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_1
# 36 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 37 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 38 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_F, EclipseHideout_EventScript_Intro_Movement_2
# 39 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt2Name
# 41 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_2
# 42 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 43 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 44 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_1
# 45 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername AdminName
# 47 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_3
# 48 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 49 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 50 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_M, EclipseHideout_EventScript_Intro_Movement_1
# 51 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt1Name
# 53 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_4
# 54 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 55 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 56 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_1
# 57 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername AdminName
# 59 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_5
# 61 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 62 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 63 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_F, EclipseHideout_EventScript_Intro_Movement_1
# 64 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt2Name
# 66 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_6
# 68 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 69 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 70 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_1
# 71 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername AdminName
# 73 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_7
# 75 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 76 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 77 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 78 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8005, 3
# 79 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8006, 10
# 80 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8007, 2
# 81 "data/maps/EclipseHideout_1F/scripts.pory"
	special ShakeCamera
# 82 "data/maps/EclipseHideout_1F/scripts.pory"
	delay 30
# 83 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_M, EclipseHideout_EventScript_Intro_Movement_3
# 84 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_3
# 85 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_F, EclipseHideout_EventScript_Intro_Movement_3
# 86 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_PIN
# 87 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 88 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/EclipseHideout_1F/scripts.pory"
	delay 30
# 90 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_M, EclipseHideout_EventScript_Intro_Movement_4
# 91 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_LEDGE
# 93 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 94 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt1Name
# 95 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_8
# 96 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 97 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 98 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_1
# 99 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername AdminName
# 101 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_9
# 102 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 103 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 104 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8004, 5
# 105 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8005, 5
# 106 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8006, 50
# 107 "data/maps/EclipseHideout_1F/scripts.pory"
	setvar VAR_0x8007, 2
# 108 "data/maps/EclipseHideout_1F/scripts.pory"
	special ShakeCamera
# 109 "data/maps/EclipseHideout_1F/scripts.pory"
	delay 30
# 110 "data/maps/EclipseHideout_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 111 "data/maps/EclipseHideout_1F/scripts.pory"
	delay 30
# 112 "data/maps/EclipseHideout_1F/scripts.pory"
	call EclipseHideout_1F_Set_Cage_Metatiles
# 113 "data/maps/EclipseHideout_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 114 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Jirachi1, EclipseHideout_EventScript_Intro_Movement_5
# 115 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Grunt_F, EclipseHideout_EventScript_Intro_Movement_1
# 117 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 118 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername Grunt2Name
# 119 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_10
# 120 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 121 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 122 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_1
# 123 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/EclipseHideout_1F/scripts.pory"
	speakername AdminName
# 125 "data/maps/EclipseHideout_1F/scripts.pory"
	msgbox EclipseHideout_EventScript_Intro_Text_11
# 126 "data/maps/EclipseHideout_1F/scripts.pory"
	playse SE_SELECT
# 127 "data/maps/EclipseHideout_1F/scripts.pory"
	waitse
# 128 "data/maps/EclipseHideout_1F/scripts.pory"
	applymovement EclipseHideout_1F_Admin_Virella, EclipseHideout_EventScript_Intro_Movement_6
# 129 "data/maps/EclipseHideout_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/EclipseHideout_1F/scripts.pory"
	checkplayergender
# 131 "data/maps/EclipseHideout_1F/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 132 "data/maps/EclipseHideout_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EclipseHideout_EventScript_Intro_2
# 136 "data/maps/EclipseHideout_1F/scripts.pory"
	warpwhitefade MAP_LUMEN_VILLAGE_SELENES_HOUSE_2F, 3, 4
# 137 "data/maps/EclipseHideout_1F/scripts.pory"
	waitstate
EclipseHideout_EventScript_Intro_1:
# 139 "data/maps/EclipseHideout_1F/scripts.pory"
	releaseall
	return

EclipseHideout_EventScript_Intro_2:
# 133 "data/maps/EclipseHideout_1F/scripts.pory"
	warpwhitefade MAP_LUMEN_VILLAGE_CASSIANS_HOUSE_2F, 5, 4
# 134 "data/maps/EclipseHideout_1F/scripts.pory"
	waitstate
	goto EclipseHideout_EventScript_Intro_1


EclipseHideout_1F_Set_Cage_Metatiles::
# 143 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 7, 7, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Top1, FALSE
# 144 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 8, 7, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Top2, FALSE
# 145 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 9, 7, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Top3, FALSE
# 146 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 10, 7, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Top4, FALSE
# 147 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 7, 8, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Middle1, FALSE
# 148 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 8, 8, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Middle2, FALSE
# 149 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 9, 8, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Middle3, FALSE
# 150 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 10, 8, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Middle4, FALSE
# 151 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 7, 9, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Bottom1, FALSE
# 152 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 8, 9, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Bottom2, FALSE
# 153 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 9, 9, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Bottom3, FALSE
# 154 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 10, 9, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Bottom4, FALSE
# 155 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 8, 10, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Broken_Pieces1, FALSE
# 156 "data/maps/EclipseHideout_1F/scripts.pory"
	setmetatile 9, 10, METATILE_Eclipse_Hideout_EclipseHideout_Cage_Broken_Pieces2, FALSE
# 157 "data/maps/EclipseHideout_1F/scripts.pory"
	special DrawWholeMapView
	return


# 25 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_0:
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 25 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
	step_end

# 32 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_1:
# 32 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_in_place_fast_up
	step_end

# 38 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_2:
# 38 "data/maps/EclipseHideout_1F/scripts.pory"
	face_left
	step_end

# 83 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_3:
# 83 "data/maps/EclipseHideout_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 90 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_4:
# 90 "data/maps/EclipseHideout_1F/scripts.pory"
	jump_in_place_up
	step_end

# 114 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_5:
# 114 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_slow_up
# 114 "data/maps/EclipseHideout_1F/scripts.pory"
	face_down
	step_end

# 128 "data/maps/EclipseHideout_1F/scripts.pory"
EclipseHideout_EventScript_Intro_Movement_6:
# 128 "data/maps/EclipseHideout_1F/scripts.pory"
	walk_fast_up
	step_end

EclipseHideout_EventScript_Intro_Text_0:
# 29 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "… … …$"

EclipseHideout_EventScript_Intro_Text_1:
# 34 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "It's awake again…\p"
	.string "That light - it's getting brighter.$"

EclipseHideout_EventScript_Intro_Text_2:
# 41 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "Should we increase the suppression\n"
	.string "field, Admin?$"

EclipseHideout_EventScript_Intro_Text_3:
# 47 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "No. Let it wake. We need its mind active\n"
	.string "for the next phase of testing.$"

EclipseHideout_EventScript_Intro_Text_4:
# 53 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "But… what if it breaks free? This thing\n"
	.string "isn't like the others.$"

EclipseHideout_EventScript_Intro_Text_5:
# 59 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "It won't. We've tuned the inhibitor\n"
	.string "perfectly.\p"
	.string "It won't escape.$"

EclipseHideout_EventScript_Intro_Text_6:
# 66 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "Still, it gives me the creeps. A Pokémon\n"
	.string "that grants wishes…\p"
	.string "Why not just ask it for power and be\n"
	.string "done with it?$"

EclipseHideout_EventScript_Intro_Text_7:
# 73 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "Because power given freely is fragile.\p"
	.string "We will take what we need, bend its will,\n"
	.string "extract the knowledge buried in its\l"
	.string "mind.$"

EclipseHideout_EventScript_Intro_Text_8:
# 95 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "Admin! The inhibitor! It's failing!$"

EclipseHideout_EventScript_Intro_Text_9:
# 101 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "No! Not now! Secure it!$"

EclipseHideout_EventScript_Intro_Text_10:
# 119 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "It's breaking free!$"

EclipseHideout_EventScript_Intro_Text_11:
# 125 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "No! Contain it! Do NOT let it escape!$"

Grunt1Name::
# 10 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "???$"

Grunt2Name::
# 14 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "???$"

AdminName::
# 18 "data/maps/EclipseHideout_1F/scripts.pory"
	.string "???$"
