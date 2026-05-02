Glacier_Summit_MapScripts::
	.byte 0


Glacier_Summit_EventScript_AvalancheHiker::
# 5 "data/maps/Glacier_Summit/scripts.pory"
	lock
# 6 "data/maps/Glacier_Summit/scripts.pory"
	faceplayer
# 7 "data/maps/Glacier_Summit/scripts.pory"
	checkitem ITEM_TM_AVALANCHE
# 8 "data/maps/Glacier_Summit/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Glacier_Summit_EventScript_AvalancheHiker_2
# 15 "data/maps/Glacier_Summit/scripts.pory"
	msgbox Glacier_Summit_EventScript_AvalancheHiker_Text_1, MSGBOX_NPC
# 16 "data/maps/Glacier_Summit/scripts.pory"
	closemessage
Glacier_Summit_EventScript_AvalancheHiker_1:
# 18 "data/maps/Glacier_Summit/scripts.pory"
	releaseall
	end

Glacier_Summit_EventScript_AvalancheHiker_2:
# 9 "data/maps/Glacier_Summit/scripts.pory"
	msgbox Glacier_Summit_EventScript_AvalancheHiker_Text_0, MSGBOX_NPC
# 10 "data/maps/Glacier_Summit/scripts.pory"
	closemessage
# 11 "data/maps/Glacier_Summit/scripts.pory"
	giveitem ITEM_TM_AVALANCHE
# 12 "data/maps/Glacier_Summit/scripts.pory"
	waitfanfare
	goto Glacier_Summit_EventScript_AvalancheHiker_1


Glacier_Summit_EventScript_AvalancheHiker_Text_0:
# 9 "data/maps/Glacier_Summit/scripts.pory"
	.string "It's rare to run into other folks up on\n"
	.string "this glacier! You must know what you're\l"
	.string "doing.\p"
	.string "Still, you can never be too careful.\p"
	.string "A careless step can spell danger not\n"
	.string "just for you, but others, too.$"

Glacier_Summit_EventScript_AvalancheHiker_Text_1:
# 15 "data/maps/Glacier_Summit/scripts.pory"
	.string "Exploring nature always takes my\n"
	.string "breath away. But it's important we do it\l"
	.string "responsibly.$"
