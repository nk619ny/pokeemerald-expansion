# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 5 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 8 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 9 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 10 "data/maps/PetalburgCity/scripts.pory"
//	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 11 "data/maps/PetalburgCity/scripts.pory"
//	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 12 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 13 "data/maps/PetalburgCity/scripts.pory"
	end
# 14 "data/maps/PetalburgCity/scripts.pory"

# 15 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 16 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_BOY, 5, 11
# 17 "data/maps/PetalburgCity/scripts.pory"
	return
# 18 "data/maps/PetalburgCity/scripts.pory"

# 19 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 20 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 22 "data/maps/PetalburgCity/scripts.pory"
	return
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 25 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 26 "data/maps/PetalburgCity/scripts.pory"
	return
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 29 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 5, PetalburgCity_EventScript_WallyPostVito
# 30 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 31 "data/maps/PetalburgCity/scripts.pory"

# 32 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 33 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 34 "data/maps/PetalburgCity/scripts.pory"
//	special SavePlayerParty
# 35 "data/maps/PetalburgCity/scripts.pory"
//	special LoadWallyZigzagoon
# 36 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 37 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 38 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 39 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgCity/scripts.pory"
//	special StartWallyTutorialBattle
# 41 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 42 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 44 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 45 "data/maps/PetalburgCity/scripts.pory"
//	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity/scripts.pory"
//	closemessage
# 47 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 48 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_CITY_STATE, 3
# 49 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 50 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 51 "data/maps/PetalburgCity/scripts.pory"
//	special LoadPlayerParty
# 52 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 1
# 53 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 54 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 55 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 56 "data/maps/PetalburgCity/scripts.pory"
	end
# 57 "data/maps/PetalburgCity/scripts.pory"

# 58 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 59 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 60 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 62 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 63 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 64 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8004, 7
# 65 "data/maps/PetalburgCity/scripts.pory"
//	setvar VAR_0x8005, 5
# 66 "data/maps/PetalburgCity/scripts.pory"
//	opendoor VAR_0x8004, VAR_0x8005
# 67 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 68 "data/maps/PetalburgCity/scripts.pory"
//	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 69 "data/maps/PetalburgCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 70 "data/maps/PetalburgCity/scripts.pory"
//	waitmovement 0
# 71 "data/maps/PetalburgCity/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 72 "data/maps/PetalburgCity/scripts.pory"
//	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 73 "data/maps/PetalburgCity/scripts.pory"
//	closedoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/PetalburgCity/scripts.pory"
//	waitdooranim
# 75 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/PetalburgCity/scripts.pory"
//	fadedefaultbgm
# 77 "data/maps/PetalburgCity/scripts.pory"
//	clearflag FLAG_DONT_TRANSITION_MUSIC
# 78 "data/maps/PetalburgCity/scripts.pory"
//	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 79 "data/maps/PetalburgCity/scripts.pory"
//	waitstate
# 80 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 81 "data/maps/PetalburgCity/scripts.pory"
	end
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 84 "data/maps/PetalburgCity/scripts.pory"
	lock
# 85 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 86 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 88 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 89 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/PetalburgCity/scripts.pory"
	release
# 91 "data/maps/PetalburgCity/scripts.pory"
	end
# 92 "data/maps/PetalburgCity/scripts.pory"

# 93 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 94 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 95 "data/maps/PetalburgCity/scripts.pory"
	end
# 96 "data/maps/PetalburgCity/scripts.pory"

# 97 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 98 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 99 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 102 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 115 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 116 "data/maps/PetalburgCity/scripts.pory"

# 117 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 121 "data/maps/PetalburgCity/scripts.pory"

# 122 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 123 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 141 "data/maps/PetalburgCity/scripts.pory"

# 142 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 145 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 146 "data/maps/PetalburgCity/scripts.pory"

# 147 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 148 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 181 "data/maps/PetalburgCity/scripts.pory"

# 182 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 183 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 220 "data/maps/PetalburgCity/scripts.pory"

# 221 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 222 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 223 "data/maps/PetalburgCity/scripts.pory"
	end
# 224 "data/maps/PetalburgCity/scripts.pory"

# 225 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 226 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 227 "data/maps/PetalburgCity/scripts.pory"
	end
# 228 "data/maps/PetalburgCity/scripts.pory"

# 229 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 230 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 231 "data/maps/PetalburgCity/scripts.pory"
	end
# 232 "data/maps/PetalburgCity/scripts.pory"

# 233 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 234 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 235 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 236 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 240 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 242 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 247 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 252 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 253 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 254 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 258 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, Common_Movement_FacePlayer
# 259 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 261 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 262 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 263 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 264 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, Common_Movement_ExclamationMark
# 265 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, Common_Movement_Delay48
# 267 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 269 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 270 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 271 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 272 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 273 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 277 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 278 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 283 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 285 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 287 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 288 "data/maps/PetalburgCity/scripts.pory"
	end
# 289 "data/maps/PetalburgCity/scripts.pory"

# 290 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 291 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 292 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 294 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity/scripts.pory"
	return
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 299 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity/scripts.pory"
	return
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 306 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity/scripts.pory"
	return
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
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
PetalburgCity_EventScript_LeadPlayerToGym0::
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 318 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 319 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 320 "data/maps/PetalburgCity/scripts.pory"
	return
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	return
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	return
# 333 "data/maps/PetalburgCity/scripts.pory"

# 334 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 337 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/PetalburgCity/scripts.pory"
	return
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 342 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 343 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 344 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 345 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 352 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 353 "data/maps/PetalburgCity/scripts.pory"

# 354 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 373 "data/maps/PetalburgCity/scripts.pory"

# 374 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 385 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 401 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 402 "data/maps/PetalburgCity/scripts.pory"

# 403 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 415 "data/maps/PetalburgCity/scripts.pory"

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 428 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 429 "data/maps/PetalburgCity/scripts.pory"

# 430 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 444 "data/maps/PetalburgCity/scripts.pory"

# 445 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 455 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 456 "data/maps/PetalburgCity/scripts.pory"

# 457 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 458 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 459 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 470 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 471 "data/maps/PetalburgCity/scripts.pory"

# 472 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 483 "data/maps/PetalburgCity/scripts.pory"

# 484 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 496 "data/maps/PetalburgCity/scripts.pory"

# 497 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 498 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 499 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 500 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 501 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 502 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 503 "data/maps/PetalburgCity/scripts.pory"
	end
# 504 "data/maps/PetalburgCity/scripts.pory"

# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 506 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 507 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 508 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 509 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 510 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 511 "data/maps/PetalburgCity/scripts.pory"
	end
# 512 "data/maps/PetalburgCity/scripts.pory"

# 513 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 514 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 515 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 516 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 517 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 518 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 519 "data/maps/PetalburgCity/scripts.pory"
	end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 522 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 523 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 524 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 525 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 526 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 527 "data/maps/PetalburgCity/scripts.pory"
	end
# 528 "data/maps/PetalburgCity/scripts.pory"

# 529 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 530 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 531 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 533 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 534 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 536 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 538 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 540 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 542 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 543 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 544 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 545 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 547 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 548 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_GiveRareEgg
# 552 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 553 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_EggHasPotential, MSGBOX_DEFAULT
# 554 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 555 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 556 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 557 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 558 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 559 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 560 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 561 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 562 "data/maps/PetalburgCity/scripts.pory"
	end
# 563 "data/maps/PetalburgCity/scripts.pory"

# 564 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 565 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 566 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 567 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/PetalburgCity/scripts.pory"
	return
# 569 "data/maps/PetalburgCity/scripts.pory"

# 570 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 573 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/PetalburgCity/scripts.pory"
	return
# 575 "data/maps/PetalburgCity/scripts.pory"

# 576 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 579 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity/scripts.pory"
	return
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	return
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 594 "data/maps/PetalburgCity/scripts.pory"

# 595 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 604 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 619 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 621 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 641 "data/maps/PetalburgCity/scripts.pory"

# 642 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 643 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 645 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 646 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 666 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 668 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 669 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity/scripts.pory"

# 673 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 687 "data/maps/PetalburgCity/scripts.pory"

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 689 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 697 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 698 "data/maps/PetalburgCity/scripts.pory"
	end
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 703 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon TRAINERS\n"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 719 "data/maps/PetalburgCity/scripts.pory"

# 720 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignOriginal:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignChanged:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: VITO\l"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "“A rising star returned home!”$"
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSignBlank:
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "The rest of the sign is blank...$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon TRAINER?$"
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_EventScript_GymSign::
# 777 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 778 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_GymSign_3
# 779 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_GymSign_3
# 780 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_GymSign_3
# 781 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_GymSign_3
# 783 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_GymSign_4
# 784 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_GymSign_4
# 786 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_GymSign_5
# 787 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_GymSign_5
# 788 "data/maps/PetalburgCity/scripts.pory"
	case 8, PetalburgCity_EventScript_GymSign_5
PetalburgCity_EventScript_GymSign_1:
	end

PetalburgCity_EventScript_GymSign_3:
# 782 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignOriginal, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1

PetalburgCity_EventScript_GymSign_4:
# 785 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignBlank, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1

PetalburgCity_EventScript_GymSign_5:
# 789 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSignChanged, MSGBOX_SIGN
	goto PetalburgCity_EventScript_GymSign_1


PetalburgCity_EventScript_WallyPostVito::
# 796 "data/maps/PetalburgCity/scripts.pory"
	lock
# 797 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 6
# 798 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_WALLY
# 799 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyPostVitoApproach
# 800 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY
# 801 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_ExclamationMark
# 802 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY
# 803 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 804 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyPostVito, MSGBOX_DEFAULT
# 805 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 806 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HM_SURF, 1
# 807 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 808 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyBye, MSGBOX_DEFAULT
# 809 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 810 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyPostVitoDepart
# 811 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY
# 812 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_WALLY
# 813 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


# 817 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyPostVitoApproach:
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 818 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 819 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 830 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyPostVitoDepart:
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

PetalburgCity_EventScript_GiveRareEgg::
# 835 "data/maps/PetalburgCity/scripts.pory"
	lock
# 836 "data/maps/PetalburgCity/scripts.pory"
	random 6
# 837 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 838 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_GiveRareEgg_3
# 840 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_GiveRareEgg_4
# 842 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_GiveRareEgg_5
# 844 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_GiveRareEgg_6
# 846 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_GiveRareEgg_7
# 848 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_GiveRareEgg_8
# 850 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_GiveRareEgg_9
# 853 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_DITTO
PetalburgCity_EventScript_GiveRareEgg_1:
# 855 "data/maps/PetalburgCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 856 "data/maps/PetalburgCity/scripts.pory"
	giveegg VAR_TEMP_6
# 857 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_GiveRareEgg_Text_0, MSGBOX_DEFAULT
# 858 "data/maps/PetalburgCity/scripts.pory"
	waitfanfare
# 859 "data/maps/PetalburgCity/scripts.pory"
	closemessage
	return

PetalburgCity_EventScript_GiveRareEgg_3:
# 839 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_PHIONE
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_4:
# 841 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_COSMOG
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_5:
# 843 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_KUBFU
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_6:
# 845 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_MELTAN
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_7:
# 847 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_POIPOLE
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_8:
# 849 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ZYGARDE_10_AURA_BREAK
	goto PetalburgCity_EventScript_GiveRareEgg_1

PetalburgCity_EventScript_GiveRareEgg_9:
# 851 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_TERAPAGOS_NORMAL_SHELL
	goto PetalburgCity_EventScript_GiveRareEgg_1


PetalburgCity_EventScript_GiveRareEgg_Text_0:
# 857 "data/maps/PetalburgCity/scripts.pory"
	.string "Received a Pokémon Egg!$"

PetalburgCity_Text_EggHasPotential::
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "That Egg is extremely rare. And I think\n"
	.string "it has a lot of potential, too.\p"
	.string "But I think it needs a special Trainer\n"
	.string "to bring it out.\p"
	.string "Hopefully, it can help you, and you can\n"
	.string "make it into something legendary.\p"
	.string "I'm looking forward to seeing what you\n"
	.string "can accomplish.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "Trainers with a lot of potential.\p"
	.string "I'm trying to build something special,\n"
	.string "and foster young talent along the way.\p"
	.string "I came here to speak with that Wally\n"
	.string "kid, but I think you might have\l"
	.string "something too.\p"
	.string "Here - take this.$"

PetalburgCity_Text_WallyPostVito::
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally: Oh, {PLAYER}! It looks like\n"
	.string "you've already fought the new Gym\l"
	.string "Leader!\p"
	.string "I stopped at home to see my parents,\n"
	.string "but it looks like you passed me in Gym\l"
	.string "Badges now.\p"
	.string "You'll need the HM Surf to get to the\n"
	.string "rest of the Gyms - here, take this.$"

PetalburgCity_Text_WallyBye::
# 826 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally: I'm sure I'll run into you again.\p"
	.string "I'm going to prepare my team for the Gym\n"
	.string "now - wish me luck!$"
