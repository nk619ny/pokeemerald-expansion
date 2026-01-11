# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
//.set LOCALID_VERDANTURF_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"

# 4 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 5 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 6 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 10 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/VerdanturfTown/scripts.pory"
	end
# 12 "data/maps/VerdanturfTown/scripts.pory"

# 13 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 14 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 15 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 16 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 17 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 18 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 19 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 20 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 21 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 22 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 23 "data/maps/VerdanturfTown/scripts.pory"
	release
# 24 "data/maps/VerdanturfTown/scripts.pory"
	end
# 25 "data/maps/VerdanturfTown/scripts.pory"

# 26 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 27 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 28 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 29 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/VerdanturfTown/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown/scripts.pory"

# 33 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 34 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown/scripts.pory"

# 37 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 38 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown/scripts.pory"
	end
# 40 "data/maps/VerdanturfTown/scripts.pory"

# 41 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 42 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 43 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 44 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 45 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown/scripts.pory"
	release
# 47 "data/maps/VerdanturfTown/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown/scripts.pory"

# 49 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 50 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 51 "data/maps/VerdanturfTown/scripts.pory"
	release
# 52 "data/maps/VerdanturfTown/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown/scripts.pory"

# 54 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 55 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 56 "data/maps/VerdanturfTown/scripts.pory"
	end
# 57 "data/maps/VerdanturfTown/scripts.pory"

# 58 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 59 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 60 "data/maps/VerdanturfTown/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown/scripts.pory"

# 62 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 63 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 64 "data/maps/VerdanturfTown/scripts.pory"
	end
# 65 "data/maps/VerdanturfTown/scripts.pory"

# 66 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 67 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 68 "data/maps/VerdanturfTown/scripts.pory"
	end
# 69 "data/maps/VerdanturfTown/scripts.pory"

# 70 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 74 "data/maps/VerdanturfTown/scripts.pory"

# 75 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 76 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 81 "data/maps/VerdanturfTown/scripts.pory"

# 82 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 83 "data/maps/VerdanturfTown/scripts.pory"
	.string "My Pokémon and I, we've been riding\n"
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 87 "data/maps/VerdanturfTown/scripts.pory"

# 88 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 89 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 90 "data/maps/VerdanturfTown/scripts.pory"
	.string "Pokémon MART?\p"
# 91 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 92 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 94 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 95 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 96 "data/maps/VerdanturfTown/scripts.pory"

# 97 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 98 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the Pokémon MART\n"
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 102 "data/maps/VerdanturfTown/scripts.pory"

# 103 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 104 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 106 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 107 "data/maps/VerdanturfTown/scripts.pory"

# 108 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 109 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 110 "data/maps/VerdanturfTown/scripts.pory"

# 111 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 114 "data/maps/VerdanturfTown/scripts.pory"

# 115 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 116 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 118 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 119 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"

VerdanturfTown_Text_ManTryingToDigTunnel::
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "They tried building a tunnel to\n"
	.string "Rustboro City, but it was abandoned\l"
	.string "because of the Pokémon inside.\p"
	.string "But now that the bridge outside\n"
	.string "Rustboro is broken, they're trying to\l"
	.string "finish the tunnel again.$"
