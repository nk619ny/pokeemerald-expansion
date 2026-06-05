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
	msgbox TestTriggerText123 MSGBOX_DEFAULT
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 38 "data/maps/VictoryRoad_1F/scripts.pory"

# 39 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox TestTriggerText123 MSGBOX_DEFAULT
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 49 "data/maps/VictoryRoad_1F/scripts.pory"

# 50 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger3::
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox TestTriggerText123 MSGBOX_DEFAULT
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeated
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 3
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer3
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	end	
# 60 "data/maps/VictoryRoad_1F/scripts.pory"

# 61 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 76 "data/maps/VictoryRoad_1F/scripts.pory"

# 77 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyPostBattle::
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	//msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyAbilityPatch, MSGBOX_DEFAULT
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	//copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_LEVEL_CAP, 85
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 89 "data/maps/VictoryRoad_1F/scripts.pory"

# 90 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 94 "data/maps/VictoryRoad_1F/scripts.pory"

# 95 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 102 "data/maps/VictoryRoad_1F/scripts.pory"

# 103 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 107 "data/maps/VictoryRoad_1F/scripts.pory"

# 108 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 112 "data/maps/VictoryRoad_1F/scripts.pory"

# 113 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 117 "data/maps/VictoryRoad_1F/scripts.pory"

# 118 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 122 "data/maps/VictoryRoad_1F/scripts.pory"

# 123 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 127 "data/maps/VictoryRoad_1F/scripts.pory"

# 128 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 132 "data/maps/VictoryRoad_1F/scripts.pory"

# 133 "data/maps/VictoryRoad_1F/scripts.pory"
/*
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the Pokémon who\n"
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
*/
# 146 "data/maps/VictoryRoad_1F/scripts.pory"

# 147 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 150 "data/maps/VictoryRoad_1F/scripts.pory"

# 151 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "surpass you!$"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"

# 156 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 161 "data/maps/VictoryRoad_1F/scripts.pory"

# 162 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"

# 166 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the Pokémon LEAGUE!$"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"

# 172 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 175 "data/maps/VictoryRoad_1F/scripts.pory"

# 176 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"

# 179 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"

# 184 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"

# 188 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 191 "data/maps/VictoryRoad_1F/scripts.pory"

# 192 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 196 "data/maps/VictoryRoad_1F/scripts.pory"

# 197 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 200 "data/maps/VictoryRoad_1F/scripts.pory"

# 201 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 203 "data/maps/VictoryRoad_1F/scripts.pory"

# 204 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"

# 208 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"

# 212 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"

# 216 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 217 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 218 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Pokémon CHAMPION.\p"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 222 "data/maps/VictoryRoad_1F/scripts.pory"

# 223 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 225 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 226 "data/maps/VictoryRoad_1F/scripts.pory"

# 227 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"

# 230 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

# 236 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 241 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 242 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 245 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer3:
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

VictoryRoad_1F_FlashCheck::
# 257 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, VictoryRoad_1F_FlashCheck_2
# 262 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, VictoryRoad_1F_FlashCheck_4
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 278 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 279 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkNeedFlash
# 280 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmessage
# 281 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 282 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 1
# 283 "data/maps/VictoryRoad_1F/scripts.pory"
	warp MAP_ROUTE114, 8, 63
# 284 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 285 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	return

VictoryRoad_1F_FlashCheck_2:
# 258 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 259 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	return

VictoryRoad_1F_FlashCheck_4:
# 263 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 264 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkUseFlash
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmessage
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 267 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_M_REFLECT
# 268 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 20
# 269 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 270 "data/maps/VictoryRoad_1F/scripts.pory"
	animateflash 0
# 271 "data/maps/VictoryRoad_1F/scripts.pory"
	setflashlevel 0
# 272 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	return


VictoryRoad_1F_EventScript_WallyDefeated::
# 292 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 293 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	return


VictoryRoad_1F_EventScript_TroubleshootWally::
# 303 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	return


VictoryRoad_1F_EventScript_WallyNew::
# 307 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, VictoryRoad_1F_Text_WallyEntranceDefeat, VictoryRoad_1F_EventScript_WallyPostBattle
# 308 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 309 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end


VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore::
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
	.string "I bet you're not surprised to see me\n"
	.string "here.\p"
	.string "We started our journey at the same\n"
	.string "time, from the same area… we kept\l"
	.string "crossing paths along the way.\p"
	.string "It seems only fitting that I would run\n"
	.string "into you here, now.\p"
	.string "We're both planning to challenge the\n"
	.string "Pokémon LEAGUE, right?\p"
	.string "Well let's find out which one of us is\n"
	.string "truly ready!$"

TestTriggerText123::
# 298 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "The trigger is working.$"

VictoryRoad_1F_Text_WallyAbilityPatch::
# 313 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "When we met in Petalburg, we we're just\n"
	.string "beginning to realize our potential,\l"
	.string "{PLAYER}.\p"
	.string "Your Pokémon still have further Hidden\n"
	.string "Potential, too. I know it!\p"
	.string "Take this, and help them realize it!$"
