Route3_EchoRidge_MapScripts::
	.byte 0


Route3_EchoRidge_EventScript_RouteSign::
# 6 "data/maps/Route3_EchoRidge/scripts.pory"
	lockall
# 7 "data/maps/Route3_EchoRidge/scripts.pory"
	msgbox Route3_EchoRidge_EventScript_RouteSign_Text_0
# 9 "data/maps/Route3_EchoRidge/scripts.pory"
	releaseall
	return


Route3_EchoRidge_EventScript_RouteSign_Text_0:
# 7 "data/maps/Route3_EchoRidge/scripts.pory"
	.string "Echo Ridge\n"
	.string "“Where the echoes of the past linger”$"
