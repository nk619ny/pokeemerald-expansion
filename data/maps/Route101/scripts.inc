# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
//.set LOCALID_ROUTE101_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
//.set LOCALID_ROUTE101_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 8 "data/maps/Route101/scripts.pory"
	.byte 0
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 11 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route101/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/Route101/scripts.pory"
	end
# 14 "data/maps/Route101/scripts.pory"

# 15 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 16 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 17 "data/maps/Route101/scripts.pory"
	.2byte 0
# 18 "data/maps/Route101/scripts.pory"

# 19 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 20 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 22 "data/maps/Route101/scripts.pory"
	end
# 23 "data/maps/Route101/scripts.pory"

# 24 "data/maps/Route101/scripts.pory"
/*
# 25 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 26 "data/maps/Route101/scripts.pory"
	lockall
# 27 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 28 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 29 "data/maps/Route101/scripts.pory"
	closemessage
# 30 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 31 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 32 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 40 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 42 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 43 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 45 "data/maps/Route101/scripts.pory"
	closemessage
# 46 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 47 "data/maps/Route101/scripts.pory"
	releaseall
# 48 "data/maps/Route101/scripts.pory"
	end
# 49 "data/maps/Route101/scripts.pory"
*/
# 50 "data/maps/Route101/scripts.pory"

# 51 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 52 "data/maps/Route101/scripts.pory"
	lockall
# 53 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 54 "data/maps/Route101/scripts.pory"
	closemessage
# 55 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	releaseall
# 58 "data/maps/Route101/scripts.pory"
	end
# 59 "data/maps/Route101/scripts.pory"

# 60 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 61 "data/maps/Route101/scripts.pory"
	lockall
# 62 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 63 "data/maps/Route101/scripts.pory"
	closemessage
# 64 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 65 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route101/scripts.pory"
	releaseall
# 67 "data/maps/Route101/scripts.pory"
	end
# 68 "data/maps/Route101/scripts.pory"

# 69 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 70 "data/maps/Route101/scripts.pory"
	lockall
# 71 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 72 "data/maps/Route101/scripts.pory"
	closemessage
# 73 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 74 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route101/scripts.pory"
	releaseall
# 76 "data/maps/Route101/scripts.pory"
	end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 79 "data/maps/Route101/scripts.pory"
	walk_up
# 80 "data/maps/Route101/scripts.pory"
	step_end
# 81 "data/maps/Route101/scripts.pory"

# 82 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 83 "data/maps/Route101/scripts.pory"
	walk_right
# 84 "data/maps/Route101/scripts.pory"
	step_end
# 85 "data/maps/Route101/scripts.pory"

# 86 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 87 "data/maps/Route101/scripts.pory"
	walk_down
# 88 "data/maps/Route101/scripts.pory"
	step_end
# 89 "data/maps/Route101/scripts.pory"

# 90 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route101/scripts.pory"
	step_end
# 122 "data/maps/Route101/scripts.pory"

# 123 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 130 "data/maps/Route101/scripts.pory"
	step_end
# 131 "data/maps/Route101/scripts.pory"

# 132 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 133 "data/maps/Route101/scripts.pory"
	step_end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 136 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 137 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 138 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 139 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 140 "data/maps/Route101/scripts.pory"
	step_end
# 141 "data/maps/Route101/scripts.pory"

# 142 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/Route101/scripts.pory"
	step_end
# 149 "data/maps/Route101/scripts.pory"

# 150 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route101/scripts.pory"
	step_end
# 182 "data/maps/Route101/scripts.pory"

# 183 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 190 "data/maps/Route101/scripts.pory"
	step_end
# 191 "data/maps/Route101/scripts.pory"

# 192 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 193 "data/maps/Route101/scripts.pory"
	step_end
# 194 "data/maps/Route101/scripts.pory"

# 195 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 196 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 200 "data/maps/Route101/scripts.pory"
	step_end
# 201 "data/maps/Route101/scripts.pory"

# 202 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 203 "data/maps/Route101/scripts.pory"
	walk_up
# 204 "data/maps/Route101/scripts.pory"
	walk_up
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 208 "data/maps/Route101/scripts.pory"
	walk_up
# 209 "data/maps/Route101/scripts.pory"
	walk_left
# 210 "data/maps/Route101/scripts.pory"
	walk_up
# 211 "data/maps/Route101/scripts.pory"
	step_end
# 212 "data/maps/Route101/scripts.pory"

# 213 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 214 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 215 "data/maps/Route101/scripts.pory"
	end
# 216 "data/maps/Route101/scripts.pory"

# 217 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 218 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 219 "data/maps/Route101/scripts.pory"
	end
# 220 "data/maps/Route101/scripts.pory"

# 221 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 222 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 223 "data/maps/Route101/scripts.pory"
	end
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"
/*
# 226 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 227 "data/maps/Route101/scripts.pory"
	lock
# 228 "data/maps/Route101/scripts.pory"
	faceplayer
# 229 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 230 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 231 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 232 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 233 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 234 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 235 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 237 "data/maps/Route101/scripts.pory"
	waitstate
# 238 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 239 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 241 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 242 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 243 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 244 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 245 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 246 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 247 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 248 "data/maps/Route101/scripts.pory"
	checkplayergender
# 249 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 250 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 251 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 252 "data/maps/Route101/scripts.pory"
	waitstate
# 253 "data/maps/Route101/scripts.pory"
	release
# 254 "data/maps/Route101/scripts.pory"
	end
# 255 "data/maps/Route101/scripts.pory"
*/
# 256 "data/maps/Route101/scripts.pory"

# 257 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 258 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 259 "data/maps/Route101/scripts.pory"
	return
# 260 "data/maps/Route101/scripts.pory"

# 261 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 262 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 263 "data/maps/Route101/scripts.pory"
	return
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 266 "data/maps/Route101/scripts.pory"
	walk_right
# 267 "data/maps/Route101/scripts.pory"
	step_end
# 268 "data/maps/Route101/scripts.pory"

# 269 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 270 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 273 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 274 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 275 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 276 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 279 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 280 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 283 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 284 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 285 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 286 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 288 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 289 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 290 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 291 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 292 "data/maps/Route101/scripts.pory"

# 293 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 294 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 295 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 296 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 298 "data/maps/Route101/scripts.pory"

# 299 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 300 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 301 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 302 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 303 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 306 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 307 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_RivalFirstBattle::
# 315 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route101/scripts.pory"
	checkplayergender
# 317 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route101_MayBattle
# 318 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route101_BrendanBattle
	return


Route101_EventScript_RivalTrigger2::
# 322 "data/maps/Route101/scripts.pory"
	lock
# 323 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Common_Movement_ExclamationMark
# 324 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Route101_RivalApproachPlayer2
# 326 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 328 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_EventScript_RivalTrigger1::
# 332 "data/maps/Route101/scripts.pory"
	lock
# 333 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Common_Movement_ExclamationMark
# 334 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Route101_RivalApproachPlayer1
# 336 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 337 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 338 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_EventScript_RivalTrigger0::
# 342 "data/maps/Route101/scripts.pory"
	lock
# 343 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Common_Movement_ExclamationMark
# 344 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 346 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_MayBattle::
# 350 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 351 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 352 "data/maps/Route101/scripts.pory"
	case 0, Route101_MayBattle_3
# 354 "data/maps/Route101/scripts.pory"
	case 1, Route101_MayBattle_4
# 356 "data/maps/Route101/scripts.pory"
	case 2, Route101_MayBattle_5
Route101_MayBattle_1:
	end

Route101_MayBattle_3:
# 353 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1

Route101_MayBattle_4:
# 355 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1

Route101_MayBattle_5:
# 357 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1


Route101_BrendanBattle::
# 363 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 364 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 365 "data/maps/Route101/scripts.pory"
	case 0, Route101_BrendanBattle_3
# 367 "data/maps/Route101/scripts.pory"
	case 1, Route101_BrendanBattle_4
# 369 "data/maps/Route101/scripts.pory"
	case 2, Route101_BrendanBattle_5
Route101_BrendanBattle_1:
	end

Route101_BrendanBattle_3:
# 366 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1

Route101_BrendanBattle_4:
# 368 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1

Route101_BrendanBattle_5:
# 370 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1


Route101_RivalDefeated::
# 376 "data/maps/Route101/scripts.pory"
	lockall
# 377 "data/maps/Route101/scripts.pory"
	msgbox Route101_RivalDefeated_Text_0
# 378 "data/maps/Route101/scripts.pory"
	waitmessage
# 379 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_RIVAL, Route101_RivalDeparture
# 380 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_RIVAL
# 382 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 383 "data/maps/Route101/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 384 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 385 "data/maps/Route101/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 386 "data/maps/Route101/scripts.pory"
	setvar VAR_LEVEL_CAP, 13
# 387 "data/maps/Route101/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 388 "data/maps/Route101/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 389 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 392 "data/maps/Route101/scripts.pory"
Route101_RivalApproachPlayer2:
# 393 "data/maps/Route101/scripts.pory"
	walk_right
# 393 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/Route101/scripts.pory"
Route101_RivalApproachPlayer1:
# 397 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 400 "data/maps/Route101/scripts.pory"
Route101_RivalDeparture:
# 401 "data/maps/Route101/scripts.pory"
	walk_up
# 401 "data/maps/Route101/scripts.pory"
	walk_up
# 402 "data/maps/Route101/scripts.pory"
	walk_right
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_RivalDefeated_Text_0:
# 377 "data/maps/Route101/scripts.pory"
	.string "Looks like you're very ready to be a\n"
	.string "Pokémon Trainer! I'm looking forward to\l"
	.string "seeing you out there.$"
