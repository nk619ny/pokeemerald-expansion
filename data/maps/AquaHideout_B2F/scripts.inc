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
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_ENABLE_STEVEN_CALL_AQUA_HIDEOUT
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_STEVEN_AQUA_CALL_STEP_COUNTER, 0
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_CheckIfHideoutsComplete
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 62 "data/maps/AquaHideout_B2F/scripts.pory"

# 63 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 77 "data/maps/AquaHideout_B2F/scripts.pory"

# 78 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 82 "data/maps/AquaHideout_B2F/scripts.pory"

# 83 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 87 "data/maps/AquaHideout_B2F/scripts.pory"

# 88 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 92 "data/maps/AquaHideout_B2F/scripts.pory"

# 93 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 97 "data/maps/AquaHideout_B2F/scripts.pory"

# 98 "data/maps/AquaHideout_B2F/scripts.pory"
/* AquaHideout_B2F_Text_MattIntro:
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\p"
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Got here already, did you?\n"
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But this is it!\p"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm a cut above the GRUNTS you've seen\n"
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "so far.\p"
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm not stalling for time.\n"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'm going to pulverize you!$"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"

# 108 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$" 
# 112 "data/maps/AquaHideout_B2F/scripts.pory"

# 113 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our Boss has already gone on his way to\n"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lilycove.\p"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But how will you even find it?\n"
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…$" 
# 121 "data/maps/AquaHideout_B2F/scripts.pory"

# 122 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"

# 126 "data/maps/AquaHideout_B2F/scripts.pory"
*/
# 127 "data/maps/AquaHideout_B2F/scripts.pory"

# 128 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"

# 132 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"

# 136 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"

# 140 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"

# 148 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"

# 152 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"

# 158 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 162 "data/maps/AquaHideout_B2F/scripts.pory"

# 163 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 166 "data/maps/AquaHideout_B2F/scripts.pory"

# 167 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 168 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

AquaHideout_B2F_EventScript_StevenCallTrigger::
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_unset FLAG_STEVEN_CALLED_AQUA_HIDEOUT, AquaHideout_B2F_EventScript_StevenCallTrigger_2
AquaHideout_B2F_EventScript_StevenCallTrigger_1:
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	return

AquaHideout_B2F_EventScript_StevenCallTrigger_2:
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenFirstCall
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_STEVEN_CALLED_AQUA_HIDEOUT
	goto AquaHideout_B2F_EventScript_StevenCallTrigger_1


AquaHideout_B2F_EventScript_StevenCallOutro::
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_BOTH_HIDEOUTS_COMPLETE, AquaHideout_B2F_EventScript_StevenCallOutro_2
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenSecondCall_MagmaRemaining
AquaHideout_B2F_EventScript_StevenCallOutro_1:
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_ENABLE_STEVEN_CALL_AQUA_HIDEOUT
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	return

AquaHideout_B2F_EventScript_StevenCallOutro_2:
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	pokenavcall AquaHideout_B2F_Text_StevenSecondCall_BothHideoutsDone
	goto AquaHideout_B2F_EventScript_StevenCallOutro_1


AquaHideout_B2F_EventScript_MattAfterBattle::
# 231 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 40
# 234 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_AQUA_HIDEOUT_MATT, Common_Movement_WalkInPlaceLeft
# 235 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattRepaidDebt, MSGBOX_DEFAULT
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmessage
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
	end


AquaHideout_B2F_Text_StevenFirstCall::
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
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
# 205 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: Were you able to catch\n"
	.string "Archie, {PLAYER}? I see… Matt\l"
	.string "bought time for him to escape.\p"
	.string "We need to catch them before they\n"
	.string "awaken Kyogre, but I'm still not\l"
	.string "sure where it sleeps. I'm heading\l"
	.string "home to Mossdeep to do further\l"
	.string "research. You should meet me there.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

AquaHideout_B2F_Text_StevenSecondCall_MagmaRemaining::
# 209 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Steven: Were you able to catch\n"
	.string "Archie, {PLAYER}? I see… Matt\l"
	.string "bought time for him to escape.\p"
	.string "We need to catch them before they\n"
	.string "awaken Kyogre, but I'm still not\l"
	.string "sure where it sleeps. In the\l"
	.string "meantime, you should hurry to Team\l"
	.string "Magma's hideout in the Jagged\l"
	.string "Pass. We can still stop Maxie.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

AquaHideout_B2F_Text_MattIntro::
# 213 "data/maps/AquaHideout_B2F/scripts.pory"
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
# 217 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I still can't beat you.\n"
	.string "But I held you back long enough for\l"
	.string "Archie and Shelly to take off.\p"
	.string "You can't stop us now…$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations::
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: Ah… hah… Archie, man, it's all on\n"
	.string "you now…$"

AquaHideout_B2F_Text_MattRepaidDebt::
# 225 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: I hope I've repaid my debt to\n"
	.string "you… Boss…$"
