# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//closemessage
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//addobject LOCALID_ARCHIE
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_ARCHIE, Common_Movement_FacePlayer
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieFacePlayer
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSecondDialogue, MSGBOX_DEFAULT
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieFacePlayer
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieThirdDialogue, MSGBOX_DEFAULT
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0 
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ArchieDefeat
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//setweather WEATHER_NONE
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//doweather
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//special WaitWeather
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitstate
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreNewExit
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieWalkMessage
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_MAXIE
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, SeafloorCavern_Room9_Movement_MaxieArrive
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_MAXIE, SeafloorCavern_Room9_Movement_MaxieExit
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage1:
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end	
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb is supposed to awaken\n"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and commune with Kyogre…\p"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre!\p"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Blue Orb, I can make Kyogre…$"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb suddenly began shining\n"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Blue Orb…\p"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly outside…$"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken Kyogre,\n"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Blue Orb,\n"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre…\p"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"

SeafloorCavern_Room9_EventScript_ArchieAppear::
# 369 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	return


SeafloorCavern_Room9_EventScript_PlayerLoc1::
# 394 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


SeafloorCavern_Room9_EventScript_PlayerLoc2::
# 399 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 2
	return


SeafloorCavern_Room9_EventScript_PlayerLoc3::
# 404 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 3
	return


SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace::
# 409 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 410 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5
SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1:
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3:
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4:
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5:
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1


SeafloorCavern_Room9_EventScript_ArchieFacePlayer::
# 426 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 427 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5
SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1:
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3:
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4:
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5:
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1


SeafloorCavern_Room9_EventScript_ArchieWalkMessage::
# 440 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 441 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1:
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3:
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage1
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4:
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1


# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreNewExit:
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 453 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
	step_end

SeafloorCavern_Room9_Text_ArchieSecondDialogue::
# 355 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: With Kyogre's power, we will\n"
	.string "return this world to the way it should\l"
	.string "be.\p"
	.string "Waves will tear down the dams that\n"
	.string "disrupt currents. Storms will destroy\l"
	.string "the factories that pollute, and\l"
	.string "tornados will rip down the skyscrapers\l"
	.string "that blot the skies.\p"
	.string "Humanity and Pokémon can start anew in\n"
	.string "an untainted world.\p"
	.string "Team Aqua will reveal the hubris of the\n"
	.string "world, and teach humanity a lesson it\l"
	.string "will never forget!$"

SeafloorCavern_Room9_Text_ArchieThirdDialogue::
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm?\n"
	.string "You say these ancient Pokémon are too\l"
	.string "dangerous, that Maxie couldn't control\l"
	.string "Groudon?\p"
	.string "Of course he couldn't… his “science”\n"
	.string "fails to understand the equilibrium\l"
	.string "that nature strives toward.\p"
	.string "I am not here to control nature, with\n"
	.string "this Blue Orb I am going to empower it!$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: See how beautiful it is, the\n"
	.string "sleeping form of the ancient Pokémon\l"
	.string "Kyogre!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened Kyogre, to\l"
	.string "fight back against humankind's\l"
	.string "degradation of the environment.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "Kyogre surely understands…\p"
	.string "Hold your position and monitor the\n"
	.string "situation!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought::
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
	.string "Archie… You've actually awoken Kyogre,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if these\n"
	.string "storms persist for all eternity?\p"
	.string "The destruction will be unimaginable!$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Don't come here lecturing me\n"
	.string "about responsibility!\p"
	.string "Wasn't it you, Maxie, who started all\n"
	.string "this?\p"
	.string "So long as I have this Blue Orb, I should\n"
	.string "be able to speak with Kyogre…\p"
	.string "I can still calm it down…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to argue\n"
	.string "about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if either of us really have any sway\n"
	.string "or understanding with these ancient\l"
	.string "forces!$"

SeafloorCavern_Room9_Text_ArchieDefeat::
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?! A mere child like you defeated\n"
	.string "Kyogre?!$"
