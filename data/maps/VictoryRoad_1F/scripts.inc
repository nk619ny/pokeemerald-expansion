# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
//.set LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 4
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VictoryRoad_1F_OnFrame
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_1F/scripts.pory"

# 9 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	//call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	//call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_1F/scripts.pory"

# 14 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnFrame:
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VictoryRoad_1F_FlashCheck
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	.2byte 0
# 17 "data/maps/VictoryRoad_1F/scripts.pory"

# 18 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 27 "data/maps/VictoryRoad_1F/scripts.pory"

# 28 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 37 "data/maps/VictoryRoad_1F/scripts.pory"

# 38 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 47 "data/maps/VictoryRoad_1F/scripts.pory"

# 48 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger3::
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 3
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer3
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	end	
# 57 "data/maps/VictoryRoad_1F/scripts.pory"

# 58 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 73 "data/maps/VictoryRoad_1F/scripts.pory"

# 74 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 78 "data/maps/VictoryRoad_1F/scripts.pory"

# 79 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 86 "data/maps/VictoryRoad_1F/scripts.pory"

# 87 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 91 "data/maps/VictoryRoad_1F/scripts.pory"

# 92 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 96 "data/maps/VictoryRoad_1F/scripts.pory"

# 97 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 101 "data/maps/VictoryRoad_1F/scripts.pory"

# 102 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_1F/scripts.pory"

# 107 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_1F/scripts.pory"

# 112 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
/*
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the POKéMON who\n"
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
*/
# 130 "data/maps/VictoryRoad_1F/scripts.pory"

# 131 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 134 "data/maps/VictoryRoad_1F/scripts.pory"

# 135 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "surpass you!$"
# 139 "data/maps/VictoryRoad_1F/scripts.pory"

# 140 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 145 "data/maps/VictoryRoad_1F/scripts.pory"

# 146 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"

# 150 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"

# 156 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"

# 160 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"

# 163 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 167 "data/maps/VictoryRoad_1F/scripts.pory"

# 168 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"

# 172 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"

# 176 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 180 "data/maps/VictoryRoad_1F/scripts.pory"

# 181 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"

# 185 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"

# 188 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"

# 192 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"

# 196 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"

# 200 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"

# 207 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"

# 211 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 213 "data/maps/VictoryRoad_1F/scripts.pory"

# 214 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

# 220 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 226 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 229 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer3:
# 230 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

VictoryRoad_1F_FlashCheck::
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, VictoryRoad_1F_FlashCheck_2
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, VictoryRoad_1F_FlashCheck_4
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 262 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 263 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkNeedFlash
# 264 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmessage
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 1
# 267 "data/maps/VictoryRoad_1F/scripts.pory"
	warp MAP_ROUTE114, 8, 63
# 268 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 269 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 270 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	return

VictoryRoad_1F_FlashCheck_2:
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 243 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	return

VictoryRoad_1F_FlashCheck_4:
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 248 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkUseFlash
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmessage
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 251 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_M_REFLECT
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 20
# 253 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 254 "data/maps/VictoryRoad_1F/scripts.pory"
	animateflash 0
# 255 "data/maps/VictoryRoad_1F/scripts.pory"
	setflashlevel 0
# 256 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 257 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	return


VictoryRoad_1F_EventScript_WallyDefeated::
# 276 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	return


VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore::
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
	.string "I bet you're not surprised to see me\n"
	.string "here.\p"
	.string "We started our journey at the same\n"
	.string "time, from the same area… we kept\l"
	.string "crossing paths along the way.\p"
	.string "It seems only fitting that I would run\n"
	.string "into you here, now.\p"
	.string "We're both planning to challenge the\n"
	.string "POKéMON LEAGUE, right?\p"
	.string "Well let's find out which one of us is\n"
	.string "truly ready!$"
