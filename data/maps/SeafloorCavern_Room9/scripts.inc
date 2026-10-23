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
	call SeafloorCavern_Room9_EventScript_ArchieFacePlayer
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//closemessage
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//addobject LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_FacePlayer
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieFacePlayer
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSecondDialogue, MSGBOX_DEFAULT
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieFacePlayer
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieThirdDialogue, MSGBOX_DEFAULT
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
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
	
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0 
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ArchieDefeat
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LEVEL_CAP, 77
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//setweather WEATHER_NONE
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//doweather
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//special WaitWeather
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitstate
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreNewExit
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieWalkMessage
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_MAXIE
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieArrive
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieExit
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
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
	step_end
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage1:
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end	
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Bwahahahaha…\n"
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
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4:
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5:
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
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
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4:
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5:
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
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
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage1
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4:
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage
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
	.string "Team Aqua will reveal the corruption of\n"
	.string "the world, and teach humanity a lesson\l"
	.string "it will never forget!$"

SeafloorCavern_Room9_Text_ArchieThirdDialogue::
# 360 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Aye?\n"
	.string "Ya say these ancient Pokémon are too\l"
	.string "dangerous, an' that Maxie couldn't\l"
	.string "control Groudon?\p"
	.string "'Course he couldn't! His “science” can't\n"
	.string "grasp the balance that nature strives\l"
	.string "toward.\p"
	.string "I'm not here to control nature, with\n"
	.string "this Blue Orb I'll empower it!$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 364 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: How 'bout that?! That beautiful\n"
	.string "form so long resting at peace within\l"
	.string "the azure sea!\p"
	.string "I've been waiting so long for this day\n"
	.string "to come…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 373 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Aye?\n"
	.string "\n"
	.string "It's raining heavily?\p"
	.string "Good… the great deluge has begun.\n"
	.string "That is exactly why we awakened Kyogre,\l"
	.string "to put an end to humankind's\l"
	.string "degradation of the environment.\p"
	.string "…What?!\p"
	.string "It's fiercer than we envisioned? It's\n"
	.string "all sinking?\p"
	.string "That can't be…\n"
	.string "Kyogre surely understands…\p"
	.string "Hold anchor and monitor the situation!$"

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
	.string "Archie: Don't ye dare come lecturing me\n"
	.string "about responsibility!\p"
	.string "Weren't it you, Maxie, who started all\n"
	.string "this?\p"
	.string "So long as I hold this Blue Orb, I should\n"
	.string "be able to speak with Kyogre…\p"
	.string "I can still calm the creature…$"

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
	.string "Eh?! A mere scamp like you defeated\n"
	.string "Kyogre?!$"

SeafloorCavern_Room9_Text_ArchieHoldItRightThere::
# 456 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Bwahahaha!\n"
	.string "Well, if it isn't the little scamp!$"
