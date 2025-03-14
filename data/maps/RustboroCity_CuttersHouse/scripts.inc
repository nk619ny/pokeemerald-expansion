RustboroCity_CuttersHouse_MapScripts::
	.byte 0


RustboroCity_CuttersHouse_EventScript_Lass::
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	end


RustboroCity_CuttersHouse_EventScript_Cutter::
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_Cutter_Text_0, MSGBOX_NPC
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end


RustboroCity_CuttersHouse_EventScript_Cutter_Text_0:
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I see, your Pokémon already know how to\n"
	.string "cut down trees!\p"
	.string "It's amazing all the things Pokémon can\n"
	.string "do.$"

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
	.string "RUSTBORO, my dad helped out.\p"
	.string "He made his POKéMON use CUT to clear\n"
	.string "the land of trees.$"
