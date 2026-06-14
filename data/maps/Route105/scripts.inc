# 1 "data/maps/Route105/scripts.pory"

# 2 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 3 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 4 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 5 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 6 "data/maps/Route105/scripts.pory"
	.byte 0
# 7 "data/maps/Route105/scripts.pory"

# 8 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 9 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 10 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 11 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 12 "data/maps/Route105/scripts.pory"
	end
# 13 "data/maps/Route105/scripts.pory"

# 14 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 15 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 16 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 17 "data/maps/Route105/scripts.pory"
	return
# 18 "data/maps/Route105/scripts.pory"

# 19 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 20 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 21 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 22 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 23 "data/maps/Route105/scripts.pory"
	end
# 24 "data/maps/Route105/scripts.pory"

# 25 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 26 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 27 "data/maps/Route105/scripts.pory"
	.2byte 0
# 28 "data/maps/Route105/scripts.pory"

# 29 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 30 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 31 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route105/scripts.pory"
	end
# 33 "data/maps/Route105/scripts.pory"

# 34 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 35 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 36 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route105/scripts.pory"
	end
# 38 "data/maps/Route105/scripts.pory"

# 39 "data/maps/Route105/scripts.pory"
/*
# 40 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 41 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 42 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route105/scripts.pory"
	end
# 44 "data/maps/Route105/scripts.pory"
*/
# 45 "data/maps/Route105/scripts.pory"

# 46 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 47 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 48 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route105/scripts.pory"
	end
# 50 "data/maps/Route105/scripts.pory"

# 51 "data/maps/Route105/scripts.pory"
/*
# 52 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 53 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 54 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route105/scripts.pory"
	end
# 56 "data/maps/Route105/scripts.pory"
*/
# 57 "data/maps/Route105/scripts.pory"

# 58 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 59 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 60 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route105/scripts.pory"
	end
# 62 "data/maps/Route105/scripts.pory"

# 63 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 64 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 65 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 67 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/Route105/scripts.pory"
	release
# 69 "data/maps/Route105/scripts.pory"
	end
# 70 "data/maps/Route105/scripts.pory"

# 71 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 72 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 73 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 75 "data/maps/Route105/scripts.pory"
	//register_matchcall TRAINER_ANDRES_1
# 76 "data/maps/Route105/scripts.pory"
	release
# 77 "data/maps/Route105/scripts.pory"
	end
# 78 "data/maps/Route105/scripts.pory"

# 79 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 80 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 81 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route105/scripts.pory"
	end
# 83 "data/maps/Route105/scripts.pory"

# 84 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 85 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 86 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 87 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 88 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 89 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 90 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 91 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 92 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 93 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 94 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 95 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 96 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 97 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 98 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 99 "data/maps/Route105/scripts.pory"

# 100 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 101 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 102 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"

Route105_EventScript_ScaleShotFisherman::
# 107 "data/maps/Route105/scripts.pory"
	lock
# 108 "data/maps/Route105/scripts.pory"
	faceplayer
# 109 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_ScaleShotFisherman_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/Route105/scripts.pory"
	checkitem ITEM_TM_SCALE_SHOT
# 111 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route105_EventScript_ScaleShotFisherman_2
Route105_EventScript_ScaleShotFisherman_1:
# 117 "data/maps/Route105/scripts.pory"
	releaseall
	end

Route105_EventScript_ScaleShotFisherman_2:
# 112 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_ScaleShotFisherman_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/Route105/scripts.pory"
	closemessage
# 114 "data/maps/Route105/scripts.pory"
	giveitem ITEM_TM_SCALE_SHOT
# 115 "data/maps/Route105/scripts.pory"
	waitfanfare
	goto Route105_EventScript_ScaleShotFisherman_1


Route105_EventScript_IceSpinnerBeauty::
# 123 "data/maps/Route105/scripts.pory"
	lock
# 124 "data/maps/Route105/scripts.pory"
	faceplayer
# 125 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_IceSpinnerBeauty_Text_0, MSGBOX_DEFAULT
# 126 "data/maps/Route105/scripts.pory"
	checkitem ITEM_TM_ICE_SPINNER
# 127 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route105_EventScript_IceSpinnerBeauty_2
Route105_EventScript_IceSpinnerBeauty_1:
# 133 "data/maps/Route105/scripts.pory"
	releaseall
	end

Route105_EventScript_IceSpinnerBeauty_2:
# 128 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_IceSpinnerBeauty_Text_1, MSGBOX_DEFAULT
# 129 "data/maps/Route105/scripts.pory"
	closemessage
# 130 "data/maps/Route105/scripts.pory"
	giveitem ITEM_TM_ICE_SPINNER
# 131 "data/maps/Route105/scripts.pory"
	waitfanfare
	goto Route105_EventScript_IceSpinnerBeauty_1


Route105_EventScript_Dominik::
# 139 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated, Route105_EventScript_DominikTryGiveVitamin
# 140 "data/maps/Route105/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route105_EventScript_DominikTryGiveVitamin
# 141 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_NPC
# 142 "data/maps/Route105/scripts.pory"
	release
	end


Route105_EventScript_DominikTryGiveVitamin::
# 147 "data/maps/Route105/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route105_EventScript_DominikTryGiveVitamin_2
# 151 "data/maps/Route105/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route105_EventScript_DominikTryGiveVitamin_5
# 155 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_DominikTryGiveVitamin_Text_1, MSGBOX_NPC
Route105_EventScript_DominikTryGiveVitamin_4:
# 157 "data/maps/Route105/scripts.pory"
	checkitemspace ITEM_PROTEIN
# 158 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route105_EventScript_DominikTryGiveVitamin_9
# 163 "data/maps/Route105/scripts.pory"
	setflag FLAG_TEMP_A
# 164 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_DominikTryGiveVitamin_Text_2, MSGBOX_NPC
Route105_EventScript_DominikTryGiveVitamin_8:
# 166 "data/maps/Route105/scripts.pory"
	release
	end

Route105_EventScript_DominikTryGiveVitamin_2:
# 148 "data/maps/Route105/scripts.pory"
	releaseall
	end

Route105_EventScript_DominikTryGiveVitamin_5:
# 152 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_DominikTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route105_EventScript_DominikTryGiveVitamin_4

Route105_EventScript_DominikTryGiveVitamin_9:
# 159 "data/maps/Route105/scripts.pory"
	giveitem ITEM_PROTEIN
# 160 "data/maps/Route105/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route105_EventScript_DominikTryGiveVitamin_8


Route105_EventScript_Imani::
# 172 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated, Route105_EventScript_ImaniTryGiveVitamin
# 173 "data/maps/Route105/scripts.pory"
	goto_if_set FLAG_TEMP_B, Route105_EventScript_ImaniTryGiveVitamin
# 174 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_NPC
# 175 "data/maps/Route105/scripts.pory"
	release
	end


Route105_EventScript_ImaniTryGiveVitamin::
# 180 "data/maps/Route105/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route105_EventScript_ImaniTryGiveVitamin_2
# 184 "data/maps/Route105/scripts.pory"
	goto_if_unset FLAG_TEMP_B, Route105_EventScript_ImaniTryGiveVitamin_5
# 188 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_ImaniTryGiveVitamin_Text_1, MSGBOX_NPC
Route105_EventScript_ImaniTryGiveVitamin_4:
# 190 "data/maps/Route105/scripts.pory"
	checkitemspace ITEM_PP_UP
# 191 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route105_EventScript_ImaniTryGiveVitamin_9
# 196 "data/maps/Route105/scripts.pory"
	setflag FLAG_TEMP_B
# 197 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_ImaniTryGiveVitamin_Text_2, MSGBOX_NPC
Route105_EventScript_ImaniTryGiveVitamin_8:
# 199 "data/maps/Route105/scripts.pory"
	release
	end

Route105_EventScript_ImaniTryGiveVitamin_2:
# 181 "data/maps/Route105/scripts.pory"
	releaseall
	end

Route105_EventScript_ImaniTryGiveVitamin_5:
# 185 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_ImaniTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route105_EventScript_ImaniTryGiveVitamin_4

Route105_EventScript_ImaniTryGiveVitamin_9:
# 192 "data/maps/Route105/scripts.pory"
	giveitem ITEM_PP_UP
# 193 "data/maps/Route105/scripts.pory"
	clearflag FLAG_TEMP_B
	goto Route105_EventScript_ImaniTryGiveVitamin_8


Route105_EventScript_ScaleShotFisherman_Text_0:
# 109 "data/maps/Route105/scripts.pory"
	.string "There are so many dazzling fish in the\n"
	.string "sea.$"

Route105_EventScript_ScaleShotFisherman_Text_1:
# 112 "data/maps/Route105/scripts.pory"
	.string "Some fish Pokémon can launch their\n"
	.string "scales as an attack.\p"
	.string "It's beautiful, and scary!$"

Route105_EventScript_IceSpinnerBeauty_Text_0:
# 125 "data/maps/Route105/scripts.pory"
	.string "I've been trying to practice ice\n"
	.string "skating lately. The Pokémon in this\l"
	.string "cave move so gracefully!$"

Route105_EventScript_IceSpinnerBeauty_Text_1:
# 128 "data/maps/Route105/scripts.pory"
	.string "You should teach your Pokémon to spin\n"
	.string "gracefully on the ice, too.$"

Route105_EventScript_DominikTryGiveVitamin_Text_0:
# 152 "data/maps/Route105/scripts.pory"
	.string "If you want to stay swimming for long\n"
	.string "periods of time, you need to stay in top\l"
	.string "shape.\p"
	.string "With this vitamin, your Pokémon can\n"
	.string "have endurance like me!$"

Route105_EventScript_DominikTryGiveVitamin_Text_1:
# 155 "data/maps/Route105/scripts.pory"
	.string "Ah, just in time!$"

Route105_EventScript_DominikTryGiveVitamin_Text_2:
# 164 "data/maps/Route105/scripts.pory"
	.string "Hmm, you're trying to carry too much\n"
	.string "stuff while surfing.\p"
	.string "That's a mistake - drop some weight and\n"
	.string "come back before I take these vitamins\l"
	.string "myself!$"

Route105_EventScript_ImaniTryGiveVitamin_Text_0:
# 185 "data/maps/Route105/scripts.pory"
	.string "UPDATE If you want to stay swimming for\n"
	.string "long periods of time, you need to stay\l"
	.string "in top shape.\p"
	.string "With this vitamin, your Pokémon can\n"
	.string "have endurance like me!$"

Route105_EventScript_ImaniTryGiveVitamin_Text_1:
# 188 "data/maps/Route105/scripts.pory"
	.string "UPDATEAh, just in time!$"

Route105_EventScript_ImaniTryGiveVitamin_Text_2:
# 197 "data/maps/Route105/scripts.pory"
	.string "UPDATEHmm, you're trying to carry too\n"
	.string "much stuff while surfing.\p"
	.string "That's a mistake - drop some weight and\n"
	.string "come back before I take these vitamins\l"
	.string "myself!$"
