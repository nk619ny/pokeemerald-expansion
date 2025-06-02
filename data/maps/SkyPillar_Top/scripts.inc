# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
//.set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_STEVEN, 3
# 4 "data/maps/SkyPillar_Top/scripts.pory"

# 5 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 7 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_Top/scripts.pory"

# 11 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 14 "data/maps/SkyPillar_Top/scripts.pory"

# 15 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 20 "data/maps/SkyPillar_Top/scripts.pory"

# 21 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 25 "data/maps/SkyPillar_Top/scripts.pory"

# 26 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 30 "data/maps/SkyPillar_Top/scripts.pory"

# 31 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 34 "data/maps/SkyPillar_Top/scripts.pory"

# 35 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	//clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 38 "data/maps/SkyPillar_Top/scripts.pory"

# 39 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 42 "data/maps/SkyPillar_Top/scripts.pory"

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 46 "data/maps/SkyPillar_Top/scripts.pory"

# 47 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 65 "data/maps/SkyPillar_Top/scripts.pory"

# 66 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 70 "data/maps/SkyPillar_Top/scripts.pory"

# 71 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 75 "data/maps/SkyPillar_Top/scripts.pory"

# 76 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 82 "data/maps/SkyPillar_Top/scripts.pory"

# 83 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 91 "data/maps/SkyPillar_Top/scripts.pory"

# 92 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 95 "data/maps/SkyPillar_Top/scripts.pory"

# 96 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_StevenRayquazaAwakens, MSGBOX_DEFAULT
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 99 "data/maps/SkyPillar_Top/scripts.pory"

# 100 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_RESULT, 1
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_M_DETECT
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffectsparkle 13, 9, 0
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 104 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_RESULT, 1
# 106 "data/maps/SkyPillar_Top/scripts.pory"

# 107 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 147 "data/maps/SkyPillar_Top/scripts.pory"

# 148 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterRight
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_StevenCheckSootopolis, MSGBOX_DEFAULT
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 153 "data/maps/SkyPillar_Top/scripts.pory"

# 154 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	delay 50
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	setfieldeffectargument 0, 1
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_STEVEN
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 162 "data/maps/SkyPillar_Top/scripts.pory"

# 163 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 165 "data/maps/SkyPillar_Top/scripts.pory"

# 166 "data/maps/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 167 "data/maps/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 168 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 186 "data/maps/SkyPillar_Top/scripts.pory"

# 187 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 189 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 194 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 195 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 197 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 199 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 200 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 201 "data/maps/SkyPillar_Top/scripts.pory"

# 202 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 203 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 204 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 205 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 207 "data/maps/SkyPillar_Top/scripts.pory"

# 208 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 209 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 211 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 212 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 213 "data/maps/SkyPillar_Top/scripts.pory"

# 214 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 215 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"

SkyPillar_Top_Text_StevenRayquazaAwakens::
# 219 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Steven: This meteorite should awaken\n"
	.string "Rayquaza, and make it aware of the\l"
	.string "presence of Groudon and Kyogre.\p"
	.string "I admit, I'm very nervous about waking\n"
	.string "up another super-ancient Pokémon.\p"
	.string "But according to legends, Rayquaza has\n"
	.string "served as the guardian of the skies,\l"
	.string "and has calmed down Kyogre and Groudon\l"
	.string "in the past.\p"
	.string "We need to trust it to do so again.$"

SkyPillar_Top_Text_StevenCheckSootopolis::
# 223 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Steven: Let's hurry back to Sootopolis\n"
	.string "to see if it worked.$"
