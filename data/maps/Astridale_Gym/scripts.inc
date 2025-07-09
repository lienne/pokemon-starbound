Astridale_Gym_MapScripts::
# 2 "data/maps/Astridale_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Astridale_Gym/scripts.pory"
	map_script_2 VAR_ASTRIDALE_STATE, 8, Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/Astridale_Gym/scripts.pory"
	setvar VAR_ASTRIDALE_STATE, 9
# 5 "data/maps/Astridale_Gym/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 6 "data/maps/Astridale_Gym/scripts.pory"
	clearflag FLAG_FORCE_NO_SHINY
# 7 "data/maps/Astridale_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_ASTRIDALE
# 8 "data/maps/Astridale_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 9 "data/maps/Astridale_Gym/scripts.pory"
	playse SE_PIN
# 10 "data/maps/Astridale_Gym/scripts.pory"
	waitse
# 11 "data/maps/Astridale_Gym/scripts.pory"
	waitmovement 0
# 12 "data/maps/Astridale_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 13 "data/maps/Astridale_Gym/scripts.pory"
	waitmovement 0
# 14 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 15 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 33 "data/maps/Astridale_Gym/scripts.pory"
	speakername NULL
# 34 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 35 "data/maps/Astridale_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 36 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 37 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_AUTOCLOSE
	end


Astridale_Gym_EventScript_Viviane::
# 46 "data/maps/Astridale_Gym/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 4
	goto_if_ge Astridale_Gym_EventScript_Viviane_3
Astridale_Gym_EventScript_Viviane_2:
# 77 "data/maps/Astridale_Gym/scripts.pory"
	applymovement Astridale_Gym_Viviane, Astridale_Gym_EventScript_Viviane_Movement_0
# 78 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 79 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_5, MSGBOX_AUTOCLOSE
	return

Astridale_Gym_EventScript_Viviane_1:
# 47 "data/maps/Astridale_Gym/scripts.pory"
	applymovement Astridale_Gym_Viviane, Astridale_Gym_EventScript_Viviane_Movement_0
# 48 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 49 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_0
# 59 "data/maps/Astridale_Gym/scripts.pory"
	speakername NULL
# 60 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_1, MSGBOX_YESNO
# 61 "data/maps/Astridale_Gym/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Astridale_Gym_EventScript_Viviane_6
# 66 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_3
# 67 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 68 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_4, MSGBOX_NPC
# 73 "data/maps/Astridale_Gym/scripts.pory"
	warpwhitefade MAP_ASTRIDALE_MINDSCAPE, 19, 75
	return

Astridale_Gym_EventScript_Viviane_3:
# 46 "data/maps/Astridale_Gym/scripts.pory"
	compare VAR_ASTRIDALE_STATE, 9
	goto_if_lt Astridale_Gym_EventScript_Viviane_1
	goto Astridale_Gym_EventScript_Viviane_2

Astridale_Gym_EventScript_Viviane_6:
# 62 "data/maps/Astridale_Gym/scripts.pory"
	speakername VivianeName
# 63 "data/maps/Astridale_Gym/scripts.pory"
	msgbox Astridale_Gym_EventScript_Viviane_Text_2, MSGBOX_NPC
	return


# 8 "data/maps/Astridale_Gym/scripts.pory"
Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 8 "data/maps/Astridale_Gym/scripts.pory"
	emote_exclamation_mark
	step_end

# 12 "data/maps/Astridale_Gym/scripts.pory"
Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 12 "data/maps/Astridale_Gym/scripts.pory"
	face_up
	step_end

# 47 "data/maps/Astridale_Gym/scripts.pory"
Astridale_Gym_EventScript_Viviane_Movement_0:
# 47 "data/maps/Astridale_Gym/scripts.pory"
	face_player
	step_end

Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 15 "data/maps/Astridale_Gym/scripts.pory"
	.string "…uughh…\p"
	.string "What… what happened?\p"
	.string "I… I don't remember anything…\p"
	.string "I feel so weak…\p"
	.string "…\p"
	.string "I… I was sabotaging the construction?\p"
	.string "Oh no… that's not like me at all…\p"
	.string "I don't really remember what happened…\p"
	.string "A stranger talked to me a few days ago,\n"
	.string "and since then everything's kind of a\l"
	.string "blur…\p"
	.string "It looks like you were able to snap me\n"
	.string "out of it, somehow.\p"
	.string "What's your name?\p"
	.string "…\p"
	.string "{PLAYER}. Got it.\p"
	.string "Thank you so much for snapping me out\n"
	.string "of it.\p"
	.string "I really don't know what came over me…\p"
	.string "In any case, I should thank you\n"
	.string "properly for helping me.\p"
	.string "Why don't you take this Gym badge?\p"
	.string "I'm in no condition to battle you at the\n"
	.string "moment, but I am sure this will be useful\l"
	.string "for you.$"

Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 34 "data/maps/Astridale_Gym/scripts.pory"
	.string "{PLAYER} received the Charm Badge\n"
	.string "from Viviane!$"

Astridale_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 37 "data/maps/Astridale_Gym/scripts.pory"
	.string "The Charm Badge allows you to use the\n"
	.string "HM Cut outside of battle.\p"
	.string "It also heightens the attack power of\n"
	.string "your Pokémon.\p"
	.string "I'm sure you will find it very useful.$"

Astridale_Gym_EventScript_Viviane_Text_0:
# 49 "data/maps/Astridale_Gym/scripts.pory"
	.string "So you're back.\p"
	.string "I suggest you forget what you saw at\n"
	.string "the warehouse.\p"
	.string "It's really none of your business, you\n"
	.string "know.\p"
	.string "You shouldn't go meddling in other\n"
	.string "people's affairs.\p"
	.string "The construction is bad for Astridale,\n"
	.string "and I need to do everything I can to\l"
	.string "stop it!\p"
	.string "You won't be able to stop me, even if\n"
	.string "you try!\p"
	.string "I'm a gym leader, you know.\p"
	.string "You think a kid like you can beat me?\p"
	.string "…\p"
	.string "What's that? You've got something for\n"
	.string "me?$"

Astridale_Gym_EventScript_Viviane_Text_1:
# 60 "data/maps/Astridale_Gym/scripts.pory"
	.string "Give Viviane her Clefairy doll?$"

Astridale_Gym_EventScript_Viviane_Text_2:
# 63 "data/maps/Astridale_Gym/scripts.pory"
	.string "That's right, scram!$"

Astridale_Gym_EventScript_Viviane_Text_3:
# 66 "data/maps/Astridale_Gym/scripts.pory"
	.string "You gave Viviane her Clefairy doll.$"

Astridale_Gym_EventScript_Viviane_Text_4:
# 68 "data/maps/Astridale_Gym/scripts.pory"
	.string "…\p"
	.string "…oh…\p"
	.string "…my beloved Clefairy doll…\p"
	.string "…\p"
	.string "…ugh, what's happening? I don't feel\n"
	.string "well…$"

Astridale_Gym_EventScript_Viviane_Text_5:
# 79 "data/maps/Astridale_Gym/scripts.pory"
	.string "Hi, {PLAYER}!\p"
	.string "Thank you again for helping me snap out\n"
	.string "of my mind fog.\p"
	.string "I hope your journey's going well.$"
