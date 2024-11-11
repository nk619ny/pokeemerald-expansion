# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 16 "data/maps/PetalburgCity/scripts.pory"
//	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
//	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 23 "data/maps/PetalburgCity/scripts.pory"
	return
# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 35 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 36 "data/maps/PetalburgCity/scripts.pory"

# 37 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 38 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 39 "data/maps/PetalburgCity/scripts.pory"
//	special SavePlayerParty
# 40 "data/maps/PetalburgCity/scripts.pory"
//	special LoadWallyZigzagoon
# 41 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 42 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 43 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 44 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity/scripts.pory"
//	special StartWallyTutorialBattle
# 46 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 47 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 49 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 50 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity/scripts.pory"
//	closemessage
# 52 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 53 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_CITY_STATE, 3
# 54 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 55 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 56 "data/maps/PetalburgCity/scripts.pory"
//	special LoadPlayerParty
# 57 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 1
# 58 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 59 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 60 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 61 "data/maps/PetalburgCity/scripts.pory"
	end
# 62 "data/maps/PetalburgCity/scripts.pory"

# 63 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 64 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 65 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_MAP_NAME_POPUP
# 66 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 67 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 68 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 69 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8004, 7
# 70 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8005, 5
# 71 "data/maps/PetalburgCity/scripts.pory"
//	opendoor VAR_0x8004, VAR_0x8005
# 72 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 73 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 74 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 75 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 76 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 77 "data/maps/PetalburgCity/scripts.pory"
//	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 78 "data/maps/PetalburgCity/scripts.pory"
//	closedoor VAR_0x8004, VAR_0x8005
# 79 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 80 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 82 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 83 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 84 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 85 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 86 "data/maps/PetalburgCity/scripts.pory"
	end
# 87 "data/maps/PetalburgCity/scripts.pory"

# 88 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 89 "data/maps/PetalburgCity/scripts.pory"
	lock
# 90 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 91 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 93 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 94 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgCity/scripts.pory"
	release
# 96 "data/maps/PetalburgCity/scripts.pory"
	end
# 97 "data/maps/PetalburgCity/scripts.pory"

# 98 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 99 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 100 "data/maps/PetalburgCity/scripts.pory"
	end
# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 103 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 121 "data/maps/PetalburgCity/scripts.pory"

# 122 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 126 "data/maps/PetalburgCity/scripts.pory"

# 127 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 128 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 146 "data/maps/PetalburgCity/scripts.pory"

# 147 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 150 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 151 "data/maps/PetalburgCity/scripts.pory"

# 152 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 153 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 186 "data/maps/PetalburgCity/scripts.pory"

# 187 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 188 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 221 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 225 "data/maps/PetalburgCity/scripts.pory"

# 226 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 227 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 228 "data/maps/PetalburgCity/scripts.pory"
	end
# 229 "data/maps/PetalburgCity/scripts.pory"

# 230 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 231 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 232 "data/maps/PetalburgCity/scripts.pory"
	end
# 233 "data/maps/PetalburgCity/scripts.pory"

# 234 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 235 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 236 "data/maps/PetalburgCity/scripts.pory"
	end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 239 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 240 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 241 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 242 "data/maps/PetalburgCity/scripts.pory"
	end
# 243 "data/maps/PetalburgCity/scripts.pory"

# 244 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 245 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 246 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 247 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 251 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 252 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 253 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/PetalburgCity/scripts.pory"
	end
# 255 "data/maps/PetalburgCity/scripts.pory"

# 256 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 257 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 258 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 259 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 263 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 266 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 267 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 268 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 277 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 278 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 283 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 290 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 292 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 293 "data/maps/PetalburgCity/scripts.pory"
	end
# 294 "data/maps/PetalburgCity/scripts.pory"

# 295 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 299 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity/scripts.pory"
	return
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	return
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	return
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	return
# 326 "data/maps/PetalburgCity/scripts.pory"

# 327 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	return
# 332 "data/maps/PetalburgCity/scripts.pory"

# 333 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	return
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 342 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/PetalburgCity/scripts.pory"
	return
# 344 "data/maps/PetalburgCity/scripts.pory"

# 345 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 347 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 348 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 349 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 350 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 357 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 369 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 370 "data/maps/PetalburgCity/scripts.pory"

# 371 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 377 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 390 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 391 "data/maps/PetalburgCity/scripts.pory"

# 392 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 407 "data/maps/PetalburgCity/scripts.pory"

# 408 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 420 "data/maps/PetalburgCity/scripts.pory"

# 421 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 434 "data/maps/PetalburgCity/scripts.pory"

# 435 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 449 "data/maps/PetalburgCity/scripts.pory"

# 450 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 461 "data/maps/PetalburgCity/scripts.pory"

# 462 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 463 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 464 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 475 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 476 "data/maps/PetalburgCity/scripts.pory"

# 477 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 488 "data/maps/PetalburgCity/scripts.pory"

# 489 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 500 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 501 "data/maps/PetalburgCity/scripts.pory"

# 502 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 503 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 504 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 505 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 506 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 507 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 508 "data/maps/PetalburgCity/scripts.pory"
	end
# 509 "data/maps/PetalburgCity/scripts.pory"

# 510 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 511 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 512 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 513 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 514 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 515 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 516 "data/maps/PetalburgCity/scripts.pory"
	end
# 517 "data/maps/PetalburgCity/scripts.pory"

# 518 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 519 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 520 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 521 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 522 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 523 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 524 "data/maps/PetalburgCity/scripts.pory"
	end
# 525 "data/maps/PetalburgCity/scripts.pory"

# 526 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 527 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 528 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 529 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 530 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 531 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 532 "data/maps/PetalburgCity/scripts.pory"
	end
# 533 "data/maps/PetalburgCity/scripts.pory"

# 534 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 535 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 536 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 538 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 539 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 547 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 548 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 552 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 553 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 554 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 555 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 557 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 558 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 559 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 560 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 563 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 564 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 565 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 566 "data/maps/PetalburgCity/scripts.pory"
	end
# 567 "data/maps/PetalburgCity/scripts.pory"

# 568 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 570 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 571 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/PetalburgCity/scripts.pory"
	return
# 573 "data/maps/PetalburgCity/scripts.pory"

# 574 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 576 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 577 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/PetalburgCity/scripts.pory"
	return
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 582 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 583 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/PetalburgCity/scripts.pory"
	return
# 585 "data/maps/PetalburgCity/scripts.pory"

# 586 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 589 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/PetalburgCity/scripts.pory"
	return
# 591 "data/maps/PetalburgCity/scripts.pory"

# 592 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity/scripts.pory"

# 606 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 625 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 630 "data/maps/PetalburgCity/scripts.pory"

# 631 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 645 "data/maps/PetalburgCity/scripts.pory"

# 646 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 647 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 649 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 668 "data/maps/PetalburgCity/scripts.pory"

# 669 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 670 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 672 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 676 "data/maps/PetalburgCity/scripts.pory"

# 677 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 691 "data/maps/PetalburgCity/scripts.pory"

# 692 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 693 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 695 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 701 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 702 "data/maps/PetalburgCity/scripts.pory"
	end
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 716 "data/maps/PetalburgCity/scripts.pory"

# 717 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 736 "data/maps/PetalburgCity/scripts.pory"

# 737 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignOriginal:
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignChanged:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: VITO\l"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "“A rising star returned home!”$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignBlank:
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "The rest of the sign is blank...$"
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 754 "data/maps/PetalburgCity/scripts.pory"

# 755 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 762 "data/maps/PetalburgCity/scripts.pory"

# 763 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 769 "data/maps/PetalburgCity/scripts.pory"

# 770 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_GymSign::
# 782 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignOriginal, MSGBOX_SIGN
	end

