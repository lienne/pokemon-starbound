LumenVillage_MapScripts::
	.byte 0


LumenVillage_EventScript_ProfLabSign::
# 6 "data/maps/LumenVillage/scripts.pory"
	lockall
# 7 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_ProfLabSign_Text_0
# 8 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_LyrasHouseSign::
# 12 "data/maps/LumenVillage/scripts.pory"
	lockall
# 13 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_LyrasHouseSign_Text_0
# 14 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_CassiansHouseSign::
# 18 "data/maps/LumenVillage/scripts.pory"
	lockall
# 19 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_CassiansHouseSign_Text_0
# 20 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_EventScript_VillageSign::
# 24 "data/maps/LumenVillage/scripts.pory"
	lockall
# 25 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_EventScript_VillageSign_Text_0
# 27 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


LumenVillage_FatMan_Dialogue::
# 31 "data/maps/LumenVillage/scripts.pory"
	lockall
# 32 "data/maps/LumenVillage/scripts.pory"
	applymovement LumenVillage_FatMan, LumenVillage_FatMan_Dialogue_Movement_0
# 33 "data/maps/LumenVillage/scripts.pory"
	msgbox LumenVillage_FatMan_Dialogue_Text_0
# 35 "data/maps/LumenVillage/scripts.pory"
	releaseall
	return


# 32 "data/maps/LumenVillage/scripts.pory"
LumenVillage_FatMan_Dialogue_Movement_0:
# 32 "data/maps/LumenVillage/scripts.pory"
	face_player
	step_end

LumenVillage_EventScript_ProfLabSign_Text_0:
# 7 "data/maps/LumenVillage/scripts.pory"
	.string "Prof. Myra's Lab$"

LumenVillage_EventScript_LyrasHouseSign_Text_0:
# 13 "data/maps/LumenVillage/scripts.pory"
	.string "Lyra's House$"

LumenVillage_EventScript_CassiansHouseSign_Text_0:
# 19 "data/maps/LumenVillage/scripts.pory"
	.string "Cassian's House$"

LumenVillage_EventScript_VillageSign_Text_0:
# 25 "data/maps/LumenVillage/scripts.pory"
	.string "Lumen Village\n"
	.string "'A quiet place beneath the stars'$"

LumenVillage_FatMan_Dialogue_Text_0:
# 33 "data/maps/LumenVillage/scripts.pory"
	.string "Technology is amazing!\l"
	.string "You can now use sattelites to chart\nthe stars in Astrea!$"
