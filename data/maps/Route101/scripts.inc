# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
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
Route101_EventScript_StartBirchRescue::
# 25 "data/maps/Route101/scripts.pory"
	lockall
# 26 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 27 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 28 "data/maps/Route101/scripts.pory"
	closemessage
# 29 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 30 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 31 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 37 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 39 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 41 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 42 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 44 "data/maps/Route101/scripts.pory"
	closemessage
# 45 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 46 "data/maps/Route101/scripts.pory"
	releaseall
# 47 "data/maps/Route101/scripts.pory"
	end
# 48 "data/maps/Route101/scripts.pory"

# 49 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 50 "data/maps/Route101/scripts.pory"
	lockall
# 51 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 52 "data/maps/Route101/scripts.pory"
	closemessage
# 53 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	releaseall
# 56 "data/maps/Route101/scripts.pory"
	end
# 57 "data/maps/Route101/scripts.pory"

# 58 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 59 "data/maps/Route101/scripts.pory"
	lockall
# 60 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 61 "data/maps/Route101/scripts.pory"
	closemessage
# 62 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 63 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route101/scripts.pory"
	releaseall
# 65 "data/maps/Route101/scripts.pory"
	end
# 66 "data/maps/Route101/scripts.pory"

# 67 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 68 "data/maps/Route101/scripts.pory"
	lockall
# 69 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 70 "data/maps/Route101/scripts.pory"
	closemessage
# 71 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 72 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route101/scripts.pory"
	releaseall
# 74 "data/maps/Route101/scripts.pory"
	end
# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 77 "data/maps/Route101/scripts.pory"
	walk_up
# 78 "data/maps/Route101/scripts.pory"
	step_end
# 79 "data/maps/Route101/scripts.pory"

# 80 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 81 "data/maps/Route101/scripts.pory"
	walk_right
# 82 "data/maps/Route101/scripts.pory"
	step_end
# 83 "data/maps/Route101/scripts.pory"

# 84 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 85 "data/maps/Route101/scripts.pory"
	walk_down
# 86 "data/maps/Route101/scripts.pory"
	step_end
# 87 "data/maps/Route101/scripts.pory"

# 88 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route101/scripts.pory"
	step_end
# 120 "data/maps/Route101/scripts.pory"

# 121 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	step_end
# 129 "data/maps/Route101/scripts.pory"

# 130 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 131 "data/maps/Route101/scripts.pory"
	step_end
# 132 "data/maps/Route101/scripts.pory"

# 133 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 134 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 136 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 137 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 138 "data/maps/Route101/scripts.pory"
	step_end
# 139 "data/maps/Route101/scripts.pory"

# 140 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 146 "data/maps/Route101/scripts.pory"
	step_end
# 147 "data/maps/Route101/scripts.pory"

# 148 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route101/scripts.pory"
	step_end
# 180 "data/maps/Route101/scripts.pory"

# 181 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 188 "data/maps/Route101/scripts.pory"
	step_end
# 189 "data/maps/Route101/scripts.pory"

# 190 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 191 "data/maps/Route101/scripts.pory"
	step_end
# 192 "data/maps/Route101/scripts.pory"

# 193 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 194 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 195 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 196 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 198 "data/maps/Route101/scripts.pory"
	step_end
# 199 "data/maps/Route101/scripts.pory"

# 200 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 201 "data/maps/Route101/scripts.pory"
	walk_up
# 202 "data/maps/Route101/scripts.pory"
	walk_up
# 203 "data/maps/Route101/scripts.pory"
	step_end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 206 "data/maps/Route101/scripts.pory"
	walk_up
# 207 "data/maps/Route101/scripts.pory"
	walk_left
# 208 "data/maps/Route101/scripts.pory"
	walk_up
# 209 "data/maps/Route101/scripts.pory"
	step_end
# 210 "data/maps/Route101/scripts.pory"

# 211 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 212 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 213 "data/maps/Route101/scripts.pory"
	end
# 214 "data/maps/Route101/scripts.pory"

# 215 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 216 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 217 "data/maps/Route101/scripts.pory"
	end
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 220 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 221 "data/maps/Route101/scripts.pory"
	end
# 222 "data/maps/Route101/scripts.pory"

# 223 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 224 "data/maps/Route101/scripts.pory"
	lock
# 225 "data/maps/Route101/scripts.pory"
	faceplayer
# 226 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 227 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 228 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 230 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 231 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 232 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 234 "data/maps/Route101/scripts.pory"
	waitstate
# 235 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 236 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 238 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 239 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 240 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 241 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 242 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 243 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 244 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 245 "data/maps/Route101/scripts.pory"
	checkplayergender
# 246 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 247 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 248 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 249 "data/maps/Route101/scripts.pory"
	waitstate
# 250 "data/maps/Route101/scripts.pory"
	release
# 251 "data/maps/Route101/scripts.pory"
	end
# 252 "data/maps/Route101/scripts.pory"

# 253 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 254 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 255 "data/maps/Route101/scripts.pory"
	return
# 256 "data/maps/Route101/scripts.pory"

# 257 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 258 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 259 "data/maps/Route101/scripts.pory"
	return
# 260 "data/maps/Route101/scripts.pory"

# 261 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 262 "data/maps/Route101/scripts.pory"
	walk_right
# 263 "data/maps/Route101/scripts.pory"
	step_end
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 266 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 267 "data/maps/Route101/scripts.pory"

# 268 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 269 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 271 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 272 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 273 "data/maps/Route101/scripts.pory"

# 274 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 275 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 276 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 279 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 280 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 282 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 283 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 284 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 285 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 286 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 288 "data/maps/Route101/scripts.pory"

# 289 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 290 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 291 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 292 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 293 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 296 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 298 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 299 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 300 "data/maps/Route101/scripts.pory"

# 301 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 302 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 303 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_RivalFirstBattle::
# 311 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route101/scripts.pory"
	checkplayergender
# 313 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route101_MayBattle
# 314 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route101_BrendanBattle
	return


Route101_EventScript_RivalTrigger2::
# 318 "data/maps/Route101/scripts.pory"
	lock
# 319 "data/maps/Route101/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 320 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_RivalApproachPlayer2
# 322 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 324 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_EventScript_RivalTrigger1::
# 328 "data/maps/Route101/scripts.pory"
	lock
# 329 "data/maps/Route101/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 330 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_RivalApproachPlayer1
# 332 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 333 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 334 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_EventScript_RivalTrigger0::
# 338 "data/maps/Route101/scripts.pory"
	lock
# 339 "data/maps/Route101/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 340 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 341 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 342 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RivalFirstBattle
	return


Route101_MayBattle::
# 346 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 347 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 348 "data/maps/Route101/scripts.pory"
	case 0, Route101_MayBattle_3
# 350 "data/maps/Route101/scripts.pory"
	case 1, Route101_MayBattle_4
# 352 "data/maps/Route101/scripts.pory"
	case 2, Route101_MayBattle_5
Route101_MayBattle_1:
	end

Route101_MayBattle_3:
# 349 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1

Route101_MayBattle_4:
# 351 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1

Route101_MayBattle_5:
# 353 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayLetsBattle, Route103_Text_MayDefeated, Route101_RivalDefeated
	goto Route101_MayBattle_1


Route101_BrendanBattle::
# 359 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 360 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 361 "data/maps/Route101/scripts.pory"
	case 0, Route101_BrendanBattle_3
# 363 "data/maps/Route101/scripts.pory"
	case 1, Route101_BrendanBattle_4
# 365 "data/maps/Route101/scripts.pory"
	case 2, Route101_BrendanBattle_5
Route101_BrendanBattle_1:
	end

Route101_BrendanBattle_3:
# 362 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1

Route101_BrendanBattle_4:
# 364 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1

Route101_BrendanBattle_5:
# 366 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanLetsBattle, Route103_Text_BrendanDefeated, Route101_RivalDefeated
	goto Route101_BrendanBattle_1


Route101_RivalDefeated::
# 372 "data/maps/Route101/scripts.pory"
	lockall
# 373 "data/maps/Route101/scripts.pory"
	msgbox Route101_RivalDefeated_Text_0
# 374 "data/maps/Route101/scripts.pory"
	waitmessage
# 375 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_RivalDeparture
# 376 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route101/scripts.pory"
	removeobject 4
# 378 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 379 "data/maps/Route101/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 380 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 381 "data/maps/Route101/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 382 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 385 "data/maps/Route101/scripts.pory"
Route101_RivalApproachPlayer2:
# 386 "data/maps/Route101/scripts.pory"
	walk_right
# 386 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 389 "data/maps/Route101/scripts.pory"
Route101_RivalApproachPlayer1:
# 390 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 393 "data/maps/Route101/scripts.pory"
Route101_RivalDeparture:
# 394 "data/maps/Route101/scripts.pory"
	walk_up
# 394 "data/maps/Route101/scripts.pory"
	walk_up
# 395 "data/maps/Route101/scripts.pory"
	walk_right
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
# 396 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_RivalDefeated_Text_0:
# 373 "data/maps/Route101/scripts.pory"
	.string "Looks like you're very ready to be a\n"
	.string "Pokémon Trainer! I'm looking forward to\l"
	.string "seeing you out there.$"
