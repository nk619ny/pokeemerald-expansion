# 1 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ Note: data/scripts/berry_blender.inc is for the same map, so shares local IDs
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
//.set LOCALID_CONTEST_LOBBY_RECEPTIONIST, 1
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
//.set LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, 2
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
//.set LOCALID_CONTEST_LOBBY_ARTIST, 4
# 6 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
//.set LOCALID_CONTEST_LOBBY_LINK_ARTIST, 11
# 7 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 8 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_MapScripts::
# 9 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_ContestLobby_OnTransition
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_OnFrame
# 11 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.byte 0
# 12 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 13 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ Some scripts for this room are split into data/scripts/contest_hall and data/scripts/berry_blender
# 14 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 15 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_OnTransition:
# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowContestReporter
# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster
# 18 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 19 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 20 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryShowBlendMaster::
# 21 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	getpokenewsactive POKENEWS_BLENDMASTER
# 22 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ShowBlendMaster
# 23 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 24 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 25 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 27 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowBlendMaster::
# 28 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 29 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 30 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 31 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 32 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_OnFrame:
# 33 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_EventScript_TryDoContestArtist
# 34 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2, LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.2byte 0
# 36 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoContestArtist::
# 38 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_ContestArtist
# 39 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist::
# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_ARTIST
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_ARTIST
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceArtist
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 49 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 51 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 53 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 54 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 55 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 56 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
# 57 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 60 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
# 61 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 63 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 70 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 71 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 72 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 73 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 77 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
# 78 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 80 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistExit
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 84 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 85 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 87 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
# 88 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistBeginToExit
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 92 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 93 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, Common_Movement_ExclamationMark
# 94 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 95 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 105 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 106 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
# 107 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 108 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_ShowPatron1
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_ShowPatron2
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_ShowPatron3
# 112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 4, LilycoveCity_ContestLobby_EventScript_ShowPatron4
# 113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 5, LilycoveCity_ContestLobby_EventScript_ShowTourists
# 114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 116 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron1::
# 117 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
# 118 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 119 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 120 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron2::
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron3::
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 127 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 128 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowPatron4::
# 129 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
# 130 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 131 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ShowTourists::
# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
# 137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_MadeCoolPainting
# 139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting
# 140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_MadeCutePainting
# 141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_MadeSmartPainting
# 142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_MadeToughPainting
# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 145 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCoolPainting::
# 146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_COOL_PAINTING_MADE
# 147 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 148 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 149 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeBeautyPainting::
# 150 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_BEAUTY_PAINTING_MADE
# 151 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeCutePainting::
# 154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_CUTE_PAINTING_MADE
# 155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 156 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeSmartPainting::
# 158 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SMART_PAINTING_MADE
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_MadeToughPainting::
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_TOUGH_PAINTING_MADE
# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 165 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistApproachPlayer:
# 166 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 167 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 168 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 172 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistExit:
# 176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 180 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 181 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 182 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 183 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceArtist:
# 187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistBeginToExit:
# 191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ArtistReturnToPlayer:
# 197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 201 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 202 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 203 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 204 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 207 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryDoLinkContestArtist::
# 208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_EventScript_LinkContestArtist
# 209 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist::
# 213 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 215 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 217 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 221 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 222 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 223 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 224 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink::
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 230 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 231 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 232 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 233 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 234 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon
# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink::
# 244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistExit
# 249 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 250 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 251 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon::
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 259 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 261 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 262 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, Common_Movement_ExclamationMark
# 263 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 264 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistApproachPlayer:
# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistExit:
# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 289 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 290 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 291 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 292 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 294 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 295 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 296 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 297 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerFaceLinkArtist:
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 301 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistBeginExit:
# 302 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 304 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 306 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkArtistReturnToPlayer:
# 308 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 309 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 310 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 311 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 313 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 314 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_fast_up
# 315 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 318 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ EventScript_SpeakToContestReceptionist either ends or returns after a contest entry is submitted
# 319 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
# 320 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 321 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_RESULT, IsContestDebugActive  @ Always FALSE
# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_ContestLobby_EventScript_SetDebug
# 323 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 324 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
# 325 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
# 326 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPlayerGfx
# 327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 328 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 329 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 330 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 331 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetContestType::
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_RANK
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetNormalContestType
# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetSuperContestType
# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetHyperContestType
# 336 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetMasterContestType
# 337 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 338 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 339 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetNormalContestType::
# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetSuperContestType::
# 344 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
# 345 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 346 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 347 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetHyperContestType::
# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 350 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 351 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetMasterContestType::
# 352 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
# 353 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 354 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 355 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
@ Functionally unused
# 356 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetDebug::
# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#ifdef UBFIX
# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 360 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#else
# 361 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 362 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#endif
# 363 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	additem ITEM_CONTEST_PASS
# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 8
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 368 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 369 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 370 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
# 371 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_ENTERED_CONTEST
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall
# 374 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall
# 375 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall
# 376 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall
# 377 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall
# 378 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 379 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCoolContestHall::
# 381 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
# 382 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 383 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 384 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToBeautyContestHall::
# 386 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
# 387 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 388 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 389 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 390 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToCuteContestHall::
# 391 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
# 392 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 395 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToSmartContestHall::
# 396 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
# 397 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 398 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_WarpToToughContestHall::
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
# 402 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
# 403 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 404 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 405 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
# 406 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 407 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter
# 408 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 409 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 410 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_WallShadow, TRUE
# 411 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_FloorShadow, TRUE
# 412 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 413 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter
# 414 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 415 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 416 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 417 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 418 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 419 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 420 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer
# 421 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist
# 423 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 424 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
# 425 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 426 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall
# 428 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 429 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 430 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 431 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 432 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToContestHall:
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 436 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 437 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 438 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 439 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 440 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 441 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 443 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 444 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachReceptionist:
# 445 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 446 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistApproachCounter:
# 450 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 451 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 452 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 453 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 454 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 455 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistExitCounter:
# 456 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 457 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 458 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 459 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 460 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 461 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistWalkToContestHall:
# 462 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 463 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 464 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 465 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 469 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 470 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 471 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 472 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_ReceptionistFacePlayer:
# 473 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_right
# 474 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 475 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 476 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlackBelt::
# 477 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
# 478 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 479 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Girl::
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_NPC
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 483 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 484 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Artist::
# 485 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
# 486 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FatMan::
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
# 490 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 491 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 492 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Fisherman::
# 493 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 496 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_NinjaBoy::
# 497 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner1::
# 501 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 502 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_1
# 504 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 505 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 506 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 507 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner2::
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_2
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 513 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner3::
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 516 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 517 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_3
# 518 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 519 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 520 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner4::
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_4
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner5::
# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 530 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 531 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_5
# 532 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 533 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 534 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 535 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestWinner6::
# 536 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 538 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_6
# 539 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 540 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 541 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 542 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Boy::
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 545 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 546 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_Blender3Girl::
# 547 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 552 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 553 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 554 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 558 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestResults::
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 560 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	frontier_results FACILITY_LINK_CONTEST
# 561 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 562 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 563 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
# 564 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 565 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 566 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMaster::
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 569 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
# 570 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 571 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 573 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
# 574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
# 576 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 577 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 578 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
# 580 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 581 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 583 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 584 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 585 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
# 586 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 587 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
# 588 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 589 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 590 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 591 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 593 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 594 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
# 595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 596 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 598 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
# 599 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 600 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 601 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
# 602 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 603 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 604 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 605 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
# 606 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 607 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 608 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
# 609 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_FaceOriginalDirection::
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 614 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 615 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 616 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 617 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 619 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestReceptionist::
# 620 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 621 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 622 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 623 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LinkContestReception, MSGBOX_DEFAULT
# 624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest::
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterContest3
# 629 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 630 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
# 631 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 632 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest
# 633 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 634 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 638 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest::
# 639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ProgressWillBeSaved, MSGBOX_YESNO
# 640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 641 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichContestMode
# 644 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 645 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
# 646 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_MODE, FALSE
# 647 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 648 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_EmeraldMode  @ Shortened to E-Mode
# 649 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_GlobalMode   @ Shortened to G-Mode
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 654 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EmeraldMode::
# 655 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 0
# 656 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 657 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 658 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 659 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_GlobalMode::
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 1
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_TEMP_D, 1, LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 664 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 665 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType::
# 666 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterWhichContest3
# 667 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 668 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORIES_COUNT, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 672 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 673 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 674 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 675 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 676 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestInfo::
# 677 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichTopic2
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_INFO, FALSE
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_ExplainLinkContest
# 682 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_ExplainEMode
# 683 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_ExplainGMode
# 684 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 685 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainLinkContest::
# 689 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainLinkContest, MSGBOX_DEFAULT
# 690 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 691 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 692 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainEMode::
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainEMode, MSGBOX_DEFAULT
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 696 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 697 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 698 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ExplainGMode::
# 699 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainGMode, MSGBOX_DEFAULT
# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkContest::
# 704 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 705 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
# 706 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 707 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 708 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 709 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon::
# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon3, MSGBOX_DEFAULT
# 711 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
# 712 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	choosecontestmon
# 713 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 714 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryEnterContestMon
# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST, LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank
# 716 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_EQUAL_RANK, LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 717 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CAN_ENTER_CONTEST_HIGH_RANK, LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest
# 718 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_EGG, LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg
# 719 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, CANT_ENTER_CONTEST_FAINTED, LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted
# 720 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 721 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 722 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterLowRank::
# 723 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
# 724 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 725 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 727 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterEgg::
# 728 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart2, MSGBOX_DEFAULT
# 729 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 730 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 731 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 732 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkCantEnterFainted::
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonInNoCondition2, MSGBOX_DEFAULT
# 734 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
# 735 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 736 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 737 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_EnterMonForLinkContest::
# 738 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 739 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest
# 740 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 741 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 742 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest::
# 743 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_TEMP_D, 1, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType
# 744 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge VAR_TEMP_D, 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 745 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseWaitBButtonCancel
# 746 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 747 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 748 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_TEMP_C, 0, LilycoveCity_ContestLobby_EventScript_TryLinkEMode
# 749 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_TEMP_C, 1, LilycoveCity_ContestLobby_EventScript_TryLinkGMode
# 750 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_ge VAR_TEMP_C, 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 751 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 752 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices
# 753 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 754 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, LilycoveCity_ContestLobby_EventScript_CancelLinkError
# 755 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_CONTEST_GMODE, LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference
# 756 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 757 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 759 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 760 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest
# 761 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError
# 762 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 763 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 764 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkEMode::
# 765 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestEModeLinkup
# 766 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 767 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 768 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLinkGMode::
# 769 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestGModeLinkup
# 770 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 772 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentContest::
# 773 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersChoseDifferentContest, MSGBOX_DEFAULT
# 774 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 775 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 776 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 777 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkDifferentChoices::
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersMadeDifferentChoice, MSGBOX_DEFAULT
# 779 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 780 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 781 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkModeDifference::
# 783 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayerAt4PCounterUseGMode, MSGBOX_DEFAULT
# 784 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 785 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 786 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 787 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkError::
# 788 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 789 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
# 790 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 792 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 793 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkNoWirelessGMode::
# 794 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 795 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_NoWirelessAdapterInGMode, MSGBOX_DEFAULT
# 796 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 797 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 798 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_CancelLinkTransmissionError::
# 800 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TransmissionError, MSGBOX_DEFAULT
# 801 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 802 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 803 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 804 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_StartLinkContest::
# 805 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special GetContestPlayerId
# 806 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addvar VAR_0x8004, 1
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8004
# 808 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_YourMonIsEntryNumX
# 809 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 810 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	subvar VAR_0x8004, 1
# 811 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall
# 812 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 1
# 813 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetLinkContestPlayerGfx
# 814 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_LINK
# 815 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 816 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 817 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 818 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 819 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType::
# 820 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest
# 821 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest
# 822 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest
# 823 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest
# 824 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call_if_eq VAR_CONTEST_CATEGORY, CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 826 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 827 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 828 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCoolContest::
# 829 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_COOL_CONTEST
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 831 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 832 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupBeautyContest::
# 833 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BEAUTY_CONTEST
# 834 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 835 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 836 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupCuteContest::
# 837 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_CUTE_CONTEST
# 838 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 839 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 840 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupSmartContest::
# 841 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_SMART_CONTEST
# 842 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 843 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 844 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetLinkGroupToughContest::
# 845 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_TOUGH_CONTEST
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 847 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 848 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader::
# 849 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader
# 850 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 851 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 852 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 853 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 854 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 855 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 856 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_CancelLinkContest
# 857 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 858 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 859 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryLeadGroup::
# 860 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader
# 861 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 862 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 863 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryLeadGroup
# 864 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 865 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 866 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 867 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinGroup::
# 868 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup
# 869 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
# 870 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
# 871 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryJoinGroup
# 872 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 873 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 874 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 875 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryBecomeLinkLeader::
# 876 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryBecomeLinkLeader
# 877 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 878 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 879 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TryJoinLinkGroup::
# 880 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryJoinLinkGroup
# 881 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 882 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 883 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided::
# 884 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 885 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 886 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
# 887 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 888 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 889 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall::
# 890 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ContestBeginShortly
# 891 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 892 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 893 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 894 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter
# 895 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 896 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 897 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_WallShadow, TRUE
# 898 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_FloorShadow, TRUE
# 899 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 900 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter
# 901 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 902 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 903 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 904 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 905 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 906 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 907 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer
# 908 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 909 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist
# 910 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 911 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ComeThroughHere
# 912 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 913 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 914 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 915 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer
# 916 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall
# 917 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall
# 918 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 919 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 920 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	return
# 921 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 922 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerWalkToLinkContestHall:
# 923 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 924 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 925 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 926 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 927 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 928 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 929 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 930 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 931 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 932 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 933 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 934 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 935 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_PlayerApproachLinkReceptionist:
# 936 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 937 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 938 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 939 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistApproachCounter:
# 940 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 941 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 942 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_down
# 943 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 944 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 945 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistExitCounter:
# 946 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 947 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 948 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_up
# 949 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 950 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 951 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistWalkToContestHall:
# 952 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 953 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 954 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 955 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 956 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 957 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 958 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 959 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 960 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
# 961 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 962 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 963 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Movement_LinkReceptionistFacePlayer:
# 964 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_in_place_faster_left
# 965 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_end
# 966 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 967 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirl::
# 968 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 969 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 970 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase
# 971 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
# 972 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 973 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 974 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 975 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LittleGirlHaveCase::
# 976 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
# 977 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
# 978 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end
# 979 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 980 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase:
# 981 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Yippee!\p"
# 982 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The lady at the reception counter\n"
# 983 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "gave me a case for {POKEBLOCK}S!$"
# 984 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 985 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries:
# 986 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Make {POKEBLOCK}S and put them in there.\p"
# 987 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "When you make a {POKEBLOCK}, everyone\n"
# 988 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "has to put in a different BERRY.$"
# 989 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 990 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint:
# 991 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Congratulations!\p"
# 992 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I did a painting of your Pokémon to\n"
# 993 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "commemorate its victory…\p"
# 994 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, your Pokémon's appeals were\n"
# 995 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "so fantastic, it spurred me into\l"
# 996 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "painting better than I usually do.\l"
# 997 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Look, see?$"
# 998 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 999 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum:
# 1000 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What do you think? I'm confident in\n"
# 1001 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "what I've done, but do you like it?\p"
# 1002 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "A work of this caliber, it wouldn't look\n"
# 1003 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "out of place in an art museum.\p"
# 1004 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Huh? An art museum really is looking\n"
# 1005 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "for paintings?\p"
# 1006 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Do you think I should take this there?$"
# 1007 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1008 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum:
# 1009 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What, really? Then, sure, I will take\n"
# 1010 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this painting there right now.\p"
# 1011 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll give it a proper title, too.\p"
# 1012 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I hope they'll like it and consider\n"
# 1013 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "exhibiting this.\p"
# 1014 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Please check if they did accept this.\n"
# 1015 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Thank you!$"
# 1016 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1017 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeMementoOfPainting:
# 1018 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, that's right!\p"
# 1019 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "As a memento of me painting your\n"
# 1020 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Pokémon, please take this.$"
# 1021 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1022 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ReceivedARibbon:
# 1023 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"
# 1024 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1025 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon:
# 1026 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n"
# 1027 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1028 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1029 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_OkaySeeYou:
# 1030 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Okay, see you!$"
# 1031 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1032 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum:
# 1033 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh… Then, I guess I'll just take\n"
# 1034 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this home with me…\p"
# 1035 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "But, you know, I would like to take\n"
# 1036 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "this to the art museum… Okay?$"
# 1037 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1038 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs:
# 1039 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, fine, that's the way it is.\n"
# 1040 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I will hang this in my own house.\p"
# 1041 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I'll just have to try harder next time.\n"
# 1042 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Well, be seeing you.$"
# 1043 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1044 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MasterRankHereICome:
# 1045 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Hoo, boy… Master Rank CONTESTS,\n"
# 1046 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "here I come.\p"
# 1047 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The world will know that my dearest\n"
# 1048 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Pokémon is the cutest being in all\l"
# 1049 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "existence. The time has come!\l"
# 1050 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Uheheheh.$"
# 1051 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1052 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere:
# 1053 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "You can see a whole variety of\n"
# 1054 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Pokémon here.\p"
# 1055 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "That's why I make this place a regular\n"
# 1056 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "part of my daily stroll.$"
# 1057 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1058 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ContestFeastForEyes:
# 1059 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Wow, coming out to a CONTEST is\n"
# 1060 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "a feast for these eyes!\p"
# 1061 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Would you look at all the Pokémon\n"
# 1062 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "that just scream to be painted?$"
# 1063 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1064 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_ToughContestIsExtreme:
# 1065 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\n"
# 1066 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "extreme, man!\p"
# 1067 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Those muscular appeals…\n"
# 1068 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Cascading sweat… I swoon!$"
# 1069 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1070 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_LavishedCareOnMon:
# 1071 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Day in and day out, I lavished my care\n"
# 1072 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "on this Pokémon.\p"
# 1073 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Its condition is peaking.\n"
# 1074 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Today, victory is mine!$"
# 1075 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 1076 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily:
# 1077 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
# 1078 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Big Sister. They turned out great!\p"
# 1079 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I bet you can make smoother, better\n"
# 1080 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{POKEBLOCK}S if you have more people.$"

LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl::
# 1085 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 1086 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	faceplayer
# 1087 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_Text_0, MSGBOX_DEFAULT
# 1088 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	checkitem ITEM_TM_DAZZLING_GLEAM
# 1089 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_2
LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_1:
# 1095 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_2:
# 1090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_Text_1, MSGBOX_DEFAULT
# 1091 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 1092 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 1093 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
	goto LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_1


LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_Text_0:
# 1087 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I've been conditioning my Pokémon into\n"
	.string "peak beauty.\p"
	.string "Now she's ready for the master-ranked\n"
	.string "contest!$"

LilycoveCity_ContestLobby_EventScript_DazzlingGleamGirl_Text_1:
# 1090 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Your Pokémon can dazzling others, too,\n"
	.string "if they know this move.$"
