# 1 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 3 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_MapScripts::
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
# 7 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
# 8 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_FacePlayer
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmessage
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
# 16 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 19 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 20 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
# 21 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
# 22 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 23 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
# 25 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 29 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
# 32 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	releaseall
# 33 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 35 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
# 36 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
# 37 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
# 38 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	removeobject LOCALID_MUSEUM_1F_CURATOR
# 40 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	switch VAR_FACING
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
# 42 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
# 43 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
# 44 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 45 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
# 47 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 48 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
# 49 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 52 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 54 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
# 55 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
# 57 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 59 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 60 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 61 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 62 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
# 63 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 64 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
# 65 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 67 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
# 68 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 70 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 72 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 73 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 74 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
# 75 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_left
# 76 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 77 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 78 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 79 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
# 80 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_right
# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 82 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 83 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 84 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
# 85 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 86 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 87 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	step_end
# 88 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 89 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
# 90 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
# 91 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 92 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
# 94 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
# 95 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 97 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
# 98 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
# 99 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
# 102 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
# 103 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 104 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 105 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
# 107 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 108 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 109 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
# 110 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
# 111 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 112 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 113 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
# 114 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
# 115 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 116 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
# 118 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
# 119 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 120 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 121 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
# 122 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
# 123 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 124 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 125 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
# 126 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 129 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
# 130 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
# 131 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 132 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 133 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
# 134 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
# 135 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 137 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
# 138 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
# 139 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 140 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 141 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
# 142 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
# 143 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 144 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 145 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
# 146 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
# 147 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 148 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 149 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
# 150 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lock
# 151 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	faceplayer
# 152 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	closemessage
# 154 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_ARTIST_2, Common_Movement_FaceOriginalDirection
# 155 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	release
# 157 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 158 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 159 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
# 160 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
# 161 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	end
# 162 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 163 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
# 164 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Welcome to LILYCOVE MUSEUM.\p"
# 165 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Please take the time to enjoy our\n"
# 166 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "collection of fantastic artwork\l"
# 167 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "featuring Pokémon.$"
# 168 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 169 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
# 170 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'm the CURATOR of this MUSEUM of\n"
# 171 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "fine arts.\p"
# 172 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's heartening to see someone so\n"
# 173 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "young as you in our MUSEUM.\p"
# 174 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Have you viewed our collection of\n"
# 175 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "paintings already?$"
# 176 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 177 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
# 178 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, then let me not disturb you.\n"
# 179 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Please, do take your time.$"
# 180 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 181 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
# 182 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Oh? I do believe that you seem to\n"
# 183 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "be a Pokémon TRAINER.\p"
# 184 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Have you an interest in paintings,\n"
# 185 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "too?$"
# 186 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 187 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I see…\p"
# 189 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'm honored that you would visit\n"
# 190 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "us in spite of that.$"
# 191 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 192 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
# 193 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, excellent!\n"
# 194 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "You do like paintings!\p"
# 195 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Then, may I ask you to come with me?$"
# 196 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 197 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
# 198 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a very old painting.\n"
# 199 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The paint is peeling here and there.$"
# 200 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 201 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
# 202 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's an odd landscape with bizarre\n"
# 203 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "and fantastic scenery.$"
# 204 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 205 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
# 206 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a beautiful, smiling\n"
# 207 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "woman with a Pokémon on her lap.$"
# 208 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 209 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
# 210 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a legendary Pokémon\n"
# 211 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "from long ago.\p"
# 212 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The artist painted this from\n"
# 213 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "imagination.$"
# 214 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 215 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
# 216 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of GRASS Pokémon\n"
# 217 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "swaying in a breeze.\p"
# 218 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "They appear to be enjoying the wind's\n"
# 219 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "gentle caress.$"
# 220 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 221 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
# 222 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a delicious-looking painting\n"
# 223 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "of BERRIES.\p"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This painting could make you hungry!$"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 226 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
# 227 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a replica of a famous sculpture.\p"
# 228 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It depicts an ancient BIRD Pokémon.$"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 230 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
# 231 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a big POKé BALL carved from\n"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "a black stone.\p"
# 233 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It was apparently used in festivals\n"
# 234 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "in the olden days.$"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 236 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
# 237 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a huge stone tablet inscribed\n"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "with Pokémon and dense text in the\l"
# 239 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "small characters of an ancient,\l"
# 240 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "unreadable language.$"
# 241 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 242 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
# 243 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Hmmm…\n"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "What works of great magnificence…$"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 246 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
# 247 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Battling with Pokémon is fun,\n"
# 248 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'll grant you that.\p"
# 249 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "But one mustn't forget our love for\n"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "the fine arts.$"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 252 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
# 253 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This ART MUSEUM… Well, you could\n"
# 254 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "see many fantastic paintings.\p"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "And the CURATOR is a wonderful person.\p"
# 256 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Among artists like myself, this MUSEUM\n"
# 257 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "is an inspiration.$"
# 258 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 259 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
# 260 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This lady is pretty!\n"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "She's like Mommy!$"
# 262 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 263 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
# 264 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This Pokémon is adorable!\n"
# 265 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Just like our little boy!$"
# 266 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 267 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
# 268 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'd heard that this ART MUSEUM got\n"
# 269 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "in some new paintings.\p"
# 270 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "So, naturally I hurried over.\p"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Are the new paintings up on\n"
# 272 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "the second floor?$"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 274 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
# 275 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Lately, the CURATOR has been\n"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "unusually cheerful.\p"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I bet something good happened for him.\n"
# 278 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Definitely.$"
# 279 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 280 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
# 281 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I aim to see many great paintings\n"
# 282 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "here and learn from them.\p"
# 283 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I have this dream of one day having\n"
# 284 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "my artwork exhibited here.$"
# 285 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"

# 286 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
# 287 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The ART MUSEUM has become a favorite\n"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "tourist destination.\p"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's great for LILYCOVE…\n"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "No, great for the HOENN region!\p"
# 291 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This is what I've heard--a lone TRAINER\n"
# 292 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "procured all the paintings upstairs.$"
