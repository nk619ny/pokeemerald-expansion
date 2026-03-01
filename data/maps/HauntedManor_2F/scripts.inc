HauntedManor_2F_MapScripts::
# 2 "data/maps/HauntedManor_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HauntedManor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HauntedManor_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/HauntedManor_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, HauntedManor_2F_FlashCheck
	.2byte 0


HauntedManor_2F_FlashCheck::
# 8 "data/maps/HauntedManor_2F/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, HauntedManor_2F_FlashCheck_2
# 13 "data/maps/HauntedManor_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, HauntedManor_2F_FlashCheck_4
# 28 "data/maps/HauntedManor_2F/scripts.pory"
	lock
# 29 "data/maps/HauntedManor_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 30 "data/maps/HauntedManor_2F/scripts.pory"
	msgbox HauntedManor_2F_Text_RoomIsDarkNeedFlash
# 31 "data/maps/HauntedManor_2F/scripts.pory"
	waitmessage
# 32 "data/maps/HauntedManor_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 33 "data/maps/HauntedManor_2F/scripts.pory"
	delay 1
# 34 "data/maps/HauntedManor_2F/scripts.pory"
	warp MAP_HAUNTED_MANOR_1F, 10, 2
# 35 "data/maps/HauntedManor_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 36 "data/maps/HauntedManor_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/HauntedManor_2F/scripts.pory"
	release
	return

HauntedManor_2F_FlashCheck_2:
# 9 "data/maps/HauntedManor_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/HauntedManor_2F/scripts.pory"
	releaseall
	return

HauntedManor_2F_FlashCheck_4:
# 14 "data/maps/HauntedManor_2F/scripts.pory"
	lock
# 15 "data/maps/HauntedManor_2F/scripts.pory"
	msgbox HauntedManor_2F_Text_RoomIsDarkUseFlash
# 16 "data/maps/HauntedManor_2F/scripts.pory"
	waitmessage
# 17 "data/maps/HauntedManor_2F/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 18 "data/maps/HauntedManor_2F/scripts.pory"
	playse SE_M_REFLECT
# 19 "data/maps/HauntedManor_2F/scripts.pory"
	delay 20
# 20 "data/maps/HauntedManor_2F/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 21 "data/maps/HauntedManor_2F/scripts.pory"
	animateflash 0
# 22 "data/maps/HauntedManor_2F/scripts.pory"
	setflashlevel 0
# 23 "data/maps/HauntedManor_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 24 "data/maps/HauntedManor_2F/scripts.pory"
	release
	return


HauntedManor_2F_Text_RoomIsDarkUseFlash::
# 42 "data/maps/HauntedManor_2F/scripts.pory"
	.string "This room is too dark to explore without\n"
	.string "a light.\p"
	.string "{PLAYER}'s Pokémon used Flash!$"

HauntedManor_2F_Text_RoomIsDarkNeedFlash::
# 46 "data/maps/HauntedManor_2F/scripts.pory"
	.string "This room is too dark to explore without\n"
	.string "a light.\p"
	.string "It's better to turn back.$"
