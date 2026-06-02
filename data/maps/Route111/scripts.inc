# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 3 "data/maps/Route111/scripts.pory"

# 4 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 5 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 6 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 7 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 8 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 9 "data/maps/Route111/scripts.pory"
	.byte 0
# 10 "data/maps/Route111/scripts.pory"

# 11 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 12 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 13 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 14 "data/maps/Route111/scripts.pory"
	end
# 15 "data/maps/Route111/scripts.pory"

# 16 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 17 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 18 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 19 "data/maps/Route111/scripts.pory"
	return
# 20 "data/maps/Route111/scripts.pory"

# 21 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 22 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 25 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 26 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 27 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 28 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 41 "data/maps/Route111/scripts.pory"
	return
# 42 "data/maps/Route111/scripts.pory"

# 43 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 44 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 45 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 46 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 47 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 48 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 49 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 50 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 51 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 52 "data/maps/Route111/scripts.pory"
	end
# 53 "data/maps/Route111/scripts.pory"

# 54 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 55 "data/maps/Route111/scripts.pory"
	checkplayergender
# 56 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 57 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 58 "data/maps/Route111/scripts.pory"
	return
# 59 "data/maps/Route111/scripts.pory"

# 60 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 61 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 62 "data/maps/Route111/scripts.pory"
	return
# 63 "data/maps/Route111/scripts.pory"

# 64 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 65 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 66 "data/maps/Route111/scripts.pory"
	return
# 67 "data/maps/Route111/scripts.pory"

# 68 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 69 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 70 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 71 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 72 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 73 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 74 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 75 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 76 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 77 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 78 "data/maps/Route111/scripts.pory"
	return
# 79 "data/maps/Route111/scripts.pory"

# 80 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 81 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 82 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 83 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 84 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 85 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 86 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 87 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 88 "data/maps/Route111/scripts.pory"
	end
# 89 "data/maps/Route111/scripts.pory"

# 90 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 91 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 92 "data/maps/Route111/scripts.pory"
	return
# 93 "data/maps/Route111/scripts.pory"

# 94 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 95 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 96 "data/maps/Route111/scripts.pory"
	return
# 97 "data/maps/Route111/scripts.pory"

# 98 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 99 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 100 "data/maps/Route111/scripts.pory"
	.2byte 0
# 101 "data/maps/Route111/scripts.pory"

# 102 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 103 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 104 "data/maps/Route111/scripts.pory"
	end
# 105 "data/maps/Route111/scripts.pory"

# 106 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 107 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 108 "data/maps/Route111/scripts.pory"
	.2byte 0
# 109 "data/maps/Route111/scripts.pory"

# 110 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 111 "data/maps/Route111/scripts.pory"
	lockall
# 112 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 113 "data/maps/Route111/scripts.pory"
	waitstate
# 114 "data/maps/Route111/scripts.pory"
	delay 24
# 115 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 116 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 117 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 118 "data/maps/Route111/scripts.pory"
	waitstate
# 119 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 120 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 121 "data/maps/Route111/scripts.pory"
	delay 16
# 122 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 123 "data/maps/Route111/scripts.pory"
	delay 16
# 124 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 125 "data/maps/Route111/scripts.pory"
	waitstate
# 126 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 127 "data/maps/Route111/scripts.pory"
	waitstate
# 128 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 129 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 130 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 131 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 132 "data/maps/Route111/scripts.pory"
	releaseall
# 133 "data/maps/Route111/scripts.pory"
	end
# 134 "data/maps/Route111/scripts.pory"

# 135 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 136 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 137 "data/maps/Route111/scripts.pory"
	releaseall
# 138 "data/maps/Route111/scripts.pory"
	end
# 139 "data/maps/Route111/scripts.pory"

# 140 "data/maps/Route111/scripts.pory"
@ Unused
# 141 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 142 "data/maps/Route111/scripts.pory"
	lock_anim
# 143 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route111/scripts.pory"
	step_end
# 150 "data/maps/Route111/scripts.pory"

# 151 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 152 "data/maps/Route111/scripts.pory"
	lock
# 153 "data/maps/Route111/scripts.pory"
	faceplayer
# 154 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 155 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 156 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 157 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 158 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 159 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 160 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 161 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 162 "data/maps/Route111/scripts.pory"
	release
# 163 "data/maps/Route111/scripts.pory"
	end
# 164 "data/maps/Route111/scripts.pory"

# 165 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 166 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 167 "data/maps/Route111/scripts.pory"
	release
# 168 "data/maps/Route111/scripts.pory"
	end
# 169 "data/maps/Route111/scripts.pory"

# 170 "data/maps/Route111/scripts.pory"
@ Unused
# 171 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 172 "data/maps/Route111/scripts.pory"
	lockall
# 173 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 174 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 175 "data/maps/Route111/scripts.pory"
	end
# 176 "data/maps/Route111/scripts.pory"

# 177 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 178 "data/maps/Route111/scripts.pory"
	lockall
# 179 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 180 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 181 "data/maps/Route111/scripts.pory"
	end
# 182 "data/maps/Route111/scripts.pory"

# 183 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 184 "data/maps/Route111/scripts.pory"
	lockall
# 185 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 186 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 187 "data/maps/Route111/scripts.pory"
	end
# 188 "data/maps/Route111/scripts.pory"

# 189 "data/maps/Route111/scripts.pory"
@ Unused
# 190 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 191 "data/maps/Route111/scripts.pory"
	lockall
# 192 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 193 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 194 "data/maps/Route111/scripts.pory"
	end
# 195 "data/maps/Route111/scripts.pory"

# 196 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 197 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 198 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 199 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 200 "data/maps/Route111/scripts.pory"
	releaseall
# 201 "data/maps/Route111/scripts.pory"
	end
# 202 "data/maps/Route111/scripts.pory"

# 203 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 204 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 205 "data/maps/Route111/scripts.pory"
	closemessage
# 206 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 207 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 208 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 209 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 210 "data/maps/Route111/scripts.pory"
	releaseall
# 211 "data/maps/Route111/scripts.pory"
	end
# 212 "data/maps/Route111/scripts.pory"

# 213 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 214 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 215 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route111/scripts.pory"
	return
# 217 "data/maps/Route111/scripts.pory"

# 218 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 219 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 220 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route111/scripts.pory"
	return
# 222 "data/maps/Route111/scripts.pory"

# 223 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 224 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 225 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route111/scripts.pory"
	return
# 227 "data/maps/Route111/scripts.pory"

# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 229 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 230 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route111/scripts.pory"
	return
# 232 "data/maps/Route111/scripts.pory"

# 233 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 234 "data/maps/Route111/scripts.pory"
	walk_up
# 235 "data/maps/Route111/scripts.pory"
	step_end
# 236 "data/maps/Route111/scripts.pory"

# 237 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 238 "data/maps/Route111/scripts.pory"
	walk_down
# 239 "data/maps/Route111/scripts.pory"
	step_end
# 240 "data/maps/Route111/scripts.pory"

# 241 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 242 "data/maps/Route111/scripts.pory"
	walk_left
# 243 "data/maps/Route111/scripts.pory"
	step_end
# 244 "data/maps/Route111/scripts.pory"

# 245 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 246 "data/maps/Route111/scripts.pory"
	walk_right
# 247 "data/maps/Route111/scripts.pory"
	step_end
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 250 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 251 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 252 "data/maps/Route111/scripts.pory"
	doweather
# 253 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 254 "data/maps/Route111/scripts.pory"
	end
# 255 "data/maps/Route111/scripts.pory"

# 256 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 257 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 258 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 259 "data/maps/Route111/scripts.pory"
	doweather
# 260 "data/maps/Route111/scripts.pory"
	end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 263 "data/maps/Route111/scripts.pory"
	lock
# 264 "data/maps/Route111/scripts.pory"
	faceplayer
# 265 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 266 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 267 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_WinstratesCheckBadge
# 268 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 269 "data/maps/Route111/scripts.pory"
	release
# 270 "data/maps/Route111/scripts.pory"
	end
# 271 "data/maps/Route111/scripts.pory"

# 272 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 273 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 274 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 275 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 276 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 277 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 278 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 279 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_ChooseIfHeal
# 280 "data/maps/Route111/scripts.pory"
	closemessage
# 281 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 282 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 284 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 285 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 286 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 288 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 289 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 290 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 292 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 293 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 294 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_ChooseIfHeal
# 295 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 298 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route111/scripts.pory"
	closemessage
# 300 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 301 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 303 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 304 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 305 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 307 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 308 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 309 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 311 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 312 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 313 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_ChooseIfHeal
# 314 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 317 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route111/scripts.pory"
	closemessage
# 319 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 320 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 322 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 323 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 324 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 326 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 327 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 328 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 330 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 331 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 332 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_WinstratesGiveRockSmash
# 333 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 334 "data/maps/Route111/scripts.pory"
	closemessage
# 335 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 336 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 338 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 339 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 340 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 341 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 342 "data/maps/Route111/scripts.pory"
	release
# 343 "data/maps/Route111/scripts.pory"
	end
# 344 "data/maps/Route111/scripts.pory"

# 345 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 346 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 347 "data/maps/Route111/scripts.pory"
	waitdooranim
# 348 "data/maps/Route111/scripts.pory"
	return
# 349 "data/maps/Route111/scripts.pory"

# 350 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 351 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 352 "data/maps/Route111/scripts.pory"
	waitdooranim
# 353 "data/maps/Route111/scripts.pory"
	return
# 354 "data/maps/Route111/scripts.pory"

# 355 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 356 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 357 "data/maps/Route111/scripts.pory"
	walk_up
# 358 "data/maps/Route111/scripts.pory"
	step_end
# 359 "data/maps/Route111/scripts.pory"

# 360 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 361 "data/maps/Route111/scripts.pory"
	walk_down
# 362 "data/maps/Route111/scripts.pory"
	step_end
# 363 "data/maps/Route111/scripts.pory"

# 364 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 365 "data/maps/Route111/scripts.pory"
	delay_16
# 366 "data/maps/Route111/scripts.pory"
	delay_16
# 367 "data/maps/Route111/scripts.pory"
	delay_16
# 368 "data/maps/Route111/scripts.pory"
	step_end
# 369 "data/maps/Route111/scripts.pory"

# 370 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 371 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 372 "data/maps/Route111/scripts.pory"
	end
# 373 "data/maps/Route111/scripts.pory"

# 374 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 375 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 376 "data/maps/Route111/scripts.pory"
	end
# 377 "data/maps/Route111/scripts.pory"

# 378 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 379 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 380 "data/maps/Route111/scripts.pory"
	end
# 381 "data/maps/Route111/scripts.pory"

# 382 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 383 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 384 "data/maps/Route111/scripts.pory"
	end
# 385 "data/maps/Route111/scripts.pory"

# 386 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 387 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 388 "data/maps/Route111/scripts.pory"
	end
# 389 "data/maps/Route111/scripts.pory"

# 390 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 391 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 392 "data/maps/Route111/scripts.pory"
	end
# 393 "data/maps/Route111/scripts.pory"

# 394 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 396 "data/maps/Route111/scripts.pory"
	end
# 397 "data/maps/Route111/scripts.pory"

# 398 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 399 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 400 "data/maps/Route111/scripts.pory"
	end
# 401 "data/maps/Route111/scripts.pory"

# 402 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 403 "data/maps/Route111/scripts.pory"
	lock
# 404 "data/maps/Route111/scripts.pory"
	faceplayer
# 405 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 406 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 407 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 409 "data/maps/Route111/scripts.pory"
	release
# 410 "data/maps/Route111/scripts.pory"
	end
# 411 "data/maps/Route111/scripts.pory"

# 412 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 413 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 414 "data/maps/Route111/scripts.pory"
	release
# 415 "data/maps/Route111/scripts.pory"
	end
# 416 "data/maps/Route111/scripts.pory"

# 417 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 418 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 419 "data/maps/Route111/scripts.pory"
	release
# 420 "data/maps/Route111/scripts.pory"
	end
# 421 "data/maps/Route111/scripts.pory"

# 422 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 423 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 424 "data/maps/Route111/scripts.pory"
	release
# 425 "data/maps/Route111/scripts.pory"
	end
# 426 "data/maps/Route111/scripts.pory"

# 427 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 428 "data/maps/Route111/scripts.pory"
	lockall
# 429 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 430 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 432 "data/maps/Route111/scripts.pory"
	closemessage
# 433 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 434 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route111/scripts.pory"
	releaseall
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 439 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route111/scripts.pory"
	end
# 442 "data/maps/Route111/scripts.pory"

# 443 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 444 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 445 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route111/scripts.pory"
	end
# 447 "data/maps/Route111/scripts.pory"

# 448 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 449 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 450 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/Route111/scripts.pory"
	end
# 452 "data/maps/Route111/scripts.pory"

# 453 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 454 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 455 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/Route111/scripts.pory"
	end
# 457 "data/maps/Route111/scripts.pory"

# 458 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 459 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 460 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 461 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 462 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 463 "data/maps/Route111/scripts.pory"
	release
# 464 "data/maps/Route111/scripts.pory"
	end
# 465 "data/maps/Route111/scripts.pory"

# 466 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 467 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 468 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 470 "data/maps/Route111/scripts.pory"
	//register_matchcall TRAINER_DUSTY_1
# 471 "data/maps/Route111/scripts.pory"
	release
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 475 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 476 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route111/scripts.pory"
	end
# 478 "data/maps/Route111/scripts.pory"

# 479 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 480 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 481 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route111/scripts.pory"
	end
# 483 "data/maps/Route111/scripts.pory"

# 484 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 485 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 486 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 487 "data/maps/Route111/scripts.pory"
	end
# 488 "data/maps/Route111/scripts.pory"

# 489 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 490 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 491 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 492 "data/maps/Route111/scripts.pory"
	end
# 493 "data/maps/Route111/scripts.pory"

# 494 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 495 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 496 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 497 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 498 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 499 "data/maps/Route111/scripts.pory"
	release
# 500 "data/maps/Route111/scripts.pory"
	end
# 501 "data/maps/Route111/scripts.pory"

# 502 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 503 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 504 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route111/scripts.pory"
	//msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 506 "data/maps/Route111/scripts.pory"
	//register_matchcall TRAINER_WILTON_1
# 507 "data/maps/Route111/scripts.pory"
	release
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 512 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 517 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 518 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 519 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 520 "data/maps/Route111/scripts.pory"
	release
# 521 "data/maps/Route111/scripts.pory"
	end
# 522 "data/maps/Route111/scripts.pory"

# 523 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 524 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 525 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 526 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 527 "data/maps/Route111/scripts.pory"
	//register_matchcall TRAINER_BROOKE_1
# 528 "data/maps/Route111/scripts.pory"
	release
# 529 "data/maps/Route111/scripts.pory"
	end
# 530 "data/maps/Route111/scripts.pory"

# 531 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 532 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 533 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 534 "data/maps/Route111/scripts.pory"
	end
# 535 "data/maps/Route111/scripts.pory"

# 536 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 537 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 538 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 539 "data/maps/Route111/scripts.pory"
	end
# 540 "data/maps/Route111/scripts.pory"

# 541 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 542 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 543 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 544 "data/maps/Route111/scripts.pory"
	end
# 545 "data/maps/Route111/scripts.pory"

# 546 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 547 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 548 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 549 "data/maps/Route111/scripts.pory"
	end
# 550 "data/maps/Route111/scripts.pory"

# 551 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 552 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 553 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 554 "data/maps/Route111/scripts.pory"
	end
# 555 "data/maps/Route111/scripts.pory"

# 556 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 557 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 558 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 559 "data/maps/Route111/scripts.pory"
	end
# 560 "data/maps/Route111/scripts.pory"

# 561 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 562 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 563 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 564 "data/maps/Route111/scripts.pory"
	end
# 565 "data/maps/Route111/scripts.pory"

# 566 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 567 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 568 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 569 "data/maps/Route111/scripts.pory"
	end
# 570 "data/maps/Route111/scripts.pory"

# 571 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 572 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 573 "data/maps/Route111/scripts.pory"
	end
# 574 "data/maps/Route111/scripts.pory"

# 575 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 576 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 577 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 578 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 579 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 580 "data/maps/Route111/scripts.pory"

# 581 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 582 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 583 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 584 "data/maps/Route111/scripts.pory"

# 585 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 586 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 587 "data/maps/Route111/scripts.pory"

# 588 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 589 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 590 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 591 "data/maps/Route111/scripts.pory"

# 592 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 593 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 594 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 595 "data/maps/Route111/scripts.pory"

# 596 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 597 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 598 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 599 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 600 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 601 "data/maps/Route111/scripts.pory"

# 602 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 603 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 604 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 605 "data/maps/Route111/scripts.pory"

# 606 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 607 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 608 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 609 "data/maps/Route111/scripts.pory"

# 610 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 611 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 612 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 613 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 614 "data/maps/Route111/scripts.pory"

# 615 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 616 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 619 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 620 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 623 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 624 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 625 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 626 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 627 "data/maps/Route111/scripts.pory"

# 628 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 629 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 630 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 631 "data/maps/Route111/scripts.pory"

# 632 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 633 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 634 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 635 "data/maps/Route111/scripts.pory"

# 636 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 637 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 638 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 639 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 640 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon LEAGUE's\n"
# 641 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 642 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 643 "data/maps/Route111/scripts.pory"

# 644 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 645 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 646 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 647 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 648 "data/maps/Route111/scripts.pory"

# 649 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 650 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 651 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 654 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 655 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 656 "data/maps/Route111/scripts.pory"

# 657 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 658 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 659 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 662 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 663 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 664 "data/maps/Route111/scripts.pory"

# 665 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 666 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 670 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 671 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a Pokémon's\n"
# 672 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 673 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 674 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 675 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 676 "data/maps/Route111/scripts.pory"

# 677 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 678 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 679 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 680 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 681 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 682 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 683 "data/maps/Route111/scripts.pory"

# 684 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 685 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 686 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 687 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 689 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 690 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 691 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 692 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 693 "data/maps/Route111/scripts.pory"

# 694 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 695 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 696 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 697 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 698 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 699 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 700 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 701 "data/maps/Route111/scripts.pory"

# 702 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 703 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 704 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 705 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 706 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 707 "data/maps/Route111/scripts.pory"

# 708 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 709 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 710 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 711 "data/maps/Route111/scripts.pory"

# 712 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 713 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 714 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 715 "data/maps/Route111/scripts.pory"

# 716 "data/maps/Route111/scripts.pory"
/*Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 717 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 718 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 719 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 720 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 721 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 722 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$" */
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 725 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 726 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 727 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"
# 728 "data/maps/Route111/scripts.pory"

# 729 "data/maps/Route111/scripts.pory"
/*
# 730 "data/maps/Route111/scripts.pory"
Route111_Text_BeckyIntro:
# 731 "data/maps/Route111/scripts.pory"
	.string "I heard there are fossils to be found\n"
# 732 "data/maps/Route111/scripts.pory"
	.string "in the desert. Where could they be?$"
# 733 "data/maps/Route111/scripts.pory"

# 734 "data/maps/Route111/scripts.pory"
Route111_Text_BeckyDefeat:
# 735 "data/maps/Route111/scripts.pory"
	.string "I came up short…$"
# 736 "data/maps/Route111/scripts.pory"

# 737 "data/maps/Route111/scripts.pory"
Route111_Text_BeckyPostBattle:
# 738 "data/maps/Route111/scripts.pory"
	.string "If they can find fossils in the desert,\n"
# 739 "data/maps/Route111/scripts.pory"
	.string "it must have been a sea before.$"
# 740 "data/maps/Route111/scripts.pory"
*/

Route111_EventScript_WinstratesCheckBadge::
# 746 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route111_EventScript_WinstratesCheckBadge_1
# 750 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_WinstratesCheckBadge_Text_0, MSGBOX_DEFAULT
# 751 "data/maps/Route111/scripts.pory"
	waitmessage
# 752 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_WinstratesCheckBadge_1:
# 747 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleWinstrates
	return


Route111_EventScript_WinstratesGiveRockSmash::
# 762 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_WinstratesGiveRockSmash_Text_0
# 763 "data/maps/Route111/scripts.pory"
	waitmessage
# 764 "data/maps/Route111/scripts.pory"
	giveitem ITEM_HM06
# 765 "data/maps/Route111/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 766 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 767 "data/maps/Route111/scripts.pory"
	closemessage
# 768 "data/maps/Route111/scripts.pory"
	setvar VAR_LEVEL_CAP, 41
# 769 "data/maps/Route111/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 770 "data/maps/Route111/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 771 "data/maps/Route111/scripts.pory"
	closemessage
	return


Route111_EventScript_ScorcingSandsHiker::
# 776 "data/maps/Route111/scripts.pory"
	lock
# 777 "data/maps/Route111/scripts.pory"
	faceplayer
# 778 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ScorcingSandsHiker_Text_0, MSGBOX_DEFAULT
# 779 "data/maps/Route111/scripts.pory"
	checkitem ITEM_TM_SCORCHING_SANDS
# 780 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_ScorcingSandsHiker_2
Route111_EventScript_ScorcingSandsHiker_1:
# 786 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_ScorcingSandsHiker_2:
# 781 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ScorcingSandsHiker_Text_1, MSGBOX_DEFAULT
# 782 "data/maps/Route111/scripts.pory"
	closemessage
# 783 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_SCORCHING_SANDS
# 784 "data/maps/Route111/scripts.pory"
	waitfanfare
	goto Route111_EventScript_ScorcingSandsHiker_1


Route111_South_RemoveDuplicateBianca::
# 791 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_MAUVILLE_BIANCA
# 792 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_0, 1
# 793 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_BrickBreakBlackBelt::
# 798 "data/maps/Route111/scripts.pory"
	lock
# 799 "data/maps/Route111/scripts.pory"
	faceplayer
# 800 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_BrickBreakBlackBelt_Text_0, MSGBOX_DEFAULT
# 801 "data/maps/Route111/scripts.pory"
	checkitem ITEM_TM_BRICK_BREAK
# 802 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_BrickBreakBlackBelt_2
Route111_EventScript_BrickBreakBlackBelt_1:
# 808 "data/maps/Route111/scripts.pory"
	closemessage
# 809 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_BrickBreakBlackBelt_2:
# 803 "data/maps/Route111/scripts.pory"
	closemessage
# 804 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_BrickBreakBlackBelt_Text_1, MSGBOX_DEFAULT
# 805 "data/maps/Route111/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 806 "data/maps/Route111/scripts.pory"
	waitfanfare
	goto Route111_EventScript_BrickBreakBlackBelt_1


Route111_EventScript_Noah::
# 827 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_NOAH, Route111_Text_NoahIntro, Route111_Text_NoahDefeat
# 828 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_NoahPostBattle, MSGBOX_NPC
# 829 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_ChooseIfHeal::
# 847 "data/maps/Route111/scripts.pory"
	lock
# 848 "data/maps/Route111/scripts.pory"
	faceplayer
# 849 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ChooseIfHeal_Text_0, MSGBOX_DEFAULT
# 850 "data/maps/Route111/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Route111_EventScript_ChooseIfHeal_Text_1, Route111_EventScript_ChooseIfHeal_Text_2, Route111_EventScript_ChooseIfHeal_Text_3
# 851 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 852 "data/maps/Route111/scripts.pory"
	case 0, Route111_EventScript_ChooseIfHeal_3
# 855 "data/maps/Route111/scripts.pory"
	case 1, Route111_EventScript_ChooseIfHeal_4
# 858 "data/maps/Route111/scripts.pory"
	case 2, Route111_EventScript_ChooseIfHeal_5
Route111_EventScript_ChooseIfHeal_1:
	return

Route111_EventScript_ChooseIfHeal_3:
# 853 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ChooseIfHeal_Text_4, MSGBOX_DEFAULT
	goto Route111_EventScript_ChooseIfHeal_1

Route111_EventScript_ChooseIfHeal_4:
# 856 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ChooseIfHeal_Text_5, MSGBOX_DEFAULT
# 857 "data/maps/Route111/scripts.pory"
	special HealPlayerPartyNoRevive
	goto Route111_EventScript_ChooseIfHeal_1

Route111_EventScript_ChooseIfHeal_5:
# 859 "data/maps/Route111/scripts.pory"
	special HealPlayerParty
# 860 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ChooseIfHeal_Text_6, MSGBOX_DEFAULT
	goto Route111_EventScript_ChooseIfHeal_1


Route111_EventScript_WinstratesCheckBadge_Text_0:
# 750 "data/maps/Route111/scripts.pory"
	.string "Before we start, do you have the\n"
	.string "Mauville Gym Badge?\p"
	.string "No?\n"
	.string "Well, then I don't think you're ready to\l"
	.string "battle us.\p"
	.string "Come back after you've beaten Wattson!$"

Route111_EventScript_WinstratesGiveRockSmash_Text_0:
# 762 "data/maps/Route111/scripts.pory"
	.string "Vicky: You're strong! I'll give you this\n"
	.string "HM. It's ROCK SMASH. It allows your\l"
	.string "Pokémon to clear rocks away.$"

Route111_EventScript_ScorcingSandsHiker_Text_0:
# 778 "data/maps/Route111/scripts.pory"
	.string "Careful, the hot sand on the ground can\n"
	.string "burn your skin during the daytime.$"

Route111_EventScript_ScorcingSandsHiker_Text_1:
# 781 "data/maps/Route111/scripts.pory"
	.string "Take this, so your Pokémon are prepared\n"
	.string "too.$"

Route111_EventScript_BrickBreakBlackBelt_Text_0:
# 800 "data/maps/Route111/scripts.pory"
	.string "I've trained really hard, and I can\n"
	.string "Break Bricks with my bare hands!\p"
	.string "...I still can't Smash Rocks, though, so\n"
	.string "I'm stuck here.$"

Route111_EventScript_BrickBreakBlackBelt_Text_1:
# 804 "data/maps/Route111/scripts.pory"
	.string "If you take this TM, at least all my\n"
	.string "training won't have gone to waste.$"

Route111_EventScript_ChooseIfHeal_Text_0:
# 849 "data/maps/Route111/scripts.pory"
	.string "Do you want your Pokémon healed before\n"
	.string "the next battle?$"

Route111_EventScript_ChooseIfHeal_Text_1:
# 850 "data/maps/Route111/scripts.pory"
	.string "Do Not Heal$"

Route111_EventScript_ChooseIfHeal_Text_2:
# 850 "data/maps/Route111/scripts.pory"
	.string "Heal, No Revive$"

Route111_EventScript_ChooseIfHeal_Text_3:
# 850 "data/maps/Route111/scripts.pory"
	.string "Heal and Revive$"

Route111_EventScript_ChooseIfHeal_Text_4:
# 853 "data/maps/Route111/scripts.pory"
	.string "Oh, alright! You don't get bonus points\n"
	.string "for style though!$"

Route111_EventScript_ChooseIfHeal_Text_5:
# 856 "data/maps/Route111/scripts.pory"
	.string "I'll get your Pokémon ready for the\n"
	.string "next battle!$"

Route111_EventScript_ChooseIfHeal_Text_6:
# 860 "data/maps/Route111/scripts.pory"
	.string "All of your Pokémon have been fully\n"
	.string "healed!$"

Route111_Text_MauvilleUncleToldMeToTakeRockSmash::
# 757 "data/maps/Route111/scripts.pory"
	.string "My Pokémon aren't strong enough to use\n"
	.string "Rock Smash yet... I usually wait here\l"
	.string "until someone from the Winstrate House\l"
	.string "comes this way.$"

Route111_Text_BeckyIntro::
# 814 "data/maps/Route111/scripts.pory"
	.string "The best things come in threes!$"

Route111_Text_BeckyDefeat::
# 818 "data/maps/Route111/scripts.pory"
	.string "I came up short…$"

Route111_Text_BeckyPostBattle::
# 822 "data/maps/Route111/scripts.pory"
	.string "Some scientists in Mossdeep keep\n"
	.string "calling me about by Magneton.\p"
	.string "I'm not interested in meeting them,\n"
	.string "though. I don't like boats.$"

Route111_Text_NoahIntro::
# 834 "data/maps/Route111/scripts.pory"
	.string "Did you know flowers attract bugs?$"

Route111_Text_NoahDefeat::
# 838 "data/maps/Route111/scripts.pory"
	.string "You're going to scare all the bugs away!$"

Route111_Text_NoahPostBattle::
# 842 "data/maps/Route111/scripts.pory"
	.string "My parents get upset the flowers in the\n"
	.string "garden attract bugs.\p"
	.string "I thought that was the whole point of\n"
	.string "growing flowers!$"
