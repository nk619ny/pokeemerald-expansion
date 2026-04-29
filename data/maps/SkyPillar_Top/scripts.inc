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

SkyPillar_Top_EventScript_FusionTutor::
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 235 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 236 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_Intro, MSGBOX_YESNO
# 237 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SkyPillar_Top_EventScript_FusionTutor_2
# 242 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_ChooseMon
	return

SkyPillar_Top_EventScript_FusionTutor_2:
# 238 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_Declined, MSGBOX_DEFAULT
# 239 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end


FusionTutor_EventScript_ChooseMon::
# 246 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_ChooseMon, MSGBOX_DEFAULT
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	special ChoosePartyMon
# 248 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 249 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 250 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 251 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge FusionTutor_EventScript_ChooseMon_2
# 256 "data/maps/SkyPillar_Top/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8004
# 257 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq FusionTutor_EventScript_ChooseMon_5
FusionTutor_EventScript_ChooseMon_4:
# 263 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_ELECTIVIRE
	goto_if_eq FusionTutor_EventScript_ChooseMon_8
FusionTutor_EventScript_ChooseMon_7:
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_ZAPDOS
	goto_if_eq FusionTutor_EventScript_ChooseMon_11
FusionTutor_EventScript_ChooseMon_10:
# 279 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_RAIKOU
	goto_if_eq FusionTutor_EventScript_ChooseMon_14
FusionTutor_EventScript_ChooseMon_13:
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_JOLTEON
	goto_if_eq FusionTutor_EventScript_ChooseMon_17
FusionTutor_EventScript_ChooseMon_16:
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_ELECTABUZZ
	goto_if_eq FusionTutor_EventScript_ChooseMon_20
FusionTutor_EventScript_ChooseMon_19:
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_MAGMORTAR
	goto_if_eq FusionTutor_EventScript_ChooseMon_23
FusionTutor_EventScript_ChooseMon_22:
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_MOLTRES
	goto_if_eq FusionTutor_EventScript_ChooseMon_26
FusionTutor_EventScript_ChooseMon_25:
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_ENTEI
	goto_if_eq FusionTutor_EventScript_ChooseMon_29
FusionTutor_EventScript_ChooseMon_28:
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_FLAREON
	goto_if_eq FusionTutor_EventScript_ChooseMon_32
FusionTutor_EventScript_ChooseMon_31:
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_MAGMAR
	goto_if_eq FusionTutor_EventScript_ChooseMon_35
FusionTutor_EventScript_ChooseMon_34:
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_NINETALES_ALOLA
	goto_if_eq FusionTutor_EventScript_ChooseMon_38
FusionTutor_EventScript_ChooseMon_37:
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_ARTICUNO
	goto_if_eq FusionTutor_EventScript_ChooseMon_41
FusionTutor_EventScript_ChooseMon_40:
# 358 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_GLACEON
	goto_if_eq FusionTutor_EventScript_ChooseMon_44
FusionTutor_EventScript_ChooseMon_43:
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, SPECIES_JYNX
	goto_if_eq FusionTutor_EventScript_ChooseMon_47
FusionTutor_EventScript_ChooseMon_46:
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_InvalidMon, MSGBOX_DEFAULT
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	return

FusionTutor_EventScript_ChooseMon_2:
# 252 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_Declined, MSGBOX_DEFAULT
# 253 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

FusionTutor_EventScript_ChooseMon_5:
# 259 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 260 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_ChooseMon_4

FusionTutor_EventScript_ChooseMon_8:
# 264 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ELECTIVIRE
# 265 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_BOLT
# 266 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_MAGMORTAR
# 267 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_BOLT
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGMORTAR
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_7

FusionTutor_EventScript_ChooseMon_11:
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ZAPDOS
# 273 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_BOLT
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_MOLTRES
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_BOLT
# 276 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_10

FusionTutor_EventScript_ChooseMon_14:
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RAIKOU
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_BOLT
# 282 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ENTEI
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_BOLT
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ENTEI
# 285 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_13

FusionTutor_EventScript_ChooseMon_17:
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JOLTEON
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_BOLT
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_FLAREON
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_BOLT
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_16

FusionTutor_EventScript_ChooseMon_20:
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ELECTABUZZ
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_BOLT
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_MAGMAR
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_BOLT
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGMAR
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_19

FusionTutor_EventScript_ChooseMon_23:
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGMORTAR
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_FLARE
# 307 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ELECTIVIRE
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_FLARE
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELECTIVIRE
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_22

FusionTutor_EventScript_ChooseMon_26:
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MOLTRES
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_FLARE
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ZAPDOS
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_FLARE
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_25

FusionTutor_EventScript_ChooseMon_29:
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ENTEI
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_FLARE
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_RAIKOU
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_FLARE
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAIKOU
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_28

FusionTutor_EventScript_ChooseMon_32:
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FLAREON
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_FLARE
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_JOLTEON
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_FLARE
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_31

FusionTutor_EventScript_ChooseMon_35:
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGMAR
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FUSION_FLARE
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ELECTABUZZ
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FUSION_FLARE
# 341 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELECTABUZZ
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_34

FusionTutor_EventScript_ChooseMon_38:
# 346 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_NINETALES_ALOLA
# 347 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BURN
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_NINETALES
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_ICE_BURN
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_NINETALES
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_CheckSingleMove
	goto FusionTutor_EventScript_ChooseMon_37

FusionTutor_EventScript_ChooseMon_41:
# 355 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARTICUNO
# 356 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_Articuno
	goto FusionTutor_EventScript_ChooseMon_40

FusionTutor_EventScript_ChooseMon_44:
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GLACEON
# 360 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_Glaceon
	goto FusionTutor_EventScript_ChooseMon_43

FusionTutor_EventScript_ChooseMon_47:
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_JYNX
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_Jynx
	goto FusionTutor_EventScript_ChooseMon_46


FusionTutor_EventScript_CheckSingleMove::
# 375 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FusionTutor_EventScript_CheckSingleMove_2
FusionTutor_EventScript_CheckSingleMove_1:
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_OfferMove, MSGBOX_YESNO
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FusionTutor_EventScript_CheckSingleMove_5
FusionTutor_EventScript_CheckSingleMove_4:
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_TeachBufferedMove
	return

FusionTutor_EventScript_CheckSingleMove_2:
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_NeedPartner, MSGBOX_DEFAULT
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_CheckSingleMove_1

FusionTutor_EventScript_CheckSingleMove_5:
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_CheckSingleMove_4


FusionTutor_EventScript_TeachBufferedMove::
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_0
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_1
# 392 "data/maps/SkyPillar_Top/scripts.pory"
	special CanTeachMoveBoxMon
# 393 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_Success, MSGBOX_DEFAULT
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	return


FusionTutor_EventScript_AskAnother::
# 401 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_AnotherMon, MSGBOX_YESNO
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FusionTutor_EventScript_AskAnother_2
FusionTutor_EventScript_AskAnother_1:
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_Declined, MSGBOX_DEFAULT
# 406 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

FusionTutor_EventScript_AskAnother_2:
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_ChooseMon
	goto FusionTutor_EventScript_AskAnother_1


FusionTutor_EventScript_Articuno::
# 412 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 413 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 0
# 415 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 416 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 417 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Articuno_2
FusionTutor_EventScript_Articuno_1:
# 421 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 422 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 423 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Articuno_5
FusionTutor_EventScript_Articuno_4:
# 426 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_ResolveMultiMove
	return

FusionTutor_EventScript_Articuno_2:
# 418 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto FusionTutor_EventScript_Articuno_1

FusionTutor_EventScript_Articuno_5:
# 424 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto FusionTutor_EventScript_Articuno_4


FusionTutor_EventScript_Glaceon::
# 431 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 0
# 434 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_FLAREON
# 435 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 436 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Glaceon_2
FusionTutor_EventScript_Glaceon_1:
# 440 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_JOLTEON
# 441 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 442 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Glaceon_5
FusionTutor_EventScript_Glaceon_4:
# 445 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_ResolveMultiMove
	return

FusionTutor_EventScript_Glaceon_2:
# 437 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto FusionTutor_EventScript_Glaceon_1

FusionTutor_EventScript_Glaceon_5:
# 443 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto FusionTutor_EventScript_Glaceon_4


FusionTutor_EventScript_Jynx::
# 450 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 451 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 0
# 453 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGMORTAR
# 454 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Jynx_2
FusionTutor_EventScript_Jynx_1:
# 458 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FusionTutor_EventScript_Jynx_5
FusionTutor_EventScript_Jynx_4:
# 466 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELECTIVIRE
# 467 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 468 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Jynx_8
FusionTutor_EventScript_Jynx_7:
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq FusionTutor_EventScript_Jynx_13
FusionTutor_EventScript_Jynx_12:
# 478 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_ResolveMultiMove
	return

FusionTutor_EventScript_Jynx_2:
# 456 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto FusionTutor_EventScript_Jynx_1

FusionTutor_EventScript_Jynx_5:
# 459 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGMAR
# 460 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 461 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Jynx_10
	goto FusionTutor_EventScript_Jynx_4

FusionTutor_EventScript_Jynx_8:
# 469 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto FusionTutor_EventScript_Jynx_7

FusionTutor_EventScript_Jynx_10:
# 462 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto FusionTutor_EventScript_Jynx_4

FusionTutor_EventScript_Jynx_13:
# 472 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ELECTABUZZ
# 473 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 474 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FusionTutor_EventScript_Jynx_15
	goto FusionTutor_EventScript_Jynx_12

FusionTutor_EventScript_Jynx_15:
# 475 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto FusionTutor_EventScript_Jynx_12


FusionTutor_EventScript_ResolveMultiMove::
# 485 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_3
FusionTutor_EventScript_ResolveMultiMove_1:
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_8
FusionTutor_EventScript_ResolveMultiMove_6:
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_13
FusionTutor_EventScript_ResolveMultiMove_11:
# 510 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_ChooseMove, MSGBOX_DEFAULT
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	dynmultichoice 20, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, FusionTutor_EventScript_ResolveMultiMove_Text_0, FusionTutor_EventScript_ResolveMultiMove_Text_1
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 513 "data/maps/SkyPillar_Top/scripts.pory"
	case 0, FusionTutor_EventScript_ResolveMultiMove_20
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, FusionTutor_EventScript_ResolveMultiMove_21
# 522 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	return

FusionTutor_EventScript_ResolveMultiMove_2:
# 486 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_NeedPartnerMulti, MSGBOX_DEFAULT
# 487 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_ResolveMultiMove_1

FusionTutor_EventScript_ResolveMultiMove_3:
# 485 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_2
	goto FusionTutor_EventScript_ResolveMultiMove_1

FusionTutor_EventScript_ResolveMultiMove_7:
# 491 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BURN
# 492 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_ICE_BURN
# 493 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_OfferMove, MSGBOX_YESNO
# 494 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_17
FusionTutor_EventScript_ResolveMultiMove_16:
# 497 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_TeachBufferedMove
	goto FusionTutor_EventScript_ResolveMultiMove_6

FusionTutor_EventScript_ResolveMultiMove_8:
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_7
	goto FusionTutor_EventScript_ResolveMultiMove_6

FusionTutor_EventScript_ResolveMultiMove_12:
# 501 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FREEZE_SHOCK
# 502 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FREEZE_SHOCK
# 503 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox FusionTutor_Text_OfferMove, MSGBOX_YESNO
# 504 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_24
FusionTutor_EventScript_ResolveMultiMove_23:
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_TeachBufferedMove
	goto FusionTutor_EventScript_ResolveMultiMove_11

FusionTutor_EventScript_ResolveMultiMove_13:
# 500 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq FusionTutor_EventScript_ResolveMultiMove_12
	goto FusionTutor_EventScript_ResolveMultiMove_11

FusionTutor_EventScript_ResolveMultiMove_17:
# 495 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_ResolveMultiMove_16

FusionTutor_EventScript_ResolveMultiMove_20:
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BURN
# 515 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_ICE_BURN
# 516 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_TeachBufferedMove
	return

FusionTutor_EventScript_ResolveMultiMove_21:
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FREEZE_SHOCK
# 519 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_1, MOVE_FREEZE_SHOCK
# 520 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_TeachBufferedMove
	return

FusionTutor_EventScript_ResolveMultiMove_24:
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	goto FusionTutor_EventScript_AskAnother
	goto FusionTutor_EventScript_ResolveMultiMove_23


FusionTutor_EventScript_ResolveMultiMove_Text_0:
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Ice Burn$"

FusionTutor_EventScript_ResolveMultiMove_Text_1:
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Freeze Shock$"

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

FusionTutor_Text_Intro::
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I've spent years studying the bonds\n"
	.string "between Pokémon.\p"
	.string "I've discovered that certain pairs of\n"
	.string "Pokémon, when united under a single\l"
	.string "Trainer, can unlock incredible power.\p"
	.string "Would you like me to see if any of your\n"
	.string "Pokémon qualify?$"

FusionTutor_Text_ChooseMon::
# 534 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Show me the Pokémon you'd like me to\n"
	.string "examine.$"

FusionTutor_Text_CantTeachEgg::
# 538 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I'm afraid I can't work with an Egg.$"

FusionTutor_Text_InvalidMon::
# 542 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hmm… I don't sense the potential for a\n"
	.string "bond-based move in that Pokémon.$"

FusionTutor_Text_NeedPartner::
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Your {STR_VAR_1} has the potential\n"
	.string "to learn {STR_VAR_2}, but only if\l"
	.string "{STR_VAR_3} is also in your party.\p"
	.string "The bond between them is what unlocks\n"
	.string "this power.$"

FusionTutor_Text_NeedPartnerMulti::
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Your {STR_VAR_1} has great\n"
	.string "potential, but it needs a bonded\l"
	.string "partner in your party to unlock a\l"
	.string "special move.\p"
	.string "Try bringing along a Pokémon that\n"
	.string "shares a deep connection with it.$"

FusionTutor_Text_OfferMove::
# 554 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The bond is strong! I can teach\n"
	.string "{STR_VAR_2} to your {STR_VAR_1}.\p"
	.string "Shall I go ahead?$"

FusionTutor_Text_ChooseMove::
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I sense multiple bonds at work!\p"
	.string "Which move should I teach your\n"
	.string "{STR_VAR_1}?$"

FusionTutor_Text_Declined::
# 562 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I see. Come back anytime if you change\n"
	.string "your mind.$"

FusionTutor_Text_Success::
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The power of their bond has been\n"
	.string "channeled into a new move!\p"
	.string "Take good care of your Pokémon.$"

FusionTutor_Text_AnotherMon::
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Would you like me to examine another\n"
	.string "Pokémon?$"
