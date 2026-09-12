# 1 "data/maps/TradeCenter/scripts.pory"

# 2 "data/maps/TradeCenter/scripts.pory"
TradeCenter_MapScripts::
# 3 "data/maps/TradeCenter/scripts.pory"
	.byte 0
# 4 "data/maps/TradeCenter/scripts.pory"

# 5 "data/maps/TradeCenter/scripts.pory"

# 6 "data/maps/TradeCenter/scripts.pory"
Common_Text_PlayerReceivedEevee:
# 7 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} received Eevee!$"
# 8 "data/maps/TradeCenter/scripts.pory"

# 9 "data/maps/TradeCenter/scripts.pory"
Common_Text_PlayerReceivedCosplayPikachu:
# 10 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} received Cosplay Pikachu!$"
# 11 "data/maps/TradeCenter/scripts.pory"

# 12 "data/maps/TradeCenter/scripts.pory"
/*
# 13 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor1 {
# 14 "data/maps/TradeCenter/scripts.pory"
	lock
# 15 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Fire Punch",1)
# 16 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Ice Punch",2)
# 17 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Dragon Dance",3)
# 18 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 19 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 20 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 21 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 22 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_FIRE_PUNCH)
# 23 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Fire Punch")
# 24 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 25 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_ICE_PUNCH)
# 26 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Ice Punch")
# 27 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 28 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_DRAGON_DANCE)
# 29 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Dragon Dance")
# 30 "data/maps/TradeCenter/scripts.pory"
		default:
# 31 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 32 "data/maps/TradeCenter/scripts.pory"
			return
# 33 "data/maps/TradeCenter/scripts.pory"
	}
# 34 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 35 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 36 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 37 "data/maps/TradeCenter/scripts.pory"
	lock
# 38 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 39 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 40 "data/maps/TradeCenter/scripts.pory"
	return
# 41 "data/maps/TradeCenter/scripts.pory"
}
# 42 "data/maps/TradeCenter/scripts.pory"

# 43 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_FullTutorList {
# 44 "data/maps/TradeCenter/scripts.pory"
	//physical
# 45 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blaze Kick",1)
# 46 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Press",2)
# 47 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Slam",3)
# 48 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bounce",4)
# 49 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brutal Swing",5)
# 50 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bug Bite",6)
# 51 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bulldoze",7)
# 52 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Darkest Lariat",8)
# 53 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Endeavor",9)
# 54 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Explosion",10)
# 55 "data/maps/TradeCenter/scripts.pory"
	False Swipe
# 56 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Fang",11)
# 57 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Punch",12)
# 58 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Giga Impact",13)
# 59 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gyro Ball",14)
# 60 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hard Press",15)
# 61 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Headbutt",16)
# 62 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Heavy Slam",17)
# 63 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ice Fang",18)
# 64 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Icicle Spear",19)
# 65 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Tail",20)
# 66 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Lash Out",21)
# 67 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Leaf Blade",22)
# 68 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Low Kick",23)
# 69 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Megahorn",24)
# 70 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Claw",25)
# 71 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Phantom Force",26)
# 72 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poison Tail",27)
# 73 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poltergeist",28)
# 74 "data/maps/TradeCenter/scripts.pory"
	Pounce
# 75 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power Whip",29)
# 76 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power-Up Punch",30)
# 77 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Razor Shell",31)
# 78 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Retaliate",32)
# 79 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rock Blast",33)
# 80 "data/maps/TradeCenter/scripts.pory"
	Rock Climb
# 81 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rollout",34)
# 82 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sand Tomb",35)
# 83 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Secret Power",36)
# 84 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Self-Destruct",37)
# 85 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sky Drop",38)
# 86 "data/maps/TradeCenter/scripts.pory"
	Smart Strike
# 87 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Super Fang",39)
# 88 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tail Slap",40)
# 89 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Take Down",41)
# 90 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Thunder Fang",42)
# 91 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trailblaze",43)
# 92 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Triple Axel",44)
# 93 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Upper Hand",45)
# 94 "data/maps/TradeCenter/scripts.pory"

# 95 "data/maps/TradeCenter/scripts.pory"

# 96 "data/maps/TradeCenter/scripts.pory"
   // special
# 97 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Air Cutter",1)
# 98 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Alluring Voice",2)
# 99 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aura Sphere",3)
# 100 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blast Burn",4)
# 101 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brine",5)
# 102 "data/maps/TradeCenter/scripts.pory"
	Burning Jealousy
# 103 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Disarming Voice",6)
# 104 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dream Eater",7)
# 105 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Echoed Voice",8)
# 106 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electro Ball",9)
# 107 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electroweb",10)
# 108 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Pledge",11)
# 109 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Spin",12)
# 110 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Blast",13)
# 111 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frenzy Plant",14)
# 112 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frost Breath",15)
# 113 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Future Sight",16)
# 114 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grass Pledge",17)
# 115 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hydro Cannon",18)
# 116 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Incinerate",19)
# 117 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Infestation",20)
# 118 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magical Leaf",21)
# 119 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Explosion",22)
# 120 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud Shot",23)
# 121 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud-Slap",24)
# 122 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mystical Fire",25)
# 123 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Night Shade",26)
# 124 "data/maps/TradeCenter/scripts.pory"
	Ominous Wind
# 125 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pollen Puff",27)
# 126 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psybeam",28)
# 127 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Noise",29)
# 128 "data/maps/TradeCenter/scripts.pory"
	Psycho Boost
# 129 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Round",30)
# 130 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Shock Wave",31)
# 131 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Silver Wind",32)
# 132 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stored Power",33)
# 133 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tri Attack",34)
# 134 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Uproar",35)
# 135 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Water Pledge",36)
# 136 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Whirlpool",37)
# 137 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Zap Cannon",38)
# 138 "data/maps/TradeCenter/scripts.pory"

# 139 "data/maps/TradeCenter/scripts.pory"

# 140 "data/maps/TradeCenter/scripts.pory"

# 141 "data/maps/TradeCenter/scripts.pory"

# 142 "data/maps/TradeCenter/scripts.pory"

# 143 "data/maps/TradeCenter/scripts.pory"
    // status/other (alphabetical, numbering restarts at 1)
# 144 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Agility",1)
# 145 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ally Switch",2)
# 146 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aurora Veil",3)
# 147 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Charge",4)
# 148 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Coaching",5)
# 149 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Confuse Ray",6)
# 150 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Cosmic Power",7)
# 151 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Curse",8)
# 152 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Cheer",9)
# 153 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Dance",10)
# 154 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electric Terrain",11)
# 155 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Embargo",12)
# 156 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fake Tears",13)
# 157 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Feather Dance",14)
# 158 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grassy Terrain",15)
# 159 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gravity",16)
# 160 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hone Claws",17)
# 161 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Imprison",18)
# 162 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Defense",19)
# 163 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magic Room",20)
# 164 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Sound",21)
# 165 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metronome",22)
# 166 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Terrain",23)
# 167 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Nature Power",24)
# 168 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pain Split",25)
# 169 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psych Up",26)
# 170 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Terrain",27)
# 171 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Quash",28)
# 172 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rain Dance",29)
# 173 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Recycle",30)
# 174 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sandstorm",31)
# 175 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Scary Face",32)
# 176 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snatch",33)
# 177 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snowscape",34)
# 178 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spikes",35)
# 179 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spite",36)
# 180 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stealth Rock",37)
# 181 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sunny Day",38)
# 182 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Swagger",39)
# 183 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Toxic Spikes",40)
# 184 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trick",41)
# 185 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Venom Drench",42)
# 186 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Wonder Room",43)
# 187 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Work Up",44)
# 188 "data/maps/TradeCenter/scripts.pory"

# 189 "data/maps/TradeCenter/scripts.pory"
    return
# 190 "data/maps/TradeCenter/scripts.pory"
}
# 191 "data/maps/TradeCenter/scripts.pory"

# 192 "data/maps/TradeCenter/scripts.pory"

# 193 "data/maps/TradeCenter/scripts.pory"
*/
# 194 "data/maps/TradeCenter/scripts.pory"

# 195 "data/maps/TradeCenter/scripts.pory"
/*
# 196 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor2 {
# 197 "data/maps/TradeCenter/scripts.pory"
	lock
# 198 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Power-Up Punch",1)
# 199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Brutal Swing",2)
# 200 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Stealth Rock",3)
# 201 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 202 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 203 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 204 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 205 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_POWER_UP_PUNCH)
# 206 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Power-Up Punch")
# 207 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 208 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_BRUTAL_SWING)
# 209 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Brutal Swing")
# 210 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 211 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_STEALTH_ROCK)
# 212 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Stealth Rock")
# 213 "data/maps/TradeCenter/scripts.pory"
		default:
# 214 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 215 "data/maps/TradeCenter/scripts.pory"
			return
# 216 "data/maps/TradeCenter/scripts.pory"
	}
# 217 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 218 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 219 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 220 "data/maps/TradeCenter/scripts.pory"
	lock
# 221 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 222 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 223 "data/maps/TradeCenter/scripts.pory"
	return
# 224 "data/maps/TradeCenter/scripts.pory"
}
# 225 "data/maps/TradeCenter/scripts.pory"
*/
# 226 "data/maps/TradeCenter/scripts.pory"

# 227 "data/maps/TradeCenter/scripts.pory"
/*
# 228 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves {
# 229 "data/maps/TradeCenter/scripts.pory"
	lock
# 230 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 231 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 232 "data/maps/TradeCenter/scripts.pory"
	}
# 233 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 234 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_ByBasePower)
# 235 "data/maps/TradeCenter/scripts.pory"
	}
# 236 "data/maps/TradeCenter/scripts.pory"
	else {
# 237 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked)
# 238 "data/maps/TradeCenter/scripts.pory"
	}
# 239 "data/maps/TradeCenter/scripts.pory"
}
# 240 "data/maps/TradeCenter/scripts.pory"

# 241 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves {
# 242 "data/maps/TradeCenter/scripts.pory"
	lock
# 243 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 244 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 245 "data/maps/TradeCenter/scripts.pory"
	}
# 246 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 247 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_ByBasePower)
# 248 "data/maps/TradeCenter/scripts.pory"
	}
# 249 "data/maps/TradeCenter/scripts.pory"
	else {
# 250 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked)
# 251 "data/maps/TradeCenter/scripts.pory"
	}
# 252 "data/maps/TradeCenter/scripts.pory"
}
# 253 "data/maps/TradeCenter/scripts.pory"

# 254 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves {
# 255 "data/maps/TradeCenter/scripts.pory"
	lock
# 256 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 257 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 258 "data/maps/TradeCenter/scripts.pory"
	}
# 259 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 260 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_ByBasePower)
# 261 "data/maps/TradeCenter/scripts.pory"
	}
# 262 "data/maps/TradeCenter/scripts.pory"
	else {
# 263 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_RecentlyUnlocked)
# 264 "data/maps/TradeCenter/scripts.pory"
	}
# 265 "data/maps/TradeCenter/scripts.pory"
}
# 266 "data/maps/TradeCenter/scripts.pory"

# 267 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_ByBasePower {
# 268 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 269 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 270 "data/maps/TradeCenter/scripts.pory"
}
# 271 "data/maps/TradeCenter/scripts.pory"

# 272 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked {
# 273 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 274 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 275 "data/maps/TradeCenter/scripts.pory"
}
# 276 "data/maps/TradeCenter/scripts.pory"

# 277 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_ByBasePower {
# 278 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 279 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 280 "data/maps/TradeCenter/scripts.pory"
}
# 281 "data/maps/TradeCenter/scripts.pory"

# 282 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked {
# 283 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 284 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 285 "data/maps/TradeCenter/scripts.pory"
}
# 286 "data/maps/TradeCenter/scripts.pory"

# 287 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_ByBasePower {
# 288 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 289 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 290 "data/maps/TradeCenter/scripts.pory"
}
# 291 "data/maps/TradeCenter/scripts.pory"

# 292 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_RecentlyUnlocked {
# 293 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 294 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 295 "data/maps/TradeCenter/scripts.pory"
}
# 296 "data/maps/TradeCenter/scripts.pory"
*/

Common_EventScript_LevelCapUpdate::
# 302 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 303 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_LevelCapUpdate_Text_0, MSGBOX_DEFAULT
# 304 "data/maps/TradeCenter/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 305 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
# 306 "data/maps/TradeCenter/scripts.pory"
	closemessage
	return


Common_EventScript_SetStartingFlagStates::
# 311 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 312 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_ROUTE_127_TRAINERS
# 313 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 314 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 315 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 316 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_TRAINER_HILL_AUDIENCE
# 317 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 318 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 319 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 320 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_FUSION_TUTOR
# 321 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 322 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Common_EventScript_ApplyHandicap::
# 327 "data/maps/TradeCenter/scripts.pory"
	switch VAR_LEVEL_HANDICAP
# 328 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ApplyHandicap_3
# 330 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_ApplyHandicap_4
# 332 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_ApplyHandicap_5
# 334 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_ApplyHandicap_6
# 336 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_ApplyHandicap_7
# 338 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_ApplyHandicap_8
# 340 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_ApplyHandicap_9
# 342 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_ApplyHandicap_10
# 344 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_ApplyHandicap_11
# 346 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_ApplyHandicap_12
# 348 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_ApplyHandicap_13
	return

Common_EventScript_ApplyHandicap_1:
# 353 "data/maps/TradeCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 100
	goto_if_gt Common_EventScript_ApplyHandicap_16
Common_EventScript_ApplyHandicap_15:
	return

Common_EventScript_ApplyHandicap_3:
	return

Common_EventScript_ApplyHandicap_4:
# 331 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_5:
# 333 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_6:
# 335 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_7:
# 337 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_8:
# 339 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_9:
# 341 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_10:
# 343 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_11:
# 345 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_12:
# 347 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_13:
# 349 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_16:
# 354 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 100
	goto Common_EventScript_ApplyHandicap_15


# 367 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStep:
# 368 "data/maps/TradeCenter/scripts.pory"
	walk_down
	step_end

# 371 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStep:
# 372 "data/maps/TradeCenter/scripts.pory"
	walk_up
	step_end

# 375 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkLeftOneStep:
# 376 "data/maps/TradeCenter/scripts.pory"
	walk_left
	step_end

# 379 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkRightOneStep:
# 380 "data/maps/TradeCenter/scripts.pory"
	walk_right
	step_end

# 383 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStepFast:
# 384 "data/maps/TradeCenter/scripts.pory"
	walk_fast_down
	step_end

# 387 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStepFast:
# 388 "data/maps/TradeCenter/scripts.pory"
	walk_fast_up
	step_end

Common_EventScript_SetFlashTest::
# 392 "data/maps/TradeCenter/scripts.pory"
	lock
# 393 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_SetFlashTest_Text_0, MSGBOX_YESNO
# 394 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_SetFlashTest_2
# 397 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_SetFlashTest_3
Common_EventScript_SetFlashTest_1:
# 400 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_SetFlashTest_2:
# 395 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1

Common_EventScript_SetFlashTest_3:
# 398 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1


Common_EventScript_CheckIfHideoutsComplete::
# 405 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, Common_EventScript_CheckIfHideoutsComplete_4
Common_EventScript_CheckIfHideoutsComplete_3:
# 411 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 66
Common_EventScript_CheckIfHideoutsComplete_1:
	return

Common_EventScript_CheckIfHideoutsComplete_2:
# 406 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_BOTH_HIDEOUTS_COMPLETE
# 407 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 68
# 408 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
	goto Common_EventScript_CheckIfHideoutsComplete_1

Common_EventScript_CheckIfHideoutsComplete_4:
# 405 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Common_EventScript_CheckIfHideoutsComplete_2
	goto Common_EventScript_CheckIfHideoutsComplete_3


# 416 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceLeft:
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 420 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 420 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 421 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

# 424 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceRight:
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 426 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 427 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 428 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 428 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 429 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

Common_EventScript_CheckIfEliteFourComplete::
# 434 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, Common_EventScript_CheckIfEliteFourComplete_5
Common_EventScript_CheckIfEliteFourComplete_3:
# 438 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_ALL_ELITE_FOUR_BEATEN
Common_EventScript_CheckIfEliteFourComplete_1:
	return

Common_EventScript_CheckIfEliteFourComplete_2:
# 435 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ALL_ELITE_FOUR_BEATEN
	goto Common_EventScript_CheckIfEliteFourComplete_1

Common_EventScript_CheckIfEliteFourComplete_4:
# 434 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, Common_EventScript_CheckIfEliteFourComplete_8
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_5:
# 434 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, Common_EventScript_CheckIfEliteFourComplete_4
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_8:
# 434 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, Common_EventScript_CheckIfEliteFourComplete_2
	goto Common_EventScript_CheckIfEliteFourComplete_3


MauvilleCity_EventScript_Temporary::
# 444 "data/maps/TradeCenter/scripts.pory"
	lock
# 448 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_ELECTABUZZ, 15, ITEM_EVIOLITE, , , 0, , , , , , , , , , , , , , MOVE_BLOCK, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH
# 449 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_MAGMAR, 15, ITEM_EVIOLITE, , , 0, , , , , , , , , , , , , , MOVE_BLOCK, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH
# 450 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_FURRET, 15, , , , 0, , , , , , , , , , , , , , MOVE_BLOCK, MOVE_COVET, MOVE_DRAIN_PUNCH
# 451 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_LINOONE, 15, , , , 0, , , , , , , , , , , , , , MOVE_BLOCK, MOVE_THIEF, MOVE_DRAIN_PUNCH
# 452 "data/maps/TradeCenter/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
# 506 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScipt_CheckForBerryTreeEncounter::
# 511 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_PREVENT_WILD_ENCOUNTERS, Common_EventScipt_CheckForBerryTreeEncounter_1
# 515 "data/maps/TradeCenter/scripts.pory"
	random 100
# 516 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_lt Common_EventScipt_CheckForBerryTreeEncounter_4
	return

Common_EventScipt_CheckForBerryTreeEncounter_1:
	return

Common_EventScipt_CheckForBerryTreeEncounter_4:
# 517 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounter
	return


Common_EventScript_BerryTreeEncounter::
# 526 "data/maps/TradeCenter/scripts.pory"
	lock
# 527 "data/maps/TradeCenter/scripts.pory"
	switch VAR_0x8004
# 528 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_SPROUTED, Common_EventScript_BerryTreeEncounter_3
# 534 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_TALLER, Common_EventScript_BerryTreeEncounter_4
# 540 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_FLOWERING, Common_EventScript_BerryTreeEncounter_5
# 546 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_BERRIES, Common_EventScript_BerryTreeEncounter_6
# 553 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_1:
# 556 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_3:
# 529 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeSproutedEncounter
# 530 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeSproutEncounter, MSGBOX_DEFAULT
# 531 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 532 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 533 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_4:
# 535 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeTallEncounter
# 536 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeTallEncounter, MSGBOX_DEFAULT
# 537 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 538 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 539 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_5:
# 541 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounter
# 542 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeFlowersEncounter, MSGBOX_DEFAULT
# 543 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 544 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 545 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_6:
# 547 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeBerriesEncounter
# 548 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeBerriesEncounter, MSGBOX_DEFAULT
# 549 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 550 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 551 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1


Common_EventScript_BerryTreeSproutedEncounter::
# 562 "data/maps/TradeCenter/scripts.pory"
	random 100
# 563 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_2
# 566 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_3
# 569 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_4
# 572 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_5
# 575 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_6
# 579 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_7
# 582 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_8
# 585 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_9
# 589 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeSproutedEncounter_19
# 593 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeSproutedEncounter_1:
	return

Common_EventScript_BerryTreeSproutedEncounter_2:
# 564 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_3:
# 567 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_4:
# 570 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_5:
# 573 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_BURMY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_6:
# 577 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeSproutedEncounter_Scatterbug
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_7:
# 580 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_LEDYBA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_8:
# 583 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPINARAK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_9:
# 586 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SHROOMISH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_19:
# 590 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HERACROSS, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1


Common_EventScript_BerryTreeTallEncounter::
# 600 "data/maps/TradeCenter/scripts.pory"
	random 100
# 601 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_2
# 604 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_3
# 607 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_4
# 610 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_5
# 613 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_6
# 616 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_7
# 619 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_8
# 622 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_9
# 626 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeTallEncounter_19
# 630 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeTallEncounter_1:
	return

Common_EventScript_BerryTreeTallEncounter_2:
# 602 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPEAROW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_3:
# 605 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_4:
# 608 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_TAILLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_5:
# 611 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_STARLY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_6:
# 614 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PIKIPEK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_7:
# 617 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VENONAT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_8:
# 620 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_9:
# 623 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SLAKOTH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_19:
# 627 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EMOLGA, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1


Common_EventScript_BerryTreeFlowersEncounter::
# 637 "data/maps/TradeCenter/scripts.pory"
	random 100
# 638 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_2
# 641 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_3
# 644 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_4
# 647 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_5
# 650 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_6
# 653 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_7
# 656 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_8
# 660 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_9
# 669 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_22
# 673 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeFlowersEncounter_1:
	return

Common_EventScript_BerryTreeFlowersEncounter_2:
# 639 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_COMBEE, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_3:
# 642 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CHERUBI, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_4:
# 645 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CUTIEFLY, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_5:
# 648 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PINECO, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_6:
# 651 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_7:
# 654 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_8:
# 657 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounterFlabebe
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_9:
# 661 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_19
# 665 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_19:
# 662 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_ILLUMISE, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_22:
# 670 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VOLBEAT, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1


Common_EventScript_BerryTreeBerriesEncounter::
# 680 "data/maps/TradeCenter/scripts.pory"
	random 100
# 681 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_2
# 684 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_3
# 687 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_4
# 690 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_5
# 693 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_6
# 696 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_7
# 699 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_8
# 703 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 12, ITEM_BERRY_JUICE
Common_EventScript_BerryTreeBerriesEncounter_1:
	return

Common_EventScript_BerryTreeBerriesEncounter_2:
# 682 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CRABRAWLER, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_3:
# 685 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_4:
# 688 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_AIPOM, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_5:
# 691 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSAGE, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_6:
# 694 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSEAR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_7:
# 697 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANPOUR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_8:
# 700 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_APPLIN, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1


Common_EventScript_BerryTreeSproutedEncounter_Scatterbug::
# 709 "data/maps/TradeCenter/scripts.pory"
	random 20
# 710 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 711 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_3
# 713 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_4
# 715 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_5
# 717 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_6
# 719 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_7
# 721 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_8
# 723 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_9
# 725 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_10
# 727 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_11
# 729 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_12
# 731 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_13
# 733 "data/maps/TradeCenter/scripts.pory"
	case 11, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_14
# 735 "data/maps/TradeCenter/scripts.pory"
	case 12, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_15
# 737 "data/maps/TradeCenter/scripts.pory"
	case 13, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_16
# 739 "data/maps/TradeCenter/scripts.pory"
	case 14, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_17
# 741 "data/maps/TradeCenter/scripts.pory"
	case 15, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_18
# 743 "data/maps/TradeCenter/scripts.pory"
	case 16, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_19
# 745 "data/maps/TradeCenter/scripts.pory"
	case 17, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_20
# 747 "data/maps/TradeCenter/scripts.pory"
	case 18, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_21
# 749 "data/maps/TradeCenter/scripts.pory"
	case 19, Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_22
Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1:
	return

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_3:
# 712 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ICY_SNOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_4:
# 714 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_POLAR, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_5:
# 716 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_TUNDRA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_6:
# 718 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_CONTINENTAL, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_7:
# 720 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_GARDEN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_8:
# 722 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ELEGANT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_9:
# 724 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MEADOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_10:
# 726 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MODERN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_11:
# 728 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MARINE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_12:
# 730 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_ARCHIPELAGO, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_13:
# 732 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_HIGH_PLAINS, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_14:
# 734 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SANDSTORM, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_15:
# 736 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_RIVER, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_16:
# 738 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_MONSOON, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_17:
# 740 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SAVANNA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_18:
# 742 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_SUN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_19:
# 744 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_OCEAN, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_20:
# 746 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_JUNGLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_21:
# 748 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_FANCY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1

Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_22:
# 750 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_POKEBALL, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_Scatterbug_1


Common_EventScript_BerryTreeEncounterFled::
# 756 "data/maps/TradeCenter/scripts.pory"
	lock
# 757 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_BerryTreeEncounterFled_Text_0, MSGBOX_DEFAULT
# 758 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 759 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 760 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_BerryTreeFlowersEncounterFlabebe::
# 781 "data/maps/TradeCenter/scripts.pory"
	random 4
# 782 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 783 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_BerryTreeFlowersEncounterFlabebe_3
# 785 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_BerryTreeFlowersEncounterFlabebe_4
# 787 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_BerryTreeFlowersEncounterFlabebe_5
# 789 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_BerryTreeFlowersEncounterFlabebe_6
# 792 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_WHITE, 12, ITEM_NONE
Common_EventScript_BerryTreeFlowersEncounterFlabebe_1:
	return

Common_EventScript_BerryTreeFlowersEncounterFlabebe_3:
# 784 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_RED, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_4:
# 786 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_BLUE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_5:
# 788 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_YELLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_6:
# 790 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_ORANGE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1


Common_EventScript_RemoveOptionalItems0::
# 798 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 800 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_X_ACCURACY
# 801 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_NORTH_NEW
# 802 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE
# 804 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE
# 805 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL
# 806 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION
# 809 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL
# 810 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POKE_BALL
	return


Common_EventScript_RemoveOptionalItems1::
# 815 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 816 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL
# 817 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_ETHER
# 818 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE
# 819 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL
# 820 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1
# 821 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2
# 822 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_HAUNTED_MANOR_1F_HP_UP
# 823 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_HAUNTED_MANOR_1F_PP_MAX
# 824 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_RARE_CANDY
	return


Common_EventScript_RemoveOptionalItems2::
# 829 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_ELIXIR
# 830 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL
# 831 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 832 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_DIRE_HIT
# 833 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_PP_UP
# 834 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_GUARD_SPEC
# 835 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE
# 836 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_VITAMIN
# 837 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MAUVILLE_CITY_X_SPEED
# 838 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_117_REPEL
# 839 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_117_IRON
# 840 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_REVIVE
# 841 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_HP_UP
# 842 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES
# 843 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_ELIXIR
# 844 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_X_ATTACK
# 845 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL
# 846 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_1_QUICK_CLAW
	return


Common_EventScript_RemoveOptionalItems3::
# 852 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
# 853 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_CARBOS
# 854 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_GREAT_BALL
# 855 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_SUPER_REPEL
# 856 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_TM_DOUBLE_TEAM
# 857 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_ETHER
# 858 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET
# 859 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_MAX_ETHER
# 860 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_HYPER_POTION
# 861 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_ENERGY_POWDER
# 862 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_RARE_CANDY
# 863 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE
# 864 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS
# 865 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_PROTEIN
# 866 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL
# 867 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_JAGGED_PASS_BURN_HEAL
# 868 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_JAGGED_PASS_VITAMIN
# 869 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL
# 870 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_135_PROTEIN
# 871 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_135_CALCIUM
# 872 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL
# 873 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL
# 874 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_CHIMNEY_HP_UP
# 875 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_CHIMNEY_CALCIUM
# 876 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_VITAMIN
# 877 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_HEART_SCALE
	return


Common_EventScript_RemoveOptionalItems4::
# 882 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_PP_UP
# 883 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_RUSTBORO_CITY_X_DEFEND
# 885 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_GREAT_BALL
# 886 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_SUPER_POTION
# 887 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_REPEL
# 888 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_ETHER
# 889 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION
# 890 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_POTION
# 891 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_X_SPECIAL
# 892 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL
# 893 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST
# 894 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY
# 895 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_STARDUST
# 896 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_TM_SANDSTORM
# 897 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ICE_CAVE_IRON
# 898 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL
# 899 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL
# 900 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE
# 901 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
	return


Common_EventScript_RemoveOptionalItems5::
# 906 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL
# 907 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_4_LOADED_DICE
	return


Common_EventScript_RemoveOptionalItems6::
# 912 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_IRON
# 913 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_118_HYPER_POTION
# 914 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ULTRA_BALL
# 915 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE
# 916 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_SUPER_REPEL
# 917 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL
# 918 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_1
# 921 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_2
# 922 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_1
# 923 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_2
# 925 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_RARE_CANDY
# 926 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_NUGGET
# 927 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 928 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
# 929 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_5_HEART_SCALE
# 930 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_HEART_SCALE
# 931 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_HEAL_POWDER
# 932 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_IRON
	return


Common_EventScript_RemoveOptionalItemsBoating::
# 937 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
# 938 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
# 939 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_105_IRON
# 940 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_106_PROTEIN
# 941 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_108_STAR_PIECE
# 942 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY
# 943 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3
# 944 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_PP_UP
# 945 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_POTION
# 946 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL
# 947 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE
# 948 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE
# 949 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ABANDONED_SHIP_VITAMIN
# 950 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_108_VITAMIN
# 951 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_107_HP_UP
# 952 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_107_VITAMIN
# 953 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ABANDONED_SHIP_ROOM1F_VITAMIN
	return


Common_EventScript_RemoveOptionalItems7PreSurf::
# 958 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 959 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
# 960 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_REVIVE
# 961 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2
# 962 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NUGGET
# 963 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_ZINC
# 964 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_HYPER_POTION
# 965 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_FULL_HEAL
# 966 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP
# 967 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_CARBOS
# 968 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE
# 969 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET
# 970 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL
# 971 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_REVIVE
# 972 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_ZINC
# 979 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_CALCIUM
# 980 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_PP_UP
# 981 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_REVIVAL_HERB
# 982 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_PROTEIN
# 983 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL
# 984 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION
# 985 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP
# 986 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY
# 987 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ELIXIR
# 989 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL
# 990 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL
# 991 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE
# 992 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE
# 993 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_2F_VITAMIN
# 995 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_125_BIG_PEARL
# 996 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_125_VITAMIN
	return


Common_EventScript_RemoveOptionalItems7PostSurf::
	return


Common_EventScript_RemoveOptionalItems8::
# 1008 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_ZINC
# 1009 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_CARBOS
# 1010 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_RARE_CANDY
# 1011 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2
# 1012 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1
# 1013 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3
# 1014 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_PROTEIN
# 1015 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_RARE_CANDY
# 1016 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_BIG_PEARL
# 1017 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_STAR_PIECE
# 1018 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_MAX_REVIVE
# 1019 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_CARBOS
# 1020 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_STAR_PIECE
# 1021 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL
# 1022 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_6_COVERT_CLOAK
# 1023 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_130_PROTEIN
# 1025 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_RED_SHARD
# 1026 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_YELLOW_SHARD
# 1027 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_BLUE_SHARD
# 1028 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_126_GREEN_SHARD
# 1029 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM
# 1030 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD
# 1031 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2
# 1032 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1
# 1033 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL
# 1034 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL
# 1035 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS
# 1038 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD
# 1039 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL
# 1040 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON
# 1041 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD
# 1042 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL
# 1043 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE
# 1044 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST
# 1045 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL
# 1046 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN
# 1048 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP
# 1049 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD
# 1050 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE
# 1051 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE
# 1052 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL
# 1054 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_131_ZINC
	return


Common_EventScript_BasicMoveTutor::
# 1060 "data/maps/TradeCenter/scripts.pory"
	lock
# 1061 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1062 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Common_EventScript_BasicMoveTutor_2
Common_EventScript_BasicMoveTutor_1:
# 1065 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_1
# 1066 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1067 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetPhysicalMoveList
# 1068 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_SelectMoveCategory
# 1069 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_BasicMoveTutor_2:
# 1063 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_BasicMoveTutor_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_BasicMoveTutor_1


MoveTutor_EventScript_NotReadyYet::
# 1074 "data/maps/TradeCenter/scripts.pory"
	lock
# 1075 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_NotReadyYet_Text_0, MSGBOX_DEFAULT
# 1076 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1077 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return


MoveTutor_EventScript_SetSorting::
# 1095 "data/maps/TradeCenter/scripts.pory"
	lock
# 1096 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1097 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_B, MoveTutor_EventScript_SetSorting_2
MoveTutor_EventScript_SetSorting_1:
# 1100 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_B
# 1101 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_1, MSGBOX_DEFAULT
# 1102 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 8, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SetSorting_Text_2, MoveTutor_EventScript_SetSorting_Text_3
# 1103 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1104 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SetSorting_6
# 1108 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SetSorting_7
# 1113 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_6, MSGBOX_DEFAULT
MoveTutor_EventScript_SetSorting_4:
# 1115 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1116 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SetSorting_2:
# 1098 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_0, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_1

MoveTutor_EventScript_SetSorting_6:
# 1105 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 1106 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 1107 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_4, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_4

MoveTutor_EventScript_SetSorting_7:
# 1109 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 1110 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 1111 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_5, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_4


PokemonCenter_2F_EventScript_ExplainTutors::
# 1121 "data/maps/TradeCenter/scripts.pory"
	lock
# 1122 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1123 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_A, PokemonCenter_2F_EventScript_ExplainTutors_2
PokemonCenter_2F_EventScript_ExplainTutors_1:
# 1127 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_A
# 1128 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_1, MSGBOX_DEFAULT
# 1129 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_2F_EventScript_ExplainTutors_Text_2, PokemonCenter_2F_EventScript_ExplainTutors_Text_3, PokemonCenter_2F_EventScript_ExplainTutors_Text_4, PokemonCenter_2F_EventScript_ExplainTutors_Text_5, PokemonCenter_2F_EventScript_ExplainTutors_Text_6, PokemonCenter_2F_EventScript_ExplainTutors_Text_7
# 1130 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1131 "data/maps/TradeCenter/scripts.pory"
	case 0, PokemonCenter_2F_EventScript_ExplainTutors_6
# 1133 "data/maps/TradeCenter/scripts.pory"
	case 1, PokemonCenter_2F_EventScript_ExplainTutors_7
# 1139 "data/maps/TradeCenter/scripts.pory"
	case 2, PokemonCenter_2F_EventScript_ExplainTutors_8
# 1145 "data/maps/TradeCenter/scripts.pory"
	case 3, PokemonCenter_2F_EventScript_ExplainTutors_9
# 1147 "data/maps/TradeCenter/scripts.pory"
	case 4, PokemonCenter_2F_EventScript_ExplainTutors_10
# 1150 "data/maps/TradeCenter/scripts.pory"
	closemessage
PokemonCenter_2F_EventScript_ExplainTutors_4:
# 1152 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_EventScript_ExplainTutors_2:
# 1124 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_0, MSGBOX_DEFAULT
# 1125 "data/maps/TradeCenter/scripts.pory"
	closemessage
	goto PokemonCenter_2F_EventScript_ExplainTutors_1

PokemonCenter_2F_EventScript_ExplainTutors_6:
# 1132 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_8, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_7:
# 1134 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_9, MSGBOX_DEFAULT
# 1135 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1136 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, PokemonCenter_2F_EventScript_ExplainTutors_12
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_8:
# 1140 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_11, MSGBOX_DEFAULT
# 1141 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1142 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, PokemonCenter_2F_EventScript_ExplainTutors_14
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_9:
# 1146 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_13, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_10:
# 1148 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_14, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_12:
# 1137 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_10, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4

PokemonCenter_2F_EventScript_ExplainTutors_14:
# 1143 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ExplainTutors_Text_12, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_ExplainTutors_4


MoveTutor_EventScript_SelectMoveCategory::
# 1157 "data/maps/TradeCenter/scripts.pory"
	lock
# 1158 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1159 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SelectMoveCategory_Text_0, MSGBOX_DEFAULT
# 1160 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SelectMoveCategory_Text_1, MoveTutor_EventScript_SelectMoveCategory_Text_2, MoveTutor_EventScript_SelectMoveCategory_Text_3
# 1161 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1162 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SelectMoveCategory_3
# 1164 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SelectMoveCategory_4
# 1166 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_SelectMoveCategory_5
# 1169 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_SelectMoveCategory_1:
# 1171 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1172 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SelectMoveCategory_3:
# 1163 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetPhysicalMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_4:
# 1165 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetSpecialMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_5:
# 1167 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetStatusMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1


MoveTutor_EventScript_GetPhysicalMoveList::
# 1177 "data/maps/TradeCenter/scripts.pory"
	lock
# 1178 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetPhysicalMoveList_2
MoveTutor_EventScript_GetPhysicalMoveList_1:
# 1182 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetPhysicalMoveList_5
MoveTutor_EventScript_GetPhysicalMoveList_4:
# 1186 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetPhysicalMoveList_8
MoveTutor_EventScript_GetPhysicalMoveList_7:
# 1193 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetPhysicalMoveList_11
MoveTutor_EventScript_GetPhysicalMoveList_10:
# 1201 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetPhysicalMoveList_14
MoveTutor_EventScript_GetPhysicalMoveList_13:
# 1212 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetPhysicalMoveList_17
MoveTutor_EventScript_GetPhysicalMoveList_16:
# 1222 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetPhysicalMoveList_20
MoveTutor_EventScript_GetPhysicalMoveList_19:
# 1230 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetPhysicalMoveList_23
MoveTutor_EventScript_GetPhysicalMoveList_22:
# 1238 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetPhysicalMoveList_26
MoveTutor_EventScript_GetPhysicalMoveList_25:
# 1244 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_48, 11
# 1245 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachPhysicalMove
	return

MoveTutor_EventScript_GetPhysicalMoveList_2:
# 1179 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_0, 2
# 1180 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_1, 48
	goto MoveTutor_EventScript_GetPhysicalMoveList_1

MoveTutor_EventScript_GetPhysicalMoveList_5:
# 1183 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_2, 29
# 1184 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_3, 41
	goto MoveTutor_EventScript_GetPhysicalMoveList_4

MoveTutor_EventScript_GetPhysicalMoveList_8:
# 1187 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_4, 10
# 1188 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_5, 25
# 1189 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_6, 31
# 1190 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_7, 23
# 1191 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_8, 49
	goto MoveTutor_EventScript_GetPhysicalMoveList_7

MoveTutor_EventScript_GetPhysicalMoveList_11:
# 1194 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_9, 9
# 1195 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_10, 27
# 1196 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_11, 8
# 1197 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_12, 34
# 1198 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_13, 5
# 1199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_14, 32
	goto MoveTutor_EventScript_GetPhysicalMoveList_10

MoveTutor_EventScript_GetPhysicalMoveList_14:
# 1202 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_15, 15
# 1203 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_16, 18
# 1204 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_17, 14
# 1205 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_18, 3
# 1206 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_19, 22
# 1207 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_20, 33
# 1208 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_21, 20
# 1209 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_22, 35
# 1210 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_23, 44
	goto MoveTutor_EventScript_GetPhysicalMoveList_13

MoveTutor_EventScript_GetPhysicalMoveList_17:
# 1213 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_24, 16
# 1214 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_25, 40
# 1215 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_26, 36
# 1216 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_27, 45
# 1217 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_28, 1
# 1218 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_29, 4
# 1219 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_30, 39
# 1220 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_31, 47
	goto MoveTutor_EventScript_GetPhysicalMoveList_16

MoveTutor_EventScript_GetPhysicalMoveList_20:
# 1223 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_32, 21
# 1224 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_33, 17
# 1225 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_34, 42
# 1226 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_35, 12
# 1227 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_36, 19
# 1228 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_37, 46
	goto MoveTutor_EventScript_GetPhysicalMoveList_19

MoveTutor_EventScript_GetPhysicalMoveList_23:
# 1231 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_38, 24
# 1232 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_39, 13
# 1233 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_40, 6
# 1234 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_41, 7
# 1235 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_42, 38
# 1236 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_43, 37
	goto MoveTutor_EventScript_GetPhysicalMoveList_22

MoveTutor_EventScript_GetPhysicalMoveList_26:
# 1239 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_44, 43
# 1240 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_45, 26
# 1241 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_46, 28
# 1242 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_47, 30
	goto MoveTutor_EventScript_GetPhysicalMoveList_25


MoveTutor_EventScript_GetSpecialMoveList::
# 1249 "data/maps/TradeCenter/scripts.pory"
	lock
# 1250 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetSpecialMoveList_2
MoveTutor_EventScript_GetSpecialMoveList_1:
# 1253 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetSpecialMoveList_5
MoveTutor_EventScript_GetSpecialMoveList_4:
# 1260 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetSpecialMoveList_8
MoveTutor_EventScript_GetSpecialMoveList_7:
# 1265 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetSpecialMoveList_11
MoveTutor_EventScript_GetSpecialMoveList_10:
# 1274 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetSpecialMoveList_14
MoveTutor_EventScript_GetSpecialMoveList_13:
# 1280 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetSpecialMoveList_17
MoveTutor_EventScript_GetSpecialMoveList_16:
# 1287 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetSpecialMoveList_20
MoveTutor_EventScript_GetSpecialMoveList_19:
# 1295 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetSpecialMoveList_23
MoveTutor_EventScript_GetSpecialMoveList_22:
# 1304 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetSpecialMoveList_26
MoveTutor_EventScript_GetSpecialMoveList_25:
# 1310 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachSpecialMove
	return

MoveTutor_EventScript_GetSpecialMoveList_2:
# 1251 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_0, 2
	goto MoveTutor_EventScript_GetSpecialMoveList_1

MoveTutor_EventScript_GetSpecialMoveList_5:
# 1254 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_1, 17
# 1255 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_2, 3
# 1256 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_3, 26
# 1257 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_4, 31
# 1258 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_5, 37
	goto MoveTutor_EventScript_GetSpecialMoveList_4

MoveTutor_EventScript_GetSpecialMoveList_8:
# 1261 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_6, 10
# 1262 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_7, 23
# 1263 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_8, 29
	goto MoveTutor_EventScript_GetSpecialMoveList_7

MoveTutor_EventScript_GetSpecialMoveList_11:
# 1266 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_9, 4
# 1267 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_10, 15
# 1268 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_11, 19
# 1269 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_12, 14
# 1270 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_13, 12
# 1271 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_14, 18
# 1272 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_15, 40
	goto MoveTutor_EventScript_GetSpecialMoveList_10

MoveTutor_EventScript_GetSpecialMoveList_14:
# 1275 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_16, 32
# 1276 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_17, 8
# 1277 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_18, 38
# 1278 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_19, 28
	goto MoveTutor_EventScript_GetSpecialMoveList_13

MoveTutor_EventScript_GetSpecialMoveList_17:
# 1281 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_20, 42
# 1282 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_21, 39
# 1283 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_22, 30
# 1284 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_23, 6
# 1285 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_24, 20
	goto MoveTutor_EventScript_GetSpecialMoveList_16

MoveTutor_EventScript_GetSpecialMoveList_20:
# 1288 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_25, 27
# 1289 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_26, 35
# 1290 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_27, 5
# 1291 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_28, 16
# 1292 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_29, 34
# 1293 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_30, 36
	goto MoveTutor_EventScript_GetSpecialMoveList_19

MoveTutor_EventScript_GetSpecialMoveList_23:
# 1296 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_31, 1
# 1297 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_32, 22
# 1298 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_33, 33
# 1299 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_34, 11
# 1300 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_35, 24
# 1301 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_36, 13
# 1302 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_37, 41
	goto MoveTutor_EventScript_GetSpecialMoveList_22

MoveTutor_EventScript_GetSpecialMoveList_26:
# 1305 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_38, 7
# 1306 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_39, 9
# 1307 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_40, 21
# 1308 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_41, 25
	goto MoveTutor_EventScript_GetSpecialMoveList_25


MoveTutor_EventScript_GetStatusMoveList::
# 1314 "data/maps/TradeCenter/scripts.pory"
	lock
# 1316 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MoveTutor_EventScript_GetStatusMoveList_2
MoveTutor_EventScript_GetStatusMoveList_1:
# 1326 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetStatusMoveList_5
MoveTutor_EventScript_GetStatusMoveList_4:
# 1329 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetStatusMoveList_8
MoveTutor_EventScript_GetStatusMoveList_7:
# 1336 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetStatusMoveList_11
MoveTutor_EventScript_GetStatusMoveList_10:
# 1341 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetStatusMoveList_14
MoveTutor_EventScript_GetStatusMoveList_13:
# 1349 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetStatusMoveList_17
MoveTutor_EventScript_GetStatusMoveList_16:
# 1355 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetStatusMoveList_20
MoveTutor_EventScript_GetStatusMoveList_19:
# 1362 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetStatusMoveList_23
MoveTutor_EventScript_GetStatusMoveList_22:
# 1370 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetStatusMoveList_26
MoveTutor_EventScript_GetStatusMoveList_25:
# 1374 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetStatusMoveList_29
MoveTutor_EventScript_GetStatusMoveList_28:
# 1382 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachStatusMove
	return

MoveTutor_EventScript_GetStatusMoveList_2:
# 1317 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_0, 11
# 1318 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_1, 15
# 1319 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_2, 23
# 1320 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_3, 27
# 1321 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_4, 29
# 1322 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_5, 31
# 1323 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_6, 34
# 1324 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_7, 39
	goto MoveTutor_EventScript_GetStatusMoveList_1

MoveTutor_EventScript_GetStatusMoveList_5:
# 1327 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_8, 3
	goto MoveTutor_EventScript_GetStatusMoveList_4

MoveTutor_EventScript_GetStatusMoveList_8:
# 1330 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_9, 2
# 1331 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_10, 7
# 1332 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_11, 16
# 1333 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_12, 18
# 1334 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_13, 20
	goto MoveTutor_EventScript_GetStatusMoveList_7

MoveTutor_EventScript_GetStatusMoveList_11:
# 1337 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_14, 9
# 1338 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_15, 10
# 1339 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_16, 14
	goto MoveTutor_EventScript_GetStatusMoveList_10

MoveTutor_EventScript_GetStatusMoveList_14:
# 1342 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_17, 13
# 1343 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_18, 25
# 1344 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_19, 26
# 1345 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_20, 41
# 1346 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_21, 42
# 1347 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_22, 43
	goto MoveTutor_EventScript_GetStatusMoveList_13

MoveTutor_EventScript_GetStatusMoveList_17:
# 1350 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_23, 8
# 1351 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_24, 19
# 1352 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_25, 37
# 1353 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_26, 44
	goto MoveTutor_EventScript_GetStatusMoveList_16

MoveTutor_EventScript_GetStatusMoveList_20:
# 1356 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_27, 1
# 1357 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_28, 21
# 1358 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_29, 24
# 1359 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_30, 38
# 1360 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_31, 33
	goto MoveTutor_EventScript_GetStatusMoveList_19

MoveTutor_EventScript_GetStatusMoveList_23:
# 1363 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_32, 4
# 1364 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_33, 6
# 1365 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_34, 12
# 1366 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_35, 22
# 1367 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_36, 30
# 1368 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_37, 35
	goto MoveTutor_EventScript_GetStatusMoveList_22

MoveTutor_EventScript_GetStatusMoveList_26:
# 1371 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_38, 5
# 1372 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_39, 17
	goto MoveTutor_EventScript_GetStatusMoveList_25

MoveTutor_EventScript_GetStatusMoveList_29:
# 1375 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_40, 28
# 1376 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_41, 32
# 1377 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_42, 36
# 1378 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_43, 40
# 1379 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_44, 45
	goto MoveTutor_EventScript_GetStatusMoveList_28


MoveTutor_EventScript_TeachPhysicalMove::
# 1387 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1388 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachPhysicalMove_2
# 1392 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachPhysicalMove_1:
# 1395 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1396 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachPhysicalMove_7
# 1399 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachPhysicalMove_8
# 1402 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachPhysicalMove_9
# 1405 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachPhysicalMove_10
# 1408 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachPhysicalMove_11
# 1411 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachPhysicalMove_12
# 1414 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachPhysicalMove_13
# 1417 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachPhysicalMove_14
# 1420 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachPhysicalMove_15
# 1423 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachPhysicalMove_16
# 1426 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachPhysicalMove_17
# 1429 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachPhysicalMove_18
# 1432 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachPhysicalMove_19
# 1435 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachPhysicalMove_20
# 1438 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachPhysicalMove_21
# 1441 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachPhysicalMove_22
# 1444 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachPhysicalMove_23
# 1447 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachPhysicalMove_24
# 1450 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachPhysicalMove_25
# 1453 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachPhysicalMove_26
# 1456 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachPhysicalMove_27
# 1459 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachPhysicalMove_28
# 1462 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachPhysicalMove_29
# 1465 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachPhysicalMove_30
# 1468 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachPhysicalMove_31
# 1471 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachPhysicalMove_32
# 1474 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachPhysicalMove_33
# 1477 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachPhysicalMove_34
# 1480 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachPhysicalMove_35
# 1483 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachPhysicalMove_36
# 1486 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachPhysicalMove_37
# 1489 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachPhysicalMove_38
# 1492 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachPhysicalMove_39
# 1495 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachPhysicalMove_40
# 1498 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachPhysicalMove_41
# 1501 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachPhysicalMove_42
# 1504 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachPhysicalMove_43
# 1507 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachPhysicalMove_44
# 1510 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachPhysicalMove_45
# 1513 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachPhysicalMove_46
# 1516 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachPhysicalMove_47
# 1519 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachPhysicalMove_48
# 1522 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachPhysicalMove_49
# 1525 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachPhysicalMove_50
# 1528 "data/maps/TradeCenter/scripts.pory"
	case 45, MoveTutor_EventScript_TeachPhysicalMove_51
# 1531 "data/maps/TradeCenter/scripts.pory"
	case 46, MoveTutor_EventScript_TeachPhysicalMove_52
# 1534 "data/maps/TradeCenter/scripts.pory"
	case 47, MoveTutor_EventScript_TeachPhysicalMove_53
# 1537 "data/maps/TradeCenter/scripts.pory"
	case 48, MoveTutor_EventScript_TeachPhysicalMove_54
# 1540 "data/maps/TradeCenter/scripts.pory"
	case 49, MoveTutor_EventScript_TeachPhysicalMove_55
# 1544 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachPhysicalMove_5:
# 1546 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1547 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1548 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1549 "data/maps/TradeCenter/scripts.pory"
	lock
# 1550 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1551 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachPhysicalMove_2:
# 1389 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachPhysicalMove_1

MoveTutor_EventScript_TeachPhysicalMove_7:
# 1397 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
# 1398 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_28
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_8:
# 1400 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 1401 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_0
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_9:
# 1403 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 1404 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_18
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_10:
# 1406 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
# 1407 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_29
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_11:
# 1409 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
# 1410 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_13
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_12:
# 1412 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
# 1413 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_40
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_13:
# 1415 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLDOZE
# 1416 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_41
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_14:
# 1418 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DARKEST_LARIAT
# 1419 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_11
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_15:
# 1421 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDEAVOR
# 1422 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_9
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_16:
# 1424 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 1425 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_4
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_17:
# 1427 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
# 1428 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_48
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_18:
# 1430 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 1431 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_35
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_19:
# 1433 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
# 1434 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_39
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_20:
# 1436 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GIGA_IMPACT
# 1437 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_17
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_21:
# 1439 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 1440 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_15
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_22:
# 1442 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HARD_PRESS
# 1443 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_24
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_23:
# 1445 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADBUTT
# 1446 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_33
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_24:
# 1448 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAVY_SLAM
# 1449 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_16
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_25:
# 1451 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 1452 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_36
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_26:
# 1454 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 1455 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_21
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_27:
# 1457 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
# 1458 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_32
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_28:
# 1460 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
# 1461 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_19
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_29:
# 1463 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
# 1464 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_7
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_30:
# 1466 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 1467 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_38
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_31:
# 1469 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGAHORN
# 1470 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_5
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_32:
# 1472 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 1473 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_45
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_33:
# 1475 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
# 1476 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_10
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_34:
# 1478 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 1479 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_46
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_35:
# 1481 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 1482 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_2
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_36:
# 1484 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
# 1485 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_47
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_37:
# 1487 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
# 1488 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_6
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_38:
# 1490 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
# 1491 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_14
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_39:
# 1493 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 1494 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_20
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_40:
# 1496 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RETALIATE
# 1497 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_12
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_41:
# 1499 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 1500 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_22
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_42:
# 1502 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_CLIMB
# 1503 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_26
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_43:
# 1505 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 1506 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_43
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_44:
# 1508 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SAND_TOMB
# 1509 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_42
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_45:
# 1511 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_POWER
# 1512 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_30
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_46:
# 1514 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SELF_DESTRUCT
# 1515 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_25
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_47:
# 1517 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_DROP
# 1518 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_3
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_48:
# 1520 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SMART_STRIKE
# 1521 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_34
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_49:
# 1523 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
# 1524 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_44
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_50:
# 1526 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_SLAP
# 1527 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_23
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_51:
# 1529 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAKE_DOWN
# 1530 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_27
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_52:
# 1532 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 1533 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_37
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_53:
# 1535 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
# 1536 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_31
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_54:
# 1538 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
# 1539 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_1
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_55:
# 1541 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 1542 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_8
	goto MoveTutor_EventScript_TeachPhysicalMove_5


MoveTutor_EventScript_TeachSpecialMove::
# 1557 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1558 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachSpecialMove_2
# 1562 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachSpecialMove_1:
# 1565 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1566 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachSpecialMove_7
# 1569 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachSpecialMove_8
# 1572 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachSpecialMove_9
# 1575 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachSpecialMove_10
# 1578 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachSpecialMove_11
# 1581 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachSpecialMove_12
# 1584 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachSpecialMove_13
# 1587 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachSpecialMove_14
# 1590 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachSpecialMove_15
# 1593 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachSpecialMove_16
# 1596 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachSpecialMove_17
# 1599 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachSpecialMove_18
# 1602 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachSpecialMove_19
# 1605 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachSpecialMove_20
# 1608 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachSpecialMove_21
# 1611 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachSpecialMove_22
# 1614 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachSpecialMove_23
# 1617 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachSpecialMove_24
# 1620 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachSpecialMove_25
# 1623 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachSpecialMove_26
# 1626 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachSpecialMove_27
# 1629 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachSpecialMove_28
# 1632 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachSpecialMove_29
# 1635 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachSpecialMove_30
# 1638 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachSpecialMove_31
# 1641 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachSpecialMove_32
# 1644 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachSpecialMove_33
# 1647 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachSpecialMove_34
# 1650 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachSpecialMove_35
# 1653 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachSpecialMove_36
# 1656 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachSpecialMove_37
# 1659 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachSpecialMove_38
# 1662 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachSpecialMove_39
# 1665 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachSpecialMove_40
# 1668 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachSpecialMove_41
# 1671 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachSpecialMove_42
# 1674 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachSpecialMove_43
# 1677 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachSpecialMove_44
# 1680 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachSpecialMove_45
# 1683 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachSpecialMove_46
# 1686 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachSpecialMove_47
# 1689 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachSpecialMove_48
# 1693 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachSpecialMove_5:
# 1695 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1696 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1697 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1698 "data/maps/TradeCenter/scripts.pory"
	lock
# 1699 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1700 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachSpecialMove_2:
# 1559 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachSpecialMove_1

MoveTutor_EventScript_TeachSpecialMove_7:
# 1567 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_CUTTER
# 1568 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_31
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_8:
# 1570 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
# 1571 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_0
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_9:
# 1573 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 1574 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_2
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_10:
# 1576 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
# 1577 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_9
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_11:
# 1579 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRINE
# 1580 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_27
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_12:
# 1582 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 1583 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_23
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_13:
# 1585 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DISARMING_VOICE
# 1586 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_38
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_14:
# 1588 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 1589 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_17
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_15:
# 1591 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ECHOED_VOICE
# 1592 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_39
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_16:
# 1594 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
# 1595 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_6
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_17:
# 1597 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
# 1598 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_34
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_18:
# 1600 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
# 1601 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_13
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_19:
# 1603 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_SPIN
# 1604 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_36
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_20:
# 1606 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
# 1607 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_12
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_21:
# 1609 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
# 1610 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_10
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_22:
# 1612 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FROST_BREATH
# 1613 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_28
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_23:
# 1615 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 1616 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_1
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_24:
# 1618 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
# 1619 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_14
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_25:
# 1621 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
# 1622 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_11
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_26:
# 1624 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
# 1625 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_24
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_27:
# 1627 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INFESTATION
# 1628 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_40
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_28:
# 1630 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
# 1631 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_32
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_29:
# 1633 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
# 1634 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_7
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_30:
# 1636 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SHOT
# 1637 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_35
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_31:
# 1639 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 1640 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_41
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_32:
# 1642 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 1643 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_3
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_33:
# 1645 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 1646 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_25
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_34:
# 1648 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
# 1649 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_19
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_35:
# 1651 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 1652 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_8
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_36:
# 1654 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYBEAM
# 1655 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_22
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_37:
# 1657 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 1658 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_4
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_38:
# 1660 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_BOOST
# 1661 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_16
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_39:
# 1663 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROUND
# 1664 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_33
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_40:
# 1666 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
# 1667 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_29
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_41:
# 1669 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
# 1670 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_26
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_42:
# 1672 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
# 1673 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_30
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_43:
# 1675 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STORED_POWER
# 1676 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_5
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_44:
# 1678 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRI_ATTACK
# 1679 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_18
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_45:
# 1681 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPROAR
# 1682 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_21
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_46:
# 1684 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
# 1685 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_15
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_47:
# 1687 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WHIRLPOOL
# 1688 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_37
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_48:
# 1690 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ZAP_CANNON
# 1691 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_20
	goto MoveTutor_EventScript_TeachSpecialMove_5


MoveTutor_EventScript_TeachStatusMove::
# 1706 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1707 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachStatusMove_2
# 1711 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachStatusMove_1:
# 1714 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1715 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachStatusMove_7
# 1718 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachStatusMove_8
# 1721 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachStatusMove_9
# 1724 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachStatusMove_10
# 1727 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachStatusMove_11
# 1730 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachStatusMove_12
# 1733 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachStatusMove_13
# 1736 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachStatusMove_14
# 1739 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachStatusMove_15
# 1742 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachStatusMove_16
# 1745 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachStatusMove_17
# 1748 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachStatusMove_18
# 1751 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachStatusMove_19
# 1754 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachStatusMove_20
# 1757 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachStatusMove_21
# 1760 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachStatusMove_22
# 1763 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachStatusMove_23
# 1766 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachStatusMove_24
# 1769 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachStatusMove_25
# 1772 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachStatusMove_26
# 1775 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachStatusMove_27
# 1778 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachStatusMove_28
# 1781 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachStatusMove_29
# 1784 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachStatusMove_30
# 1787 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachStatusMove_31
# 1790 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachStatusMove_32
# 1793 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachStatusMove_33
# 1796 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachStatusMove_34
# 1799 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachStatusMove_35
# 1802 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachStatusMove_36
# 1805 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachStatusMove_37
# 1808 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachStatusMove_38
# 1811 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachStatusMove_39
# 1814 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachStatusMove_40
# 1817 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachStatusMove_41
# 1820 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachStatusMove_42
# 1823 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachStatusMove_43
# 1826 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachStatusMove_44
# 1829 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachStatusMove_45
# 1832 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachStatusMove_46
# 1835 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachStatusMove_47
# 1838 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachStatusMove_48
# 1841 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachStatusMove_49
# 1844 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachStatusMove_50
# 1847 "data/maps/TradeCenter/scripts.pory"
	case 45, MoveTutor_EventScript_TeachStatusMove_51
# 1851 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachStatusMove_5:
# 1853 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1854 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1855 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1856 "data/maps/TradeCenter/scripts.pory"
	lock
# 1857 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1858 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachStatusMove_2:
# 1708 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachStatusMove_1

MoveTutor_EventScript_TeachStatusMove_7:
# 1716 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
# 1717 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_27
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_8:
# 1719 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLY_SWITCH
# 1720 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_9
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_9:
# 1722 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
# 1723 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_8
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_10:
# 1725 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARGE
# 1726 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_32
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_11:
# 1728 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COACHING
# 1729 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_38
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_12:
# 1731 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFUSE_RAY
# 1732 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_33
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_13:
# 1734 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COSMIC_POWER
# 1735 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_10
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_14:
# 1737 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CURSE
# 1738 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_23
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_15:
# 1740 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CHEER
# 1741 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_14
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_16:
# 1743 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
# 1744 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_15
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_17:
# 1746 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
# 1747 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_0
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_18:
# 1749 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EMBARGO
# 1750 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_34
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_19:
# 1752 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_TEARS
# 1753 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_17
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_20:
# 1755 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FEATHER_DANCE
# 1756 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_16
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_21:
# 1758 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
# 1759 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_1
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_22:
# 1761 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRAVITY
# 1762 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_11
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_23:
# 1764 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
# 1765 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_39
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_24:
# 1767 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IMPRISON
# 1768 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_12
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_25:
# 1770 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
# 1771 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_24
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_26:
# 1773 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
# 1774 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_13
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_27:
# 1776 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_SOUND
# 1777 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_28
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_28:
# 1779 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 1780 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_35
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_29:
# 1782 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
# 1783 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_2
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_30:
# 1785 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NATURE_POWER
# 1786 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_29
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_31:
# 1788 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
# 1789 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_18
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_32:
# 1791 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 1792 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_19
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_33:
# 1794 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
# 1795 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_3
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_34:
# 1797 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_QUASH
# 1798 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_40
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_35:
# 1800 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
# 1801 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_4
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_36:
# 1803 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
# 1804 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_36
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_37:
# 1806 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
# 1807 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_5
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_38:
# 1809 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SCARY_FACE
# 1810 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_41
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_39:
# 1812 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNATCH
# 1813 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_31
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_40:
# 1815 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNOWSCAPE
# 1816 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_6
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_41:
# 1818 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
# 1819 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_37
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_42:
# 1821 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPITE
# 1822 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_42
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_43:
# 1824 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
# 1825 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_25
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_44:
# 1827 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STEELSURGE
# 1828 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_30
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_45:
# 1830 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
# 1831 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_7
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_46:
# 1833 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 1834 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_43
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_47:
# 1836 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 1837 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_20
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_48:
# 1839 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 1840 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_21
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_49:
# 1842 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOM_DRENCH
# 1843 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_22
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_50:
# 1845 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WONDER_ROOM
# 1846 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_26
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_51:
# 1848 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WORK_UP
# 1849 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_44
	goto MoveTutor_EventScript_TeachStatusMove_5


MoveTutor_EventScript_ComeBackLater::
# 1863 "data/maps/TradeCenter/scripts.pory"
	lock
# 1864 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 1865 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1866 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_PreDamageOrStatus::
# 1871 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1872 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1873 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_4, Common_EventScript_PreDamageOrStatus_2
Common_EventScript_PreDamageOrStatus_1:
# 1876 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_4
# 1877 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_PreDamageOrStatus_Text_1, MSGBOX_DEFAULT
# 1878 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_PreDamageOrStatus_Text_2, Common_EventScript_PreDamageOrStatus_Text_3, Common_EventScript_PreDamageOrStatus_Text_4
# 1879 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1880 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_PreDamageOrStatus_6
# 1882 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_PreDamageOrStatus_7
# 1884 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_PreDamageOrStatus_8
Common_EventScript_PreDamageOrStatus_4:
# 1887 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_PreDamageOrStatus_2:
# 1874 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_PreDamageOrStatus_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_PreDamageOrStatus_1

Common_EventScript_PreDamageOrStatus_6:
# 1881 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_InflictStatusMenu
	goto Common_EventScript_PreDamageOrStatus_4

Common_EventScript_PreDamageOrStatus_7:
# 1883 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_SetHPMenu
	goto Common_EventScript_PreDamageOrStatus_4

Common_EventScript_PreDamageOrStatus_8:
# 1885 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_PreTrain_ComeBackLater
	goto Common_EventScript_PreDamageOrStatus_4


PokemonCenter_2F_EventScript_PreTrain_ComeBackLater::
# 1892 "data/maps/TradeCenter/scripts.pory"
	lock
# 1893 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_PreTrain_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 1894 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1895 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_EventScript_SetHPMenu::
# 1900 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1901 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1902 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_0, MSGBOX_DEFAULT
# 1903 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1904 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1905 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_SetHPMenu_2
# 1909 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1910 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_5
# 1915 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonCurrentHP
# 1916 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_8
# 1922 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1924 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonMaxHP
# 1925 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 1927 "data/maps/TradeCenter/scripts.pory"
	special OpenNumericInput
# 1928 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1929 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_11
# 1935 "data/maps/TradeCenter/scripts.pory"
	special SetPartyMonHP
# 1936 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_14
# 1940 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_15
# 1943 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_SetHPMenu_16
PokemonCenter_2F_EventScript_SetHPMenu_13:
# 1946 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_2:
# 1906 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_5:
# 1911 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_1, MSGBOX_DEFAULT
# 1912 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_8:
# 1917 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_2, MSGBOX_DEFAULT
# 1918 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_11:
# 1931 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_SetHPMenu_14:
# 1937 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 1938 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_3, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13

PokemonCenter_2F_EventScript_SetHPMenu_15:
# 1941 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_4, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13

PokemonCenter_2F_EventScript_SetHPMenu_16:
# 1944 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_SetHPMenu_Text_5, MSGBOX_DEFAULT
	goto PokemonCenter_2F_EventScript_SetHPMenu_13


PokemonCenter_2F_EventScript_InflictStatusMenu::
# 1951 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1952 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1953 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 1954 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_2
# 1959 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1, MSGBOX_DEFAULT
# 1960 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1961 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1962 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1963 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_InflictStatusMenu_5
# 1967 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1968 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_8
# 1972 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, STATUS1_POISON
# 1973 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3, STATUS1_TOXIC_POISON
# 1974 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4, STATUS1_PARALYSIS
# 1975 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5, STATUS1_SLEEP
# 1976 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6, STATUS1_BURN
# 1977 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7, STATUS1_FREEZE
# 1979 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8, MSGBOX_DEFAULT
# 1980 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, 255
# 1981 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_11
# 1985 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1986 "data/maps/TradeCenter/scripts.pory"
	special GetPartyMonTypes
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
PokemonCenter_2F_EventScript_InflictStatusMenu_39:
# 1993 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
# 1993 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
PokemonCenter_2F_EventScript_InflictStatusMenu_32:
# 1999 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
# 1999 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
PokemonCenter_2F_EventScript_InflictStatusMenu_27:
# 2005 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
# 2005 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
PokemonCenter_2F_EventScript_InflictStatusMenu_22:
# 2011 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
# 2011 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
PokemonCenter_2F_EventScript_InflictStatusMenu_19:
# 2019 "data/maps/TradeCenter/scripts.pory"
	special InflictStatus
# 2020 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13, MSGBOX_DEFAULT
# 2021 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2023 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_2:
# 1955 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 1956 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_5:
# 1964 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_8:
# 1969 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_11:
# 1982 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_14:
# 1988 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1989 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1990 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_15:
# 1994 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1995 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1996 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_16:
# 2000 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10, MSGBOX_DEFAULT
# 2001 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2002 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_17:
# 2006 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11, MSGBOX_DEFAULT
# 2007 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2008 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_18:
# 2012 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12, MSGBOX_DEFAULT
# 2013 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2014 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_20:
# 2011 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_PARALYSIS
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_18
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_19

PokemonCenter_2F_EventScript_InflictStatusMenu_25:
# 2005 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_BURN
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_17
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_22

PokemonCenter_2F_EventScript_InflictStatusMenu_30:
# 1999 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FREEZE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
# 1999 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FROSTBITE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_27

PokemonCenter_2F_EventScript_InflictStatusMenu_37:
# 1993 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
# 1993 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_32

PokemonCenter_2F_EventScript_InflictStatusMenu_44:
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
# 1987 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_39


Common_EventScript_AttributeChanger::
# 2028 "data/maps/TradeCenter/scripts.pory"
	lockall
# 2029 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2030 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_5, Common_EventScript_AttributeChanger_2
Common_EventScript_AttributeChanger_1:
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_AttributeChanger_5
# 2039 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_5
# 2040 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2041 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_Text_1, MSGBOX_DEFAULT
# 2042 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, Common_EventScript_AttributeChanger_Text_2, Common_EventScript_AttributeChanger_Text_3, Common_EventScript_AttributeChanger_Text_4, Common_EventScript_AttributeChanger_Text_5
# 2043 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2044 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_AttributeChanger_9
# 2046 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_AttributeChanger_10
# 2048 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_AttributeChanger_11
# 2050 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_AttributeChanger_12
# 2053 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_AttributeChanger_ComeBackLater
Common_EventScript_AttributeChanger_7:
# 2055 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_AttributeChanger_2:
# 2031 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_AttributeChanger_1

Common_EventScript_AttributeChanger_5:
# 2034 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2035 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_5
# 2036 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_AttributeChanger_9:
# 2045 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_ChangeNature
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_10:
# 2047 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_ChangeIV
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_11:
# 2049 "data/maps/TradeCenter/scripts.pory"
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType
	goto Common_EventScript_AttributeChanger_7

Common_EventScript_AttributeChanger_12:
# 2051 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_AttributeChanger_ComeBackLater
	goto Common_EventScript_AttributeChanger_7


Common_EventScript_AttributeChanger_ComeBackLater::
# 2060 "data/maps/TradeCenter/scripts.pory"
	lock
# 2061 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_AttributeChanger_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 2062 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2063 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_EventScript_ChangeHiddenPowerType::
# 2068 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2069 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2
# 2074 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0, MSGBOX_DEFAULT
# 2075 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2076 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2077 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2078 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5
# 2082 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2083 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8
# 2087 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2089 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1, MSGBOX_DEFAULT
# 2090 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2, TYPE_FIGHTING
# 2091 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3, TYPE_FLYING
# 2092 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, TYPE_POISON
# 2093 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4, TYPE_GROUND
# 2094 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5, TYPE_ROCK
# 2095 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6, TYPE_BUG
# 2096 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7, TYPE_GHOST
# 2097 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8, TYPE_STEEL
# 2098 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9, TYPE_FIRE
# 2099 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10, TYPE_WATER
# 2100 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11, TYPE_GRASS
# 2101 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12, TYPE_ELECTRIC
# 2102 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13, TYPE_PSYCHIC
# 2103 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14, TYPE_ICE
# 2104 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15, TYPE_DRAGON
# 2105 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16, TYPE_DARK
# 2106 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17, TYPE_FAIRY
# 2107 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2108 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2109 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIGHTING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12
# 2111 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FLYING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13
# 2113 "data/maps/TradeCenter/scripts.pory"
	case TYPE_POISON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14
# 2115 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GROUND, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15
# 2117 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ROCK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16
# 2119 "data/maps/TradeCenter/scripts.pory"
	case TYPE_BUG, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17
# 2121 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GHOST, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18
# 2123 "data/maps/TradeCenter/scripts.pory"
	case TYPE_STEEL, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19
# 2125 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIRE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20
# 2127 "data/maps/TradeCenter/scripts.pory"
	case TYPE_WATER, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21
# 2129 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GRASS, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22
# 2131 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ELECTRIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23
# 2133 "data/maps/TradeCenter/scripts.pory"
	case TYPE_PSYCHIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24
# 2135 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ICE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25
# 2137 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DRAGON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26
# 2139 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DARK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27
# 2141 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FAIRY, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28
# 2143 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29
# 2149 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2150 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2151 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2:
# 2070 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2071 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5:
# 2079 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8:
# 2084 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10:
# 2154 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2155 "data/maps/TradeCenter/scripts.pory"
	special ComparePartyMonTeraType
# 2156 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32
# 2162 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20, MSGBOX_YESNO
# 2163 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34
# 2172 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2173 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2174 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12:
# 2110 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13:
# 2112 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14:
# 2114 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15:
# 2116 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16:
# 2118 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17:
# 2120 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18:
# 2122 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19:
# 2124 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20:
# 2126 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21:
# 2128 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22:
# 2130 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23:
# 2132 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24:
# 2134 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25:
# 2136 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26:
# 2138 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27:
# 2140 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28:
# 2142 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29:
# 2144 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 2145 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2146 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32:
# 2157 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19, MSGBOX_DEFAULT
# 2158 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2159 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34:
# 2164 "data/maps/TradeCenter/scripts.pory"
	special ChangeTeraType
# 2165 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21, MSGBOX_DEFAULT
# 2166 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2167 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2168 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_ChangeNature::
# 2181 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2182 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ChangeNature_2
# 2187 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_0, MSGBOX_DEFAULT
# 2188 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2189 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2190 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge Common_EventScript_ChangeNature_5
# 2194 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2195 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Common_EventScript_ChangeNature_8
# 2199 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2200 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_1, MSGBOX_DEFAULT
# 2201 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_2, NATURE_HARDY
# 2202 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_3, NATURE_LONELY
# 2203 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_4, NATURE_BRAVE
# 2204 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_5, NATURE_ADAMANT
# 2205 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_6, NATURE_NAUGHTY
# 2206 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_7, NATURE_BOLD
# 2207 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_8, NATURE_DOCILE
# 2208 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_9, NATURE_RELAXED
# 2209 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_10, NATURE_IMPISH
# 2210 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_11, NATURE_LAX
# 2211 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_12, NATURE_TIMID
# 2212 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_13, NATURE_HASTY
# 2213 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_14, NATURE_SERIOUS
# 2214 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_15, NATURE_JOLLY
# 2215 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_16, NATURE_NAIVE
# 2216 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_17, NATURE_MODEST
# 2217 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_18, NATURE_MILD
# 2218 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_19, NATURE_QUIET
# 2219 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_20, NATURE_BASHFUL
# 2220 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_21, NATURE_RASH
# 2221 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_22, NATURE_CALM
# 2222 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_23, NATURE_GENTLE
# 2223 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_24, NATURE_SASSY
# 2224 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_25, NATURE_CAREFUL
# 2225 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeNature_Text_26, NATURE_QUIRKY
# 2226 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2227 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2228 "data/maps/TradeCenter/scripts.pory"
	case NATURE_HARDY, Common_EventScript_ChangeNature_12
# 2230 "data/maps/TradeCenter/scripts.pory"
	case NATURE_LONELY, Common_EventScript_ChangeNature_13
# 2232 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BRAVE, Common_EventScript_ChangeNature_14
# 2234 "data/maps/TradeCenter/scripts.pory"
	case NATURE_ADAMANT, Common_EventScript_ChangeNature_15
# 2236 "data/maps/TradeCenter/scripts.pory"
	case NATURE_NAUGHTY, Common_EventScript_ChangeNature_16
# 2238 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BOLD, Common_EventScript_ChangeNature_17
# 2240 "data/maps/TradeCenter/scripts.pory"
	case NATURE_DOCILE, Common_EventScript_ChangeNature_18
# 2242 "data/maps/TradeCenter/scripts.pory"
	case NATURE_RELAXED, Common_EventScript_ChangeNature_19
# 2244 "data/maps/TradeCenter/scripts.pory"
	case NATURE_IMPISH, Common_EventScript_ChangeNature_20
# 2246 "data/maps/TradeCenter/scripts.pory"
	case NATURE_LAX, Common_EventScript_ChangeNature_21
# 2248 "data/maps/TradeCenter/scripts.pory"
	case NATURE_TIMID, Common_EventScript_ChangeNature_22
# 2250 "data/maps/TradeCenter/scripts.pory"
	case NATURE_HASTY, Common_EventScript_ChangeNature_23
# 2252 "data/maps/TradeCenter/scripts.pory"
	case NATURE_SERIOUS, Common_EventScript_ChangeNature_24
# 2254 "data/maps/TradeCenter/scripts.pory"
	case NATURE_JOLLY, Common_EventScript_ChangeNature_25
# 2256 "data/maps/TradeCenter/scripts.pory"
	case NATURE_NAIVE, Common_EventScript_ChangeNature_26
# 2258 "data/maps/TradeCenter/scripts.pory"
	case NATURE_MODEST, Common_EventScript_ChangeNature_27
# 2260 "data/maps/TradeCenter/scripts.pory"
	case NATURE_MILD, Common_EventScript_ChangeNature_28
# 2262 "data/maps/TradeCenter/scripts.pory"
	case NATURE_QUIET, Common_EventScript_ChangeNature_29
# 2264 "data/maps/TradeCenter/scripts.pory"
	case NATURE_BASHFUL, Common_EventScript_ChangeNature_30
# 2266 "data/maps/TradeCenter/scripts.pory"
	case NATURE_RASH, Common_EventScript_ChangeNature_31
# 2268 "data/maps/TradeCenter/scripts.pory"
	case NATURE_CALM, Common_EventScript_ChangeNature_32
# 2270 "data/maps/TradeCenter/scripts.pory"
	case NATURE_GENTLE, Common_EventScript_ChangeNature_33
# 2272 "data/maps/TradeCenter/scripts.pory"
	case NATURE_SASSY, Common_EventScript_ChangeNature_34
# 2274 "data/maps/TradeCenter/scripts.pory"
	case NATURE_CAREFUL, Common_EventScript_ChangeNature_35
# 2276 "data/maps/TradeCenter/scripts.pory"
	case NATURE_QUIRKY, Common_EventScript_ChangeNature_36
# 2278 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeNature_37
# 2284 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2285 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2286 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_2:
# 2183 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2184 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_5:
# 2191 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_8:
# 2196 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_10:
# 2289 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2290 "data/maps/TradeCenter/scripts.pory"
	special ComparePartyMonNature
# 2291 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq Common_EventScript_ChangeNature_40
# 2299 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_HARDY
	goto_if_eq Common_EventScript_ChangeNature_43
# 2299 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_DOCILE
	goto_if_eq Common_EventScript_ChangeNature_43
# 2299 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_SERIOUS
	goto_if_eq Common_EventScript_ChangeNature_43
# 2299 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_BASHFUL
	goto_if_eq Common_EventScript_ChangeNature_43
# 2299 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_QUIRKY
	goto_if_eq Common_EventScript_ChangeNature_43
Common_EventScript_ChangeNature_42:
# 2308 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_30, MSGBOX_YESNO
# 2309 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChangeNature_53
# 2323 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2324 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2325 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_12:
# 2229 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_2
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_13:
# 2231 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_3
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_14:
# 2233 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_4
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_15:
# 2235 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_5
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_16:
# 2237 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_6
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_17:
# 2239 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_7
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_18:
# 2241 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_8
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_19:
# 2243 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_9
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_20:
# 2245 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_10
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_21:
# 2247 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_11
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_22:
# 2249 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_12
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_23:
# 2251 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_13
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_24:
# 2253 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_14
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_25:
# 2255 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_15
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_26:
# 2257 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_16
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_27:
# 2259 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_17
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_28:
# 2261 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_18
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_29:
# 2263 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_19
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_30:
# 2265 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_20
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_31:
# 2267 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_21
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_32:
# 2269 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_22
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_33:
# 2271 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_23
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_34:
# 2273 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_24
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_35:
# 2275 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_25
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_36:
# 2277 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeNature_Text_26
	goto Common_EventScript_ChangeNature_10

Common_EventScript_ChangeNature_37:
# 2279 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_27, MSGBOX_DEFAULT
# 2280 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2281 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_40:
# 2292 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_28, MSGBOX_DEFAULT
# 2293 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2294 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_43:
# 2300 "data/maps/TradeCenter/scripts.pory"
	checkitemspace ITEM_SERIOUS_MINT, 1
# 2301 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ChangeNature_56
	goto Common_EventScript_ChangeNature_42

Common_EventScript_ChangeNature_53:
# 2310 "data/maps/TradeCenter/scripts.pory"
	special ChangeNature
# 2311 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_31, MSGBOX_DEFAULT
# 2312 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2314 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_HARDY
	goto_if_eq Common_EventScript_ChangeNature_59
# 2314 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_DOCILE
	goto_if_eq Common_EventScript_ChangeNature_59
# 2314 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_SERIOUS
	goto_if_eq Common_EventScript_ChangeNature_59
# 2314 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_BASHFUL
	goto_if_eq Common_EventScript_ChangeNature_59
# 2314 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, NATURE_QUIRKY
	goto_if_eq Common_EventScript_ChangeNature_59
Common_EventScript_ChangeNature_58:
# 2318 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2319 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_56:
# 2302 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_29, MSGBOX_DEFAULT
# 2303 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2304 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeNature_59:
# 2315 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeNature_Text_32, MSGBOX_DEFAULT
# 2316 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 1
	goto Common_EventScript_ChangeNature_58


Common_EventScript_ChangeIV::
# 2332 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 2333 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ChangeIV_2
# 2338 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_0, MSGBOX_DEFAULT
# 2339 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2340 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2341 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge Common_EventScript_ChangeIV_5
# 2345 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 2346 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Common_EventScript_ChangeIV_8
# 2350 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2351 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_1, MSGBOX_DEFAULT
# 2352 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_2, STAT_HP
# 2353 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_3, STAT_ATK
# 2354 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_4, STAT_DEF
# 2355 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_5, STAT_SPEED
# 2356 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_6, STAT_SPATK
# 2357 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_7, STAT_SPDEF
# 2358 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2359 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2360 "data/maps/TradeCenter/scripts.pory"
	case STAT_HP, Common_EventScript_ChangeIV_12
# 2362 "data/maps/TradeCenter/scripts.pory"
	case STAT_ATK, Common_EventScript_ChangeIV_13
# 2364 "data/maps/TradeCenter/scripts.pory"
	case STAT_DEF, Common_EventScript_ChangeIV_14
# 2366 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPEED, Common_EventScript_ChangeIV_15
# 2368 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPATK, Common_EventScript_ChangeIV_16
# 2370 "data/maps/TradeCenter/scripts.pory"
	case STAT_SPDEF, Common_EventScript_ChangeIV_17
# 2372 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeIV_18
# 2378 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2379 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2380 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_2:
# 2334 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 2335 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_5:
# 2342 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_8:
# 2347 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_10:
# 2383 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 2385 "data/maps/TradeCenter/scripts.pory"
	special GetPartyMonIV
# 2386 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 2387 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 2388 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_9, MSGBOX_DEFAULT
# 2389 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_10, 31
# 2390 "data/maps/TradeCenter/scripts.pory"
	dynmultipush Common_EventScript_ChangeIV_Text_11, 0
# 2391 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 2, FALSE, 31, DYN_MULTICHOICE_CB_NONE
# 2392 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2393 "data/maps/TradeCenter/scripts.pory"
	case 31, Common_EventScript_ChangeIV_22
# 2396 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ChangeIV_23
# 2399 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, Common_EventScript_ChangeIV_24
# 2405 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2406 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2407 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_12:
# 2361 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_2
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_13:
# 2363 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_3
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_14:
# 2365 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_4
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_15:
# 2367 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_5
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_16:
# 2369 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_6
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_17:
# 2371 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, Common_EventScript_ChangeIV_Text_7
	goto Common_EventScript_ChangeIV_10

Common_EventScript_ChangeIV_18:
# 2373 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2374 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2375 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_20:
# 2412 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 31
	goto_if_eq Common_EventScript_ChangeIV_28
Common_EventScript_ChangeIV_26:
# 2419 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 0
	goto_if_eq Common_EventScript_ChangeIV_33
Common_EventScript_ChangeIV_31:
# 2426 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8007
# 2428 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8006, 31
	goto_if_eq Common_EventScript_ChangeIV_37
# 2432 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_17, MSGBOX_YESNO
Common_EventScript_ChangeIV_36:
# 2434 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_ChangeIV_40
# 2444 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2445 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2446 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_22:
# 2394 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_3, Common_EventScript_ChangeIV_Text_12
# 2395 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8006, 31
	goto Common_EventScript_ChangeIV_20

Common_EventScript_ChangeIV_23:
# 2397 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_3, Common_EventScript_ChangeIV_Text_13
# 2398 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8006, 0
	goto Common_EventScript_ChangeIV_20

Common_EventScript_ChangeIV_24:
# 2400 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_8, MSGBOX_DEFAULT
# 2401 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2402 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_27:
# 2413 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_14, MSGBOX_DEFAULT
# 2414 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2415 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_28:
# 2412 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8007, 31
	goto_if_eq Common_EventScript_ChangeIV_27
	goto Common_EventScript_ChangeIV_26

Common_EventScript_ChangeIV_32:
# 2420 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_15, MSGBOX_DEFAULT
# 2421 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2422 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_ChangeIV_33:
# 2419 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_eq Common_EventScript_ChangeIV_32
	goto Common_EventScript_ChangeIV_31

Common_EventScript_ChangeIV_37:
# 2429 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_16, MSGBOX_YESNO
	goto Common_EventScript_ChangeIV_36

Common_EventScript_ChangeIV_40:
# 2435 "data/maps/TradeCenter/scripts.pory"
	special SetPartyMonIV
# 2436 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 2437 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_ChangeIV_Text_18, MSGBOX_DEFAULT
# 2438 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 2439 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2440 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_EliteMoveTutor::
# 2454 "data/maps/TradeCenter/scripts.pory"
	lock
# 2455 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2456 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_3, Common_EventScript_EliteMoveTutor_2
Common_EventScript_EliteMoveTutor_1:
# 2460 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_EliteMoveTutor_5
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EliteMoveTutor_8
# 2472 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_3
# 2473 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EliteMoveTutor_Text_1, MSGBOX_DEFAULT
# 2474 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	return

Common_EventScript_EliteMoveTutor_2:
# 2457 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_Intro, MSGBOX_DEFAULT
	goto Common_EventScript_EliteMoveTutor_1

Common_EventScript_EliteMoveTutor_5:
# 2461 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EliteMoveTutor_Text_0, MSGBOX_DEFAULT
# 2462 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_3
# 2463 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EliteMoveTutor_8:
# 2467 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2468 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_TEMP_3
# 2469 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


EliteMoveTutor_EventScript_ChooseMon::
# 2478 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_ChooseMon, MSGBOX_DEFAULT
# 2479 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2480 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_2
EliteMoveTutor_EventScript_ChooseMon_1:
# 2483 "data/maps/TradeCenter/scripts.pory"
	special IsSelectedMonEgg
# 2484 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_5
EliteMoveTutor_EventScript_ChooseMon_4:
# 2489 "data/maps/TradeCenter/scripts.pory"
	special CheckPartyMonHasEliteMoves
# 2490 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_8
EliteMoveTutor_EventScript_ChooseMon_7:
# 2496 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2497 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_HasEliteMoves, MSGBOX_DEFAULT
# 2498 "data/maps/TradeCenter/scripts.pory"
	special TeachEliteMoves
# 2499 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2500 "data/maps/TradeCenter/scripts.pory"
	lock
# 2501 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2503 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_11
EliteMoveTutor_EventScript_ChooseMon_10:
# 2521 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	return

EliteMoveTutor_EventScript_ChooseMon_2:
# 2481 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	goto EliteMoveTutor_EventScript_ChooseMon_1

EliteMoveTutor_EventScript_ChooseMon_5:
# 2485 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 2486 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_4

EliteMoveTutor_EventScript_ChooseMon_8:
# 2491 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2492 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NoEliteMoves, MSGBOX_DEFAULT
# 2493 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_7

EliteMoveTutor_EventScript_ChooseMon_11:
# 2505 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EliteMoveTutor_EventScript_ChooseMon_13
# 2515 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_NoMoreHeartScales, MSGBOX_DEFAULT
# 2516 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

EliteMoveTutor_EventScript_ChooseMon_13:
# 2508 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_AnythingElse, MSGBOX_YESNO
# 2509 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EliteMoveTutor_EventScript_ChooseMon_17
EliteMoveTutor_EventScript_ChooseMon_16:
# 2512 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_Cancel
	goto EliteMoveTutor_EventScript_ChooseMon_10

EliteMoveTutor_EventScript_ChooseMon_17:
# 2510 "data/maps/TradeCenter/scripts.pory"
	goto EliteMoveTutor_EventScript_ChooseMon
	goto EliteMoveTutor_EventScript_ChooseMon_16


EliteMoveTutor_EventScript_Cancel::
# 2525 "data/maps/TradeCenter/scripts.pory"
	msgbox EliteMoveTutor_Text_ComeBack, MSGBOX_DEFAULT
# 2526 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_EggMoveTutor::
# 2569 "data/maps/TradeCenter/scripts.pory"
	lock
# 2570 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2572 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_EggMoveTutor_2
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EggMoveTutor_5
# 2583 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Common_EventScript_EggMoveTutor_8
Common_EventScript_EggMoveTutor_7:
# 2588 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EggMoveTutor_Text_1, MSGBOX_DEFAULT
# 2589 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2590 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	return

Common_EventScript_EggMoveTutor_2:
# 2573 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_EggMoveTutor_Text_0, MSGBOX_DEFAULT
# 2574 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2575 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EggMoveTutor_5:
# 2579 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NeedHeartScale, MSGBOX_DEFAULT
# 2580 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_EggMoveTutor_8:
# 2584 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_Intro, MSGBOX_DEFAULT
# 2585 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_TEMP_2
# 2586 "data/maps/TradeCenter/scripts.pory"
	closemessage
	goto Common_EventScript_EggMoveTutor_7


EggMoveTutor_EventScript_ChooseMon::
# 2594 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_ChooseMon, MSGBOX_DEFAULT
# 2595 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 2596 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_2
EggMoveTutor_EventScript_ChooseMon_1:
# 2599 "data/maps/TradeCenter/scripts.pory"
	special IsSelectedMonEgg
# 2600 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_5
EggMoveTutor_EventScript_ChooseMon_4:
# 2605 "data/maps/TradeCenter/scripts.pory"
	special CheckPartyMonHasScriptEggMoves
# 2606 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_8
EggMoveTutor_EventScript_ChooseMon_7:
# 2612 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2613 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_HasEggMoves, MSGBOX_DEFAULT
# 2614 "data/maps/TradeCenter/scripts.pory"
	special TeachScriptEggMoves
# 2615 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2616 "data/maps/TradeCenter/scripts.pory"
	lock
# 2617 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2619 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_11
EggMoveTutor_EventScript_ChooseMon_10:
# 2637 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	return

EggMoveTutor_EventScript_ChooseMon_2:
# 2597 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	goto EggMoveTutor_EventScript_ChooseMon_1

EggMoveTutor_EventScript_ChooseMon_5:
# 2601 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
# 2602 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_4

EggMoveTutor_EventScript_ChooseMon_8:
# 2607 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 2608 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NoEggMoves, MSGBOX_DEFAULT
# 2609 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_7

EggMoveTutor_EventScript_ChooseMon_11:
# 2621 "data/maps/TradeCenter/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
	checkitem ITEM_HEART_SCALE, 1
# 0 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EggMoveTutor_EventScript_ChooseMon_13
# 2631 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_NoMoreHeartScales, MSGBOX_DEFAULT
# 2632 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

EggMoveTutor_EventScript_ChooseMon_13:
# 2624 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_AnythingElse, MSGBOX_YESNO
# 2625 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EggMoveTutor_EventScript_ChooseMon_17
EggMoveTutor_EventScript_ChooseMon_16:
# 2628 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_Cancel
	goto EggMoveTutor_EventScript_ChooseMon_10

EggMoveTutor_EventScript_ChooseMon_17:
# 2626 "data/maps/TradeCenter/scripts.pory"
	goto EggMoveTutor_EventScript_ChooseMon
	goto EggMoveTutor_EventScript_ChooseMon_16


EggMoveTutor_EventScript_Cancel::
# 2641 "data/maps/TradeCenter/scripts.pory"
	msgbox EggMoveTutor_Text_ComeBack, MSGBOX_DEFAULT
# 2642 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_Unused_MoveTutor::
# 2685 "data/maps/TradeCenter/scripts.pory"
	lock
# 2686 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_0, 1
# 2687 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_1, 2
# 2688 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_2, 3
# 2689 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_Unused_MoveTutor_Text_3, 4
# 2690 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 2691 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 2692 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 2693 "data/maps/TradeCenter/scripts.pory"
	case 1, PokemonCenter_2F_Unused_MoveTutor_3
# 2696 "data/maps/TradeCenter/scripts.pory"
	case 2, PokemonCenter_2F_Unused_MoveTutor_4
# 2699 "data/maps/TradeCenter/scripts.pory"
	case 3, PokemonCenter_2F_Unused_MoveTutor_5
# 2702 "data/maps/TradeCenter/scripts.pory"
	case 4, PokemonCenter_2F_Unused_MoveTutor_6
# 2706 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_Unused_MoveTutor_1:
# 2709 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 2710 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 2711 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 2712 "data/maps/TradeCenter/scripts.pory"
	lock
# 2713 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2714 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

PokemonCenter_2F_Unused_MoveTutor_3:
# 2694 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUSION_BOLT
# 2695 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_0
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_4:
# 2697 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUSION_FLARE
# 2698 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_1
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_5:
# 2700 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_BURN
# 2701 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_2
	goto PokemonCenter_2F_Unused_MoveTutor_1

PokemonCenter_2F_Unused_MoveTutor_6:
# 2703 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FREEZE_SHOCK
# 2704 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, PokemonCenter_2F_Unused_MoveTutor_Text_3
	goto PokemonCenter_2F_Unused_MoveTutor_1


TradeCenter_EventScript_DrainPunch::
# 2725 "data/maps/TradeCenter/scripts.pory"
	lock
# 2726 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2727 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_DRAIN_PUNCH
# 2728 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_DrainPunch_2
# 2735 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_DrainPunch_Text_1, MSGBOX_NPC
TradeCenter_EventScript_DrainPunch_1:
# 2737 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_DrainPunch_2:
# 2729 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_DrainPunch_Text_0, MSGBOX_NPC
# 2730 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2731 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_DRAIN_PUNCH
# 2732 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_DrainPunch_1


TradeCenter_EventScript_ShadowClaw::
# 2742 "data/maps/TradeCenter/scripts.pory"
	lock
# 2743 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2744 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_SHADOW_CLAW
# 2745 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_ShadowClaw_2
# 2752 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_ShadowClaw_Text_1, MSGBOX_NPC
TradeCenter_EventScript_ShadowClaw_1:
# 2754 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_ShadowClaw_2:
# 2746 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_ShadowClaw_Text_0, MSGBOX_NPC
# 2747 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2748 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_SHADOW_CLAW
# 2749 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_ShadowClaw_1


TradeCenter_EventScript_PsychoCut::
# 2759 "data/maps/TradeCenter/scripts.pory"
	lock
# 2760 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2761 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_PSYCHO_CUT
# 2762 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_PsychoCut_2
# 2769 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_PsychoCut_Text_1, MSGBOX_NPC
TradeCenter_EventScript_PsychoCut_1:
# 2771 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_PsychoCut_2:
# 2763 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_PsychoCut_Text_0, MSGBOX_NPC
# 2764 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2765 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_PSYCHO_CUT
# 2766 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_PsychoCut_1


TradeCenter_EventScript_CrossPoison::
# 2776 "data/maps/TradeCenter/scripts.pory"
	lock
# 2777 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 2778 "data/maps/TradeCenter/scripts.pory"
	checkitem ITEM_TM_CROSS_POISON
# 2779 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeCenter_EventScript_CrossPoison_2
# 2786 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_CrossPoison_Text_1, MSGBOX_NPC
TradeCenter_EventScript_CrossPoison_1:
# 2788 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

TradeCenter_EventScript_CrossPoison_2:
# 2780 "data/maps/TradeCenter/scripts.pory"
	msgbox TradeCenter_EventScript_CrossPoison_Text_0, MSGBOX_NPC
# 2781 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 2782 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_TM_CROSS_POISON
# 2783 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
	goto TradeCenter_EventScript_CrossPoison_1


Common_EventScript_LevelCapUpdate_Text_0:
# 303 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"

Common_EventScript_SetFlashTest_Text_0:
# 393 "data/maps/TradeCenter/scripts.pory"
	.string "Do you have flash?$"

Common_EventScript_BerryTreeEncounterFled_Text_0:
# 757 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the berry\n"
	.string "plant!\l"
	.string "...but it fled!$"

Common_EventScript_BasicMoveTutor_Text_0:
# 1063 "data/maps/TradeCenter/scripts.pory"
	.string "Hello! I am the Move Tutor. I can teach\n"
	.string "your Pokémon new moves at no cost.$"

MoveTutor_EventScript_NotReadyYet_Text_0:
# 1075 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but you need to increase your\n"
	.string "Trainer Level before I can teach any\l"
	.string "moves to your Pokémon. Please come\l"
	.string "back later.$"

MoveTutor_EventScript_SetSorting_Text_0:
# 1098 "data/maps/TradeCenter/scripts.pory"
	.string "The Move Tutor on the left can teach\n"
	.string "many different moves.\p"
	.string "Sometimes I find it easier to see them\n"
	.string "ordered in a particular way, so I can\l"
	.string "find the move I'm looking for.$"

MoveTutor_EventScript_SetSorting_Text_1:
# 1101 "data/maps/TradeCenter/scripts.pory"
	.string "How would you like the move tutor to\n"
	.string "sort his moves?$"

MoveTutor_EventScript_SetSorting_Text_2:
# 1102 "data/maps/TradeCenter/scripts.pory"
	.string "Recently Unlocked First$"

MoveTutor_EventScript_SetSorting_Text_3:
# 1102 "data/maps/TradeCenter/scripts.pory"
	.string "Alphabetically$"

MoveTutor_EventScript_SetSorting_Text_4:
# 1107 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves you most\n"
	.string "recently unlocked will be shown first.$"

MoveTutor_EventScript_SetSorting_Text_5:
# 1111 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves will be sorted\n"
	.string "alphabetically.$"

MoveTutor_EventScript_SetSorting_Text_6:
# 1113 "data/maps/TradeCenter/scripts.pory"
	.string "Come see me if you want to change how\n"
	.string "the tutor moves are sorted.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_0:
# 1124 "data/maps/TradeCenter/scripts.pory"
	.string "The staff here can help you develop\n"
	.string "your Pokémon in many ways.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_1:
# 1128 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to tell you about any\n"
	.string "of the services here?$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_2:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Basic Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_3:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Egg Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_4:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Elite Move Tutor$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_5:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Pre-Damage$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_6:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Attribute Changer$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_7:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Nothing$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_8:
# 1132 "data/maps/TradeCenter/scripts.pory"
	.string "The well-dressed man on the left is the\n"
	.string "Basic Move Tutor.\p"
	.string "He can teach a variety of new moves to\n"
	.string "your Pokémon, completely free!\p"
	.string "As you defeat more Gym Leaders, he'll be\n"
	.string "able to teach new, more powerful moves\l"
	.string "to your Pokémon.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_9:
# 1134 "data/maps/TradeCenter/scripts.pory"
	.string "The woman in the middle is the Egg Move\n"
	.string "Tutor.\p"
	.string "She can teach your Pokémon moves that\n"
	.string "they can normally only learn through\l"
	.string "breeding.\p"
	.string "But, she charges a Heart Scale for each\n"
	.string "move she teaches.\p"
	.string "If you have the right combination of\n"
	.string "Pokémon, they might be able to teach\l"
	.string "each other Egg Moves for free at the\l"
	.string "Day Care Center in Route 117. So,\l"
	.string "consider carefully how to use her\l"
	.string "services.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_10:
# 1137 "data/maps/TradeCenter/scripts.pory"
	.string "However, she will only teach your\n"
	.string "Pokémon Egg Moves if you have at least\l"
	.string "one Gym Badge.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_11:
# 1140 "data/maps/TradeCenter/scripts.pory"
	.string "The older man in the middle is the Elite\n"
	.string "Move Tutor.\p"
	.string "He can teach your Pokémon some very\n"
	.string "rare and powerful moves, but he charges\l"
	.string "a Heart Scale for each move he teaches.\p"
	.string "These Elite Moves might normally be\n"
	.string "exclusive to other Pokémon, or could be\l"
	.string "moves a Pokémon could learn in faraway\l"
	.string "places long ago that they no longer\l"
	.string "learn naturally.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_12:
# 1143 "data/maps/TradeCenter/scripts.pory"
	.string "However, he will only teach your\n"
	.string "Pokémon Elite Moves if you have at\l"
	.string "least 3 Gym Badges.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_13:
# 1146 "data/maps/TradeCenter/scripts.pory"
	.string "The strange woman on the right can\n"
	.string "inflict a status condition or damage\l"
	.string "your Pokémon before a battle.\p"
	.string "This can be useful for some clever\n"
	.string "strategies.\p"
	.string "She doesn't charge anything to do it...\n"
	.string "which makes it feel weirder somehow.$"

PokemonCenter_2F_EventScript_ExplainTutors_Text_14:
# 1148 "data/maps/TradeCenter/scripts.pory"
	.string "The woman on the far right can help you\n"
	.string "adjust some of the hidden attributes\l"
	.string "of your Pokémon, such as their Nature,\l"
	.string "IVs, or Hidden Power.\p"
	.string "She charges a Heart Scale for each\n"
	.string "change she makes.$"

MoveTutor_EventScript_SelectMoveCategory_Text_0:
# 1159 "data/maps/TradeCenter/scripts.pory"
	.string "Which kind of move would you like your\n"
	.string "Pokémon to learn?$"

MoveTutor_EventScript_SelectMoveCategory_Text_1:
# 1160 "data/maps/TradeCenter/scripts.pory"
	.string "Physical Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_2:
# 1160 "data/maps/TradeCenter/scripts.pory"
	.string "Special Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_3:
# 1160 "data/maps/TradeCenter/scripts.pory"
	.string "Status Moves$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_0:
# 1179 "data/maps/TradeCenter/scripts.pory"
	.string "Body Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_1:
# 1180 "data/maps/TradeCenter/scripts.pory"
	.string "Triple Axel$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_2:
# 1183 "data/maps/TradeCenter/scripts.pory"
	.string "Poltergeist$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_3:
# 1184 "data/maps/TradeCenter/scripts.pory"
	.string "Sky Drop$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_4:
# 1187 "data/maps/TradeCenter/scripts.pory"
	.string "Explosion$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_5:
# 1188 "data/maps/TradeCenter/scripts.pory"
	.string "Megahorn$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_6:
# 1189 "data/maps/TradeCenter/scripts.pory"
	.string "Power Whip$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_7:
# 1190 "data/maps/TradeCenter/scripts.pory"
	.string "Leaf Blade$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_8:
# 1191 "data/maps/TradeCenter/scripts.pory"
	.string "Upper Hand$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_9:
# 1194 "data/maps/TradeCenter/scripts.pory"
	.string "Endeavor$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_10:
# 1195 "data/maps/TradeCenter/scripts.pory"
	.string "Phantom Force$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_11:
# 1196 "data/maps/TradeCenter/scripts.pory"
	.string "Darkest Lariat$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_12:
# 1197 "data/maps/TradeCenter/scripts.pory"
	.string "Retaliate$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_13:
# 1198 "data/maps/TradeCenter/scripts.pory"
	.string "Brutal Swing$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_14:
# 1199 "data/maps/TradeCenter/scripts.pory"
	.string "Power-Up Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_15:
# 1202 "data/maps/TradeCenter/scripts.pory"
	.string "Gyro Ball$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_16:
# 1203 "data/maps/TradeCenter/scripts.pory"
	.string "Heavy Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_17:
# 1204 "data/maps/TradeCenter/scripts.pory"
	.string "Giga Impact$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_18:
# 1205 "data/maps/TradeCenter/scripts.pory"
	.string "Body Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_19:
# 1206 "data/maps/TradeCenter/scripts.pory"
	.string "Lash Out$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_20:
# 1207 "data/maps/TradeCenter/scripts.pory"
	.string "Razor Shell$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_21:
# 1208 "data/maps/TradeCenter/scripts.pory"
	.string "Icicle Spear$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_22:
# 1209 "data/maps/TradeCenter/scripts.pory"
	.string "Rock Blast$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_23:
# 1210 "data/maps/TradeCenter/scripts.pory"
	.string "Tail Slap$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_24:
# 1213 "data/maps/TradeCenter/scripts.pory"
	.string "Hard Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_25:
# 1214 "data/maps/TradeCenter/scripts.pory"
	.string "Self-Destruct$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_26:
# 1215 "data/maps/TradeCenter/scripts.pory"
	.string "Rock Climb$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_27:
# 1216 "data/maps/TradeCenter/scripts.pory"
	.string "Take Down$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_28:
# 1217 "data/maps/TradeCenter/scripts.pory"
	.string "Blaze Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_29:
# 1218 "data/maps/TradeCenter/scripts.pory"
	.string "Bounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_30:
# 1219 "data/maps/TradeCenter/scripts.pory"
	.string "Secret Power$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_31:
# 1220 "data/maps/TradeCenter/scripts.pory"
	.string "Trailblaze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_32:
# 1223 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_33:
# 1224 "data/maps/TradeCenter/scripts.pory"
	.string "Headbutt$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_34:
# 1225 "data/maps/TradeCenter/scripts.pory"
	.string "Smart Strike$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_35:
# 1226 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_36:
# 1227 "data/maps/TradeCenter/scripts.pory"
	.string "Ice Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_37:
# 1228 "data/maps/TradeCenter/scripts.pory"
	.string "Thunder Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_38:
# 1231 "data/maps/TradeCenter/scripts.pory"
	.string "Low Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_39:
# 1232 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_40:
# 1233 "data/maps/TradeCenter/scripts.pory"
	.string "Bug Bite$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_41:
# 1234 "data/maps/TradeCenter/scripts.pory"
	.string "Bulldoze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_42:
# 1235 "data/maps/TradeCenter/scripts.pory"
	.string "Sand Tomb$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_43:
# 1236 "data/maps/TradeCenter/scripts.pory"
	.string "Rollout$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_44:
# 1239 "data/maps/TradeCenter/scripts.pory"
	.string "Super Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_45:
# 1240 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Claw$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_46:
# 1241 "data/maps/TradeCenter/scripts.pory"
	.string "Poison Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_47:
# 1242 "data/maps/TradeCenter/scripts.pory"
	.string "Pounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_48:
# 1244 "data/maps/TradeCenter/scripts.pory"
	.string "False Swipe$"

MoveTutor_EventScript_GetSpecialMoveList_Text_0:
# 1251 "data/maps/TradeCenter/scripts.pory"
	.string "Alluring Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_1:
# 1254 "data/maps/TradeCenter/scripts.pory"
	.string "Future Sight$"

MoveTutor_EventScript_GetSpecialMoveList_Text_2:
# 1255 "data/maps/TradeCenter/scripts.pory"
	.string "Aura Sphere$"

MoveTutor_EventScript_GetSpecialMoveList_Text_3:
# 1256 "data/maps/TradeCenter/scripts.pory"
	.string "Mystical Fire$"

MoveTutor_EventScript_GetSpecialMoveList_Text_4:
# 1257 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Noise$"

MoveTutor_EventScript_GetSpecialMoveList_Text_5:
# 1258 "data/maps/TradeCenter/scripts.pory"
	.string "Stored Power$"

MoveTutor_EventScript_GetSpecialMoveList_Text_6:
# 1261 "data/maps/TradeCenter/scripts.pory"
	.string "Electro Ball$"

MoveTutor_EventScript_GetSpecialMoveList_Text_7:
# 1262 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Explosion$"

MoveTutor_EventScript_GetSpecialMoveList_Text_8:
# 1263 "data/maps/TradeCenter/scripts.pory"
	.string "Pollen Puff$"

MoveTutor_EventScript_GetSpecialMoveList_Text_9:
# 1266 "data/maps/TradeCenter/scripts.pory"
	.string "Blast Burn$"

MoveTutor_EventScript_GetSpecialMoveList_Text_10:
# 1267 "data/maps/TradeCenter/scripts.pory"
	.string "Frenzy Plant$"

MoveTutor_EventScript_GetSpecialMoveList_Text_11:
# 1268 "data/maps/TradeCenter/scripts.pory"
	.string "Hydro Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_12:
# 1269 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Blast$"

MoveTutor_EventScript_GetSpecialMoveList_Text_13:
# 1270 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_14:
# 1271 "data/maps/TradeCenter/scripts.pory"
	.string "Grass Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_15:
# 1272 "data/maps/TradeCenter/scripts.pory"
	.string "Water Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_16:
# 1275 "data/maps/TradeCenter/scripts.pory"
	.string "Psycho Boost$"

MoveTutor_EventScript_GetSpecialMoveList_Text_17:
# 1276 "data/maps/TradeCenter/scripts.pory"
	.string "Dream Eater$"

MoveTutor_EventScript_GetSpecialMoveList_Text_18:
# 1277 "data/maps/TradeCenter/scripts.pory"
	.string "Tri Attack$"

MoveTutor_EventScript_GetSpecialMoveList_Text_19:
# 1278 "data/maps/TradeCenter/scripts.pory"
	.string "Ominous Wind$"

MoveTutor_EventScript_GetSpecialMoveList_Text_20:
# 1281 "data/maps/TradeCenter/scripts.pory"
	.string "Zap Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_21:
# 1282 "data/maps/TradeCenter/scripts.pory"
	.string "Uproar$"

MoveTutor_EventScript_GetSpecialMoveList_Text_22:
# 1283 "data/maps/TradeCenter/scripts.pory"
	.string "Psybeam$"

MoveTutor_EventScript_GetSpecialMoveList_Text_23:
# 1284 "data/maps/TradeCenter/scripts.pory"
	.string "Burning Jealousy$"

MoveTutor_EventScript_GetSpecialMoveList_Text_24:
# 1285 "data/maps/TradeCenter/scripts.pory"
	.string "Incinerate$"

MoveTutor_EventScript_GetSpecialMoveList_Text_25:
# 1288 "data/maps/TradeCenter/scripts.pory"
	.string "Night Shade$"

MoveTutor_EventScript_GetSpecialMoveList_Text_26:
# 1289 "data/maps/TradeCenter/scripts.pory"
	.string "Signal Beam$"

MoveTutor_EventScript_GetSpecialMoveList_Text_27:
# 1290 "data/maps/TradeCenter/scripts.pory"
	.string "Brine$"

MoveTutor_EventScript_GetSpecialMoveList_Text_28:
# 1291 "data/maps/TradeCenter/scripts.pory"
	.string "Frost Breath$"

MoveTutor_EventScript_GetSpecialMoveList_Text_29:
# 1292 "data/maps/TradeCenter/scripts.pory"
	.string "Shock Wave$"

MoveTutor_EventScript_GetSpecialMoveList_Text_30:
# 1293 "data/maps/TradeCenter/scripts.pory"
	.string "Silver Wind$"

MoveTutor_EventScript_GetSpecialMoveList_Text_31:
# 1296 "data/maps/TradeCenter/scripts.pory"
	.string "Air Cutter$"

MoveTutor_EventScript_GetSpecialMoveList_Text_32:
# 1297 "data/maps/TradeCenter/scripts.pory"
	.string "Magical Leaf$"

MoveTutor_EventScript_GetSpecialMoveList_Text_33:
# 1298 "data/maps/TradeCenter/scripts.pory"
	.string "Round$"

MoveTutor_EventScript_GetSpecialMoveList_Text_34:
# 1299 "data/maps/TradeCenter/scripts.pory"
	.string "Electroweb$"

MoveTutor_EventScript_GetSpecialMoveList_Text_35:
# 1300 "data/maps/TradeCenter/scripts.pory"
	.string "Mud Shot$"

MoveTutor_EventScript_GetSpecialMoveList_Text_36:
# 1301 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Spin$"

MoveTutor_EventScript_GetSpecialMoveList_Text_37:
# 1302 "data/maps/TradeCenter/scripts.pory"
	.string "Whirlpool$"

MoveTutor_EventScript_GetSpecialMoveList_Text_38:
# 1305 "data/maps/TradeCenter/scripts.pory"
	.string "Disarming Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_39:
# 1306 "data/maps/TradeCenter/scripts.pory"
	.string "Echoed Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_40:
# 1307 "data/maps/TradeCenter/scripts.pory"
	.string "Infestation$"

MoveTutor_EventScript_GetSpecialMoveList_Text_41:
# 1308 "data/maps/TradeCenter/scripts.pory"
	.string "Mud-Slap$"

MoveTutor_EventScript_GetStatusMoveList_Text_0:
# 1317 "data/maps/TradeCenter/scripts.pory"
	.string "Electric Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_1:
# 1318 "data/maps/TradeCenter/scripts.pory"
	.string "Grassy Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_2:
# 1319 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_3:
# 1320 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_4:
# 1321 "data/maps/TradeCenter/scripts.pory"
	.string "Rain Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_5:
# 1322 "data/maps/TradeCenter/scripts.pory"
	.string "Sandstorm$"

MoveTutor_EventScript_GetStatusMoveList_Text_6:
# 1323 "data/maps/TradeCenter/scripts.pory"
	.string "Snowscape$"

MoveTutor_EventScript_GetStatusMoveList_Text_7:
# 1324 "data/maps/TradeCenter/scripts.pory"
	.string "Sunny Day$"

MoveTutor_EventScript_GetStatusMoveList_Text_8:
# 1327 "data/maps/TradeCenter/scripts.pory"
	.string "Aurora Veil$"

MoveTutor_EventScript_GetStatusMoveList_Text_9:
# 1330 "data/maps/TradeCenter/scripts.pory"
	.string "Ally Switch$"

MoveTutor_EventScript_GetStatusMoveList_Text_10:
# 1331 "data/maps/TradeCenter/scripts.pory"
	.string "Cosmic Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_11:
# 1332 "data/maps/TradeCenter/scripts.pory"
	.string "Gravity$"

MoveTutor_EventScript_GetStatusMoveList_Text_12:
# 1333 "data/maps/TradeCenter/scripts.pory"
	.string "Imprison$"

MoveTutor_EventScript_GetStatusMoveList_Text_13:
# 1334 "data/maps/TradeCenter/scripts.pory"
	.string "Magic Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_14:
# 1337 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Cheer$"

MoveTutor_EventScript_GetStatusMoveList_Text_15:
# 1338 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_16:
# 1339 "data/maps/TradeCenter/scripts.pory"
	.string "Feather Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_17:
# 1342 "data/maps/TradeCenter/scripts.pory"
	.string "Fake Tears$"

MoveTutor_EventScript_GetStatusMoveList_Text_18:
# 1343 "data/maps/TradeCenter/scripts.pory"
	.string "Pain Split$"

MoveTutor_EventScript_GetStatusMoveList_Text_19:
# 1344 "data/maps/TradeCenter/scripts.pory"
	.string "Psych Up$"

MoveTutor_EventScript_GetStatusMoveList_Text_20:
# 1345 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_21:
# 1346 "data/maps/TradeCenter/scripts.pory"
	.string "Trick$"

MoveTutor_EventScript_GetStatusMoveList_Text_22:
# 1347 "data/maps/TradeCenter/scripts.pory"
	.string "Venom Drench$"

MoveTutor_EventScript_GetStatusMoveList_Text_23:
# 1350 "data/maps/TradeCenter/scripts.pory"
	.string "Curse$"

MoveTutor_EventScript_GetStatusMoveList_Text_24:
# 1351 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Defense$"

MoveTutor_EventScript_GetStatusMoveList_Text_25:
# 1352 "data/maps/TradeCenter/scripts.pory"
	.string "Stealth Rock$"

MoveTutor_EventScript_GetStatusMoveList_Text_26:
# 1353 "data/maps/TradeCenter/scripts.pory"
	.string "Wonder Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_27:
# 1356 "data/maps/TradeCenter/scripts.pory"
	.string "Agility$"

MoveTutor_EventScript_GetStatusMoveList_Text_28:
# 1357 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Sound$"

MoveTutor_EventScript_GetStatusMoveList_Text_29:
# 1358 "data/maps/TradeCenter/scripts.pory"
	.string "Nature Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_30:
# 1359 "data/maps/TradeCenter/scripts.pory"
	.string "Steelsurge$"

MoveTutor_EventScript_GetStatusMoveList_Text_31:
# 1360 "data/maps/TradeCenter/scripts.pory"
	.string "Snatch$"

MoveTutor_EventScript_GetStatusMoveList_Text_32:
# 1363 "data/maps/TradeCenter/scripts.pory"
	.string "Charge$"

MoveTutor_EventScript_GetStatusMoveList_Text_33:
# 1364 "data/maps/TradeCenter/scripts.pory"
	.string "Confuse Ray$"

MoveTutor_EventScript_GetStatusMoveList_Text_34:
# 1365 "data/maps/TradeCenter/scripts.pory"
	.string "Embargo$"

MoveTutor_EventScript_GetStatusMoveList_Text_35:
# 1366 "data/maps/TradeCenter/scripts.pory"
	.string "Metronome$"

MoveTutor_EventScript_GetStatusMoveList_Text_36:
# 1367 "data/maps/TradeCenter/scripts.pory"
	.string "Recycle$"

MoveTutor_EventScript_GetStatusMoveList_Text_37:
# 1368 "data/maps/TradeCenter/scripts.pory"
	.string "Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_38:
# 1371 "data/maps/TradeCenter/scripts.pory"
	.string "Coaching$"

MoveTutor_EventScript_GetStatusMoveList_Text_39:
# 1372 "data/maps/TradeCenter/scripts.pory"
	.string "Hone Claws$"

MoveTutor_EventScript_GetStatusMoveList_Text_40:
# 1375 "data/maps/TradeCenter/scripts.pory"
	.string "Quash$"

MoveTutor_EventScript_GetStatusMoveList_Text_41:
# 1376 "data/maps/TradeCenter/scripts.pory"
	.string "Scary Face$"

MoveTutor_EventScript_GetStatusMoveList_Text_42:
# 1377 "data/maps/TradeCenter/scripts.pory"
	.string "Spite$"

MoveTutor_EventScript_GetStatusMoveList_Text_43:
# 1378 "data/maps/TradeCenter/scripts.pory"
	.string "Swagger$"

MoveTutor_EventScript_GetStatusMoveList_Text_44:
# 1379 "data/maps/TradeCenter/scripts.pory"
	.string "Work Up$"

MoveTutor_EventScript_ComeBackLater_Text_0:
# 1864 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "teach one of your Pokémon a new move.$"

Common_EventScript_PreDamageOrStatus_Text_0:
# 1874 "data/maps/TradeCenter/scripts.pory"
	.string "I can weaken your Pokémon before\n"
	.string "battle, by inflicting damage or a status\l"
	.string "condition.$"

Common_EventScript_PreDamageOrStatus_Text_1:
# 1877 "data/maps/TradeCenter/scripts.pory"
	.string "How can I be of assistance?$"

Common_EventScript_PreDamageOrStatus_Text_2:
# 1878 "data/maps/TradeCenter/scripts.pory"
	.string "Set Status$"

Common_EventScript_PreDamageOrStatus_Text_3:
# 1878 "data/maps/TradeCenter/scripts.pory"
	.string "Set Damage$"

Common_EventScript_PreDamageOrStatus_Text_4:
# 1878 "data/maps/TradeCenter/scripts.pory"
	.string "Never Mind$"

PokemonCenter_2F_EventScript_PreTrain_ComeBackLater_Text_0:
# 1893 "data/maps/TradeCenter/scripts.pory"
	.string "I'll be here, if you ever need my\n"
	.string "services.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_0:
# 1902 "data/maps/TradeCenter/scripts.pory"
	.string "Choose a Pokémon to set damage for.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_1:
# 1911 "data/maps/TradeCenter/scripts.pory"
	.string "That's an Egg! I can't harm it.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_2:
# 1917 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon has already fainted! I\n"
	.string "can't injure it farther.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_3:
# 1938 "data/maps/TradeCenter/scripts.pory"
	.string "The specified HP is greater than that\n"
	.string "Pokémon can have. Its maximum HP is\l"
	.string "{STR_VAR_1}.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_4:
# 1941 "data/maps/TradeCenter/scripts.pory"
	.string "HP can't be set to 0.$"

PokemonCenter_2F_EventScript_SetHPMenu_Text_5:
# 1944 "data/maps/TradeCenter/scripts.pory"
	.string "The Pokémon's damage has been set!$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0:
# 1955 "data/maps/TradeCenter/scripts.pory"
	.string "Your PARTY has no Pokémon.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1:
# 1959 "data/maps/TradeCenter/scripts.pory"
	.string "Choose a Pokémon to inflict a status\n"
	.string "condition on.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2:
# 1972 "data/maps/TradeCenter/scripts.pory"
	.string "Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3:
# 1973 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4:
# 1974 "data/maps/TradeCenter/scripts.pory"
	.string "Paralysis$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5:
# 1975 "data/maps/TradeCenter/scripts.pory"
	.string "Sleep$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6:
# 1976 "data/maps/TradeCenter/scripts.pory"
	.string "Burn$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7:
# 1977 "data/maps/TradeCenter/scripts.pory"
	.string "Freeze$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8:
# 1979 "data/maps/TradeCenter/scripts.pory"
	.string "Which status condition would you like\n"
	.string "to inflict?$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9:
# 1988 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "poisoned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10:
# 2000 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being frozen.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11:
# 2006 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being burned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12:
# 2012 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "paralyzed.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13:
# 2020 "data/maps/TradeCenter/scripts.pory"
	.string "Your Pokémon was inflicted with a\n"
	.string "status condition!$"

Common_EventScript_AttributeChanger_Text_0:
# 2031 "data/maps/TradeCenter/scripts.pory"
	.string "Hello! I can change your Pokémon's\n"
	.string "Nature, IVs, or Hidden Power Type.\p"
	.string "It will cost you a Heart Scale, however.$"

Common_EventScript_AttributeChanger_Text_1:
# 2041 "data/maps/TradeCenter/scripts.pory"
	.string "What would you like to change?$"

Common_EventScript_AttributeChanger_Text_2:
# 2042 "data/maps/TradeCenter/scripts.pory"
	.string "Nature$"

Common_EventScript_AttributeChanger_Text_3:
# 2042 "data/maps/TradeCenter/scripts.pory"
	.string "IVs$"

Common_EventScript_AttributeChanger_Text_4:
# 2042 "data/maps/TradeCenter/scripts.pory"
	.string "Hidden Power Type$"

Common_EventScript_AttributeChanger_Text_5:
# 2042 "data/maps/TradeCenter/scripts.pory"
	.string "Nevermind$"

Common_EventScript_AttributeChanger_ComeBackLater_Text_0:
# 2061 "data/maps/TradeCenter/scripts.pory"
	.string "I'll be here if you ever want to change\n"
	.string "any of your Pokémon's attributes!$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0:
# 2074 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's Hidden Power type\n"
	.string "would you like to change?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1:
# 2089 "data/maps/TradeCenter/scripts.pory"
	.string "What would you like your Pokémon's\n"
	.string "Hidden Power type to be?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2:
# 2090 "data/maps/TradeCenter/scripts.pory"
	.string "Fighting$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3:
# 2091 "data/maps/TradeCenter/scripts.pory"
	.string "Flying$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4:
# 2093 "data/maps/TradeCenter/scripts.pory"
	.string "Ground$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5:
# 2094 "data/maps/TradeCenter/scripts.pory"
	.string "Rock$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6:
# 2095 "data/maps/TradeCenter/scripts.pory"
	.string "Bug$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7:
# 2096 "data/maps/TradeCenter/scripts.pory"
	.string "Ghost$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8:
# 2097 "data/maps/TradeCenter/scripts.pory"
	.string "Steel$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9:
# 2098 "data/maps/TradeCenter/scripts.pory"
	.string "Fire$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10:
# 2099 "data/maps/TradeCenter/scripts.pory"
	.string "Water$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11:
# 2100 "data/maps/TradeCenter/scripts.pory"
	.string "Grass$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12:
# 2101 "data/maps/TradeCenter/scripts.pory"
	.string "Electric$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13:
# 2102 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14:
# 2103 "data/maps/TradeCenter/scripts.pory"
	.string "Ice$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15:
# 2104 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16:
# 2105 "data/maps/TradeCenter/scripts.pory"
	.string "Dark$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17:
# 2106 "data/maps/TradeCenter/scripts.pory"
	.string "Fairy$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18:
# 2144 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's Hidden Power\l"
	.string "type.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19:
# 2157 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type is already {STR_VAR_2}.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20:
# 2162 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to change\n"
	.string "{STR_VAR_1}'s Hidden Power type to\l"
	.string "{STR_VAR_2} for a Heart Scale?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21:
# 2165 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type was changed to {STR_VAR_2}!$"

Common_EventScript_ChangeNature_Text_0:
# 2187 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's Nature would you like\n"
	.string "to change?$"

Common_EventScript_ChangeNature_Text_1:
# 2200 "data/maps/TradeCenter/scripts.pory"
	.string "What Nature would you like\n"
	.string "{STR_VAR_1} to have?$"

Common_EventScript_ChangeNature_Text_2:
# 2201 "data/maps/TradeCenter/scripts.pory"
	.string "Hardy (neutral)$"

Common_EventScript_ChangeNature_Text_3:
# 2202 "data/maps/TradeCenter/scripts.pory"
	.string "Lonely (+Atk/-Def)$"

Common_EventScript_ChangeNature_Text_4:
# 2203 "data/maps/TradeCenter/scripts.pory"
	.string "Brave (+Atk/-Spe)$"

Common_EventScript_ChangeNature_Text_5:
# 2204 "data/maps/TradeCenter/scripts.pory"
	.string "Adamant (+Atk/-SpA)$"

Common_EventScript_ChangeNature_Text_6:
# 2205 "data/maps/TradeCenter/scripts.pory"
	.string "Naughty (+Atk/-SpD)$"

Common_EventScript_ChangeNature_Text_7:
# 2206 "data/maps/TradeCenter/scripts.pory"
	.string "Bold (+Def/-Atk)$"

Common_EventScript_ChangeNature_Text_8:
# 2207 "data/maps/TradeCenter/scripts.pory"
	.string "Docile (neutral)$"

Common_EventScript_ChangeNature_Text_9:
# 2208 "data/maps/TradeCenter/scripts.pory"
	.string "Relaxed (+Def/-Spe)$"

Common_EventScript_ChangeNature_Text_10:
# 2209 "data/maps/TradeCenter/scripts.pory"
	.string "Impish (+Def/-SpA)$"

Common_EventScript_ChangeNature_Text_11:
# 2210 "data/maps/TradeCenter/scripts.pory"
	.string "Lax (+Def/-SpD)$"

Common_EventScript_ChangeNature_Text_12:
# 2211 "data/maps/TradeCenter/scripts.pory"
	.string "Timid (+Spe/-Atk)$"

Common_EventScript_ChangeNature_Text_13:
# 2212 "data/maps/TradeCenter/scripts.pory"
	.string "Hasty (+Spe/-Def)$"

Common_EventScript_ChangeNature_Text_14:
# 2213 "data/maps/TradeCenter/scripts.pory"
	.string "Serious (neutral)$"

Common_EventScript_ChangeNature_Text_15:
# 2214 "data/maps/TradeCenter/scripts.pory"
	.string "Jolly (+Spe/-SpA)$"

Common_EventScript_ChangeNature_Text_16:
# 2215 "data/maps/TradeCenter/scripts.pory"
	.string "Naive (+Spe/-SpD)$"

Common_EventScript_ChangeNature_Text_17:
# 2216 "data/maps/TradeCenter/scripts.pory"
	.string "Modest (+SpA/-Atk)$"

Common_EventScript_ChangeNature_Text_18:
# 2217 "data/maps/TradeCenter/scripts.pory"
	.string "Mild (+SpA/-Def)$"

Common_EventScript_ChangeNature_Text_19:
# 2218 "data/maps/TradeCenter/scripts.pory"
	.string "Quiet (+SpA/-Spe)$"

Common_EventScript_ChangeNature_Text_20:
# 2219 "data/maps/TradeCenter/scripts.pory"
	.string "Bashful (neutral)$"

Common_EventScript_ChangeNature_Text_21:
# 2220 "data/maps/TradeCenter/scripts.pory"
	.string "Rash (+SpA/-SpD)$"

Common_EventScript_ChangeNature_Text_22:
# 2221 "data/maps/TradeCenter/scripts.pory"
	.string "Calm (+SpD/-Atk)$"

Common_EventScript_ChangeNature_Text_23:
# 2222 "data/maps/TradeCenter/scripts.pory"
	.string "Gentle (+SpD/-Def)$"

Common_EventScript_ChangeNature_Text_24:
# 2223 "data/maps/TradeCenter/scripts.pory"
	.string "Sassy (+SpD/-Spe)$"

Common_EventScript_ChangeNature_Text_25:
# 2224 "data/maps/TradeCenter/scripts.pory"
	.string "Careful (+SpD/-SpA)$"

Common_EventScript_ChangeNature_Text_26:
# 2225 "data/maps/TradeCenter/scripts.pory"
	.string "Quirky (neutral)$"

Common_EventScript_ChangeNature_Text_27:
# 2279 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's Nature.$"

Common_EventScript_ChangeNature_Text_28:
# 2292 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s Nature is already\n"
	.string "{STR_VAR_2}.$"

Common_EventScript_ChangeNature_Text_29:
# 2302 "data/maps/TradeCenter/scripts.pory"
	.string "It looks like your Bag is full.\p"
	.string "Please make some room and come back!$"

Common_EventScript_ChangeNature_Text_30:
# 2308 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to change\n"
	.string "{STR_VAR_1}'s Nature to\l"
	.string "{STR_VAR_2} for a Heart Scale?$"

Common_EventScript_ChangeNature_Text_31:
# 2311 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s Nature was changed to\n"
	.string "{STR_VAR_2}!$"

Common_EventScript_ChangeNature_Text_32:
# 2315 "data/maps/TradeCenter/scripts.pory"
	.string "We have a 2-for-1 special for this\n"
	.string "nature; please take this mint as well.$"

Common_EventScript_ChangeIV_Text_0:
# 2338 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's IVs would you like to\n"
	.string "change?$"

Common_EventScript_ChangeIV_Text_1:
# 2351 "data/maps/TradeCenter/scripts.pory"
	.string "Which stat's IV would you like to change\n"
	.string "for {STR_VAR_1}?$"

Common_EventScript_ChangeIV_Text_2:
# 2352 "data/maps/TradeCenter/scripts.pory"
	.string "HP$"

Common_EventScript_ChangeIV_Text_3:
# 2353 "data/maps/TradeCenter/scripts.pory"
	.string "Attack$"

Common_EventScript_ChangeIV_Text_4:
# 2354 "data/maps/TradeCenter/scripts.pory"
	.string "Defense$"

Common_EventScript_ChangeIV_Text_5:
# 2355 "data/maps/TradeCenter/scripts.pory"
	.string "Speed$"

Common_EventScript_ChangeIV_Text_6:
# 2356 "data/maps/TradeCenter/scripts.pory"
	.string "Sp. Attack$"

Common_EventScript_ChangeIV_Text_7:
# 2357 "data/maps/TradeCenter/scripts.pory"
	.string "Sp. Defense$"

Common_EventScript_ChangeIV_Text_8:
# 2373 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's IVs.$"

Common_EventScript_ChangeIV_Text_9:
# 2388 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "currently {STR_VAR_3}.\p"
	.string "Would you like to maximize or minimize\n"
	.string "it?$"

Common_EventScript_ChangeIV_Text_10:
# 2389 "data/maps/TradeCenter/scripts.pory"
	.string "Maximize$"

Common_EventScript_ChangeIV_Text_11:
# 2390 "data/maps/TradeCenter/scripts.pory"
	.string "Minimize$"

Common_EventScript_ChangeIV_Text_12:
# 2394 "data/maps/TradeCenter/scripts.pory"
	.string "maximum$"

Common_EventScript_ChangeIV_Text_13:
# 2397 "data/maps/TradeCenter/scripts.pory"
	.string "minimum$"

Common_EventScript_ChangeIV_Text_14:
# 2413 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "already at the maximum.$"

Common_EventScript_ChangeIV_Text_15:
# 2420 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV is\n"
	.string "already at the minimum.$"

Common_EventScript_ChangeIV_Text_16:
# 2429 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to trade a Heart\n"
	.string "Scale to change {STR_VAR_1}'s\l"
	.string "{STR_VAR_2} IV from {STR_VAR_3}\l"
	.string "to the maximum of 31?$"

Common_EventScript_ChangeIV_Text_17:
# 2432 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to trade a Heart\n"
	.string "Scale to change {STR_VAR_1}'s\l"
	.string "{STR_VAR_2} IV from {STR_VAR_3}\l"
	.string "to the minimum of 0?$"

Common_EventScript_ChangeIV_Text_18:
# 2437 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2} IV was\n"
	.string "changed to {STR_VAR_3}!$"

Common_EventScript_EliteMoveTutor_Text_0:
# 2461 "data/maps/TradeCenter/scripts.pory"
	.string "You need to increase your Trainer Level\n"
	.string "further before I can teach any Elite\l"
	.string "Moves to your Pokémon.$"

Common_EventScript_EliteMoveTutor_Text_1:
# 2473 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach an Elite Move\n"
	.string "to any of your Pokémon?$"

Common_EventScript_EggMoveTutor_Text_0:
# 2573 "data/maps/TradeCenter/scripts.pory"
	.string "I'm the Egg Move Tutor.\p"
	.string "I can teach Pokémon moves they could\n"
	.string "have learned as Eggs.\p"
	.string "Unfortunately, I can only work with\n"
	.string "Trainers with at least one Gym Badge.\p"
	.string "Please come back later!$"

Common_EventScript_EggMoveTutor_Text_1:
# 2588 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach an Egg Move\n"
	.string "to any of your Pokémon for a Heart\l"
	.string "Scale?$"

PokemonCenter_2F_Unused_MoveTutor_Text_0:
# 2686 "data/maps/TradeCenter/scripts.pory"
	.string "Fusion Bolt$"

PokemonCenter_2F_Unused_MoveTutor_Text_1:
# 2687 "data/maps/TradeCenter/scripts.pory"
	.string "Fusion Flare$"

PokemonCenter_2F_Unused_MoveTutor_Text_2:
# 2688 "data/maps/TradeCenter/scripts.pory"
	.string "Ice Burn$"

PokemonCenter_2F_Unused_MoveTutor_Text_3:
# 2689 "data/maps/TradeCenter/scripts.pory"
	.string "Freeze Shock$"

TradeCenter_EventScript_DrainPunch_Text_0:
# 2729 "data/maps/TradeCenter/scripts.pory"
	.string "Why take a hit when you can take HP\n"
	.string "instead?\p"
	.string "This TM teaches Drain Punch: strike\n"
	.string "hard and recover your strength at the\l"
	.string "same time!$"

TradeCenter_EventScript_DrainPunch_Text_1:
# 2735 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Drain Punch. Keep\n"
	.string "fighting and recovering!$"

TradeCenter_EventScript_ShadowClaw_Text_0:
# 2746 "data/maps/TradeCenter/scripts.pory"
	.string "A claw forged from shadows strikes with\n"
	.string "high critical-hit potential.\p"
	.string "Here, take this TM: Shadow Claw is a\n"
	.string "powerful Ghost-type slash!$"

TradeCenter_EventScript_ShadowClaw_Text_1:
# 2752 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Shadow Claw. Keep\n"
	.string "striking from the darkness!$"

TradeCenter_EventScript_PsychoCut_Text_0:
# 2763 "data/maps/TradeCenter/scripts.pory"
	.string "Blades of psychic energy slice through\n"
	.string "the air with frightening precision.\p"
	.string "Take this TM: Psycho Cut lands critical\n"
	.string "hits more easily than most moves!$"

TradeCenter_EventScript_PsychoCut_Text_1:
# 2769 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Psycho Cut. Stay\n"
	.string "sharp out there!$"

TradeCenter_EventScript_CrossPoison_Text_0:
# 2780 "data/maps/TradeCenter/scripts.pory"
	.string "A slashing attack that spreads venom\n"
	.string "on contact.\p"
	.string "Here, take this TM: Cross Poison is a\n"
	.string "high-critical-hit Poison move that may\l"
	.string "leave foes poisoned!$"

TradeCenter_EventScript_CrossPoison_Text_1:
# 2786 "data/maps/TradeCenter/scripts.pory"
	.string "You already have Cross Poison. Keep\n"
	.string "spreading the venom!$"

Common_Text_CaveIsDarkUseFlash::
# 359 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "{PLAYER}'s Pokémon used Flash!$"

Common_Text_CaveIsDarkNeedFlash::
# 363 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "It's better to turn back.$"

Common_Text_BerryTreeSproutEncounter::
# 764 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the sprouting\n"
	.string "berry tree!$"

Common_Text_BerryTreeTallEncounter::
# 768 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the growing\n"
	.string "berry tree!$"

Common_Text_BerryTreeFlowersEncounter::
# 772 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the flowering\n"
	.string "berry tree!$"

Common_Text_BerryTreeBerriesEncounter::
# 776 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon eating the\n"
	.string "berries in the tree!$"

MoveTutor_Text_BasicAndEliteMoves::
# 1081 "data/maps/TradeCenter/scripts.pory"
	.string "The Move Tutor on the left knows many\n"
	.string "moves that lots of Pokémon can learn.\p"
	.string "He'll teach your Pokémon these moves\n"
	.string "for free, as many times as you like!\p"
	.string "The Tutor on the Right teaches Elite\n"
	.string "moves.\p"
	.string "These are rarer, but he'll charge a\n"
	.string "Heart Scale to teach one, so choose\l"
	.string "carefully!$"

MoveTutor_Text_BufferWhichMon::
# 1086 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"

MoveTutor_Text_WhichMoveWouldYouLikeToTeach::
# 1090 "data/maps/TradeCenter/scripts.pory"
	.string "Which move would you like to teach to\n"
	.string "one of your Pokémon?$"

EliteMoveTutor_Text_Intro::
# 2530 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Elite Move Tutor.\p"
	.string "I can teach certain Pokémon powerful\n"
	.string "Elite Moves that they can't learn any\l"
	.string "other way.\p"
	.string "It will cost you one Heart Scale per\n"
	.string "move.$"

EliteMoveTutor_Text_ChooseMon::
# 2534 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "check?$"

EliteMoveTutor_Text_CantTeachEgg::
# 2538 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but I can't teach moves to an\n"
	.string "Egg.$"

EliteMoveTutor_Text_NoEliteMoves::
# 2542 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but {STR_VAR_1} can't\n"
	.string "learn any Elite Moves.$"

EliteMoveTutor_Text_HasEliteMoves::
# 2546 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1} can learn Elite Moves!\p"
	.string "Let me show you what's available...$"

EliteMoveTutor_Text_AnythingElse::
# 2550 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach another Elite\n"
	.string "Move?$"

EliteMoveTutor_Text_ComeBack::
# 2554 "data/maps/TradeCenter/scripts.pory"
	.string "Come back anytime if you want to teach\n"
	.string "an Elite Move to one of your Pokémon.$"

EliteMoveTutor_Text_NeedHeartScale::
# 2558 "data/maps/TradeCenter/scripts.pory"
	.string "Come back when you have a Heart Scale.$"

EliteMoveTutor_Text_NoMoreHeartScales::
# 2562 "data/maps/TradeCenter/scripts.pory"
	.string "That's all for now.\p"
	.string "Come back with more Heart Scales if you\n"
	.string "want to learn additional Elite Moves.$"

EggMoveTutor_Text_Intro::
# 2646 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Egg Move Tutor.\p"
	.string "I can teach certain Pokémon moves they\n"
	.string "could have learned as Eggs.\p"
	.string "It will cost you one Heart Scale per\n"
	.string "move.$"

EggMoveTutor_Text_ChooseMon::
# 2650 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon would you like me to\n"
	.string "check?$"

EggMoveTutor_Text_CantTeachEgg::
# 2654 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but I can't teach moves to an\n"
	.string "Egg.$"

EggMoveTutor_Text_NoEggMoves::
# 2658 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but {STR_VAR_1} doesn't\n"
	.string "have any Egg Moves to learn.$"

EggMoveTutor_Text_HasEggMoves::
# 2662 "data/maps/TradeCenter/scripts.pory"
	.string "{STR_VAR_1} can learn Egg Moves!\p"
	.string "Let me show you what's available...$"

EggMoveTutor_Text_AnythingElse::
# 2666 "data/maps/TradeCenter/scripts.pory"
	.string "Would you like me to teach another Egg\n"
	.string "Move?$"

EggMoveTutor_Text_ComeBack::
# 2670 "data/maps/TradeCenter/scripts.pory"
	.string "Come back anytime if you want to teach\n"
	.string "an Egg Move to one of your Pokémon.$"

EggMoveTutor_Text_NeedHeartScale::
# 2674 "data/maps/TradeCenter/scripts.pory"
	.string "I am the Egg Move Tutor.\p"
	.string "I can teach certain Pokémon moves they\n"
	.string "could have learned as Eggs, but I\l"
	.string "require a Heart Scale as payment.\p"
	.string "Come back when you have one.$"

EggMoveTutor_Text_NoMoreHeartScales::
# 2678 "data/maps/TradeCenter/scripts.pory"
	.string "That's all for now!\p"
	.string "Come back with more Heart Scales if you\n"
	.string "want to learn additional Egg Moves.$"

MatchCall_Text_Rival_1_1::
# 2792 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: You won't believe this,\n"
	.string "{PLAYER}.\p"
	.string "I had to throw dozens of Pokeballs\n"
	.string "to catch this one Pokémon - it was\l"
	.string "constantly breaking out!\p"
	.string "Even worse, they kept knocking\n"
	.string "themselves out!$"

MatchCall_Text_Rival_1_2::
# 2796 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi, {PLAYER}!\p"
	.string "After a lot of searching, I can\n"
	.string "confirm there are five colors of\l"
	.string "Flabebe.\p"
	.string "For some reason, the white ones\n"
	.string "are just harder to find!$"

MatchCall_Text_Rival_1_3::
# 2800 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\p"
	.string "I've just been checking all my\n"
	.string "Pokémon for a sticker.\p"
	.string "Hope you're having more fun!$"

MatchCall_Text_Rival_2_5::
# 2804 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi {PLAYER}.\p"
	.string "I've spent weeks putting honey on\n"
	.string "this tree, and still haven't found\l"
	.string "the Pokémon I'm looking for.\p"
	.string "Do you think I should try another\n"
	.string "tree?$"

MatchCall_Text_Rival_2_1::
# 2808 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Guess what, {PLAYER}?\p"
	.string "I think I might have discovered\n"
	.string "the minimum catch rate.\p"
	.string "And I haven't even seen a\n"
	.string "legendary Pokémon yet!$"

MatchCall_Text_Rival_2_2::
# 2812 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "I'm away visiting a tropical island.\p"
	.string "I heard you can find fully evolved\n"
	.string "Pokémon at an unusually low level,\l"
	.string "but there don't seem to be any in\l"
	.string "the grass here.\p"
	.string "Maybe I need to lure them out\n"
	.string "somehow?$"

MatchCall_Text_Rival_2_3::
# 2816 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi {PLAYER}.\p"
	.string "Did you know that for Pokemon,\n"
	.string "There aren't always the same\l"
	.string "numbers of males and females?\p"
	.string "Sometimes that can be a\n"
	.string "bit frustrating!$"

MatchCall_Text_Rival_2_4::
# 2820 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: {PLAYER}!\p"
	.string "There are rumors that thousands\n"
	.string "of years ago, there was a fish with\l"
	.string "a different color stripe we don't\l"
	.string "see anymore.\p"
	.string "I wonder if that white fish is still\n"
	.string "around anywhere?$"

MatchCall_Text_Rival_2_6::
# 2824 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hey there, {PLAYER}!\p"
	.string "We know there's variation in\n"
	.string "Pokémon size, even within the same\l"
	.string "species.\p"
	.string "I'm trying to figure out exactly\n"
	.string "how big some Pokémon can get!$"

MatchCall_Text_Rival_3_1::
# 2828 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi, {PLAYER}!\p"
	.string "Did you know there's a difference\n"
	.string "between a chip and a crack?\p"
	.string "The difference is 18,000,\n"
	.string "apparently!$"

MatchCall_Text_Rival_3_2::
# 2832 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Sigh, {PLAYER}...\n"
	.string "My hands are covered in honey\l"
	.string "again…\p"
	.string "I thought I had found all the\n"
	.string "Pokémon on these trees, but it\l"
	.string "turns out some of the ones I found\l"
	.string "can't actually evolve.$"

MatchCall_Text_Rival_3_3::
# 2836 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi there, {PLAYER}!\p"
	.string "I'm visiting Mt. Pyre right now.\p"
	.string "I swear I keep hearing bells, but I can't\n"
	.string "figure out where they're\l"
	.string "coming from$"

MatchCall_Text_Rival_3_4::
# 2840 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Oh, {PLAYER}!\p"
	.string "I'm staying at an Inn right now\n"
	.string "while I'm traveling.\p"
	.string "Sadly, the TV is broken.\p"
	.string "The innkeeper doesn't seem willing\n"
	.string "to fix it, but maybe I can figure it\l"
	.string "out myself.$"

MatchCall_Text_Rival_3_5::
# 2844 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Guess what, {PLAYER}?\p"
	.string "I guess it's a good thing I've been\n"
	.string "catching so many Sinistea.\p"
	.string "There's a collector looking for\n"
	.string "broken parts of their shell, for\l"
	.string "some reason.$"

MatchCall_Text_Rival_3_6::
# 2848 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Ah, {PLAYER}.\p"
	.string "My poor fish won't evolve.\p"
	.string "It keeps rushing into battle head-\n"
	.string "first and taking a beating, but\l"
	.string "still no luck. Do you think I should\l"
	.string "keep at it?$"

MatchCall_Text_Rival_5_1::
# 2852 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Help me out, {PLAYER}.\p"
	.string "Normally I put Pokémon to sleep to\n"
	.string "make them easier to catch.\p"
	.string "I've found a Pokémon that is\n"
	.string "sleeping so deeply, I can't even\l"
	.string "battle it!\l"
	.string "Any ideas?$"

MatchCall_Text_Rival_4_1::
# 2856 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: It's funny, {PLAYER}.\p"
	.string "There's a Pokémon I haven't been\p"
	.string "able to find in the wild, but I just\n"
	.string "heard reports of one just stopped\p"
	.string "in the middle of the road.$"

MatchCall_Text_Rival_4_2::
# 2860 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: {PLAYER}!\p"
	.string "I was just hanging underground\n"
	.string "with dozens of my closest friends,\l"
	.string "and when I got out a Pokémon I'd\l"
	.string "never seen before appeared!\p"
	.string "Do you think it was looking for a\n"
	.string "party?$"

MatchCall_Text_Rival_5_2::
# 2864 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Oh, {PLAYER}!\p"
	.string "I just found another one of these\n"
	.string "extraverted ghosts in a shipwreck,\l"
	.string "for some reason.\p"
	.string "Why does it like this specific\n"
	.string "Route, I wonder?$"

MatchCall_Text_Rival_4_3::
# 2868 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: You know, {PLAYER} -\p"
	.string "I've been trying to visit a shrine inside\n"
	.string "a grand castle, but it's been closed\l"
	.string "because of some sort of political\l"
	.string "issues.$"

MatchCall_Text_Rival_5_3::
# 2872 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}.\p"
	.string "Have you ever been so confident\n"
	.string "you just found a legendary\l"
	.string "Pokémon, only to realize it isn't\l"
	.string "legendary after all? Just very\l"
	.string "uncommon?\p"
	.string "I know that it's not fair, but I'm\n"
	.string "feeling a little disappointed.$"

MatchCall_Text_Rival_4_4::
# 2876 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Ugh, {PLAYER}.\n"
	.string "I've been fishing in this river for\l"
	.string "hours, trying to find a rare\l"
	.string "Pokémon, with no luck.\p"
	.string "The fisherman ten feet away from\n"
	.string "me found three in five minutes!$"

MatchCall_Text_Rival_5_4::
# 2880 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi, {PLAYER}.\p"
	.string "I've got a fish that is really no\n"
	.string "Ngood at battling, and doesn't seem\l"
	.string "interested in evolving either.\p"
	.string "Maybe I'll give it to my little\n"
	.string "Nbrother to use in contests.$"

MatchCall_Text_Rival_4_5::
# 2884 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "I'm on a fishing boat trying to\n"
	.string "find a-\l"
	.string "wait, I see bubbles!\l"
	.string "Sorry {PLAYER}, gotta go!$"

MatchCall_Text_Rival_5_5::
# 2888 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: You know, {PLAYER},\n"
	.string "I just don't understand why\l"
	.string "someone would design a boat after\l"
	.string "a Ground-type Pokémon.$"

MatchCall_Text_Rival_4_6::
# 2892 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi there, {PLAYER}.\p"
	.string "I really love these white flowers.\p"
	.string "It was worth the effort!$"

MatchCall_Text_Rival_5_6::
# 2896 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi there, {PLAYER}.\p"
	.string "It took me awhile to find a Flabebe\n"
	.string "with a white flower.\p"
	.string "Now, I'm hearing rumors there might\n"
	.string "Nbe a sixth flower they can hold?$"

MatchCall_Text_Rival_6_1::
# 2900 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hi, {PLAYER}.\p"
	.string "Do you know how I could find an\n"
	.string "extinct flower?\p"
	.string "It feels impossible, by definition.$"

MatchCall_Text_Rival_6_2::
# 2904 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Oh hi, {PLAYER}.\p"
	.string "I'm taking a break to help the\n"
	.string "Pokémon Rangers.\p"
	.string "They agreed to answer some\n"
	.string "Nquestions if I helped them out.\p"
	.string "They've been having trouble with\n"
	.string "some rogue musicians.$"

MatchCall_Text_Rival_6_3::
# 2908 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}.\p"
	.string "I got a letter from one of my Dad's\n"
	.string "colleagues in Kanto.\p"
	.string "What are you most thankful for,\n"
	.string "{PLAYER}?\p"
	.string "I've been asking myself that\n"
	.string "question lately.$"

MatchCall_Text_Rival_6_4::
# 2912 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: {PLAYER}!\p"
	.string "I think I've finally found a way to\n"
	.string "guarantee my victory next time we\l"
	.string "battle, {PLAYER}.\p"
	.string "I won't give it away, though.$"

MatchCall_Text_Rival_6_5::
# 2916 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: What!?\p"
	.string "Sorry, {PLAYER}, I can't hear you\n"
	.string "over the sound of thunder!\p"
	.string "There's a really bad storm over\n"
	.string "here!\p"
	.string "They say this is the only time a\n"
	.string "certain Pokémon appears.$"

MatchCall_Text_Rival_6_6::
# 2920 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: You know, {PLAYER}, I\n"
	.string "really don't like the idea that you\l"
	.string "will only see some Pokemon if you\l"
	.string "live in the right place or have\l"
	.string "enough money.\p"
	.string "I hope that changes someday.$"

MatchCall_Text_Rival_7_1::
# 2924 "data/maps/TradeCenter/scripts.pory"
	.string "{RIVAL}: {PLAYER}! I was just\n"
	.string "thinking about you.\p"
	.string "Good luck with the rest of the\n"
	.string "Pokemon League Challenge!$"
