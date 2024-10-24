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
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 37 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 40 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 41 "data/maps/PetalburgCity/scripts.pory"
//	special SavePlayerParty
# 42 "data/maps/PetalburgCity/scripts.pory"
//	special LoadWallyZigzagoon
# 43 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 44 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 45 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 46 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity/scripts.pory"
//	special StartWallyTutorialBattle
# 48 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 49 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 52 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity/scripts.pory"
//	closemessage
# 54 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_CITY_STATE, 3
# 56 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 57 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/PetalburgCity/scripts.pory"
//	special LoadPlayerParty
# 59 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 1
# 60 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 61 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 62 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 63 "data/maps/PetalburgCity/scripts.pory"
	end
# 64 "data/maps/PetalburgCity/scripts.pory"

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 66 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 67 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 69 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8004, 7
# 72 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8005, 5
# 73 "data/maps/PetalburgCity/scripts.pory"
//	opendoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 75 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 76 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 77 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 78 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 79 "data/maps/PetalburgCity/scripts.pory"
//	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 80 "data/maps/PetalburgCity/scripts.pory"
//	closedoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 82 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 84 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 86 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 87 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 88 "data/maps/PetalburgCity/scripts.pory"
	end
# 89 "data/maps/PetalburgCity/scripts.pory"

# 90 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 91 "data/maps/PetalburgCity/scripts.pory"
	lock
# 92 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 93 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 96 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgCity/scripts.pory"
	release
# 98 "data/maps/PetalburgCity/scripts.pory"
	end
# 99 "data/maps/PetalburgCity/scripts.pory"

# 100 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 101 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 105 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 123 "data/maps/PetalburgCity/scripts.pory"

# 124 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 128 "data/maps/PetalburgCity/scripts.pory"

# 129 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 130 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 148 "data/maps/PetalburgCity/scripts.pory"

# 149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 152 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 153 "data/maps/PetalburgCity/scripts.pory"

# 154 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 155 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 188 "data/maps/PetalburgCity/scripts.pory"

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 190 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 223 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 229 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 230 "data/maps/PetalburgCity/scripts.pory"
	end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 234 "data/maps/PetalburgCity/scripts.pory"
	end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 238 "data/maps/PetalburgCity/scripts.pory"
	end
# 239 "data/maps/PetalburgCity/scripts.pory"

# 240 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 241 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 242 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 243 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 247 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 248 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 249 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 250 "data/maps/PetalburgCity/scripts.pory"
	end
# 251 "data/maps/PetalburgCity/scripts.pory"

# 252 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 253 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 254 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 255 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 256 "data/maps/PetalburgCity/scripts.pory"
	end
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 259 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 260 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 261 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 262 "data/maps/PetalburgCity/scripts.pory"
	end
# 263 "data/maps/PetalburgCity/scripts.pory"

# 264 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 265 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 266 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 269 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 270 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 274 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 279 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 280 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 285 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 290 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 291 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 292 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 293 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 294 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 295 "data/maps/PetalburgCity/scripts.pory"
	end
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 299 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 301 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity/scripts.pory"
	return
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 305 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 306 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity/scripts.pory"
	return
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 313 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity/scripts.pory"
	return
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	return
# 322 "data/maps/PetalburgCity/scripts.pory"

# 323 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 326 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity/scripts.pory"
	return
# 328 "data/maps/PetalburgCity/scripts.pory"

# 329 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 332 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/PetalburgCity/scripts.pory"
	return
# 334 "data/maps/PetalburgCity/scripts.pory"

# 335 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 338 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity/scripts.pory"
	return
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	return
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 348 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 349 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 350 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 351 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 352 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 353 "data/maps/PetalburgCity/scripts.pory"

# 354 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 359 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 360 "data/maps/PetalburgCity/scripts.pory"

# 361 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 371 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 372 "data/maps/PetalburgCity/scripts.pory"

# 373 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 379 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 380 "data/maps/PetalburgCity/scripts.pory"

# 381 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 392 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 409 "data/maps/PetalburgCity/scripts.pory"

# 410 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 421 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 422 "data/maps/PetalburgCity/scripts.pory"

# 423 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 435 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 436 "data/maps/PetalburgCity/scripts.pory"

# 437 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 451 "data/maps/PetalburgCity/scripts.pory"

# 452 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 462 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 463 "data/maps/PetalburgCity/scripts.pory"

# 464 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 465 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 466 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 478 "data/maps/PetalburgCity/scripts.pory"

# 479 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 489 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 490 "data/maps/PetalburgCity/scripts.pory"

# 491 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 502 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 505 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 506 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 507 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 508 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 509 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 510 "data/maps/PetalburgCity/scripts.pory"
	end
# 511 "data/maps/PetalburgCity/scripts.pory"

# 512 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 513 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 514 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 515 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 516 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 517 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 518 "data/maps/PetalburgCity/scripts.pory"
	end
# 519 "data/maps/PetalburgCity/scripts.pory"

# 520 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 521 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 522 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 523 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 524 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 525 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 526 "data/maps/PetalburgCity/scripts.pory"
	end
# 527 "data/maps/PetalburgCity/scripts.pory"

# 528 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 529 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 530 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 531 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 532 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 533 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 534 "data/maps/PetalburgCity/scripts.pory"
	end
# 535 "data/maps/PetalburgCity/scripts.pory"

# 536 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 537 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 538 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 549 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 550 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 551 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 552 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 554 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 555 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 557 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 559 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 560 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 565 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 566 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 567 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 568 "data/maps/PetalburgCity/scripts.pory"
	end
# 569 "data/maps/PetalburgCity/scripts.pory"

# 570 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 573 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/PetalburgCity/scripts.pory"
	return
# 575 "data/maps/PetalburgCity/scripts.pory"

# 576 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 579 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity/scripts.pory"
	return
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	return
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	return
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 600 "data/maps/PetalburgCity/scripts.pory"

# 601 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 607 "data/maps/PetalburgCity/scripts.pory"

# 608 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 625 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 627 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 632 "data/maps/PetalburgCity/scripts.pory"

# 633 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 647 "data/maps/PetalburgCity/scripts.pory"

# 648 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 649 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity/scripts.pory"

# 656 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 670 "data/maps/PetalburgCity/scripts.pory"

# 671 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 672 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity/scripts.pory"

# 679 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 693 "data/maps/PetalburgCity/scripts.pory"

# 694 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 695 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 697 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 703 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 704 "data/maps/PetalburgCity/scripts.pory"
	end
# 705 "data/maps/PetalburgCity/scripts.pory"

# 706 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 725 "data/maps/PetalburgCity/scripts.pory"

# 726 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignOriginal:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 743 "data/maps/PetalburgCity/scripts.pory"

# 744 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignChanged:
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: VITO\l"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "“A rising star returned home!”$"
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignBlank:
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "The rest of the sign is blank...$"
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 759 "data/maps/PetalburgCity/scripts.pory"

# 760 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_GymSign::
# 784 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignOriginal, MSGBOX_SIGN
	end

