# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 11
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
	map_script_2 VAR_PETALBURG_CITY_STATE, 5, PetalburgCity_EventScript_WallyPostVito
# 36 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 37 "data/maps/PetalburgCity/scripts.pory"

# 38 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 39 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 40 "data/maps/PetalburgCity/scripts.pory"
//	special SavePlayerParty
# 41 "data/maps/PetalburgCity/scripts.pory"
//	special LoadWallyZigzagoon
# 42 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 43 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 44 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 45 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity/scripts.pory"
//	special StartWallyTutorialBattle
# 47 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 48 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 50 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 51 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity/scripts.pory"
//	closemessage
# 53 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 54 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_CITY_STATE, 3
# 55 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 56 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 57 "data/maps/PetalburgCity/scripts.pory"
//	special LoadPlayerParty
# 58 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 1
# 59 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 60 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 61 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 62 "data/maps/PetalburgCity/scripts.pory"
	end
# 63 "data/maps/PetalburgCity/scripts.pory"

# 64 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 65 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 66 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 68 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 69 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 70 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8004, 7
# 71 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8005, 5
# 72 "data/maps/PetalburgCity/scripts.pory"
//	opendoor VAR_0x8004, VAR_0x8005
# 73 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 74 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 75 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 76 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 77 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 78 "data/maps/PetalburgCity/scripts.pory"
//	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 79 "data/maps/PetalburgCity/scripts.pory"
//	closedoor VAR_0x8004, VAR_0x8005
# 80 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 81 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 83 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 84 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 85 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 86 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 87 "data/maps/PetalburgCity/scripts.pory"
	end
# 88 "data/maps/PetalburgCity/scripts.pory"

# 89 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 90 "data/maps/PetalburgCity/scripts.pory"
	lock
# 91 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 92 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 94 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgCity/scripts.pory"
	release
# 97 "data/maps/PetalburgCity/scripts.pory"
	end
# 98 "data/maps/PetalburgCity/scripts.pory"

# 99 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 100 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 101 "data/maps/PetalburgCity/scripts.pory"
	end
# 102 "data/maps/PetalburgCity/scripts.pory"

# 103 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 104 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 122 "data/maps/PetalburgCity/scripts.pory"

# 123 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 129 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
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
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 147 "data/maps/PetalburgCity/scripts.pory"

# 148 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 151 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 152 "data/maps/PetalburgCity/scripts.pory"

# 153 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 154 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 187 "data/maps/PetalburgCity/scripts.pory"

# 188 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 189 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 222 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 226 "data/maps/PetalburgCity/scripts.pory"

# 227 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 228 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 229 "data/maps/PetalburgCity/scripts.pory"
	end
# 230 "data/maps/PetalburgCity/scripts.pory"

# 231 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 232 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 233 "data/maps/PetalburgCity/scripts.pory"
	end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 236 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 240 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 242 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 247 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 252 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 253 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 254 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 258 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 259 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 260 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 261 "data/maps/PetalburgCity/scripts.pory"
	end
# 262 "data/maps/PetalburgCity/scripts.pory"

# 263 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 264 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 265 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 267 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 268 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 269 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 270 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 271 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 278 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 279 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 284 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 287 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 288 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 289 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 293 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 294 "data/maps/PetalburgCity/scripts.pory"
	end
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	return
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	return
# 307 "data/maps/PetalburgCity/scripts.pory"

# 308 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 310 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 312 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/PetalburgCity/scripts.pory"
	return
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	return
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	return
# 333 "data/maps/PetalburgCity/scripts.pory"

# 334 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 337 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/PetalburgCity/scripts.pory"
	return
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity/scripts.pory"
	return
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 348 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 349 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 350 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 351 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 364 "data/maps/PetalburgCity/scripts.pory"

# 365 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 370 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 378 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 379 "data/maps/PetalburgCity/scripts.pory"

# 380 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 392 "data/maps/PetalburgCity/scripts.pory"

# 393 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 421 "data/maps/PetalburgCity/scripts.pory"

# 422 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 450 "data/maps/PetalburgCity/scripts.pory"

# 451 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 462 "data/maps/PetalburgCity/scripts.pory"

# 463 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 464 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 465 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 477 "data/maps/PetalburgCity/scripts.pory"

# 478 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 489 "data/maps/PetalburgCity/scripts.pory"

# 490 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 501 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 502 "data/maps/PetalburgCity/scripts.pory"

# 503 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 504 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 505 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 506 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 507 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 508 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 509 "data/maps/PetalburgCity/scripts.pory"
	end
# 510 "data/maps/PetalburgCity/scripts.pory"

# 511 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 512 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 513 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 514 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 515 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 516 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 517 "data/maps/PetalburgCity/scripts.pory"
	end
# 518 "data/maps/PetalburgCity/scripts.pory"

# 519 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 520 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 521 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 522 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 523 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 524 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 525 "data/maps/PetalburgCity/scripts.pory"
	end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 528 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 529 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 530 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 531 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 532 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 533 "data/maps/PetalburgCity/scripts.pory"
	end
# 534 "data/maps/PetalburgCity/scripts.pory"

# 535 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 536 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 537 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 540 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 546 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 548 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 549 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 550 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 551 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 553 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 554 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 555 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 556 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 558 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 559 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 560 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 562 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 563 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 564 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 565 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 566 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 567 "data/maps/PetalburgCity/scripts.pory"
	end
# 568 "data/maps/PetalburgCity/scripts.pory"

# 569 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 570 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 572 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/PetalburgCity/scripts.pory"
	return
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 576 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 578 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 579 "data/maps/PetalburgCity/scripts.pory"
	return
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 582 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 584 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 585 "data/maps/PetalburgCity/scripts.pory"
	return
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 590 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/PetalburgCity/scripts.pory"
	return
# 592 "data/maps/PetalburgCity/scripts.pory"

# 593 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 599 "data/maps/PetalburgCity/scripts.pory"

# 600 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 606 "data/maps/PetalburgCity/scripts.pory"

# 607 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 622 "data/maps/PetalburgCity/scripts.pory"

# 623 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 624 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 626 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 631 "data/maps/PetalburgCity/scripts.pory"

# 632 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 646 "data/maps/PetalburgCity/scripts.pory"

# 647 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 648 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 650 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 654 "data/maps/PetalburgCity/scripts.pory"

# 655 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 669 "data/maps/PetalburgCity/scripts.pory"

# 670 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 671 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 673 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 692 "data/maps/PetalburgCity/scripts.pory"

# 693 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 694 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 696 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 700 "data/maps/PetalburgCity/scripts.pory"

# 701 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 702 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 703 "data/maps/PetalburgCity/scripts.pory"
	end
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 709 "data/maps/PetalburgCity/scripts.pory"

# 710 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 720 "data/maps/PetalburgCity/scripts.pory"

# 721 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 731 "data/maps/PetalburgCity/scripts.pory"

# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignOriginal:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignChanged:
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: VITO\l"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "“A rising star returned home!”$"
# 747 "data/maps/PetalburgCity/scripts.pory"

# 748 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignBlank:
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "The rest of the sign is blank...$"
# 751 "data/maps/PetalburgCity/scripts.pory"

# 752 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 755 "data/maps/PetalburgCity/scripts.pory"

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 770 "data/maps/PetalburgCity/scripts.pory"

# 771 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_GymSign::
# 778 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 779 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_GymSign_3
# 780 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_GymSign_3
# 781 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_GymSign_3
# 782 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_GymSign_3
# 784 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_GymSign_4
# 785 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_GymSign_4
# 787 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_GymSign_5
# 788 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_GymSign_5
# 789 "data/maps/PetalburgCity/scripts.pory"
	case 8, PetalburgCity_EventScript_GymSign_5
PetalburgCity_EventScript_GymSign_1:
	end

PetalburgCity_EventScript_GymSign_3:
# 783 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignOriginal, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1

PetalburgCity_EventScript_GymSign_4:
# 786 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignBlank, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1

PetalburgCity_EventScript_GymSign_5:
# 790 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignChanged, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1


PetalburgCity_EventScript_WallyPostVito::
# 797 "data/maps/PetalburgCity/scripts.pory"
	lock
# 798 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 799 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_WALLY
# 800 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyPostVitoApproach
# 801 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 802 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 803 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 804 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 805 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyPostVito, MSGBOX_DEFAULT
# 806 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 807 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HM_SURF, 1
# 808 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 809 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyBye, MSGBOX_DEFAULT
# 810 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 811 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyPostVitoDepart
# 812 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 813 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_WALLY
# 814 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


# 818 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyPostVitoApproach:
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 820 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 831 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyPostVitoDepart:
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 832 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

PetalburgCity_Text_WallyPostVito::
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally: Oh, {PLAYER}! It looks like\n"
	.string "you've already fought the new Gym\l"
	.string "Leader!\p"
	.string "I stopped at home to see my parents,\n"
	.string "but it looks like you passed me in Gym\l"
	.string "Badges now.\p"
	.string "You'll need the HM Surf to get to the\n"
	.string "rest of the Gyms - here, take this.$"

PetalburgCity_Text_WallyBye::
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally: I'm sure I'll run into you again.\p"
	.string "I'm going to prepare my team for the Gym\n"
	.string "now - wish me luck!$"
