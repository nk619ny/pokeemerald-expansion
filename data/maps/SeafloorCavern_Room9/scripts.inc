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
	setvar VAR_0x8004, 1  @ vertical pan
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0 
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ArchieDefeat
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LEVEL_CAP, 77
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//setweather WEATHER_NONE
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//doweather
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//special WaitWeather
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitstate
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreNewExit
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	call SeafloorCavern_Room9_EventScript_ArchieWalkMessage
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_MAXIE
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieArrive
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_Movement_MaxieExit
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	//waitmovement 0
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
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
	walk_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage1:
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end	
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb is supposed to awaken\n"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and commune with Kyogre…\p"
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did Kyogre disappear?\p"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Behold!\p"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient Pokémon Kyogre!\p"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this Blue Orb, I can make Kyogre…$"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The Blue Orb suddenly began shining\n"
# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: What?!\p"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the Blue Orb…\p"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did Kyogre go?$"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm? It's a message from\n"
# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Shelly outside…$"
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
/*
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Yes, what is it?\p"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened Kyogre,\l"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken Kyogre,\n"
# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this Blue Orb,\n"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control Kyogre…\p"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
*/
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: {PLAYER}, come on, you have\n"
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"

SeafloorCavern_Room9_EventScript_ArchieAppear::
# 371 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	return


SeafloorCavern_Room9_EventScript_PlayerLoc1::
# 396 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


SeafloorCavern_Room9_EventScript_PlayerLoc2::
# 401 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 2
	return


SeafloorCavern_Room9_EventScript_PlayerLoc3::
# 406 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_2, 3
	return


SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace::
# 411 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 412 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3
# 415 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4
# 418 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5
SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1:
# 423 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_3:
# 413 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 414 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_4:
# 416 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 417 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1

SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_5:
# 419 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 420 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto SeafloorCavern_Room9_EventScript_PlayerArchieFaceToFace_1


SeafloorCavern_Room9_EventScript_ArchieFacePlayer::
# 428 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 429 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3
# 431 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4
# 433 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5
SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1:
# 437 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_3:
# 430 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_4:
# 432 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1

SeafloorCavern_Room9_EventScript_ArchieFacePlayer_5:
# 434 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	goto SeafloorCavern_Room9_EventScript_ArchieFacePlayer_1


SeafloorCavern_Room9_EventScript_ArchieWalkMessage::
# 442 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_2
# 443 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3
# 445 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
# 446 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 3, SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4
SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1:
# 450 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
	return

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_3:
# 444 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage1
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1

SeafloorCavern_Room9_EventScript_ArchieWalkMessage_4:
# 447 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_Movement_ArchieListenMessage
	goto SeafloorCavern_Room9_EventScript_ArchieWalkMessage_1


# 454 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreNewExit:
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
# 455 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_up
	step_end

SeafloorCavern_Room9_Text_ArchieSecondDialogue::
# 357 "data/maps/SeafloorCavern_Room9/scripts.pory"
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
# 362 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Hm?\n"
	.string "You say these ancient Pokémon are too\l"
	.string "dangerous, that Maxie couldn't control\l"
	.string "Groudon?\p"
	.string "Of course he couldn't… his “science”\n"
	.string "fails to understand the balance that\l"
	.string "nature strives toward.\p"
	.string "I am not here to control nature, with\n"
	.string "this Blue Orb I am going to empower it!$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 366 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: See how beautiful it is, the\n"
	.string "sleeping form of the ancient Pokémon\l"
	.string "Kyogre!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 375 "data/maps/SeafloorCavern_Room9/scripts.pory"
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
# 379 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: What have you wrought?\p"
	.string "Archie… You've actually awoken Kyogre,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if these\n"
	.string "storms persist for all eternity?\p"
	.string "The destruction will be unimaginable!$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 383 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Archie: Don't come here lecturing me\n"
	.string "about responsibility!\p"
	.string "Wasn't it you, Maxie, who started all\n"
	.string "this?\p"
	.string "So long as I have this Blue Orb, I should\n"
	.string "be able to speak with Kyogre…\p"
	.string "I can still calm it down…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 387 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Maxie: We don't have the time to argue\n"
	.string "about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if either of us really have any sway\n"
	.string "or understanding with these ancient\l"
	.string "forces!$"

SeafloorCavern_Room9_Text_ArchieDefeat::
# 391 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?! A mere child like you defeated\n"
	.string "Kyogre?!$"
