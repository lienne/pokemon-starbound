Astridale_Warehouse_MapScripts::
# 2 "data/maps/Astridale_Warehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/Astridale_Warehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Astridale_Warehouse/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 2
	goto_if_lt Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Astridale_Warehouse/scripts.pory"
	playbgm MUS_NONE, 1
	return

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Astridale_Warehouse/scripts.pory"
	setflag FLAG_HIDE_VIVIANE_IN_ASTRIDALE_WAREHOUSE
# 5 "data/maps/Astridale_Warehouse/scripts.pory"
	setflag FLAG_HIDE_JIRACHI_IN_ASTRIDALE_WAREHOUSE
	goto Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Astridale_Warehouse/scripts.pory"
	map_script_2 VAR_ASTRIDALE_STATE, 2, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/Astridale_Warehouse/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 3
# 13 "data/maps/Astridale_Warehouse/scripts.pory"
	clearflag FLAG_HIDE_VIVIANE_IN_ASTRIDALE_WAREHOUSE
# 14 "data/maps/Astridale_Warehouse/scripts.pory"
	addobject Astridale_Warehouse_Viviane
# 15 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Player_Enters_Warehouse_Look_For_Viviane
# 16 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 17 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 18 "data/maps/Astridale_Warehouse/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Astridale_Warehouse/scripts.pory"
	waitse
# 20 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/Astridale_Warehouse/scripts.pory"
	special SpawnCameraObject
# 22 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_CAMERA, Astridale_Warehouse_Camera_Movement_PanToViviane
# 23 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 24 "data/maps/Astridale_Warehouse/scripts.pory"
	speakername VivianeName
# 25 "data/maps/Astridale_Warehouse/scripts.pory"
	msgbox Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Viviane, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 27 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 28 "data/maps/Astridale_Warehouse/scripts.pory"
	speakername VivianeName
# 29 "data/maps/Astridale_Warehouse/scripts.pory"
	msgbox Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Viviane, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 31 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 33 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 34 "data/maps/Astridale_Warehouse/scripts.pory"
	speakername VivianeName
# 35 "data/maps/Astridale_Warehouse/scripts.pory"
	msgbox Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 38 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Viviane, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 39 "data/maps/Astridale_Warehouse/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Astridale_Warehouse/scripts.pory"
	waitse
# 41 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 42 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Viviane, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 43 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 44 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 45 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 46 "data/maps/Astridale_Warehouse/scripts.pory"
	special RemoveCameraObject
# 47 "data/maps/Astridale_Warehouse/scripts.pory"
	speakername VivianeName
# 48 "data/maps/Astridale_Warehouse/scripts.pory"
	msgbox Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_AUTOCLOSE
# 57 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Viviane, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 59 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 60 "data/maps/Astridale_Warehouse/scripts.pory"
	playse SE_DOOR
# 61 "data/maps/Astridale_Warehouse/scripts.pory"
	waitse
# 62 "data/maps/Astridale_Warehouse/scripts.pory"
	setflag FLAG_HIDE_VIVIANE_IN_ASTRIDALE_WAREHOUSE
# 63 "data/maps/Astridale_Warehouse/scripts.pory"
	removeobject Astridale_Warehouse_Viviane
# 64 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 65 "data/maps/Astridale_Warehouse/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Astridale_Warehouse/scripts.pory"
	waitse
# 67 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/Astridale_Warehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 69 "data/maps/Astridale_Warehouse/scripts.pory"
	clearflag FLAG_HIDE_JIRACHI_IN_ASTRIDALE_WAREHOUSE
# 70 "data/maps/Astridale_Warehouse/scripts.pory"
	addobject Astridale_Warehouse_Jirachi
# 71 "data/maps/Astridale_Warehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 72 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 73 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	applymovement Astridale_Warehouse_Jirachi, Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 75 "data/maps/Astridale_Warehouse/scripts.pory"
	waitmovement 0
# 76 "data/maps/Astridale_Warehouse/scripts.pory"
	speakername JirachiName
# 77 "data/maps/Astridale_Warehouse/scripts.pory"
	msgbox Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_AUTOCLOSE
# 97 "data/maps/Astridale_Warehouse/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 98 "data/maps/Astridale_Warehouse/scripts.pory"
	setflag FLAG_HIDE_JIRACHI_IN_ASTRIDALE_WAREHOUSE
# 99 "data/maps/Astridale_Warehouse/scripts.pory"
	removeobject Astridale_Warehouse_Jirachi
# 100 "data/maps/Astridale_Warehouse/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 101 "data/maps/Astridale_Warehouse/scripts.pory"
	updatequest QUEST_3_ASTRIDALE_SABOTEUR, VAR_ASTRIDALE_SABOTEUR_STATE
	end


# 107 "data/maps/Astridale_Warehouse/scripts.pory"
Player_Enters_Warehouse_Look_For_Viviane:
# 108 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 109 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 110 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 111 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 112 "data/maps/Astridale_Warehouse/scripts.pory"
	face_left
# 113 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 114 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 115 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 116 "data/maps/Astridale_Warehouse/scripts.pory"
	face_right
# 117 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 118 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 119 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 120 "data/maps/Astridale_Warehouse/scripts.pory"
	face_up
	step_end

# 123 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_Camera_Movement_PanToViviane:
# 124 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 124 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 124 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 124 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 17 "data/maps/Astridale_Warehouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 26 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 26 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 26 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 26 "data/maps/Astridale_Warehouse/scripts.pory"
	face_right
	step_end

# 30 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_left
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_left
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_left
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_left
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_left
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 30 "data/maps/Astridale_Warehouse/scripts.pory"
	face_up
	step_end

# 32 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 32 "data/maps/Astridale_Warehouse/scripts.pory"
	face_up
	step_end

# 42 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 42 "data/maps/Astridale_Warehouse/scripts.pory"
	face_down
	step_end

# 44 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 44 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 44 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 44 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
# 44 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_up
	step_end

# 57 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 57 "data/maps/Astridale_Warehouse/scripts.pory"
	delay_16
# 57 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_in_place_faster_down
	step_end

# 58 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
# 58 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_fast_down
	step_end

# 74 "data/maps/Astridale_Warehouse/scripts.pory"
Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
# 74 "data/maps/Astridale_Warehouse/scripts.pory"
	walk_slow_down
	step_end

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 25 "data/maps/Astridale_Warehouse/scripts.pory"
	.string "…$"

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 35 "data/maps/Astridale_Warehouse/scripts.pory"
	.string "…so these are the plans for the\n"
	.string "construction…\p"
	.string "…let's see…\p"
	.string "…$"

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 48 "data/maps/Astridale_Warehouse/scripts.pory"
	.string "…what's this?\p"
	.string "…\p"
	.string "Yes, I'm the one who's been sabotaging\n"
	.string "the construction.\p"
	.string "…\p"
	.string "You don't know what you're talking\n"
	.string "about.\p"
	.string "This construction's bad for Astridale.\p"
	.string "It can't be allowed to continue.\p"
	.string "You think you can stop me? You're just\n"
	.string "a kid.\p"
	.string "I'll put a stop to this if it's the last\n"
	.string "thing I do!$"

Astridale_Warehouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 77 "data/maps/Astridale_Warehouse/scripts.pory"
	.string "{COLOR RED}{PLAYER}.\p"
	.string "That person… I can feel something\n"
	.string "horribly wrong with her.\p"
	.string "I think she's not in her right mind…\p"
	.string "{PLAYER}, there's something you must\n"
	.string "know.\p"
	.string "There is another dimension… a dimension\n"
	.string "where each person's dreams and sense\l"
	.string "of self lives.\p"
	.string "Those who captured me, they've been\n"
	.string "trying to mess with people's dreams,\l"
	.string "through this other dimension.\p"
	.string "I'm afraid the worst has come to pass…\p"
	.string "If they somehow succeeded, they could\n"
	.string "control others through their dreams.\p"
	.string "I'm afraid that person has fallen to\n"
	.string "their mind control.\p"
	.string "{PLAYER}, we must find out if this is\n"
	.string "true.\p"
	.string "I can grant you the power to go into her\n"
	.string "mindscape… the dimension that holds\l"
	.string "that person's dreams.\p"
	.string "You'll need something, an item of great\n"
	.string "sentimental value to her.\p"
	.string "If you can find such an item, you'll be\n"
	.string "able to enter her mind and hopefully\l"
	.string "free her from the control.\p"
	.string "Find that item, and show it to her.\p"
	.string "That should be all you need to enter her\n"
	.string "mindscape.\p"
	.string "But be warned that once you enter, you\n"
	.string "won't be able to leave until you find\l"
	.string "her.\p"
	.string "But I will be there to support you, so\n"
	.string "don't worry.\p"
	.string "I will be able to help you if you need it.\p"
	.string "I know you can do this, {PLAYER}.\p"
	.string "I'll find you again soon.$"
