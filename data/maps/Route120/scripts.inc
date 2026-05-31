# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
//.set LOCALID_ROUTE120_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
//.set LOCALID_ROUTE120_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
//.set LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"
//.set LOCALID_ROUTE120_BRIDGE_KECLEON_2, 45
# 6 "data/maps/Route120/scripts.pory"

# 7 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 10 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 11 "data/maps/Route120/scripts.pory"
	.byte 0
# 12 "data/maps/Route120/scripts.pory"

# 13 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 14 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 15 "data/maps/Route120/scripts.pory"
	end
# 16 "data/maps/Route120/scripts.pory"

# 17 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 24 "data/maps/Route120/scripts.pory"
	return
# 25 "data/maps/Route120/scripts.pory"

# 26 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 27 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_BRIDGE_KECLEON
# 30 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_BRIDGE_KECLEON_2
# 31 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW
# 32 "data/maps/Route120/scripts.pory"
	return
# 33 "data/maps/Route120/scripts.pory"

# 34 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 35 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 36 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 37 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/Route120/scripts.pory"
	return
# 39 "data/maps/Route120/scripts.pory"

# 40 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 42 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 43 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 44 "data/maps/Route120/scripts.pory"
	end
# 45 "data/maps/Route120/scripts.pory"

# 46 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 47 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 48 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 49 "data/maps/Route120/scripts.pory"
	return
# 50 "data/maps/Route120/scripts.pory"

# 51 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 54 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 55 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 56 "data/maps/Route120/scripts.pory"
	return
# 57 "data/maps/Route120/scripts.pory"

# 58 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 59 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 60 "data/maps/Route120/scripts.pory"
	return
# 61 "data/maps/Route120/scripts.pory"

# 62 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 63 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 64 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 65 "data/maps/Route120/scripts.pory"
	end
# 66 "data/maps/Route120/scripts.pory"

# 67 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 68 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 69 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 70 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 71 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 75 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 79 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 80 "data/maps/Route120/scripts.pory"
	return
# 81 "data/maps/Route120/scripts.pory"

# 82 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 83 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 85 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 86 "data/maps/Route120/scripts.pory"
	end
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 89 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 90 "data/maps/Route120/scripts.pory"
	return
# 91 "data/maps/Route120/scripts.pory"

# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 93 "data/maps/Route120/scripts.pory"
	lock
# 94 "data/maps/Route120/scripts.pory"
	faceplayer
# 95 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 96 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 97 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 98 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 99 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 100 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 101 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 103 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 104 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 105 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 106 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 107 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 108 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 109 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 110 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 111 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 112 "data/maps/Route120/scripts.pory"
	end
# 113 "data/maps/Route120/scripts.pory"

# 114 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 115 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 116 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 117 "data/maps/Route120/scripts.pory"
	end
# 118 "data/maps/Route120/scripts.pory"

# 119 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 120 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 121 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 122 "data/maps/Route120/scripts.pory"
	end
# 123 "data/maps/Route120/scripts.pory"

# 124 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 125 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 126 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 127 "data/maps/Route120/scripts.pory"
	end
# 128 "data/maps/Route120/scripts.pory"

# 129 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 130 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 131 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 132 "data/maps/Route120/scripts.pory"
	end
# 133 "data/maps/Route120/scripts.pory"

# 134 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 135 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 136 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 137 "data/maps/Route120/scripts.pory"
	end
# 138 "data/maps/Route120/scripts.pory"

# 139 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 140 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 141 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 142 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 143 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 144 "data/maps/Route120/scripts.pory"
	release
# 145 "data/maps/Route120/scripts.pory"
	end
# 146 "data/maps/Route120/scripts.pory"

# 147 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 148 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 149 "data/maps/Route120/scripts.pory"
	release
# 150 "data/maps/Route120/scripts.pory"
	end
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 153 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 154 "data/maps/Route120/scripts.pory"
	return
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 157 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 158 "data/maps/Route120/scripts.pory"
	return
# 159 "data/maps/Route120/scripts.pory"

# 160 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 161 "data/maps/Route120/scripts.pory"
	lock
# 162 "data/maps/Route120/scripts.pory"
	faceplayer
# 163 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 164 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 165 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 166 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 167 "data/maps/Route120/scripts.pory"
	end
# 168 "data/maps/Route120/scripts.pory"

# 169 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 170 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 171 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 172 "data/maps/Route120/scripts.pory"
	release
# 173 "data/maps/Route120/scripts.pory"
	end
# 174 "data/maps/Route120/scripts.pory"

# 175 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 176 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 177 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 178 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 179 "data/maps/Route120/scripts.pory"
	end
# 180 "data/maps/Route120/scripts.pory"

# 181 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 183 "data/maps/Route120/scripts.pory"
	closemessage
# 184 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 185 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 186 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route120/scripts.pory"
	delay 20
# 189 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 190 "data/maps/Route120/scripts.pory"
	closemessage
# 191 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 192 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_BRIDGE_KECLEON, Movement_KecleonAppears
# 194 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route120/scripts.pory"
	waitse
# 196 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 197 "data/maps/Route120/scripts.pory"
	delay 40
# 198 "data/maps/Route120/scripts.pory"
	waitmoncry
# 199 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 200 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 201 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/Route120/scripts.pory"
	dowildbattle
# 203 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 204 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 205 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 206 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 207 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 208 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 209 "data/maps/Route120/scripts.pory"
	end
# 210 "data/maps/Route120/scripts.pory"

# 211 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 212 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_BRIDGE_KECLEON
# 214 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW
# 215 "data/maps/Route120/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE
# 216 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 217 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 218 "data/maps/Route120/scripts.pory"
	end
# 219 "data/maps/Route120/scripts.pory"

# 220 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 221 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 222 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 223 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 225 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 226 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 227 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 228 "data/maps/Route120/scripts.pory"
	closemessage
# 229 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 230 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route120/scripts.pory"
	delay 50
# 232 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 233 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 234 "data/maps/Route120/scripts.pory"
	delay 15
# 235 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 236 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 237 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 238 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 239 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 240 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 241 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/Route120/scripts.pory"
	release
# 243 "data/maps/Route120/scripts.pory"
	end
# 244 "data/maps/Route120/scripts.pory"

# 245 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 246 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 247 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route120/scripts.pory"
	return
# 249 "data/maps/Route120/scripts.pory"

# 250 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 251 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 252 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route120/scripts.pory"
	return
# 254 "data/maps/Route120/scripts.pory"

# 255 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 256 "data/maps/Route120/scripts.pory"
	walk_down
# 257 "data/maps/Route120/scripts.pory"
	walk_left
# 258 "data/maps/Route120/scripts.pory"
	step_end
# 259 "data/maps/Route120/scripts.pory"

# 260 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 261 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 262 "data/maps/Route120/scripts.pory"
	end
# 263 "data/maps/Route120/scripts.pory"

# 264 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 265 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 266 "data/maps/Route120/scripts.pory"
	end
# 267 "data/maps/Route120/scripts.pory"

# 268 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 269 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 270 "data/maps/Route120/scripts.pory"
	end
# 271 "data/maps/Route120/scripts.pory"

# 272 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 273 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_RobertIntro, Route120_Text_RobertDefeat
# 274 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 275 "data/maps/Route120/scripts.pory"
	release
# 276 "data/maps/Route120/scripts.pory"
	end
# 277 "data/maps/Route120/scripts.pory"
	
# 278 "data/maps/Route120/scripts.pory"

# 279 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 280 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 281 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route120/scripts.pory"
	end
# 283 "data/maps/Route120/scripts.pory"

# 284 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 285 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 286 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 288 "data/maps/Route120/scripts.pory"
	//register_matchcall TRAINER_ROBERT_1
# 289 "data/maps/Route120/scripts.pory"
	release
# 290 "data/maps/Route120/scripts.pory"
	end
# 291 "data/maps/Route120/scripts.pory"

# 292 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 293 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 294 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route120/scripts.pory"
	end
# 296 "data/maps/Route120/scripts.pory"

# 297 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 298 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 299 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route120/scripts.pory"
	end
# 301 "data/maps/Route120/scripts.pory"

# 302 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 303 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 304 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route120/scripts.pory"
	end
# 306 "data/maps/Route120/scripts.pory"

# 307 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 308 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 309 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 310 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 311 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 312 "data/maps/Route120/scripts.pory"
	release
# 313 "data/maps/Route120/scripts.pory"
	end
# 314 "data/maps/Route120/scripts.pory"

# 315 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 316 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 317 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 318 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 319 "data/maps/Route120/scripts.pory"
	//register_matchcall TRAINER_JEFFREY_1
# 320 "data/maps/Route120/scripts.pory"
	release
# 321 "data/maps/Route120/scripts.pory"
	end
# 322 "data/maps/Route120/scripts.pory"

# 323 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 324 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 325 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route120/scripts.pory"
	end
# 327 "data/maps/Route120/scripts.pory"

# 328 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 329 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 330 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route120/scripts.pory"
	end
# 332 "data/maps/Route120/scripts.pory"

# 333 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 334 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 335 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route120/scripts.pory"
	end
# 337 "data/maps/Route120/scripts.pory"

# 338 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 339 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 340 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route120/scripts.pory"
	end
# 342 "data/maps/Route120/scripts.pory"

# 343 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 344 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 345 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route120/scripts.pory"
	end
# 347 "data/maps/Route120/scripts.pory"

# 348 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 349 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 350 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route120/scripts.pory"
	end
# 352 "data/maps/Route120/scripts.pory"

# 353 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 354 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 355 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route120/scripts.pory"
	end
# 357 "data/maps/Route120/scripts.pory"

# 358 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 359 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 360 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route120/scripts.pory"
	end
# 362 "data/maps/Route120/scripts.pory"

# 363 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 364 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 365 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route120/scripts.pory"
	end
# 367 "data/maps/Route120/scripts.pory"

# 368 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 369 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 370 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 371 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 372 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 373 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 374 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 375 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 376 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 377 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 378 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 379 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 380 "data/maps/Route120/scripts.pory"

# 381 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 382 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 383 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 386 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your Pokémon\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 388 "data/maps/Route120/scripts.pory"

# 389 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 390 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 392 "data/maps/Route120/scripts.pory"

# 393 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 394 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 395 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 396 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 397 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 398 "data/maps/Route120/scripts.pory"

# 399 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 400 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 401 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 402 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 403 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 404 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 405 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 406 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 407 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 408 "data/maps/Route120/scripts.pory"

# 409 "data/maps/Route120/scripts.pory"
/*
# 410 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 411 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 412 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and TRAINERS\n"
# 413 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 414 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 415 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 416 "data/maps/Route120/scripts.pory"
*/
# 417 "data/maps/Route120/scripts.pory"

# 418 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 419 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 420 "data/maps/Route120/scripts.pory"

# 421 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 422 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 423 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 424 "data/maps/Route120/scripts.pory"

# 425 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 426 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 427 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 428 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 429 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 430 "data/maps/Route120/scripts.pory"

# 431 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 432 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 433 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 434 "data/maps/Route120/scripts.pory"

# 435 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 436 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 437 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

Route120_EventScript_MoveKecleonUp::
# 443 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, Route120_EventScript_MoveKecleonUp_1
# 448 "data/maps/Route120/scripts.pory"
	setobjectxy LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, 12, 16
# 449 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_3, 1
# 450 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, Common_Movement_WalkUpFastSafeKecleon
	end

Route120_EventScript_MoveKecleonUp_1:
# 444 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_3, 5
	end


Route120_EventScript_MoveKecleonDown::
# 456 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, Route120_EventScript_MoveKecleonDown_1
# 461 "data/maps/Route120/scripts.pory"
	setobjectxy LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, 12, 15
# 462 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_3, 0
# 463 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_BRIDGE_KECLEON_SHADOW, Common_Movement_WalkDownFastSafeKecleon
	end

Route120_EventScript_MoveKecleonDown_1:
# 457 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_3, 5
	end


Route120_EventScript_ResetKecleonVar::
# 469 "data/maps/Route120/scripts.pory"
	setvar VAR_TEMP_3, 0
	end


Route120_EventScript_MuddyWaterKid::
# 480 "data/maps/Route120/scripts.pory"
	lock
# 481 "data/maps/Route120/scripts.pory"
	faceplayer
# 482 "data/maps/Route120/scripts.pory"
	checkitem ITEM_TM_MUDDY_WATER
# 483 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route120_EventScript_MuddyWaterKid_2
# 490 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_MuddyWaterKid_Text_1, MSGBOX_NPC
Route120_EventScript_MuddyWaterKid_1:
# 492 "data/maps/Route120/scripts.pory"
	releaseall
	end

Route120_EventScript_MuddyWaterKid_2:
# 484 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_MuddyWaterKid_Text_0, MSGBOX_DEFAULT
# 485 "data/maps/Route120/scripts.pory"
	closemessage
# 486 "data/maps/Route120/scripts.pory"
	giveitem ITEM_TM_MUDDY_WATER
# 487 "data/maps/Route120/scripts.pory"
	waitfanfare
	goto Route120_EventScript_MuddyWaterKid_1


Route120_EventScript_Abe::
# 497 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ABE, Route120_Text_AbeIntro, Route120_Text_AbeDefeat, Route120_EventScript_AbeTryGiveVitamin
# 498 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route120_EventScript_AbeTryGiveVitamin
# 499 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AbePostBattle, MSGBOX_NPC
# 500 "data/maps/Route120/scripts.pory"
	release
	end


Route120_EventScript_AbeTryGiveVitamin::
# 505 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route120_EventScript_AbeTryGiveVitamin_2
# 509 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_AbeTryGiveVitamin_Text_1, MSGBOX_NPC
Route120_EventScript_AbeTryGiveVitamin_1:
# 511 "data/maps/Route120/scripts.pory"
	checkitemspace ITEM_HEART_SCALE
# 512 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route120_EventScript_AbeTryGiveVitamin_6
# 517 "data/maps/Route120/scripts.pory"
	setflag FLAG_TEMP_A
# 518 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_AbeTryGiveVitamin_Text_2, MSGBOX_NPC
Route120_EventScript_AbeTryGiveVitamin_5:
# 520 "data/maps/Route120/scripts.pory"
	release
	end

Route120_EventScript_AbeTryGiveVitamin_2:
# 506 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_AbeTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route120_EventScript_AbeTryGiveVitamin_1

Route120_EventScript_AbeTryGiveVitamin_6:
# 513 "data/maps/Route120/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 514 "data/maps/Route120/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route120_EventScript_AbeTryGiveVitamin_5


Route120_EventScript_MuddyWaterKid_Text_0:
# 484 "data/maps/Route120/scripts.pory"
	.string "My parents get upside when I come back\n"
	.string "home covered in this muddy water.\p"
	.string "I used to blame it on wild Pokémon, but\n"
	.string "they don't believe me anymore.$"

Route120_EventScript_MuddyWaterKid_Text_1:
# 490 "data/maps/Route120/scripts.pory"
	.string "It's fun to play around in the mud.$"

Route120_EventScript_AbeTryGiveVitamin_Text_0:
# 506 "data/maps/Route120/scripts.pory"
	.string "Okay, I'm sorry, please don't report me\n"
	.string "to the Pokémon League.\p"
	.string "Take this and let's call it even, okay?$"

Route120_EventScript_AbeTryGiveVitamin_Text_1:
# 509 "data/maps/Route120/scripts.pory"
	.string "What a relief, you came back.\p"
	.string "Take this and let's call it even, okay?$"

Route120_EventScript_AbeTryGiveVitamin_Text_2:
# 518 "data/maps/Route120/scripts.pory"
	.string "Oh come on, this is more than a fair\n"
	.string "offer.\p"
	.string "Make some space in your bag and let's\n"
	.string "make a deal, yeah?$"

Route120_Text_StevenGoodbye::
# 473 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I think you're doing great,\n"
	.string "{PLAYER}{KUN}.\p"
	.string "In fact, I could use your help.\p"
	.string "I just got word that Team Magma and\n"
	.string "Team Aqua may be planning something\l"
	.string "nefarious at Mt. Pyre.\p"
	.string "I'm headed there now to investigate,\n"
	.string "but I could always use a talented,\l"
	.string "trustworthy Trainer's help.\p"
	.string "Hopefully I'll see you there.$"

Route120_Text_AbeIntro::
# 524 "data/maps/Route120/scripts.pory"
	.string "You've fallen into my trap! I've laid\n"
	.string "barbs all around your space!$"

Route120_Text_AbeDefeat::
# 528 "data/maps/Route120/scripts.pory"
	.string "My scheme wasn't enough...$"

Route120_Text_AbePostBattle::
# 532 "data/maps/Route120/scripts.pory"
	.string "Lots of trainers complain about my\n"
	.string "methods.$"
