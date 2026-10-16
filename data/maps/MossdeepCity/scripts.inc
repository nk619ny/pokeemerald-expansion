# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 3 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 4 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity/scripts.pory"

# 6 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 7 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 8 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 9 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 10 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 11 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_124_CHAD, MAP_ROUTE124
# 12 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 13 "data/maps/MossdeepCity/scripts.pory"
	end
# 14 "data/maps/MossdeepCity/scripts.pory"

# 15 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 16 "data/maps/MossdeepCity/scripts.pory"
	lock
# 17 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 18 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 19 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 20 "data/maps/MossdeepCity/scripts.pory"
	release
# 21 "data/maps/MossdeepCity/scripts.pory"
	end
# 22 "data/maps/MossdeepCity/scripts.pory"

# 23 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 24 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 25 "data/maps/MossdeepCity/scripts.pory"
	release
# 26 "data/maps/MossdeepCity/scripts.pory"
	end
# 27 "data/maps/MossdeepCity/scripts.pory"

# 28 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 29 "data/maps/MossdeepCity/scripts.pory"
	lock
# 30 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 31 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 32 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 33 "data/maps/MossdeepCity/scripts.pory"
	release
# 34 "data/maps/MossdeepCity/scripts.pory"
	end
# 35 "data/maps/MossdeepCity/scripts.pory"

# 36 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 37 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 38 "data/maps/MossdeepCity/scripts.pory"
	release
# 39 "data/maps/MossdeepCity/scripts.pory"
	end
# 40 "data/maps/MossdeepCity/scripts.pory"

# 41 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 42 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 43 "data/maps/MossdeepCity/scripts.pory"
	end
# 44 "data/maps/MossdeepCity/scripts.pory"

# 45 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 46 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 47 "data/maps/MossdeepCity/scripts.pory"
	end
# 48 "data/maps/MossdeepCity/scripts.pory"

# 49 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 50 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 51 "data/maps/MossdeepCity/scripts.pory"
	end
# 52 "data/maps/MossdeepCity/scripts.pory"

# 53 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 54 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 55 "data/maps/MossdeepCity/scripts.pory"
	end
# 56 "data/maps/MossdeepCity/scripts.pory"

# 57 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 58 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 59 "data/maps/MossdeepCity/scripts.pory"
	end
# 60 "data/maps/MossdeepCity/scripts.pory"

# 61 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 62 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 63 "data/maps/MossdeepCity/scripts.pory"
	end
# 64 "data/maps/MossdeepCity/scripts.pory"

# 65 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 66 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 67 "data/maps/MossdeepCity/scripts.pory"
	end
# 68 "data/maps/MossdeepCity/scripts.pory"

# 69 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 70 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 71 "data/maps/MossdeepCity/scripts.pory"
	end
# 72 "data/maps/MossdeepCity/scripts.pory"

# 73 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 74 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 75 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 76 "data/maps/MossdeepCity/scripts.pory"
	end
# 77 "data/maps/MossdeepCity/scripts.pory"

# 78 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 79 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 80 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 81 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 83 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 84 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 86 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 92 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 94 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 95 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 96 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 97 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 98 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 99 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 100 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 101 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 102 "data/maps/MossdeepCity/scripts.pory"
	end
# 103 "data/maps/MossdeepCity/scripts.pory"

# 104 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 105 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 106 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 107 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 108 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 109 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 110 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 111 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 112 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 114 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 115 "data/maps/MossdeepCity/scripts.pory"

# 116 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 117 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 120 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 121 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 122 "data/maps/MossdeepCity/scripts.pory"

# 123 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 138 "data/maps/MossdeepCity/scripts.pory"

# 139 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 140 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 141 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 159 "data/maps/MossdeepCity/scripts.pory"

# 160 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 161 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 162 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 179 "data/maps/MossdeepCity/scripts.pory"

# 180 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 181 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 182 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 198 "data/maps/MossdeepCity/scripts.pory"

# 199 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 200 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 201 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 216 "data/maps/MossdeepCity/scripts.pory"

# 217 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 218 "data/maps/MossdeepCity/scripts.pory"
	lock
# 219 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 220 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 221 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 222 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/MossdeepCity/scripts.pory"
	release
# 224 "data/maps/MossdeepCity/scripts.pory"
	end
# 225 "data/maps/MossdeepCity/scripts.pory"

# 226 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 227 "data/maps/MossdeepCity/scripts.pory"
	lock
# 228 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 229 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 230 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 231 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 232 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 233 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 234 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 235 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 236 "data/maps/MossdeepCity/scripts.pory"
	release
# 237 "data/maps/MossdeepCity/scripts.pory"
	end
# 238 "data/maps/MossdeepCity/scripts.pory"

# 239 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 240 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 241 "data/maps/MossdeepCity/scripts.pory"
	release
# 242 "data/maps/MossdeepCity/scripts.pory"
	end
# 243 "data/maps/MossdeepCity/scripts.pory"

# 244 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 245 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 246 "data/maps/MossdeepCity/scripts.pory"
	release
# 247 "data/maps/MossdeepCity/scripts.pory"
	end
# 248 "data/maps/MossdeepCity/scripts.pory"

# 249 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 250 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 251 "data/maps/MossdeepCity/scripts.pory"
	end
# 252 "data/maps/MossdeepCity/scripts.pory"

# 253 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 254 "data/maps/MossdeepCity/scripts.pory"
	lock
# 255 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 256 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 257 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 258 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 259 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 260 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 261 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 262 "data/maps/MossdeepCity/scripts.pory"
	release
# 263 "data/maps/MossdeepCity/scripts.pory"
	end
# 264 "data/maps/MossdeepCity/scripts.pory"

# 265 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 266 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 267 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 268 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/MossdeepCity/scripts.pory"
	return
# 270 "data/maps/MossdeepCity/scripts.pory"

# 271 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 272 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 273 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 274 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 275 "data/maps/MossdeepCity/scripts.pory"
	return
# 276 "data/maps/MossdeepCity/scripts.pory"

# 277 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 278 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 279 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 280 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 281 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 282 "data/maps/MossdeepCity/scripts.pory"

# 283 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 284 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 285 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 294 "data/maps/MossdeepCity/scripts.pory"

# 295 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 306 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 307 "data/maps/MossdeepCity/scripts.pory"

# 308 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 309 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from STEVEN, but I don't\n"
# 310 "data/maps/MossdeepCity/scripts.pory"
	.string "know what it's good for.\p"
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "I think it's called KING'S ROCK.\n"
# 312 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you want it?$"
# 313 "data/maps/MossdeepCity/scripts.pory"

# 314 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\n"
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "You're weird.\p"
# 317 "data/maps/MossdeepCity/scripts.pory"
	.string "You can keep it, but keep it a secret\n"
# 318 "data/maps/MossdeepCity/scripts.pory"
	.string "from STEVEN.$"
# 319 "data/maps/MossdeepCity/scripts.pory"

# 320 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "STEVEN's house is right over there!$"
# 322 "data/maps/MossdeepCity/scripts.pory"

# 323 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too! What are you\n"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "supposed to do with some weird rock?$"
# 326 "data/maps/MossdeepCity/scripts.pory"

# 327 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "Around MOSSDEEP, you can see wild\n"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER.\p"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "It's called, uh…\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "What was it now…\p"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "WAI, WAI, WAI…\p"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER watching!$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 340 "data/maps/MossdeepCity/scripts.pory"

# 341 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's SPACE CENTER has been\n"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 344 "data/maps/MossdeepCity/scripts.pory"

# 345 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a SAILOR buddy that\n"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "But MOSSDEEP here's been targeted\n"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "by that TEAM MAGMA.\p"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the SPACE CENTER.$"
# 354 "data/maps/MossdeepCity/scripts.pory"

# 355 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 356 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a SAILOR, so the sea's obviously\n"
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 360 "data/maps/MossdeepCity/scripts.pory"

# 361 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 365 "data/maps/MossdeepCity/scripts.pory"

# 366 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 374 "data/maps/MossdeepCity/scripts.pory"

# 375 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with Pokémon\n"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "using SURF…\p"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 381 "data/maps/MossdeepCity/scripts.pory"

# 382 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the SPACE CENTER.\p"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 389 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 391 "data/maps/MossdeepCity/scripts.pory"

# 392 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 394 "data/maps/MossdeepCity/scripts.pory"

# 395 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\n"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADERS: LIZA & TATE\p"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 399 "data/maps/MossdeepCity/scripts.pory"

# 400 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP CITY\n"
# 402 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish Pokémon!”$"
# 403 "data/maps/MossdeepCity/scripts.pory"

# 404 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "MOSSDEEP SCIENCE CENTER\n"
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "“Understanding Space and Time.”$"
# 407 "data/maps/MossdeepCity/scripts.pory"

# 408 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm doing great!\p"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "pretty strong, so I decided to come\l"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "take a look-see for myself.\p"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "But there's something wrong about\n"
# 415 "data/maps/MossdeepCity/scripts.pory"
	.string "this town.\p"
# 416 "data/maps/MossdeepCity/scripts.pory"
	.string "People are going on about a warning\n"
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "letter and the SPACE CENTER…\p"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "I don't think it concerns me in any\n"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "way, though.$"
# 420 "data/maps/MossdeepCity/scripts.pory"

# 421 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "island city SOOTOPOLIS?\p"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the GYM there had a new\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "LEADER come in.\p"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new LEADER once\n"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored WALLACE.$"

MossdeepCity_EventScript_CloseCombatBlackBelt::
# 435 "data/maps/MossdeepCity/scripts.pory"
	lock
# 436 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 437 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_TM_CLOSE_COMBAT
# 438 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_EventScript_CloseCombatBlackBelt_2
# 445 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_CloseCombatBlackBelt_Text_0, MSGBOX_NPC
MossdeepCity_EventScript_CloseCombatBlackBelt_1:
# 447 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	end

MossdeepCity_EventScript_CloseCombatBlackBelt_2:
# 439 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_DynamicPunchTeach, MSGBOX_NPC
# 440 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 441 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_TM_CLOSE_COMBAT
# 442 "data/maps/MossdeepCity/scripts.pory"
	waitfanfare
	goto MossdeepCity_EventScript_CloseCombatBlackBelt_1


MossdeepCity_EventScript_DarkPulseManiac::
# 457 "data/maps/MossdeepCity/scripts.pory"
	lock
# 458 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 459 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_TM_DARK_PULSE
# 460 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_EventScript_DarkPulseManiac_2
# 475 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_DarkPulseManiac_Text_3, MSGBOX_NPC
MossdeepCity_EventScript_DarkPulseManiac_1:
# 477 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	end

MossdeepCity_EventScript_DarkPulseManiac_2:
# 461 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_DarkPulseManiac_Text_0, MSGBOX_YESNO
# 462 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 463 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_EventScript_DarkPulseManiac_6
# 469 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_DarkPulseManiac_Text_2, MSGBOX_NPC
# 470 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 471 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_TM_DARK_PULSE
# 472 "data/maps/MossdeepCity/scripts.pory"
	waitfanfare
	goto MossdeepCity_EventScript_DarkPulseManiac_1

MossdeepCity_EventScript_DarkPulseManiac_6:
# 464 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_DarkPulseManiac_Text_1, MSGBOX_NPC
# 465 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 466 "data/maps/MossdeepCity/scripts.pory"
	releaseall
	end


MossdeepCity_EventScript_CloseCombatBlackBelt_Text_0:
# 445 "data/maps/MossdeepCity/scripts.pory"
	.string "I want you to win at the Mossdeep Gym\n"
	.string "using Close Combat!$"

MossdeepCity_EventScript_DarkPulseManiac_Text_0:
# 461 "data/maps/MossdeepCity/scripts.pory"
	.string "...Do you plan to face the Mossdeep Gym\n"
	.string "Leaders?$"

MossdeepCity_EventScript_DarkPulseManiac_Text_1:
# 464 "data/maps/MossdeepCity/scripts.pory"
	.string "Perhaps I judged you wrong.$"

MossdeepCity_EventScript_DarkPulseManiac_Text_2:
# 469 "data/maps/MossdeepCity/scripts.pory"
	.string "My Dark techniques could help.$"

MossdeepCity_EventScript_DarkPulseManiac_Text_3:
# 475 "data/maps/MossdeepCity/scripts.pory"
	.string "Even powerful psychics fear the dark.$"

MossdeepCity_Text_DynamicPunchTeach::
# 451 "data/maps/MossdeepCity/scripts.pory"
	.string "I can't do this anymore!\p"
	.string "It's utterly hopeless!\p"
	.string "I'm a FIGHTING-type TRAINER,\n"
	.string "so I can't win at the MOSSDEEP GYM\l"
	.string "no matter how hard I try!\p"
	.string "Argh! Punch! Punch! Punch!\n"
	.string "Punch! Punch! Punch!\p"
	.string "What, don't look at me that way!\n"
	.string "I'm only hitting the ground!\p"
	.string "Here, take this and teach your Pokémon\n"
	.string "Close Combat!$"
