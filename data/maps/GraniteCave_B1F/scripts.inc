GraniteCave_B1F_MapScripts::
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GraniteCave_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GraniteCave_FlashCheck
	.2byte 0


GraniteCave_FlashCheck::
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, GraniteCave_FlashCheck_2
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_FlashCheck_4
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkNeedFlash
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 20
# 39 "data/maps/GraniteCave_B1F/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 17, 11
# 41 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	return

GraniteCave_FlashCheck_2:
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	releaseall
	return

GraniteCave_FlashCheck_4:
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox Common_Text_CaveIsDarkUseFlash
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_M_REFLECT
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 20
# 26 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	animateflash 0
# 28 "data/maps/GraniteCave_B1F/scripts.pory"
	setflashlevel 0
# 29 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	return

