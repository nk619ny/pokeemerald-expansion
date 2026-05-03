# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
//.set LOCALID_AQUA_HIDEOUT_MATT, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
//.set LOCALID_AQUA_HIDEOUT_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B2F/scripts.pory"

# 9 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 28 "data/maps/AquaHideout_B2F/scripts.pory"

# 29 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_MattAfterBattle
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 34 "data/maps/AquaHideout_B2F/scripts.pory"

# 35 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceLeft
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattRepaidDebt, MSGBOX_DEFAULT
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_ENABLE_STEVEN_CALL_AQUA_HIDEOUT
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_STEVEN_AQUA_CALL_STEP_COUNTER, 0
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_CheckIfHideoutsComplete
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 63 "data/maps/AquaHideout_B2F/scripts.pory"

# 64 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 70 "data/maps/AquaHideout_B2F/scripts.pory"

# 71 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 78 "data/maps/AquaHideout_B2F/scripts.pory"

# 79 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 83 "data/maps/AquaHideout_B2F/scripts.pory"

# 84 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 88 "data/maps/AquaHideout_B2F/scripts.pory"

# 89 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 93 "data/maps/AquaHideout_B2F/scripts.pory"

# 94 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 98 "data/maps/AquaHideout_B2F/scripts.pory"

# 99 "data/maps/AquaHideout_B2F/scripts.pory"
/* AquaHideout_B2F_Text_MattIntro:
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 108 "data/maps/AquaHideout_B2F/scripts.pory"

# 109 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$" 
# 113 "data/maps/AquaHideout_B2F/scripts.pory"

# 114 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our Boss has already gone on his way to\n"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lilycove.\p"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But how will you even find it?\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…$" 
# 122 "data/maps/AquaHideout_B2F/scripts.pory"

# 123 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
*/
# 128 "data/maps/AquaHideout_B2F/scripts.pory"

# 129 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"

# 133 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"

# 137 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"

# 141 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 148 "data/maps/AquaHideout_B2F/scripts.pory"

# 149 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"

# 153 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 158 "data/maps/AquaHideout_B2F/scripts.pory"

# 159 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 163 "data/maps/AquaHideout_B2F/scripts.pory"

# 164 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 167 "data/maps/AquaHideout_B2F/scripts.pory"

# 168 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

AquaHideout_B2F_EventScript_StevenCallTrigger::
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_unset FLAG_STEVEN_CALLED_AQUA_HIDEOUT, AquaHideout_B2F_EventScript_StevenCallTrigger_2
AquaHideout_B2F_EventScript_StevenCallTrigger_1:
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 184 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	return

AquaHideout_B2F_EventScript_StevenCallTrigger_2:
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenFirstCall
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_STEVEN_CALLED_AQUA_HIDEOUT
	goto AquaHideout_B2F_EventScript_StevenCallTrigger_1


AquaHideout_B2F_EventScript_StevenCallOutro::
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_BOTH_HIDEOUTS_COMPLETE, AquaHideout_B2F_EventScript_StevenCallOutro_2
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenSecondCall_MagmaRemaining
AquaHideout_B2F_EventScript_StevenCallOutro_1:
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_ENABLE_STEVEN_CALL_AQUA_HIDEOUT
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	return

AquaHideout_B2F_EventScript_StevenCallOutro_2:
# 195 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenSecondCall_BothHideoutsDone
	goto AquaHideout_B2F_EventScript_StevenCallOutro_1


AquaHideout_B2F_EventScript_MattAfterBattle::
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 234 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 40
# 235 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_AQUA_HIDEOUT_MATT, Common_Movement_WalkInPlaceLeft
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattRepaidDebt, MSGBOX_DEFAULT
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	end


AquaHideout_B2F_Text_StevenFirstCall::
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: {PLAYER}, I just visited\n"
	.string "Capt. Stern in Slateport. It looks\l"
	.string "like Team Aqua stole his submarine.\p"
	.string "I believe they've tracked down\n"
	.string "the ancient Pokémon Kyogre some-\l"
	.string "where on the Ocean floor - you\l"
	.string "need to stop them before they can\l"
	.string "submerge!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

AquaHideout_B2F_Text_StevenSecondCall_BothHideoutsDone::
# 206 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: Were you able to catch Archie,\n"
	.string "{PLAYER}?\p"
	.string "I see…\n"
	.string "Matt bought time for him to escape.\p"
	.string "We need to catch them before they\n"
	.string "awaken Kyogre, but I'm still not sure\l"
	.string "where it sleeps.\p"
	.string "I'm heading home to Mossdeep to do\n"
	.string "further research. You should meet me\l"
	.string "there.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

AquaHideout_B2F_Text_StevenSecondCall_MagmaRemaining::
# 210 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: Were you able to catch Archie,\n"
	.string "{PLAYER}?\p"
	.string "I see…\n"
	.string "Matt bought time for him to escape.\p"
	.string "We need to catch them before they\n"
	.string "awaken Kyogre, but I'm still not sure\l"
	.string "where it sleeps.\p"
	.string "In the meantime, you should hurry to\n"
	.string "Team Magma's hideout in the Jagged\l"
	.string "Pass.\p"
	.string "We can still stop Maxie.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

AquaHideout_B2F_Text_MattIntro::
# 214 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: Shelly looked through the\n"
	.string "documents from the Weather Institute,\l"
	.string "Archie grabbed the Blue Orb, and I took\l"
	.string "this submarine.\p"
	.string "Everything is working according to\n"
	.string "Archie's plan.\p"
	.string "And now, my last job is to stop you,\n"
	.string "right here!\p"
	.string "This won't be like last time.\n"
	.string "I've collected the strongest and most\l"
	.string "fearsome Pokémon around.\p"
	.string "You'll see our strength!$"

AquaHideout_B2F_Text_MattDefeat::
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I still can't beat you.\n"
	.string "But I held you back long enough for\l"
	.string "Archie and Shelly to take off.\p"
	.string "You can't stop us now…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations::
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: Ah… hah… Archie, man, it's all on\n"
	.string "you now…$"

AquaHideout_B2F_Text_MattRepaidDebt::
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: I hope I've repaid my debt to\n"
	.string "you… Boss…$"
