# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
//.set LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING, 7
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
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
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
	//addobject LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_FacePlayer
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
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
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
	setvar VAR_LEVEL_CAP, 77
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//setweather WEATHER_NONE
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//doweather
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//special WaitWeather
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitstate
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreNewExit
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieWalkMessage
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_MAXIE
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieArrive
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieExit
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage1:
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end	
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
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
	walk_slow_down
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb is supposed to awaken\n"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and commune with Kyogre…\p"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre!\p"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Blue Orb, I can make Kyogre…$"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb suddenly began shining\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Blue Orb…\p"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from\n"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly outside…$"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken Kyogre,\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Blue Orb,\n"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre…\p"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 354 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"

SeafloorCavern_Room9_EventScript_ArchieAppear::
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	return


SeafloorCavern_Room9_EventScript_PlayerLoc1::
# 398 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


SeafloorCavern_Room9_EventScript_PlayerLoc2::
# 403 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 2
	return


SeafloorCavern_Room9_EventScript_PlayerLoc3::
# 408 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 3
	return


SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace::
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5
SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1:
# 425 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3:
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4:
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5:
# 421 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 422 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1


SeafloorCavern_Room9_EventScript_ArchieFacePlayer::
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4
# 435 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5
SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1:
# 439 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3:
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4:
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5:
# 436 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1


SeafloorCavern_Room9_EventScript_ArchieWalkMessage::
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
# 448 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1:
# 452 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3:
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage1
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4:
# 449 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1


# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreNewExit:
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 457 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
	step_end

SeafloorCavern_Room9_Text_ArchieSecondDialogue::
# 359 "data/maps/SeafloorCavern_Room9/scripts.pory"
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
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
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
# 368 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: See how beautiful it is, the\n"
	.string "sleeping form of the ancient Pokémon\l"
	.string "Kyogre!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 377 "data/maps/SeafloorCavern_Room9/scripts.pory"
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
# 381 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
	.string "Archie… You've actually awoken Kyogre,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if these\n"
	.string "storms persist for all eternity?\p"
	.string "The destruction will be unimaginable!$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 385 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Don't come here lecturing me\n"
	.string "about responsibility!\p"
	.string "Wasn't it you, Maxie, who started all\n"
	.string "this?\p"
	.string "So long as I have this Blue Orb, I should\n"
	.string "be able to speak with Kyogre…\p"
	.string "I can still calm it down…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 389 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to argue\n"
	.string "about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if either of us really have any sway\n"
	.string "or understanding with these ancient\l"
	.string "forces!$"

SeafloorCavern_Room9_Text_ArchieDefeat::
# 393 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?! A mere child like you defeated\n"
	.string "Kyogre?!$"
