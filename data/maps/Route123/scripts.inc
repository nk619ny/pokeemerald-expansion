# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 7 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 17 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 18 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN
# 19 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 20 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 21 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 22 "data/maps/Route123/scripts.pory"
	release
# 23 "data/maps/Route123/scripts.pory"
	end
# 24 "data/maps/Route123/scripts.pory"

# 25 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 26 "data/maps/Route123/scripts.pory"
	release
# 27 "data/maps/Route123/scripts.pory"
	end
# 28 "data/maps/Route123/scripts.pory"

# 29 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 30 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 31 "data/maps/Route123/scripts.pory"
	release
# 32 "data/maps/Route123/scripts.pory"
	end
# 33 "data/maps/Route123/scripts.pory"

# 34 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 35 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route123/scripts.pory"
	end
# 37 "data/maps/Route123/scripts.pory"

# 38 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 39 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 40 "data/maps/Route123/scripts.pory"
	end
# 41 "data/maps/Route123/scripts.pory"

# 42 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 43 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 44 "data/maps/Route123/scripts.pory"
	end
# 45 "data/maps/Route123/scripts.pory"

# 46 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 47 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 48 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route123/scripts.pory"
	end
# 50 "data/maps/Route123/scripts.pory"

# 51 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 52 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 53 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route123/scripts.pory"
	end
# 55 "data/maps/Route123/scripts.pory"

# 56 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 57 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 58 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route123/scripts.pory"
	end
# 60 "data/maps/Route123/scripts.pory"

# 61 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 62 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat
# 63 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 64 "data/maps/Route123/scripts.pory"
	release
# 65 "data/maps/Route123/scripts.pory"
	end
# 66 "data/maps/Route123/scripts.pory"

# 67 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 68 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 69 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 71 "data/maps/Route123/scripts.pory"
	//register_matchcall TRAINER_CAMERON_1
# 72 "data/maps/Route123/scripts.pory"
	release
# 73 "data/maps/Route123/scripts.pory"
	end
# 74 "data/maps/Route123/scripts.pory"

# 75 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 76 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 77 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route123/scripts.pory"
	end
# 79 "data/maps/Route123/scripts.pory"

# 80 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 81 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 82 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 83 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchJacki
# 84 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 85 "data/maps/Route123/scripts.pory"
	release
# 86 "data/maps/Route123/scripts.pory"
	end
# 87 "data/maps/Route123/scripts.pory"

# 88 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 89 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route123/scripts.pory"
	//register_matchcall TRAINER_JACKI_1
# 93 "data/maps/Route123/scripts.pory"
	release
# 94 "data/maps/Route123/scripts.pory"
	end
# 95 "data/maps/Route123/scripts.pory"

# 96 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 97 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 98 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route123/scripts.pory"
	end
# 100 "data/maps/Route123/scripts.pory"

# 101 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 102 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 103 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route123/scripts.pory"
	end
# 105 "data/maps/Route123/scripts.pory"

# 106 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 107 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 108 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route123/scripts.pory"
	end
# 110 "data/maps/Route123/scripts.pory"

# 111 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 112 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 113 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route123/scripts.pory"
	end
# 115 "data/maps/Route123/scripts.pory"

# 116 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 117 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 118 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route123/scripts.pory"
	end
# 120 "data/maps/Route123/scripts.pory"

# 121 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 122 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 123 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route123/scripts.pory"
	end
# 125 "data/maps/Route123/scripts.pory"

# 126 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 127 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 128 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route123/scripts.pory"
	end
# 130 "data/maps/Route123/scripts.pory"

# 131 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 132 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 133 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route123/scripts.pory"
	end
# 135 "data/maps/Route123/scripts.pory"

# 136 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 137 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 138 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route123/scripts.pory"
	end
# 140 "data/maps/Route123/scripts.pory"

# 141 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 142 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 143 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route123/scripts.pory"
	end
# 145 "data/maps/Route123/scripts.pory"

# 146 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 147 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat, Route123_Script_DavisDefeated
# 148 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route123/scripts.pory"
	end
# 150 "data/maps/Route123/scripts.pory"

# 151 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 152 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 153 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 154 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchFernando
# 155 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 156 "data/maps/Route123/scripts.pory"
	release
# 157 "data/maps/Route123/scripts.pory"
	end
# 158 "data/maps/Route123/scripts.pory"

# 159 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 160 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 161 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 163 "data/maps/Route123/scripts.pory"
	//register_matchcall TRAINER_FERNANDO_1
# 164 "data/maps/Route123/scripts.pory"
	release
# 165 "data/maps/Route123/scripts.pory"
	end
# 166 "data/maps/Route123/scripts.pory"

# 167 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 168 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 169 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route123/scripts.pory"
	end
# 171 "data/maps/Route123/scripts.pory"

# 172 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 173 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type Pokémon!\p"
# 174 "data/maps/Route123/scripts.pory"
	.string "Do you have any GRASS-type Pokémon?$"
# 175 "data/maps/Route123/scripts.pory"

# 176 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 177 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 178 "data/maps/Route123/scripts.pory"
	.string "You like GRASS-type Pokémon, too,\n"
# 179 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 180 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 181 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 182 "data/maps/Route123/scripts.pory"

# 183 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 184 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
# 185 "data/maps/Route123/scripts.pory"
	.string "Pokémon. I'm like a tree doctor.$"
# 186 "data/maps/Route123/scripts.pory"

# 187 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 188 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
# 189 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 118$"
# 190 "data/maps/Route123/scripts.pory"

# 191 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 192 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
# 193 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 194 "data/maps/Route123/scripts.pory"

# 195 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 196 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"

Route123_Script_DavisDefeated::
# 200 "data/maps/Route123/scripts.pory"
	lock
# 201 "data/maps/Route123/scripts.pory"
	setflag FLAG_DEFEATED_DAVIS_123
# 202 "data/maps/Route123/scripts.pory"
	release
	return


Route121_EventScript_Gabe::
# 222 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_GABE, Route121_Text_GabeIntro, Route121_Text_GabeDefeat, Route121_EventScript_GabeTryGiveVitamin
# 223 "data/maps/Route123/scripts.pory"
	msgbox Route121_Text_GabePostBattle, MSGBOX_NPC
# 224 "data/maps/Route123/scripts.pory"
	release
	end


Route121_EventScript_GabeTryGiveVitamin::
# 243 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Route121_EventScript_GabeTryGiveVitamin_2
# 247 "data/maps/Route123/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route121_EventScript_GabeTryGiveVitamin_5
# 251 "data/maps/Route123/scripts.pory"
	msgbox Route121_EventScript_GabeTryGiveVitamin_Text_1, MSGBOX_NPC
Route121_EventScript_GabeTryGiveVitamin_4:
# 253 "data/maps/Route123/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 254 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route121_EventScript_GabeTryGiveVitamin_9
# 259 "data/maps/Route123/scripts.pory"
	setflag FLAG_TEMP_A
# 260 "data/maps/Route123/scripts.pory"
	msgbox Route121_EventScript_GabeTryGiveVitamin_Text_2, MSGBOX_NPC
Route121_EventScript_GabeTryGiveVitamin_8:
# 262 "data/maps/Route123/scripts.pory"
	release
	end

Route121_EventScript_GabeTryGiveVitamin_2:
# 244 "data/maps/Route123/scripts.pory"
	releaseall
	end

Route121_EventScript_GabeTryGiveVitamin_5:
# 248 "data/maps/Route123/scripts.pory"
	msgbox Route121_EventScript_GabeTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route121_EventScript_GabeTryGiveVitamin_4

Route121_EventScript_GabeTryGiveVitamin_9:
# 255 "data/maps/Route123/scripts.pory"
	giveitem ITEM_CALCIUM
# 256 "data/maps/Route123/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route121_EventScript_GabeTryGiveVitamin_8


Route121_EventScript_GabeTryGiveVitamin_Text_0:
# 248 "data/maps/Route123/scripts.pory"
	.string "Your Pokémon deserve a snack after\n"
	.string "that battle!\p"
	.string "Here, give them this.$"

Route121_EventScript_GabeTryGiveVitamin_Text_1:
# 251 "data/maps/Route123/scripts.pory"
	.string "Are your Pokémon ready for a snack\n"
	.string "now?$"

Route121_EventScript_GabeTryGiveVitamin_Text_2:
# 260 "data/maps/Route123/scripts.pory"
	.string "Oh, are they not hungry now?\p"
	.string "Well, if you don't come back soon, I\n"
	.string "might eat it myself.$"

Route123_Text_KindraIntro::
# 207 "data/maps/Route123/scripts.pory"
	.string "Can you small the fresh fruit?$"

Route123_Text_KindraDefeat::
# 211 "data/maps/Route123/scripts.pory"
	.string "So fresh!$"

Route123_Text_KindraPostBattle::
# 215 "data/maps/Route123/scripts.pory"
	.string "The berry fields in this area attract\n"
	.string "all kinds of Pokémon. The blooms in the\l"
	.string "spring are also beautiful!$"

Route121_Text_GabeIntro::
# 229 "data/maps/Route123/scripts.pory"
	.string "It's important not to battle on an\n"
	.string "empty stomach!$"

Route121_Text_GabeDefeat::
# 233 "data/maps/Route123/scripts.pory"
	.string "I could use a snack.$"

Route121_Text_GabePostBattle::
# 237 "data/maps/Route123/scripts.pory"
	.string "Every time I eat, I make sure to give\n"
	.string "some berries to my Pokémon, too!$"

Route123_Text_CameronIntro::
# 266 "data/maps/Route123/scripts.pory"
	.string "Lots of beautiful plants grow in the\n"
	.string "Safari Zone.$"

Route123_Text_CameronDefeat::
# 270 "data/maps/Route123/scripts.pory"
	.string "Maybe I should be looking for Pokémon\n"
	.string "there, too.$"

Route123_Text_CameronPostBattle::
# 274 "data/maps/Route123/scripts.pory"
	.string "Have you explored the Safari Zone yet?$"
