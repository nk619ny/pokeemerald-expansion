# 1 "data/maps/TradeCenter/scripts.pory"

# 2 "data/maps/TradeCenter/scripts.pory"
TradeCenter_MapScripts::
# 3 "data/maps/TradeCenter/scripts.pory"
	.byte 0
# 4 "data/maps/TradeCenter/scripts.pory"

# 5 "data/maps/TradeCenter/scripts.pory"

# 6 "data/maps/TradeCenter/scripts.pory"
/*
# 7 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor1 {
# 8 "data/maps/TradeCenter/scripts.pory"
	lock
# 9 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Fire Punch",1)
# 10 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Ice Punch",2)
# 11 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Dragon Dance",3)
# 12 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 13 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 14 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 15 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 16 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_FIRE_PUNCH)
# 17 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Fire Punch")
# 18 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 19 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_ICE_PUNCH)
# 20 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Ice Punch")
# 21 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 22 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_DRAGON_DANCE)
# 23 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Dragon Dance")
# 24 "data/maps/TradeCenter/scripts.pory"
		default:
# 25 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 26 "data/maps/TradeCenter/scripts.pory"
			return
# 27 "data/maps/TradeCenter/scripts.pory"
	}
# 28 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 29 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 30 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 31 "data/maps/TradeCenter/scripts.pory"
	lock
# 32 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 33 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 34 "data/maps/TradeCenter/scripts.pory"
	return
# 35 "data/maps/TradeCenter/scripts.pory"
}
# 36 "data/maps/TradeCenter/scripts.pory"

# 37 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_FullTutorList {
# 38 "data/maps/TradeCenter/scripts.pory"
	//physical
# 39 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blaze Kick",1)
# 40 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Press",2)
# 41 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Body Slam",3)
# 42 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bounce",4)
# 43 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brutal Swing",5)
# 44 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bug Bite",6)
# 45 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Bulldoze",7)
# 46 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Darkest Lariat",8)
# 47 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Endeavor",9)
# 48 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Explosion",10)
# 49 "data/maps/TradeCenter/scripts.pory"
	False Swipe
# 50 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Fang",11)
# 51 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Punch",12)
# 52 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Giga Impact",13)
# 53 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gyro Ball",14)
# 54 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hard Press",15)
# 55 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Headbutt",16)
# 56 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Heavy Slam",17)
# 57 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ice Fang",18)
# 58 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Icicle Spear",19)
# 59 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Tail",20)
# 60 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Lash Out",21)
# 61 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Leaf Blade",22)
# 62 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Low Kick",23)
# 63 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Megahorn",24)
# 64 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Claw",25)
# 65 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Phantom Force",26)
# 66 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poison Tail",27)
# 67 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Poltergeist",28)
# 68 "data/maps/TradeCenter/scripts.pory"
	Pounce
# 69 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power Whip",29)
# 70 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Power-Up Punch",30)
# 71 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Razor Shell",31)
# 72 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Retaliate",32)
# 73 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rock Blast",33)
# 74 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rollout",34)
# 75 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sand Tomb",35)
# 76 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Secret Power",36)
# 77 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Self-Destruct",37)
# 78 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sky Drop",38)
# 79 "data/maps/TradeCenter/scripts.pory"
	Smart Strike
# 80 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Super Fang",39)
# 81 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tail Slap",40)
# 82 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Take Down",41)
# 83 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Thunder Fang",42)
# 84 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trailblaze",43)
# 85 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Triple Axel",44)
# 86 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Upper Hand",45)
# 87 "data/maps/TradeCenter/scripts.pory"

# 88 "data/maps/TradeCenter/scripts.pory"

# 89 "data/maps/TradeCenter/scripts.pory"
   // special
# 90 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Air Cutter",1)
# 91 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Alluring Voice",2)
# 92 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aura Sphere",3)
# 93 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Blast Burn",4)
# 94 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Brine",5)
# 95 "data/maps/TradeCenter/scripts.pory"
	Burning Jealousy
# 96 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Disarming Voice",6)
# 97 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dream Eater",7)
# 98 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Echoed Voice",8)
# 99 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electro Ball",9)
# 100 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electroweb",10)
# 101 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Pledge",11)
# 102 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fire Spin",12)
# 103 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Focus Blast",13)
# 104 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frenzy Plant",14)
# 105 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Frost Breath",15)
# 106 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Future Sight",16)
# 107 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grass Pledge",17)
# 108 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hydro Cannon",18)
# 109 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Incinerate",19)
# 110 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Infestation",20)
# 111 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magical Leaf",21)
# 112 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Explosion",22)
# 113 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud Shot",23)
# 114 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mud-Slap",24)
# 115 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Mystical Fire",25)
# 116 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Night Shade",26)
# 117 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pollen Puff",27)
# 118 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psybeam",28)
# 119 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Noise",29)
# 120 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Round",30)
# 121 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Shock Wave",31)
# 122 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Silver Wind",32)
# 123 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stored Power",33)
# 124 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Tri Attack",34)
# 125 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Uproar",35)
# 126 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Water Pledge",36)
# 127 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Whirlpool",37)
# 128 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Zap Cannon",38)
# 129 "data/maps/TradeCenter/scripts.pory"

# 130 "data/maps/TradeCenter/scripts.pory"

# 131 "data/maps/TradeCenter/scripts.pory"

# 132 "data/maps/TradeCenter/scripts.pory"

# 133 "data/maps/TradeCenter/scripts.pory"

# 134 "data/maps/TradeCenter/scripts.pory"
    // status/other (alphabetical, numbering restarts at 1)
# 135 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Agility",1)
# 136 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Ally Switch",2)
# 137 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Aurora Veil",3)
# 138 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Charge",4)
# 139 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Coaching",5)
# 140 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Confuse Ray",6)
# 141 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Cosmic Power",7)
# 142 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Curse",8)
# 143 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Cheer",9)
# 144 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Dragon Dance",10)
# 145 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Electric Terrain",11)
# 146 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Embargo",12)
# 147 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Fake Tears",13)
# 148 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Feather Dance",14)
# 149 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Grassy Terrain",15)
# 150 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Gravity",16)
# 151 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Hone Claws",17)
# 152 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Imprison",18)
# 153 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Iron Defense",19)
# 154 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Magic Room",20)
# 155 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metal Sound",21)
# 156 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Metronome",22)
# 157 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Misty Terrain",23)
# 158 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Nature Power",24)
# 159 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Pain Split",25)
# 160 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psych Up",26)
# 161 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Psychic Terrain",27)
# 162 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Quash",28)
# 163 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Rain Dance",29)
# 164 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Recycle",30)
# 165 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sandstorm",31)
# 166 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Scary Face",32)
# 167 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snatch",33)
# 168 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Snowscape",34)
# 169 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spikes",35)
# 170 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Spite",36)
# 171 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Stealth Rock",37)
# 172 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Sunny Day",38)
# 173 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Swagger",39)
# 174 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Toxic Spikes",40)
# 175 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Trick",41)
# 176 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Venom Drench",42)
# 177 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Wonder Room",43)
# 178 "data/maps/TradeCenter/scripts.pory"
    dynmultipush("Work Up",44)
# 179 "data/maps/TradeCenter/scripts.pory"

# 180 "data/maps/TradeCenter/scripts.pory"
    return
# 181 "data/maps/TradeCenter/scripts.pory"
}
# 182 "data/maps/TradeCenter/scripts.pory"

# 183 "data/maps/TradeCenter/scripts.pory"

# 184 "data/maps/TradeCenter/scripts.pory"
*/
# 185 "data/maps/TradeCenter/scripts.pory"

# 186 "data/maps/TradeCenter/scripts.pory"
/*
# 187 "data/maps/TradeCenter/scripts.pory"
script PokemonCenter_2F_BasicMoveTutor2 {
# 188 "data/maps/TradeCenter/scripts.pory"
	lock
# 189 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Power-Up Punch",1)
# 190 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Brutal Swing",2)
# 191 "data/maps/TradeCenter/scripts.pory"
	dynmultipush("Stealth Rock",3)
# 192 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT)
# 193 "data/maps/TradeCenter/scripts.pory"
	dynmultistack(0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE)
# 194 "data/maps/TradeCenter/scripts.pory"
	switch(var(VAR_RESULT)) {
# 195 "data/maps/TradeCenter/scripts.pory"
		case 1:
# 196 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_POWER_UP_PUNCH)
# 197 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Power-Up Punch")
# 198 "data/maps/TradeCenter/scripts.pory"
		case 2:
# 199 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_BRUTAL_SWING)
# 200 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Brutal Swing")
# 201 "data/maps/TradeCenter/scripts.pory"
		case 3:
# 202 "data/maps/TradeCenter/scripts.pory"
			setvar(VAR_0x8005, MOVE_STEALTH_ROCK)
# 203 "data/maps/TradeCenter/scripts.pory"
			bufferstring(STR_VAR_1, "Stealth Rock")
# 204 "data/maps/TradeCenter/scripts.pory"
		default:
# 205 "data/maps/TradeCenter/scripts.pory"
			releaseall
# 206 "data/maps/TradeCenter/scripts.pory"
			return
# 207 "data/maps/TradeCenter/scripts.pory"
	}
# 208 "data/maps/TradeCenter/scripts.pory"
	msgbox(MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT)
# 209 "data/maps/TradeCenter/scripts.pory"
	special(ChooseMonForMoveTutor)
# 210 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 211 "data/maps/TradeCenter/scripts.pory"
	lock
# 212 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 213 "data/maps/TradeCenter/scripts.pory"
	releaseall
# 214 "data/maps/TradeCenter/scripts.pory"
	return
# 215 "data/maps/TradeCenter/scripts.pory"
}
# 216 "data/maps/TradeCenter/scripts.pory"
*/
# 217 "data/maps/TradeCenter/scripts.pory"

# 218 "data/maps/TradeCenter/scripts.pory"
/*
# 219 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves {
# 220 "data/maps/TradeCenter/scripts.pory"
	lock
# 221 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 222 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 223 "data/maps/TradeCenter/scripts.pory"
	}
# 224 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 225 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_ByBasePower)
# 226 "data/maps/TradeCenter/scripts.pory"
	}
# 227 "data/maps/TradeCenter/scripts.pory"
	else {
# 228 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked)
# 229 "data/maps/TradeCenter/scripts.pory"
	}
# 230 "data/maps/TradeCenter/scripts.pory"
}
# 231 "data/maps/TradeCenter/scripts.pory"

# 232 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves {
# 233 "data/maps/TradeCenter/scripts.pory"
	lock
# 234 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 235 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 236 "data/maps/TradeCenter/scripts.pory"
	}
# 237 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 238 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_ByBasePower)
# 239 "data/maps/TradeCenter/scripts.pory"
	}
# 240 "data/maps/TradeCenter/scripts.pory"
	else {
# 241 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked)
# 242 "data/maps/TradeCenter/scripts.pory"
	}
# 243 "data/maps/TradeCenter/scripts.pory"
}
# 244 "data/maps/TradeCenter/scripts.pory"

# 245 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves {
# 246 "data/maps/TradeCenter/scripts.pory"
	lock
# 247 "data/maps/TradeCenter/scripts.pory"
	if(flag(FLAG_SORT_TUTOR_ALPHABETICALLY)) {
# 248 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 249 "data/maps/TradeCenter/scripts.pory"
	}
# 250 "data/maps/TradeCenter/scripts.pory"
	elif(flag(FLAG_SORT_TUTOR_BY_BASE_POWER)) {
# 251 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_ByBasePower)
# 252 "data/maps/TradeCenter/scripts.pory"
	}
# 253 "data/maps/TradeCenter/scripts.pory"
	else {
# 254 "data/maps/TradeCenter/scripts.pory"
		goto(MoveTutor_EventScript_StatusMoves_RecentlyUnlocked)
# 255 "data/maps/TradeCenter/scripts.pory"
	}
# 256 "data/maps/TradeCenter/scripts.pory"
}
# 257 "data/maps/TradeCenter/scripts.pory"

# 258 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_ByBasePower {
# 259 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 260 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 261 "data/maps/TradeCenter/scripts.pory"
}
# 262 "data/maps/TradeCenter/scripts.pory"

# 263 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_PhysicalMoves_RecentlyUnlocked {
# 264 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 265 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_PhysicalMoves_Alphabetical)
# 266 "data/maps/TradeCenter/scripts.pory"
}
# 267 "data/maps/TradeCenter/scripts.pory"

# 268 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_ByBasePower {
# 269 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 270 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 271 "data/maps/TradeCenter/scripts.pory"
}
# 272 "data/maps/TradeCenter/scripts.pory"

# 273 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_SpecialMoves_RecentlyUnlocked {
# 274 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 275 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_SpecialMoves_Alphabetical)
# 276 "data/maps/TradeCenter/scripts.pory"
}
# 277 "data/maps/TradeCenter/scripts.pory"

# 278 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_ByBasePower {
# 279 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 280 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 281 "data/maps/TradeCenter/scripts.pory"
}
# 282 "data/maps/TradeCenter/scripts.pory"

# 283 "data/maps/TradeCenter/scripts.pory"
script MoveTutor_EventScript_StatusMoves_RecentlyUnlocked {
# 284 "data/maps/TradeCenter/scripts.pory"
	// Implement sorting and move selection logic here
# 285 "data/maps/TradeCenter/scripts.pory"
	goto(MoveTutor_EventScript_StatusMoves_Alphabetical)
# 286 "data/maps/TradeCenter/scripts.pory"
}
# 287 "data/maps/TradeCenter/scripts.pory"
*/

Common_EventScript_LevelCapUpdate::
# 293 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 294 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_LevelCapUpdate_Text_0, MSGBOX_DEFAULT
# 295 "data/maps/TradeCenter/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 296 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
# 297 "data/maps/TradeCenter/scripts.pory"
	closemessage
	return


Common_EventScript_SetStartingFlagStates::
# 302 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 303 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 304 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 305 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 306 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_TRAINER_HILL_AUDIENCE
# 307 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 308 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 309 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 310 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 311 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Common_EventScript_ApplyHandicap::
# 316 "data/maps/TradeCenter/scripts.pory"
	switch VAR_LEVEL_HANDICAP
# 317 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ApplyHandicap_3
# 319 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_ApplyHandicap_4
# 321 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_ApplyHandicap_5
# 323 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_ApplyHandicap_6
# 325 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_ApplyHandicap_7
# 327 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_ApplyHandicap_8
# 329 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_ApplyHandicap_9
# 331 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_ApplyHandicap_10
# 333 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_ApplyHandicap_11
# 335 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_ApplyHandicap_12
# 337 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_ApplyHandicap_13
	return

Common_EventScript_ApplyHandicap_1:
# 342 "data/maps/TradeCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 100
	goto_if_gt Common_EventScript_ApplyHandicap_16
Common_EventScript_ApplyHandicap_15:
	return

Common_EventScript_ApplyHandicap_3:
	return

Common_EventScript_ApplyHandicap_4:
# 320 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_5:
# 322 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_6:
# 324 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_7:
# 326 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_8:
# 328 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_9:
# 330 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_10:
# 332 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_11:
# 334 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_12:
# 336 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_13:
# 338 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_16:
# 343 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 100
	goto Common_EventScript_ApplyHandicap_15


# 356 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStep:
# 357 "data/maps/TradeCenter/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStep:
# 361 "data/maps/TradeCenter/scripts.pory"
	walk_up
	step_end

# 364 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkLeftOneStep:
# 365 "data/maps/TradeCenter/scripts.pory"
	walk_left
	step_end

# 368 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkRightOneStep:
# 369 "data/maps/TradeCenter/scripts.pory"
	walk_right
	step_end

# 372 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStepFast:
# 373 "data/maps/TradeCenter/scripts.pory"
	walk_fast_down
	step_end

# 376 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStepFast:
# 377 "data/maps/TradeCenter/scripts.pory"
	walk_fast_up
	step_end

Common_EventScript_SetFlashTest::
# 381 "data/maps/TradeCenter/scripts.pory"
	lock
# 382 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_SetFlashTest_Text_0, MSGBOX_YESNO
# 383 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_SetFlashTest_2
# 386 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_SetFlashTest_3
Common_EventScript_SetFlashTest_1:
# 389 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_SetFlashTest_2:
# 384 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1

Common_EventScript_SetFlashTest_3:
# 387 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1


Common_EventScript_CheckIfHideoutsComplete::
# 394 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, Common_EventScript_CheckIfHideoutsComplete_4
Common_EventScript_CheckIfHideoutsComplete_3:
# 401 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 66
Common_EventScript_CheckIfHideoutsComplete_1:
	return

Common_EventScript_CheckIfHideoutsComplete_2:
# 395 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_BOTH_HIDEOUTS_COMPLETE
# 396 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 68
# 397 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 398 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_RemoveOptionalItems7PreSurf
	goto Common_EventScript_CheckIfHideoutsComplete_1

Common_EventScript_CheckIfHideoutsComplete_4:
# 394 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Common_EventScript_CheckIfHideoutsComplete_2
	goto Common_EventScript_CheckIfHideoutsComplete_3


# 406 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceLeft:
# 408 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 408 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 409 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 409 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 409 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 409 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 410 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 410 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 411 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

# 414 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceRight:
# 416 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 416 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 417 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 418 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 419 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

Common_EventScript_CheckIfEliteFourComplete::
# 424 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, Common_EventScript_CheckIfEliteFourComplete_5
Common_EventScript_CheckIfEliteFourComplete_3:
# 428 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_ALL_ELITE_FOUR_BEATEN
Common_EventScript_CheckIfEliteFourComplete_1:
	return

Common_EventScript_CheckIfEliteFourComplete_2:
# 425 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ALL_ELITE_FOUR_BEATEN
	goto Common_EventScript_CheckIfEliteFourComplete_1

Common_EventScript_CheckIfEliteFourComplete_4:
# 424 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, Common_EventScript_CheckIfEliteFourComplete_8
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_5:
# 424 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, Common_EventScript_CheckIfEliteFourComplete_4
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_8:
# 424 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, Common_EventScript_CheckIfEliteFourComplete_2
	goto Common_EventScript_CheckIfEliteFourComplete_3


MauvilleCity_EventScript_Temporary::
# 434 "data/maps/TradeCenter/scripts.pory"
	lock
# 435 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_MIRAGE_ISLAND_VISIBLE
# 438 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_HANDICAP, 0
# 466 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 30
# 467 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 468 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_NO_TRAINER_BATTLE, MauvilleCity_EventScript_Temporary_2
# 472 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_NO_TRAINER_BATTLE
MauvilleCity_EventScript_Temporary_1:
# 488 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_NO_TRAINER_BATTLE
# 489 "data/maps/TradeCenter/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_MAGMA_ADMIN_FARM, SlateportFarm_BeatMagmaAdminMultiText, TRAINER_MAGMA_MULTI_GRUNT_FARM, SlateportFarm_BeatMagmaGruntMultiText, PARTNER_AQUA
# 491 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 492 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 493 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_Temporary_2:
# 469 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_NO_TRAINER_BATTLE
	goto MauvilleCity_EventScript_Temporary_1


Common_EventScipt_CheckForBerryTreeEncounter::
# 498 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_PREVENT_WILD_ENCOUNTERS, Common_EventScipt_CheckForBerryTreeEncounter_1
# 502 "data/maps/TradeCenter/scripts.pory"
	random 100
# 503 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_lt Common_EventScipt_CheckForBerryTreeEncounter_4
	return

Common_EventScipt_CheckForBerryTreeEncounter_1:
	return

Common_EventScipt_CheckForBerryTreeEncounter_4:
# 504 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounter
	return


Common_EventScript_BerryTreeEncounter::
# 513 "data/maps/TradeCenter/scripts.pory"
	lock
# 514 "data/maps/TradeCenter/scripts.pory"
	switch VAR_0x8004
# 515 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_SPROUTED, Common_EventScript_BerryTreeEncounter_3
# 521 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_TALLER, Common_EventScript_BerryTreeEncounter_4
# 527 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_FLOWERING, Common_EventScript_BerryTreeEncounter_5
# 533 "data/maps/TradeCenter/scripts.pory"
	case BERRY_STAGE_BERRIES, Common_EventScript_BerryTreeEncounter_6
# 540 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_1:
# 543 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

Common_EventScript_BerryTreeEncounter_3:
# 516 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeSproutedEncounter
# 517 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeSproutEncounter, MSGBOX_DEFAULT
# 518 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 519 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 520 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_4:
# 522 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeTallEncounter
# 523 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeTallEncounter, MSGBOX_DEFAULT
# 524 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 525 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 526 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_5:
# 528 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounter
# 529 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeFlowersEncounter, MSGBOX_DEFAULT
# 530 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 531 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 532 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1

Common_EventScript_BerryTreeEncounter_6:
# 534 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeBerriesEncounter
# 535 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_Text_BerryTreeBerriesEncounter, MSGBOX_DEFAULT
# 536 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 537 "data/maps/TradeCenter/scripts.pory"
	waitbuttonpress
# 538 "data/maps/TradeCenter/scripts.pory"
	dowildbattle
	goto Common_EventScript_BerryTreeEncounter_1


Common_EventScript_BerryTreeSproutedEncounter::
# 549 "data/maps/TradeCenter/scripts.pory"
	random 100
# 550 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_2
# 553 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_3
# 556 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_4
# 559 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_5
# 562 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_6
# 565 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_7
# 568 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_8
# 571 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeSproutedEncounter_9
# 575 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeSproutedEncounter_19
# 579 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeSproutedEncounter_1:
	return

Common_EventScript_BerryTreeSproutedEncounter_2:
# 551 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CATERPIE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_3:
# 554 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WEEDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_4:
# 557 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_5:
# 560 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_BURMY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_6:
# 563 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SCATTERBUG_FANCY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_7:
# 566 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_LEDYBA, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_8:
# 569 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPINARAK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_9:
# 572 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SHROOMISH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1

Common_EventScript_BerryTreeSproutedEncounter_19:
# 576 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HERACROSS, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeSproutedEncounter_1


Common_EventScript_BerryTreeTallEncounter::
# 586 "data/maps/TradeCenter/scripts.pory"
	random 100
# 587 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_2
# 590 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 28
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_3
# 593 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 42
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_4
# 596 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 56
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_5
# 599 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_6
# 602 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_7
# 605 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_8
# 608 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeTallEncounter_9
# 612 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeTallEncounter_19
# 616 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeTallEncounter_1:
	return

Common_EventScript_BerryTreeTallEncounter_2:
# 588 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SPEAROW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_3:
# 591 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_4:
# 594 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_TAILLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_5:
# 597 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_STARLY, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_6:
# 600 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PIKIPEK, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_7:
# 603 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VENONAT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_8:
# 606 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEWADDLE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_9:
# 609 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SLAKOTH, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1

Common_EventScript_BerryTreeTallEncounter_19:
# 613 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EMOLGA, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeTallEncounter_1


Common_EventScript_BerryTreeFlowersEncounter::
# 623 "data/maps/TradeCenter/scripts.pory"
	random 100
# 624 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_2
# 627 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_3
# 630 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_4
# 633 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_5
# 636 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_6
# 639 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_7
# 642 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_8
# 646 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeFlowersEncounter_9
# 655 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_22
# 659 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
Common_EventScript_BerryTreeFlowersEncounter_1:
	return

Common_EventScript_BerryTreeFlowersEncounter_2:
# 625 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_COMBEE, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_3:
# 628 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CHERUBI, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_4:
# 631 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CUTIEFLY, 12, ITEM_HONEY
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_5:
# 634 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PINECO, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_6:
# 637 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_7:
# 640 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_8:
# 643 "data/maps/TradeCenter/scripts.pory"
	call Common_EventScript_BerryTreeFlowersEncounterFlabebe
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_9:
# 647 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Common_EventScript_BerryTreeFlowersEncounter_19
# 651 "data/maps/TradeCenter/scripts.pory"
	goto Common_EventScript_BerryTreeEncounterFled
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_19:
# 648 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_ILLUMISE, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1

Common_EventScript_BerryTreeFlowersEncounter_22:
# 656 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_VOLBEAT, 24, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounter_1


Common_EventScript_BerryTreeBerriesEncounter::
# 666 "data/maps/TradeCenter/scripts.pory"
	random 100
# 667 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_2
# 670 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_3
# 673 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 60
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_4
# 676 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_5
# 679 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 80
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_6
# 682 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 90
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_7
# 685 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 95
	goto_if_lt Common_EventScript_BerryTreeBerriesEncounter_8
# 689 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 12, ITEM_BERRY_JUICE
Common_EventScript_BerryTreeBerriesEncounter_1:
	return

Common_EventScript_BerryTreeBerriesEncounter_2:
# 668 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_CRABRAWLER, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_3:
# 671 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_SKWOVET, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_4:
# 674 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_AIPOM, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_5:
# 677 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSAGE, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_6:
# 680 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANSEAR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_7:
# 683 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_PANPOUR, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1

Common_EventScript_BerryTreeBerriesEncounter_8:
# 686 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_APPLIN, 12, ITEM_BERRY_JUICE
	goto Common_EventScript_BerryTreeBerriesEncounter_1


Common_EventScript_BerryTreeEncounterFled::
# 695 "data/maps/TradeCenter/scripts.pory"
	lock
# 696 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_BerryTreeEncounterFled_Text_0, MSGBOX_DEFAULT
# 697 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 698 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 699 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_BerryTreeFlowersEncounterFlabebe::
# 720 "data/maps/TradeCenter/scripts.pory"
	random 4
# 721 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 722 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_BerryTreeFlowersEncounterFlabebe_3
# 724 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_BerryTreeFlowersEncounterFlabebe_4
# 726 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_BerryTreeFlowersEncounterFlabebe_5
# 728 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_BerryTreeFlowersEncounterFlabebe_6
# 731 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_WHITE, 12, ITEM_NONE
Common_EventScript_BerryTreeFlowersEncounterFlabebe_1:
	return

Common_EventScript_BerryTreeFlowersEncounterFlabebe_3:
# 723 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_RED, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_4:
# 725 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_BLUE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_5:
# 727 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_YELLOW, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1

Common_EventScript_BerryTreeFlowersEncounterFlabebe_6:
# 729 "data/maps/TradeCenter/scripts.pory"
	setwildbattle SPECIES_FLABEBE_ORANGE, 12, ITEM_NONE
	goto Common_EventScript_BerryTreeFlowersEncounterFlabebe_1


Common_EventScript_RemoveOptionalItems0::
# 737 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 738 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POTION
# 739 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_X_ACCURACY
# 740 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_NORTH_NEW
# 741 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE
# 743 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE
# 744 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL
# 745 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION
# 748 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL
# 749 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POKE_BALL
	return


Common_EventScript_RemoveOptionalItems1::
# 754 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 755 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL
# 756 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_ETHER
# 757 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE
# 758 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL
# 759 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1
# 760 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2
	return


Common_EventScript_RemoveOptionalItems2::
# 766 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_ELIXIR
# 767 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL
# 768 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE
# 769 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_110_DIRE_HIT
# 770 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_PP_UP
# 771 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_103_GUARD_SPEC
# 772 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE
# 773 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MAUVILLE_CITY_X_SPEED
# 774 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_117_REPEL
# 775 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_GREAT_BALL
# 776 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_117_REVIVE
# 777 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_HP_UP
# 778 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES
# 779 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_ELIXIR
# 780 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_PETALBURG_WOODS_X_ATTACK
	return


Common_EventScript_RemoveOptionalItems3::
# 786 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_HP_UP
# 787 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_SUPER_REPEL
# 788 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_ETHER
# 789 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET
# 790 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_MAX_ETHER
# 791 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_113_HYPER_POTION
# 792 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_ENERGY_POWDER
# 793 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_RARE_CANDY
# 794 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE
# 795 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS
# 796 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_114_PROTEIN
	return


Common_EventScript_RemoveOptionalItems4::
# 801 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_PP_UP
# 803 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_GREAT_BALL
# 804 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_115_SUPER_POTION
# 805 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_REPEL
# 806 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_ETHER
# 807 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION
# 808 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_POTION
# 809 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_116_X_SPECIAL
# 810 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL
# 811 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST
# 812 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY
# 813 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_STARDUST
# 814 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_111_TM_SANDSTORM
	return


Common_EventScript_RemoveOptionalItems5::
	return


Common_EventScript_RemoveOptionalItems6::
# 824 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_118_IRON
# 826 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ULTRA_BALL
# 827 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE
# 828 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_SUPER_REPEL
# 829 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL
# 830 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_1
# 833 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_HYPER_POTION_2
# 834 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_1
# 835 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_ELIXIR_2
# 837 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_RARE_CANDY
# 838 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_119_NUGGET
# 839 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 840 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
	return


Common_EventScript_RemoveOptionalItemsSurfing::
# 845 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
# 846 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
# 847 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_105_IRON
# 848 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_106_PROTEIN
# 849 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_108_STAR_PIECE
# 850 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY
# 851 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3
# 852 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_PP_UP
# 853 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_109_POTION
	return


Common_EventScript_RemoveOptionalItems7PreSurf::
# 858 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1
# 859 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NEST_BALL
# 860 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_REVIVE
# 861 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2
# 862 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_NUGGET
# 863 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_120_ZINC
# 864 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_HYPER_POTION
# 865 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_120_FULL_HEAL
# 866 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP
# 867 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_CARBOS
# 868 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE
# 869 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET
# 870 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL
# 871 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_121_REVIVE
# 879 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_CALCIUM
# 880 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_PP_UP
# 881 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_REVIVAL_HERB
# 882 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL
# 883 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION
# 884 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP
# 885 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY
# 886 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_123_ELIXIR
# 888 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL
# 889 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL
# 890 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE
# 891 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE
	return


Common_EventScript_RemoveOptionalItems7PostSurf::
# 897 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_125_BIG_PEARL
# 898 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_ZINC
# 899 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_CARBOS
# 900 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_127_RARE_CANDY
# 901 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2
# 902 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1
# 903 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3
# 904 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_PROTEIN
# 905 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_132_RARE_CANDY
# 906 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_BIG_PEARL
# 907 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_STAR_PIECE
# 908 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_133_MAX_REVIVE
# 909 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_CARBOS
# 910 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_134_STAR_PIECE
	return


Common_EventScript_RemoveOptionalItems8::
# 915 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_RED_SHARD
# 916 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_YELLOW_SHARD
# 917 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_124_BLUE_SHARD
# 918 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_126_GREEN_SHARD
# 919 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM
# 920 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD
# 921 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2
# 922 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1
# 923 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL
# 924 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL
# 925 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS
# 928 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD
# 929 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL
# 930 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON
# 931 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD
# 932 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL
# 933 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE
# 934 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST
# 935 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL
# 936 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN
# 938 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP
# 939 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD
# 940 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE
# 941 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE
	return


MoveTutor_EventScript_BasicTutorIntro::
# 948 "data/maps/TradeCenter/scripts.pory"
	lock
# 949 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 950 "data/maps/TradeCenter/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_NotReadyYet
# 951 "data/maps/TradeCenter/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq MoveTutor_EventScript_BasicTutorIntro_2
MoveTutor_EventScript_BasicTutorIntro_1:
# 954 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 955 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_SelectMoveCategory
# 956 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_BasicTutorIntro_2:
# 952 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_BasicTutorIntro_Text_0, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_BasicTutorIntro_1


MoveTutor_EventScript_NotReadyYet::
# 961 "data/maps/TradeCenter/scripts.pory"
	lock
# 962 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_NotReadyYet_Text_0, MSGBOX_DEFAULT
# 963 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 964 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return


MoveTutor_EventScript_SetSorting::
# 982 "data/maps/TradeCenter/scripts.pory"
	lock
# 983 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 984 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_0, MSGBOX_DEFAULT
# 985 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 8, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SetSorting_Text_1, MoveTutor_EventScript_SetSorting_Text_2
# 986 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 987 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SetSorting_3
# 991 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SetSorting_4
# 996 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_5, MSGBOX_DEFAULT
MoveTutor_EventScript_SetSorting_1:
# 998 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 999 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SetSorting_3:
# 988 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 989 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 990 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_3, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_1

MoveTutor_EventScript_SetSorting_4:
# 992 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_SORT_TUTOR_ALPHABETICALLY
# 993 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_SORT_TUTOR_BY_BASE_POWER
# 994 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SetSorting_Text_4, MSGBOX_DEFAULT
	goto MoveTutor_EventScript_SetSorting_1


MoveTutor_EventScript_SelectMoveCategory::
# 1004 "data/maps/TradeCenter/scripts.pory"
	lock
# 1005 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1006 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_SelectMoveCategory_Text_0, MSGBOX_DEFAULT
# 1007 "data/maps/TradeCenter/scripts.pory"
	dynmultichoice 25, 6, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_EventScript_SelectMoveCategory_Text_1, MoveTutor_EventScript_SelectMoveCategory_Text_2, MoveTutor_EventScript_SelectMoveCategory_Text_3
# 1008 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1009 "data/maps/TradeCenter/scripts.pory"
	case 0, MoveTutor_EventScript_SelectMoveCategory_3
# 1011 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_SelectMoveCategory_4
# 1013 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_SelectMoveCategory_5
# 1016 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_SelectMoveCategory_1:
# 1018 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1019 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_SelectMoveCategory_3:
# 1010 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetPhysicalMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_4:
# 1012 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetSpecialMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1

MoveTutor_EventScript_SelectMoveCategory_5:
# 1014 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_GetStatusMoveList
	goto MoveTutor_EventScript_SelectMoveCategory_1


MoveTutor_EventScript_GetPhysicalMoveList::
# 1024 "data/maps/TradeCenter/scripts.pory"
	lock
# 1025 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetPhysicalMoveList_2
MoveTutor_EventScript_GetPhysicalMoveList_1:
# 1029 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetPhysicalMoveList_5
MoveTutor_EventScript_GetPhysicalMoveList_4:
# 1033 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetPhysicalMoveList_8
MoveTutor_EventScript_GetPhysicalMoveList_7:
# 1040 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetPhysicalMoveList_11
MoveTutor_EventScript_GetPhysicalMoveList_10:
# 1048 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetPhysicalMoveList_14
MoveTutor_EventScript_GetPhysicalMoveList_13:
# 1059 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetPhysicalMoveList_17
MoveTutor_EventScript_GetPhysicalMoveList_16:
# 1068 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetPhysicalMoveList_20
MoveTutor_EventScript_GetPhysicalMoveList_19:
# 1076 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetPhysicalMoveList_23
MoveTutor_EventScript_GetPhysicalMoveList_22:
# 1084 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetPhysicalMoveList_26
MoveTutor_EventScript_GetPhysicalMoveList_25:
# 1090 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_47, 11
# 1091 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachPhysicalMove
	return

MoveTutor_EventScript_GetPhysicalMoveList_2:
# 1026 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_0, 2
# 1027 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_1, 47
	goto MoveTutor_EventScript_GetPhysicalMoveList_1

MoveTutor_EventScript_GetPhysicalMoveList_5:
# 1030 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_2, 29
# 1031 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_3, 40
	goto MoveTutor_EventScript_GetPhysicalMoveList_4

MoveTutor_EventScript_GetPhysicalMoveList_8:
# 1034 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_4, 10
# 1035 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_5, 25
# 1036 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_6, 31
# 1037 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_7, 23
# 1038 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_8, 48
	goto MoveTutor_EventScript_GetPhysicalMoveList_7

MoveTutor_EventScript_GetPhysicalMoveList_11:
# 1041 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_9, 9
# 1042 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_10, 27
# 1043 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_11, 8
# 1044 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_12, 34
# 1045 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_13, 5
# 1046 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_14, 32
	goto MoveTutor_EventScript_GetPhysicalMoveList_10

MoveTutor_EventScript_GetPhysicalMoveList_14:
# 1049 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_15, 15
# 1050 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_16, 18
# 1051 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_17, 14
# 1052 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_18, 3
# 1053 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_19, 22
# 1054 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_20, 33
# 1055 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_21, 20
# 1056 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_22, 35
# 1057 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_23, 43
	goto MoveTutor_EventScript_GetPhysicalMoveList_13

MoveTutor_EventScript_GetPhysicalMoveList_17:
# 1060 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_24, 16
# 1061 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_25, 39
# 1062 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_26, 44
# 1063 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_27, 1
# 1064 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_28, 4
# 1065 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_29, 38
# 1066 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_30, 46
	goto MoveTutor_EventScript_GetPhysicalMoveList_16

MoveTutor_EventScript_GetPhysicalMoveList_20:
# 1069 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_31, 21
# 1070 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_32, 17
# 1071 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_33, 41
# 1072 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_34, 12
# 1073 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_35, 19
# 1074 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_36, 45
	goto MoveTutor_EventScript_GetPhysicalMoveList_19

MoveTutor_EventScript_GetPhysicalMoveList_23:
# 1077 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_37, 24
# 1078 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_38, 13
# 1079 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_39, 6
# 1080 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_40, 7
# 1081 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_41, 37
# 1082 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_42, 36
	goto MoveTutor_EventScript_GetPhysicalMoveList_22

MoveTutor_EventScript_GetPhysicalMoveList_26:
# 1085 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_43, 42
# 1086 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_44, 26
# 1087 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_45, 28
# 1088 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetPhysicalMoveList_Text_46, 30
	goto MoveTutor_EventScript_GetPhysicalMoveList_25


MoveTutor_EventScript_GetSpecialMoveList::
# 1095 "data/maps/TradeCenter/scripts.pory"
	lock
# 1096 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetSpecialMoveList_2
MoveTutor_EventScript_GetSpecialMoveList_1:
# 1099 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetSpecialMoveList_5
MoveTutor_EventScript_GetSpecialMoveList_4:
# 1106 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetSpecialMoveList_8
MoveTutor_EventScript_GetSpecialMoveList_7:
# 1111 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetSpecialMoveList_11
MoveTutor_EventScript_GetSpecialMoveList_10:
# 1120 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetSpecialMoveList_14
MoveTutor_EventScript_GetSpecialMoveList_13:
# 1124 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetSpecialMoveList_17
MoveTutor_EventScript_GetSpecialMoveList_16:
# 1131 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetSpecialMoveList_20
MoveTutor_EventScript_GetSpecialMoveList_19:
# 1138 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetSpecialMoveList_23
MoveTutor_EventScript_GetSpecialMoveList_22:
# 1147 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetSpecialMoveList_26
MoveTutor_EventScript_GetSpecialMoveList_25:
# 1153 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachSpecialMove
	return

MoveTutor_EventScript_GetSpecialMoveList_2:
# 1097 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_0, 2
	goto MoveTutor_EventScript_GetSpecialMoveList_1

MoveTutor_EventScript_GetSpecialMoveList_5:
# 1100 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_1, 17
# 1101 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_2, 3
# 1102 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_3, 26
# 1103 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_4, 30
# 1104 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_5, 34
	goto MoveTutor_EventScript_GetSpecialMoveList_4

MoveTutor_EventScript_GetSpecialMoveList_8:
# 1107 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_6, 10
# 1108 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_7, 23
# 1109 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_8, 28
	goto MoveTutor_EventScript_GetSpecialMoveList_7

MoveTutor_EventScript_GetSpecialMoveList_11:
# 1112 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_9, 4
# 1113 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_10, 15
# 1114 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_11, 19
# 1115 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_12, 14
# 1116 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_13, 12
# 1117 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_14, 18
# 1118 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_15, 37
	goto MoveTutor_EventScript_GetSpecialMoveList_10

MoveTutor_EventScript_GetSpecialMoveList_14:
# 1121 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_16, 8
# 1122 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_17, 35
	goto MoveTutor_EventScript_GetSpecialMoveList_13

MoveTutor_EventScript_GetSpecialMoveList_17:
# 1125 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_18, 39
# 1126 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_19, 36
# 1127 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_20, 29
# 1128 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_21, 6
# 1129 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_22, 20
	goto MoveTutor_EventScript_GetSpecialMoveList_16

MoveTutor_EventScript_GetSpecialMoveList_20:
# 1132 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_23, 27
# 1133 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_24, 5
# 1134 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_25, 16
# 1135 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_26, 32
# 1136 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_27, 33
	goto MoveTutor_EventScript_GetSpecialMoveList_19

MoveTutor_EventScript_GetSpecialMoveList_23:
# 1139 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_28, 1
# 1140 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_29, 22
# 1141 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_30, 31
# 1142 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_31, 11
# 1143 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_32, 24
# 1144 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_33, 13
# 1145 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_34, 38
	goto MoveTutor_EventScript_GetSpecialMoveList_22

MoveTutor_EventScript_GetSpecialMoveList_26:
# 1148 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_35, 7
# 1149 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_36, 9
# 1150 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_37, 21
# 1151 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetSpecialMoveList_Text_38, 25
	goto MoveTutor_EventScript_GetSpecialMoveList_25


MoveTutor_EventScript_GetStatusMoveList::
# 1157 "data/maps/TradeCenter/scripts.pory"
	lock
# 1159 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MoveTutor_EventScript_GetStatusMoveList_2
MoveTutor_EventScript_GetStatusMoveList_1:
# 1169 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MoveTutor_EventScript_GetStatusMoveList_5
MoveTutor_EventScript_GetStatusMoveList_4:
# 1172 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MoveTutor_EventScript_GetStatusMoveList_8
MoveTutor_EventScript_GetStatusMoveList_7:
# 1179 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, MoveTutor_EventScript_GetStatusMoveList_11
MoveTutor_EventScript_GetStatusMoveList_10:
# 1184 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MoveTutor_EventScript_GetStatusMoveList_14
MoveTutor_EventScript_GetStatusMoveList_13:
# 1192 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MoveTutor_EventScript_GetStatusMoveList_17
MoveTutor_EventScript_GetStatusMoveList_16:
# 1198 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MoveTutor_EventScript_GetStatusMoveList_20
MoveTutor_EventScript_GetStatusMoveList_19:
# 1204 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MoveTutor_EventScript_GetStatusMoveList_23
MoveTutor_EventScript_GetStatusMoveList_22:
# 1212 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MoveTutor_EventScript_GetStatusMoveList_26
MoveTutor_EventScript_GetStatusMoveList_25:
# 1216 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_NORMAN_INTRO, MoveTutor_EventScript_GetStatusMoveList_29
MoveTutor_EventScript_GetStatusMoveList_28:
# 1224 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_TeachStatusMove
	return

MoveTutor_EventScript_GetStatusMoveList_2:
# 1160 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_0, 11
# 1161 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_1, 15
# 1162 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_2, 23
# 1163 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_3, 27
# 1164 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_4, 29
# 1165 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_5, 31
# 1166 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_6, 34
# 1167 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_7, 38
	goto MoveTutor_EventScript_GetStatusMoveList_1

MoveTutor_EventScript_GetStatusMoveList_5:
# 1170 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_8, 3
	goto MoveTutor_EventScript_GetStatusMoveList_4

MoveTutor_EventScript_GetStatusMoveList_8:
# 1173 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_9, 2
# 1174 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_10, 7
# 1175 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_11, 16
# 1176 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_12, 18
# 1177 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_13, 20
	goto MoveTutor_EventScript_GetStatusMoveList_7

MoveTutor_EventScript_GetStatusMoveList_11:
# 1180 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_14, 9
# 1181 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_15, 10
# 1182 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_16, 14
	goto MoveTutor_EventScript_GetStatusMoveList_10

MoveTutor_EventScript_GetStatusMoveList_14:
# 1185 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_17, 13
# 1186 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_18, 25
# 1187 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_19, 26
# 1188 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_20, 40
# 1189 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_21, 41
# 1190 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_22, 42
	goto MoveTutor_EventScript_GetStatusMoveList_13

MoveTutor_EventScript_GetStatusMoveList_17:
# 1193 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_23, 8
# 1194 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_24, 19
# 1195 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_25, 37
# 1196 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_26, 43
	goto MoveTutor_EventScript_GetStatusMoveList_16

MoveTutor_EventScript_GetStatusMoveList_20:
# 1199 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_27, 1
# 1200 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_28, 21
# 1201 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_29, 24
# 1202 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_30, 33
	goto MoveTutor_EventScript_GetStatusMoveList_19

MoveTutor_EventScript_GetStatusMoveList_23:
# 1205 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_31, 4
# 1206 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_32, 6
# 1207 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_33, 12
# 1208 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_34, 22
# 1209 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_35, 30
# 1210 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_36, 35
	goto MoveTutor_EventScript_GetStatusMoveList_22

MoveTutor_EventScript_GetStatusMoveList_26:
# 1213 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_37, 5
# 1214 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_38, 17
	goto MoveTutor_EventScript_GetStatusMoveList_25

MoveTutor_EventScript_GetStatusMoveList_29:
# 1217 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_39, 28
# 1218 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_40, 32
# 1219 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_41, 36
# 1220 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_42, 39
# 1221 "data/maps/TradeCenter/scripts.pory"
	dynmultipush MoveTutor_EventScript_GetStatusMoveList_Text_43, 44
	goto MoveTutor_EventScript_GetStatusMoveList_28


MoveTutor_EventScript_TeachPhysicalMove::
# 1229 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1230 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachPhysicalMove_2
# 1234 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachPhysicalMove_1:
# 1237 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1238 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachPhysicalMove_7
# 1241 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachPhysicalMove_8
# 1244 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachPhysicalMove_9
# 1247 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachPhysicalMove_10
# 1250 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachPhysicalMove_11
# 1253 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachPhysicalMove_12
# 1256 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachPhysicalMove_13
# 1259 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachPhysicalMove_14
# 1262 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachPhysicalMove_15
# 1265 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachPhysicalMove_16
# 1268 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachPhysicalMove_17
# 1271 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachPhysicalMove_18
# 1274 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachPhysicalMove_19
# 1277 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachPhysicalMove_20
# 1280 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachPhysicalMove_21
# 1283 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachPhysicalMove_22
# 1286 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachPhysicalMove_23
# 1289 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachPhysicalMove_24
# 1292 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachPhysicalMove_25
# 1295 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachPhysicalMove_26
# 1298 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachPhysicalMove_27
# 1301 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachPhysicalMove_28
# 1304 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachPhysicalMove_29
# 1307 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachPhysicalMove_30
# 1310 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachPhysicalMove_31
# 1313 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachPhysicalMove_32
# 1316 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachPhysicalMove_33
# 1319 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachPhysicalMove_34
# 1322 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachPhysicalMove_35
# 1325 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachPhysicalMove_36
# 1328 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachPhysicalMove_37
# 1331 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachPhysicalMove_38
# 1334 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachPhysicalMove_39
# 1337 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachPhysicalMove_40
# 1340 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachPhysicalMove_41
# 1343 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachPhysicalMove_42
# 1346 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachPhysicalMove_43
# 1349 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachPhysicalMove_44
# 1352 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachPhysicalMove_45
# 1355 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachPhysicalMove_46
# 1358 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachPhysicalMove_47
# 1361 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachPhysicalMove_48
# 1364 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachPhysicalMove_49
# 1367 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachPhysicalMove_50
# 1370 "data/maps/TradeCenter/scripts.pory"
	case 45, MoveTutor_EventScript_TeachPhysicalMove_51
# 1373 "data/maps/TradeCenter/scripts.pory"
	case 46, MoveTutor_EventScript_TeachPhysicalMove_52
# 1376 "data/maps/TradeCenter/scripts.pory"
	case 47, MoveTutor_EventScript_TeachPhysicalMove_53
# 1379 "data/maps/TradeCenter/scripts.pory"
	case 48, MoveTutor_EventScript_TeachPhysicalMove_54
# 1383 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachPhysicalMove_5:
# 1385 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1386 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1387 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1388 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1389 "data/maps/TradeCenter/scripts.pory"
	lock
# 1390 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1391 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachPhysicalMove_2:
# 1231 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachPhysicalMove_1

MoveTutor_EventScript_TeachPhysicalMove_7:
# 1239 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
# 1240 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_27
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_8:
# 1242 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_PRESS
# 1243 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_0
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_9:
# 1245 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 1246 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_18
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_10:
# 1248 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
# 1249 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_28
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_11:
# 1251 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
# 1252 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_13
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_12:
# 1254 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
# 1255 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_39
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_13:
# 1257 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLDOZE
# 1258 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_40
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_14:
# 1260 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DARKEST_LARIAT
# 1261 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_11
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_15:
# 1263 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDEAVOR
# 1264 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_9
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_16:
# 1266 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 1267 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_4
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_17:
# 1269 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FALSE_SWIPE
# 1270 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_47
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_18:
# 1272 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 1273 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_34
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_19:
# 1275 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
# 1276 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_38
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_20:
# 1278 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GIGA_IMPACT
# 1279 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_17
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_21:
# 1281 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 1282 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_15
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_22:
# 1284 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HARD_PRESS
# 1285 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_24
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_23:
# 1287 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADBUTT
# 1288 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_32
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_24:
# 1290 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAVY_SLAM
# 1291 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_16
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_25:
# 1293 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 1294 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_35
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_26:
# 1296 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 1297 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_21
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_27:
# 1299 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
# 1300 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_31
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_28:
# 1302 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
# 1303 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_19
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_29:
# 1305 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
# 1306 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_7
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_30:
# 1308 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 1309 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_37
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_31:
# 1311 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGAHORN
# 1312 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_5
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_32:
# 1314 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
# 1315 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_44
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_33:
# 1317 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
# 1318 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_10
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_34:
# 1320 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
# 1321 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_45
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_35:
# 1323 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
# 1324 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_2
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_36:
# 1326 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
# 1327 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_46
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_37:
# 1329 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
# 1330 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_6
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_38:
# 1332 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
# 1333 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_14
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_39:
# 1335 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 1336 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_20
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_40:
# 1338 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RETALIATE
# 1339 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_12
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_41:
# 1341 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 1342 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_22
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_42:
# 1344 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 1345 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_42
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_43:
# 1347 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SAND_TOMB
# 1348 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_41
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_44:
# 1350 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SECRET_POWER
# 1351 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_29
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_45:
# 1353 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SELF_DESTRUCT
# 1354 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_25
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_46:
# 1356 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_DROP
# 1357 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_3
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_47:
# 1359 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SMART_STRIKE
# 1360 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_33
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_48:
# 1362 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
# 1363 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_43
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_49:
# 1365 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAIL_SLAP
# 1366 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_23
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_50:
# 1368 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TAKE_DOWN
# 1369 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_26
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_51:
# 1371 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 1372 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_36
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_52:
# 1374 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
# 1375 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_30
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_53:
# 1377 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
# 1378 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_1
	goto MoveTutor_EventScript_TeachPhysicalMove_5

MoveTutor_EventScript_TeachPhysicalMove_54:
# 1380 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPPER_HAND
# 1381 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetPhysicalMoveList_Text_8
	goto MoveTutor_EventScript_TeachPhysicalMove_5


MoveTutor_EventScript_TeachSpecialMove::
# 1397 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1398 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachSpecialMove_2
# 1402 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachSpecialMove_1:
# 1405 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1406 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachSpecialMove_7
# 1409 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachSpecialMove_8
# 1412 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachSpecialMove_9
# 1415 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachSpecialMove_10
# 1418 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachSpecialMove_11
# 1421 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachSpecialMove_12
# 1424 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachSpecialMove_13
# 1427 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachSpecialMove_14
# 1430 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachSpecialMove_15
# 1433 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachSpecialMove_16
# 1436 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachSpecialMove_17
# 1439 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachSpecialMove_18
# 1442 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachSpecialMove_19
# 1445 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachSpecialMove_20
# 1448 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachSpecialMove_21
# 1451 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachSpecialMove_22
# 1454 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachSpecialMove_23
# 1457 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachSpecialMove_24
# 1460 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachSpecialMove_25
# 1463 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachSpecialMove_26
# 1466 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachSpecialMove_27
# 1469 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachSpecialMove_28
# 1472 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachSpecialMove_29
# 1475 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachSpecialMove_30
# 1478 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachSpecialMove_31
# 1481 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachSpecialMove_32
# 1484 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachSpecialMove_33
# 1487 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachSpecialMove_34
# 1490 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachSpecialMove_35
# 1493 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachSpecialMove_36
# 1496 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachSpecialMove_37
# 1499 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachSpecialMove_38
# 1502 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachSpecialMove_39
# 1505 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachSpecialMove_40
# 1508 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachSpecialMove_41
# 1511 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachSpecialMove_42
# 1514 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachSpecialMove_43
# 1517 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachSpecialMove_44
# 1520 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachSpecialMove_45
# 1524 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachSpecialMove_5:
# 1526 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1527 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1528 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1529 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1530 "data/maps/TradeCenter/scripts.pory"
	lock
# 1531 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1532 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachSpecialMove_2:
# 1399 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachSpecialMove_1

MoveTutor_EventScript_TeachSpecialMove_7:
# 1407 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_CUTTER
# 1408 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_28
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_8:
# 1410 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLURING_VOICE
# 1411 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_0
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_9:
# 1413 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 1414 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_2
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_10:
# 1416 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
# 1417 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_9
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_11:
# 1419 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BRINE
# 1420 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_24
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_12:
# 1422 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 1423 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_21
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_13:
# 1425 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DISARMING_VOICE
# 1426 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_35
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_14:
# 1428 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 1429 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_16
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_15:
# 1431 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ECHOED_VOICE
# 1432 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_36
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_16:
# 1434 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
# 1435 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_6
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_17:
# 1437 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
# 1438 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_31
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_18:
# 1440 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
# 1441 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_13
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_19:
# 1443 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_SPIN
# 1444 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_33
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_20:
# 1446 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
# 1447 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_12
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_21:
# 1449 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
# 1450 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_10
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_22:
# 1452 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FROST_BREATH
# 1453 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_25
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_23:
# 1455 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FUTURE_SIGHT
# 1456 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_1
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_24:
# 1458 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
# 1459 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_14
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_25:
# 1461 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
# 1462 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_11
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_26:
# 1464 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
# 1465 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_22
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_27:
# 1467 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_INFESTATION
# 1468 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_37
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_28:
# 1470 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGICAL_LEAF
# 1471 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_29
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_29:
# 1473 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
# 1474 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_7
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_30:
# 1476 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SHOT
# 1477 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_32
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_31:
# 1479 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 1480 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_38
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_32:
# 1482 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
# 1483 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_3
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_33:
# 1485 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SHADE
# 1486 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_23
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_34:
# 1488 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
# 1489 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_8
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_35:
# 1491 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYBEAM
# 1492 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_20
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_36:
# 1494 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_NOISE
# 1495 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_4
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_37:
# 1497 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ROUND
# 1498 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_30
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_38:
# 1500 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
# 1501 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_26
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_39:
# 1503 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
# 1504 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_27
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_40:
# 1506 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STORED_POWER
# 1507 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_5
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_41:
# 1509 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRI_ATTACK
# 1510 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_17
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_42:
# 1512 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_UPROAR
# 1513 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_19
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_43:
# 1515 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
# 1516 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_15
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_44:
# 1518 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WHIRLPOOL
# 1519 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_34
	goto MoveTutor_EventScript_TeachSpecialMove_5

MoveTutor_EventScript_TeachSpecialMove_45:
# 1521 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ZAP_CANNON
# 1522 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetSpecialMoveList_Text_18
	goto MoveTutor_EventScript_TeachSpecialMove_5


MoveTutor_EventScript_TeachStatusMove::
# 1538 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_WhichMoveWouldYouLikeToTeach, MSGBOX_DEFAULT
# 1539 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_SORT_TUTOR_ALPHABETICALLY, MoveTutor_EventScript_TeachStatusMove_2
# 1543 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
MoveTutor_EventScript_TeachStatusMove_1:
# 1546 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1547 "data/maps/TradeCenter/scripts.pory"
	case 1, MoveTutor_EventScript_TeachStatusMove_7
# 1550 "data/maps/TradeCenter/scripts.pory"
	case 2, MoveTutor_EventScript_TeachStatusMove_8
# 1553 "data/maps/TradeCenter/scripts.pory"
	case 3, MoveTutor_EventScript_TeachStatusMove_9
# 1556 "data/maps/TradeCenter/scripts.pory"
	case 4, MoveTutor_EventScript_TeachStatusMove_10
# 1559 "data/maps/TradeCenter/scripts.pory"
	case 5, MoveTutor_EventScript_TeachStatusMove_11
# 1562 "data/maps/TradeCenter/scripts.pory"
	case 6, MoveTutor_EventScript_TeachStatusMove_12
# 1565 "data/maps/TradeCenter/scripts.pory"
	case 7, MoveTutor_EventScript_TeachStatusMove_13
# 1568 "data/maps/TradeCenter/scripts.pory"
	case 8, MoveTutor_EventScript_TeachStatusMove_14
# 1571 "data/maps/TradeCenter/scripts.pory"
	case 9, MoveTutor_EventScript_TeachStatusMove_15
# 1574 "data/maps/TradeCenter/scripts.pory"
	case 10, MoveTutor_EventScript_TeachStatusMove_16
# 1577 "data/maps/TradeCenter/scripts.pory"
	case 11, MoveTutor_EventScript_TeachStatusMove_17
# 1580 "data/maps/TradeCenter/scripts.pory"
	case 12, MoveTutor_EventScript_TeachStatusMove_18
# 1583 "data/maps/TradeCenter/scripts.pory"
	case 13, MoveTutor_EventScript_TeachStatusMove_19
# 1586 "data/maps/TradeCenter/scripts.pory"
	case 14, MoveTutor_EventScript_TeachStatusMove_20
# 1589 "data/maps/TradeCenter/scripts.pory"
	case 15, MoveTutor_EventScript_TeachStatusMove_21
# 1592 "data/maps/TradeCenter/scripts.pory"
	case 16, MoveTutor_EventScript_TeachStatusMove_22
# 1595 "data/maps/TradeCenter/scripts.pory"
	case 17, MoveTutor_EventScript_TeachStatusMove_23
# 1598 "data/maps/TradeCenter/scripts.pory"
	case 18, MoveTutor_EventScript_TeachStatusMove_24
# 1601 "data/maps/TradeCenter/scripts.pory"
	case 19, MoveTutor_EventScript_TeachStatusMove_25
# 1604 "data/maps/TradeCenter/scripts.pory"
	case 20, MoveTutor_EventScript_TeachStatusMove_26
# 1607 "data/maps/TradeCenter/scripts.pory"
	case 21, MoveTutor_EventScript_TeachStatusMove_27
# 1610 "data/maps/TradeCenter/scripts.pory"
	case 22, MoveTutor_EventScript_TeachStatusMove_28
# 1613 "data/maps/TradeCenter/scripts.pory"
	case 23, MoveTutor_EventScript_TeachStatusMove_29
# 1616 "data/maps/TradeCenter/scripts.pory"
	case 24, MoveTutor_EventScript_TeachStatusMove_30
# 1619 "data/maps/TradeCenter/scripts.pory"
	case 25, MoveTutor_EventScript_TeachStatusMove_31
# 1622 "data/maps/TradeCenter/scripts.pory"
	case 26, MoveTutor_EventScript_TeachStatusMove_32
# 1625 "data/maps/TradeCenter/scripts.pory"
	case 27, MoveTutor_EventScript_TeachStatusMove_33
# 1628 "data/maps/TradeCenter/scripts.pory"
	case 28, MoveTutor_EventScript_TeachStatusMove_34
# 1631 "data/maps/TradeCenter/scripts.pory"
	case 29, MoveTutor_EventScript_TeachStatusMove_35
# 1634 "data/maps/TradeCenter/scripts.pory"
	case 30, MoveTutor_EventScript_TeachStatusMove_36
# 1637 "data/maps/TradeCenter/scripts.pory"
	case 31, MoveTutor_EventScript_TeachStatusMove_37
# 1640 "data/maps/TradeCenter/scripts.pory"
	case 32, MoveTutor_EventScript_TeachStatusMove_38
# 1643 "data/maps/TradeCenter/scripts.pory"
	case 33, MoveTutor_EventScript_TeachStatusMove_39
# 1646 "data/maps/TradeCenter/scripts.pory"
	case 34, MoveTutor_EventScript_TeachStatusMove_40
# 1649 "data/maps/TradeCenter/scripts.pory"
	case 35, MoveTutor_EventScript_TeachStatusMove_41
# 1652 "data/maps/TradeCenter/scripts.pory"
	case 36, MoveTutor_EventScript_TeachStatusMove_42
# 1655 "data/maps/TradeCenter/scripts.pory"
	case 37, MoveTutor_EventScript_TeachStatusMove_43
# 1658 "data/maps/TradeCenter/scripts.pory"
	case 38, MoveTutor_EventScript_TeachStatusMove_44
# 1661 "data/maps/TradeCenter/scripts.pory"
	case 39, MoveTutor_EventScript_TeachStatusMove_45
# 1664 "data/maps/TradeCenter/scripts.pory"
	case 40, MoveTutor_EventScript_TeachStatusMove_46
# 1667 "data/maps/TradeCenter/scripts.pory"
	case 41, MoveTutor_EventScript_TeachStatusMove_47
# 1670 "data/maps/TradeCenter/scripts.pory"
	case 42, MoveTutor_EventScript_TeachStatusMove_48
# 1673 "data/maps/TradeCenter/scripts.pory"
	case 43, MoveTutor_EventScript_TeachStatusMove_49
# 1676 "data/maps/TradeCenter/scripts.pory"
	case 44, MoveTutor_EventScript_TeachStatusMove_50
# 1680 "data/maps/TradeCenter/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MoveTutor_EventScript_TeachStatusMove_5:
# 1682 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1683 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_Text_BufferWhichMon, MSGBOX_DEFAULT
# 1684 "data/maps/TradeCenter/scripts.pory"
	special ChooseMonForMoveTutor
# 1685 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1686 "data/maps/TradeCenter/scripts.pory"
	lock
# 1687 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1688 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

MoveTutor_EventScript_TeachStatusMove_2:
# 1540 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
	goto MoveTutor_EventScript_TeachStatusMove_1

MoveTutor_EventScript_TeachStatusMove_7:
# 1548 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
# 1549 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_27
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_8:
# 1551 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ALLY_SWITCH
# 1552 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_9
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_9:
# 1554 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
# 1555 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_8
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_10:
# 1557 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARGE
# 1558 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_31
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_11:
# 1560 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COACHING
# 1561 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_37
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_12:
# 1563 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFUSE_RAY
# 1564 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_32
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_13:
# 1566 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_COSMIC_POWER
# 1567 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_10
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_14:
# 1569 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_CURSE
# 1570 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_23
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_15:
# 1572 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CHEER
# 1573 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_14
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_16:
# 1575 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
# 1576 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_15
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_17:
# 1578 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
# 1579 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_0
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_18:
# 1581 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_EMBARGO
# 1582 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_33
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_19:
# 1584 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FAKE_TEARS
# 1585 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_17
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_20:
# 1587 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_FEATHER_DANCE
# 1588 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_16
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_21:
# 1590 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
# 1591 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_1
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_22:
# 1593 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_GRAVITY
# 1594 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_11
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_23:
# 1596 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
# 1597 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_38
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_24:
# 1599 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IMPRISON
# 1600 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_12
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_25:
# 1602 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
# 1603 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_24
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_26:
# 1605 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_ROOM
# 1606 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_13
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_27:
# 1608 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_SOUND
# 1609 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_28
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_28:
# 1611 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 1612 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_34
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_29:
# 1614 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
# 1615 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_2
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_30:
# 1617 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_NATURE_POWER
# 1618 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_29
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_31:
# 1620 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
# 1621 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_18
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_32:
# 1623 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 1624 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_19
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_33:
# 1626 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
# 1627 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_3
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_34:
# 1629 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_QUASH
# 1630 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_39
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_35:
# 1632 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
# 1633 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_4
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_36:
# 1635 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
# 1636 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_35
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_37:
# 1638 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
# 1639 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_5
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_38:
# 1641 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SCARY_FACE
# 1642 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_40
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_39:
# 1644 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNATCH
# 1645 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_30
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_40:
# 1647 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SNOWSCAPE
# 1648 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_6
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_41:
# 1650 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
# 1651 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_36
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_42:
# 1653 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SPITE
# 1654 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_41
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_43:
# 1656 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
# 1657 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_25
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_44:
# 1659 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
# 1660 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_7
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_45:
# 1662 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 1663 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_42
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_46:
# 1665 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
# 1666 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_20
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_47:
# 1668 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
# 1669 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_21
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_48:
# 1671 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_VENOM_DRENCH
# 1672 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_22
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_49:
# 1674 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WONDER_ROOM
# 1675 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_26
	goto MoveTutor_EventScript_TeachStatusMove_5

MoveTutor_EventScript_TeachStatusMove_50:
# 1677 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_0x8005, MOVE_WORK_UP
# 1678 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_1, MoveTutor_EventScript_GetStatusMoveList_Text_43
	goto MoveTutor_EventScript_TeachStatusMove_5


MoveTutor_EventScript_ComeBackLater::
# 1693 "data/maps/TradeCenter/scripts.pory"
	lock
# 1694 "data/maps/TradeCenter/scripts.pory"
	msgbox MoveTutor_EventScript_ComeBackLater_Text_0, MSGBOX_DEFAULT
# 1695 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1696 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


PokemonCenter_2F_EventScript_InflictStatusMenu::
# 1701 "data/maps/TradeCenter/scripts.pory"
	lockall
# 1702 "data/maps/TradeCenter/scripts.pory"
	faceplayer
# 1703 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 1704 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_2
# 1709 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1, MSGBOX_DEFAULT
# 1710 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1711 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1712 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1713 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_InflictStatusMenu_5
# 1717 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1718 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_8
# 1722 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, STATUS1_POISON
# 1723 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3, STATUS1_TOXIC_POISON
# 1724 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4, STATUS1_PARALYSIS
# 1725 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5, STATUS1_SLEEP
# 1726 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6, STATUS1_BURN
# 1727 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7, STATUS1_FREEZE
# 1729 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8, MSGBOX_DEFAULT
# 1730 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, 255
# 1731 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_11
# 1735 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1736 "data/maps/TradeCenter/scripts.pory"
	special GetPartyMonTypes
# 1737 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
# 1737 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_44
PokemonCenter_2F_EventScript_InflictStatusMenu_39:
# 1743 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
# 1743 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_STEEL
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_37
PokemonCenter_2F_EventScript_InflictStatusMenu_32:
# 1749 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
# 1749 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ICE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_30
PokemonCenter_2F_EventScript_InflictStatusMenu_27:
# 1755 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
# 1755 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_FIRE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_25
PokemonCenter_2F_EventScript_InflictStatusMenu_22:
# 1761 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
# 1761 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800B, TYPE_ELECTRIC
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_20
PokemonCenter_2F_EventScript_InflictStatusMenu_19:
# 1769 "data/maps/TradeCenter/scripts.pory"
	special InflictStatus
# 1770 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13, MSGBOX_DEFAULT
# 1771 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1773 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_2:
# 1705 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 1706 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_5:
# 1714 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_8:
# 1719 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_11:
# 1732 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_14:
# 1738 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1739 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1740 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_15:
# 1744 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9, MSGBOX_DEFAULT
# 1745 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1746 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_16:
# 1750 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10, MSGBOX_DEFAULT
# 1751 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1752 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_17:
# 1756 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11, MSGBOX_DEFAULT
# 1757 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1758 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_18:
# 1762 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12, MSGBOX_DEFAULT
# 1763 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1764 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_InflictStatusMenu_20:
# 1761 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_PARALYSIS
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_18
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_19

PokemonCenter_2F_EventScript_InflictStatusMenu_25:
# 1755 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_BURN
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_17
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_22

PokemonCenter_2F_EventScript_InflictStatusMenu_30:
# 1749 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FREEZE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
# 1749 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_FROSTBITE
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_16
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_27

PokemonCenter_2F_EventScript_InflictStatusMenu_37:
# 1743 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
# 1743 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_15
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_32

PokemonCenter_2F_EventScript_InflictStatusMenu_44:
# 1737 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
# 1737 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8005, STATUS1_TOXIC_POISON
	goto_if_eq PokemonCenter_2F_EventScript_InflictStatusMenu_14
	goto PokemonCenter_2F_EventScript_InflictStatusMenu_39


PokemonCenter_2F_EventScript_ChangeHiddenPowerType::
# 1779 "data/maps/TradeCenter/scripts.pory"
	getpartysize
# 1780 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2
# 1785 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0, MSGBOX_DEFAULT
# 1786 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1787 "data/maps/TradeCenter/scripts.pory"
	special ChoosePartyMon
# 1788 "data/maps/TradeCenter/scripts.pory"
	waitstate
# 1789 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x8004, 6
	goto_if_ge PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5
# 1793 "data/maps/TradeCenter/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 1794 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8
# 1798 "data/maps/TradeCenter/scripts.pory"
	special BufferMonNickname
# 1800 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1, MSGBOX_DEFAULT
# 1801 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2, TYPE_FIGHTING
# 1802 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3, TYPE_FLYING
# 1803 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2, TYPE_POISON
# 1804 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4, TYPE_GROUND
# 1805 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5, TYPE_ROCK
# 1806 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6, TYPE_BUG
# 1807 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7, TYPE_GHOST
# 1808 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8, TYPE_STEEL
# 1809 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9, TYPE_FIRE
# 1810 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10, TYPE_WATER
# 1811 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11, TYPE_GRASS
# 1812 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12, TYPE_ELECTRIC
# 1813 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13, TYPE_PSYCHIC
# 1814 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14, TYPE_ICE
# 1815 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15, TYPE_DRAGON
# 1816 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16, TYPE_DARK
# 1817 "data/maps/TradeCenter/scripts.pory"
	dynmultipush PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17, TYPE_FAIRY
# 1818 "data/maps/TradeCenter/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1819 "data/maps/TradeCenter/scripts.pory"
	switch VAR_RESULT
# 1820 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIGHTING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12
# 1822 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FLYING, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13
# 1824 "data/maps/TradeCenter/scripts.pory"
	case TYPE_POISON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14
# 1826 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GROUND, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15
# 1828 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ROCK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16
# 1830 "data/maps/TradeCenter/scripts.pory"
	case TYPE_BUG, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17
# 1832 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GHOST, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18
# 1834 "data/maps/TradeCenter/scripts.pory"
	case TYPE_STEEL, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19
# 1836 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FIRE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20
# 1838 "data/maps/TradeCenter/scripts.pory"
	case TYPE_WATER, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21
# 1840 "data/maps/TradeCenter/scripts.pory"
	case TYPE_GRASS, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22
# 1842 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ELECTRIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23
# 1844 "data/maps/TradeCenter/scripts.pory"
	case TYPE_PSYCHIC, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24
# 1846 "data/maps/TradeCenter/scripts.pory"
	case TYPE_ICE, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25
# 1848 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DRAGON, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26
# 1850 "data/maps/TradeCenter/scripts.pory"
	case TYPE_DARK, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27
# 1852 "data/maps/TradeCenter/scripts.pory"
	case TYPE_FAIRY, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28
# 1854 "data/maps/TradeCenter/scripts.pory"
	case MULTI_B_PRESSED, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29
# 1860 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 1861 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1862 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_2:
# 1781 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 1782 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_5:
# 1790 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_8:
# 1795 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10:
# 1865 "data/maps/TradeCenter/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 1866 "data/maps/TradeCenter/scripts.pory"
	special ComparePartyMonTeraType
# 1867 "data/maps/TradeCenter/scripts.pory"
	compare VAR_0x800A, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32
# 1873 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20, MSGBOX_YESNO
# 1874 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34
# 1882 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 1883 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1884 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_12:
# 1821 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_13:
# 1823 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_14:
# 1825 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_15:
# 1827 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_16:
# 1829 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_17:
# 1831 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_18:
# 1833 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_19:
# 1835 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_20:
# 1837 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_21:
# 1839 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_22:
# 1841 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_23:
# 1843 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_24:
# 1845 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_25:
# 1847 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_26:
# 1849 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_27:
# 1851 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_28:
# 1853 "data/maps/TradeCenter/scripts.pory"
	bufferstring STR_VAR_2, PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17
	goto PokemonCenter_2F_EventScript_ChangeHiddenPowerType_10

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_29:
# 1855 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18, MSGBOX_DEFAULT
# 1856 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1857 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_32:
# 1868 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19, MSGBOX_DEFAULT
# 1869 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1870 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_34:
# 1875 "data/maps/TradeCenter/scripts.pory"
	special ChangeTeraType
# 1876 "data/maps/TradeCenter/scripts.pory"
	msgbox PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21, MSGBOX_DEFAULT
# 1877 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 1878 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_LevelCapUpdate_Text_0:
# 294 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"

Common_EventScript_SetFlashTest_Text_0:
# 382 "data/maps/TradeCenter/scripts.pory"
	.string "Do you have flash?$"

Common_EventScript_BerryTreeEncounterFled_Text_0:
# 696 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the berry\n"
	.string "plant!\l"
	.string "...but it fled!$"

MoveTutor_EventScript_BasicTutorIntro_Text_0:
# 952 "data/maps/TradeCenter/scripts.pory"
	.string "Hello! I can teach your Pokémon new\n"
	.string "moves at no cost.$"

MoveTutor_EventScript_NotReadyYet_Text_0:
# 962 "data/maps/TradeCenter/scripts.pory"
	.string "I'm sorry, but you need to increase your\n"
	.string "Trainer Level before I can teach any\l"
	.string "moves to your Pokémon. Please come\l"
	.string "back later.$"

MoveTutor_EventScript_SetSorting_Text_0:
# 984 "data/maps/TradeCenter/scripts.pory"
	.string "How would you like to sort the move\n"
	.string "tutor moves?$"

MoveTutor_EventScript_SetSorting_Text_1:
# 985 "data/maps/TradeCenter/scripts.pory"
	.string "Recently Unlocked First$"

MoveTutor_EventScript_SetSorting_Text_2:
# 985 "data/maps/TradeCenter/scripts.pory"
	.string "Alphabetically$"

MoveTutor_EventScript_SetSorting_Text_3:
# 990 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves you most\n"
	.string "recently unlocked will be shown first.$"

MoveTutor_EventScript_SetSorting_Text_4:
# 994 "data/maps/TradeCenter/scripts.pory"
	.string "Got it! The tutor moves will be sorted\n"
	.string "alphabetically.$"

MoveTutor_EventScript_SetSorting_Text_5:
# 996 "data/maps/TradeCenter/scripts.pory"
	.string "Come see me if you want to change how\n"
	.string "the tutor moves are sorted.$"

MoveTutor_EventScript_SelectMoveCategory_Text_0:
# 1006 "data/maps/TradeCenter/scripts.pory"
	.string "Which kind of move would you like your\n"
	.string "Pokémon to learn?$"

MoveTutor_EventScript_SelectMoveCategory_Text_1:
# 1007 "data/maps/TradeCenter/scripts.pory"
	.string "Physical Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_2:
# 1007 "data/maps/TradeCenter/scripts.pory"
	.string "Special Moves$"

MoveTutor_EventScript_SelectMoveCategory_Text_3:
# 1007 "data/maps/TradeCenter/scripts.pory"
	.string "Status Moves$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_0:
# 1026 "data/maps/TradeCenter/scripts.pory"
	.string "Body Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_1:
# 1027 "data/maps/TradeCenter/scripts.pory"
	.string "Triple Axel$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_2:
# 1030 "data/maps/TradeCenter/scripts.pory"
	.string "Poltergeist$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_3:
# 1031 "data/maps/TradeCenter/scripts.pory"
	.string "Sky Drop$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_4:
# 1034 "data/maps/TradeCenter/scripts.pory"
	.string "Explosion$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_5:
# 1035 "data/maps/TradeCenter/scripts.pory"
	.string "Megahorn$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_6:
# 1036 "data/maps/TradeCenter/scripts.pory"
	.string "Power Whip$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_7:
# 1037 "data/maps/TradeCenter/scripts.pory"
	.string "Leaf Blade$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_8:
# 1038 "data/maps/TradeCenter/scripts.pory"
	.string "Upper Hand$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_9:
# 1041 "data/maps/TradeCenter/scripts.pory"
	.string "Endeavor$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_10:
# 1042 "data/maps/TradeCenter/scripts.pory"
	.string "Phantom Force$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_11:
# 1043 "data/maps/TradeCenter/scripts.pory"
	.string "Darkest Lariat$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_12:
# 1044 "data/maps/TradeCenter/scripts.pory"
	.string "Retaliate$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_13:
# 1045 "data/maps/TradeCenter/scripts.pory"
	.string "Brutal Swing$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_14:
# 1046 "data/maps/TradeCenter/scripts.pory"
	.string "Power-Up Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_15:
# 1049 "data/maps/TradeCenter/scripts.pory"
	.string "Gyro Ball$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_16:
# 1050 "data/maps/TradeCenter/scripts.pory"
	.string "Heavy Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_17:
# 1051 "data/maps/TradeCenter/scripts.pory"
	.string "Giga Impact$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_18:
# 1052 "data/maps/TradeCenter/scripts.pory"
	.string "Body Slam$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_19:
# 1053 "data/maps/TradeCenter/scripts.pory"
	.string "Lash Out$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_20:
# 1054 "data/maps/TradeCenter/scripts.pory"
	.string "Razor Shell$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_21:
# 1055 "data/maps/TradeCenter/scripts.pory"
	.string "Icicle Spear$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_22:
# 1056 "data/maps/TradeCenter/scripts.pory"
	.string "Rock Blast$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_23:
# 1057 "data/maps/TradeCenter/scripts.pory"
	.string "Tail Slap$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_24:
# 1060 "data/maps/TradeCenter/scripts.pory"
	.string "Hard Press$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_25:
# 1061 "data/maps/TradeCenter/scripts.pory"
	.string "Self-Destruct$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_26:
# 1062 "data/maps/TradeCenter/scripts.pory"
	.string "Take Down$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_27:
# 1063 "data/maps/TradeCenter/scripts.pory"
	.string "Blaze Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_28:
# 1064 "data/maps/TradeCenter/scripts.pory"
	.string "Bounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_29:
# 1065 "data/maps/TradeCenter/scripts.pory"
	.string "Secret Power$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_30:
# 1066 "data/maps/TradeCenter/scripts.pory"
	.string "Trailblaze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_31:
# 1069 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_32:
# 1070 "data/maps/TradeCenter/scripts.pory"
	.string "Headbutt$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_33:
# 1071 "data/maps/TradeCenter/scripts.pory"
	.string "Smart Strike$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_34:
# 1072 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_35:
# 1073 "data/maps/TradeCenter/scripts.pory"
	.string "Ice Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_36:
# 1074 "data/maps/TradeCenter/scripts.pory"
	.string "Thunder Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_37:
# 1077 "data/maps/TradeCenter/scripts.pory"
	.string "Low Kick$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_38:
# 1078 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Punch$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_39:
# 1079 "data/maps/TradeCenter/scripts.pory"
	.string "Bug Bite$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_40:
# 1080 "data/maps/TradeCenter/scripts.pory"
	.string "Bulldoze$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_41:
# 1081 "data/maps/TradeCenter/scripts.pory"
	.string "Sand Tomb$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_42:
# 1082 "data/maps/TradeCenter/scripts.pory"
	.string "Rollout$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_43:
# 1085 "data/maps/TradeCenter/scripts.pory"
	.string "Super Fang$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_44:
# 1086 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Claw$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_45:
# 1087 "data/maps/TradeCenter/scripts.pory"
	.string "Poison Tail$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_46:
# 1088 "data/maps/TradeCenter/scripts.pory"
	.string "Pounce$"

MoveTutor_EventScript_GetPhysicalMoveList_Text_47:
# 1090 "data/maps/TradeCenter/scripts.pory"
	.string "False Swipe$"

MoveTutor_EventScript_GetSpecialMoveList_Text_0:
# 1097 "data/maps/TradeCenter/scripts.pory"
	.string "Alluring Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_1:
# 1100 "data/maps/TradeCenter/scripts.pory"
	.string "Future Sight$"

MoveTutor_EventScript_GetSpecialMoveList_Text_2:
# 1101 "data/maps/TradeCenter/scripts.pory"
	.string "Aura Sphere$"

MoveTutor_EventScript_GetSpecialMoveList_Text_3:
# 1102 "data/maps/TradeCenter/scripts.pory"
	.string "Mystical Fire$"

MoveTutor_EventScript_GetSpecialMoveList_Text_4:
# 1103 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Noise$"

MoveTutor_EventScript_GetSpecialMoveList_Text_5:
# 1104 "data/maps/TradeCenter/scripts.pory"
	.string "Stored Power$"

MoveTutor_EventScript_GetSpecialMoveList_Text_6:
# 1107 "data/maps/TradeCenter/scripts.pory"
	.string "Electro Ball$"

MoveTutor_EventScript_GetSpecialMoveList_Text_7:
# 1108 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Explosion$"

MoveTutor_EventScript_GetSpecialMoveList_Text_8:
# 1109 "data/maps/TradeCenter/scripts.pory"
	.string "Pollen Puff$"

MoveTutor_EventScript_GetSpecialMoveList_Text_9:
# 1112 "data/maps/TradeCenter/scripts.pory"
	.string "Blast Burn$"

MoveTutor_EventScript_GetSpecialMoveList_Text_10:
# 1113 "data/maps/TradeCenter/scripts.pory"
	.string "Frenzy Plant$"

MoveTutor_EventScript_GetSpecialMoveList_Text_11:
# 1114 "data/maps/TradeCenter/scripts.pory"
	.string "Hydro Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_12:
# 1115 "data/maps/TradeCenter/scripts.pory"
	.string "Focus Blast$"

MoveTutor_EventScript_GetSpecialMoveList_Text_13:
# 1116 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_14:
# 1117 "data/maps/TradeCenter/scripts.pory"
	.string "Grass Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_15:
# 1118 "data/maps/TradeCenter/scripts.pory"
	.string "Water Pledge$"

MoveTutor_EventScript_GetSpecialMoveList_Text_16:
# 1121 "data/maps/TradeCenter/scripts.pory"
	.string "Dream Eater$"

MoveTutor_EventScript_GetSpecialMoveList_Text_17:
# 1122 "data/maps/TradeCenter/scripts.pory"
	.string "Tri Attack$"

MoveTutor_EventScript_GetSpecialMoveList_Text_18:
# 1125 "data/maps/TradeCenter/scripts.pory"
	.string "Zap Cannon$"

MoveTutor_EventScript_GetSpecialMoveList_Text_19:
# 1126 "data/maps/TradeCenter/scripts.pory"
	.string "Uproar$"

MoveTutor_EventScript_GetSpecialMoveList_Text_20:
# 1127 "data/maps/TradeCenter/scripts.pory"
	.string "Psybeam$"

MoveTutor_EventScript_GetSpecialMoveList_Text_21:
# 1128 "data/maps/TradeCenter/scripts.pory"
	.string "Burning Jealousy$"

MoveTutor_EventScript_GetSpecialMoveList_Text_22:
# 1129 "data/maps/TradeCenter/scripts.pory"
	.string "Incinerate$"

MoveTutor_EventScript_GetSpecialMoveList_Text_23:
# 1132 "data/maps/TradeCenter/scripts.pory"
	.string "Night Shade$"

MoveTutor_EventScript_GetSpecialMoveList_Text_24:
# 1133 "data/maps/TradeCenter/scripts.pory"
	.string "Brine$"

MoveTutor_EventScript_GetSpecialMoveList_Text_25:
# 1134 "data/maps/TradeCenter/scripts.pory"
	.string "Frost Breath$"

MoveTutor_EventScript_GetSpecialMoveList_Text_26:
# 1135 "data/maps/TradeCenter/scripts.pory"
	.string "Shock Wave$"

MoveTutor_EventScript_GetSpecialMoveList_Text_27:
# 1136 "data/maps/TradeCenter/scripts.pory"
	.string "Silver Wind$"

MoveTutor_EventScript_GetSpecialMoveList_Text_28:
# 1139 "data/maps/TradeCenter/scripts.pory"
	.string "Air Cutter$"

MoveTutor_EventScript_GetSpecialMoveList_Text_29:
# 1140 "data/maps/TradeCenter/scripts.pory"
	.string "Magical Leaf$"

MoveTutor_EventScript_GetSpecialMoveList_Text_30:
# 1141 "data/maps/TradeCenter/scripts.pory"
	.string "Round$"

MoveTutor_EventScript_GetSpecialMoveList_Text_31:
# 1142 "data/maps/TradeCenter/scripts.pory"
	.string "Electroweb$"

MoveTutor_EventScript_GetSpecialMoveList_Text_32:
# 1143 "data/maps/TradeCenter/scripts.pory"
	.string "Mud Shot$"

MoveTutor_EventScript_GetSpecialMoveList_Text_33:
# 1144 "data/maps/TradeCenter/scripts.pory"
	.string "Fire Spin$"

MoveTutor_EventScript_GetSpecialMoveList_Text_34:
# 1145 "data/maps/TradeCenter/scripts.pory"
	.string "Whirlpool$"

MoveTutor_EventScript_GetSpecialMoveList_Text_35:
# 1148 "data/maps/TradeCenter/scripts.pory"
	.string "Disarming Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_36:
# 1149 "data/maps/TradeCenter/scripts.pory"
	.string "Echoed Voice$"

MoveTutor_EventScript_GetSpecialMoveList_Text_37:
# 1150 "data/maps/TradeCenter/scripts.pory"
	.string "Infestation$"

MoveTutor_EventScript_GetSpecialMoveList_Text_38:
# 1151 "data/maps/TradeCenter/scripts.pory"
	.string "Mud-Slap$"

MoveTutor_EventScript_GetStatusMoveList_Text_0:
# 1160 "data/maps/TradeCenter/scripts.pory"
	.string "Electric Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_1:
# 1161 "data/maps/TradeCenter/scripts.pory"
	.string "Grassy Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_2:
# 1162 "data/maps/TradeCenter/scripts.pory"
	.string "Misty Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_3:
# 1163 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic Terrain$"

MoveTutor_EventScript_GetStatusMoveList_Text_4:
# 1164 "data/maps/TradeCenter/scripts.pory"
	.string "Rain Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_5:
# 1165 "data/maps/TradeCenter/scripts.pory"
	.string "Sandstorm$"

MoveTutor_EventScript_GetStatusMoveList_Text_6:
# 1166 "data/maps/TradeCenter/scripts.pory"
	.string "Snowscape$"

MoveTutor_EventScript_GetStatusMoveList_Text_7:
# 1167 "data/maps/TradeCenter/scripts.pory"
	.string "Sunny Day$"

MoveTutor_EventScript_GetStatusMoveList_Text_8:
# 1170 "data/maps/TradeCenter/scripts.pory"
	.string "Aurora Veil$"

MoveTutor_EventScript_GetStatusMoveList_Text_9:
# 1173 "data/maps/TradeCenter/scripts.pory"
	.string "Ally Switch$"

MoveTutor_EventScript_GetStatusMoveList_Text_10:
# 1174 "data/maps/TradeCenter/scripts.pory"
	.string "Cosmic Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_11:
# 1175 "data/maps/TradeCenter/scripts.pory"
	.string "Gravity$"

MoveTutor_EventScript_GetStatusMoveList_Text_12:
# 1176 "data/maps/TradeCenter/scripts.pory"
	.string "Imprison$"

MoveTutor_EventScript_GetStatusMoveList_Text_13:
# 1177 "data/maps/TradeCenter/scripts.pory"
	.string "Magic Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_14:
# 1180 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Cheer$"

MoveTutor_EventScript_GetStatusMoveList_Text_15:
# 1181 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_16:
# 1182 "data/maps/TradeCenter/scripts.pory"
	.string "Feather Dance$"

MoveTutor_EventScript_GetStatusMoveList_Text_17:
# 1185 "data/maps/TradeCenter/scripts.pory"
	.string "Fake Tears$"

MoveTutor_EventScript_GetStatusMoveList_Text_18:
# 1186 "data/maps/TradeCenter/scripts.pory"
	.string "Pain Split$"

MoveTutor_EventScript_GetStatusMoveList_Text_19:
# 1187 "data/maps/TradeCenter/scripts.pory"
	.string "Psych Up$"

MoveTutor_EventScript_GetStatusMoveList_Text_20:
# 1188 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_21:
# 1189 "data/maps/TradeCenter/scripts.pory"
	.string "Trick$"

MoveTutor_EventScript_GetStatusMoveList_Text_22:
# 1190 "data/maps/TradeCenter/scripts.pory"
	.string "Venom Drench$"

MoveTutor_EventScript_GetStatusMoveList_Text_23:
# 1193 "data/maps/TradeCenter/scripts.pory"
	.string "Curse$"

MoveTutor_EventScript_GetStatusMoveList_Text_24:
# 1194 "data/maps/TradeCenter/scripts.pory"
	.string "Iron Defense$"

MoveTutor_EventScript_GetStatusMoveList_Text_25:
# 1195 "data/maps/TradeCenter/scripts.pory"
	.string "Stealth Rock$"

MoveTutor_EventScript_GetStatusMoveList_Text_26:
# 1196 "data/maps/TradeCenter/scripts.pory"
	.string "Wonder Room$"

MoveTutor_EventScript_GetStatusMoveList_Text_27:
# 1199 "data/maps/TradeCenter/scripts.pory"
	.string "Agility$"

MoveTutor_EventScript_GetStatusMoveList_Text_28:
# 1200 "data/maps/TradeCenter/scripts.pory"
	.string "Metal Sound$"

MoveTutor_EventScript_GetStatusMoveList_Text_29:
# 1201 "data/maps/TradeCenter/scripts.pory"
	.string "Nature Power$"

MoveTutor_EventScript_GetStatusMoveList_Text_30:
# 1202 "data/maps/TradeCenter/scripts.pory"
	.string "Snatch$"

MoveTutor_EventScript_GetStatusMoveList_Text_31:
# 1205 "data/maps/TradeCenter/scripts.pory"
	.string "Charge$"

MoveTutor_EventScript_GetStatusMoveList_Text_32:
# 1206 "data/maps/TradeCenter/scripts.pory"
	.string "Confuse Ray$"

MoveTutor_EventScript_GetStatusMoveList_Text_33:
# 1207 "data/maps/TradeCenter/scripts.pory"
	.string "Embargo$"

MoveTutor_EventScript_GetStatusMoveList_Text_34:
# 1208 "data/maps/TradeCenter/scripts.pory"
	.string "Metronome$"

MoveTutor_EventScript_GetStatusMoveList_Text_35:
# 1209 "data/maps/TradeCenter/scripts.pory"
	.string "Recycle$"

MoveTutor_EventScript_GetStatusMoveList_Text_36:
# 1210 "data/maps/TradeCenter/scripts.pory"
	.string "Spikes$"

MoveTutor_EventScript_GetStatusMoveList_Text_37:
# 1213 "data/maps/TradeCenter/scripts.pory"
	.string "Coaching$"

MoveTutor_EventScript_GetStatusMoveList_Text_38:
# 1214 "data/maps/TradeCenter/scripts.pory"
	.string "Hone Claws$"

MoveTutor_EventScript_GetStatusMoveList_Text_39:
# 1217 "data/maps/TradeCenter/scripts.pory"
	.string "Quash$"

MoveTutor_EventScript_GetStatusMoveList_Text_40:
# 1218 "data/maps/TradeCenter/scripts.pory"
	.string "Scary Face$"

MoveTutor_EventScript_GetStatusMoveList_Text_41:
# 1219 "data/maps/TradeCenter/scripts.pory"
	.string "Spite$"

MoveTutor_EventScript_GetStatusMoveList_Text_42:
# 1220 "data/maps/TradeCenter/scripts.pory"
	.string "Swagger$"

MoveTutor_EventScript_GetStatusMoveList_Text_43:
# 1221 "data/maps/TradeCenter/scripts.pory"
	.string "Work Up$"

MoveTutor_EventScript_ComeBackLater_Text_0:
# 1694 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "teach one of your Pokémon a new move.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_0:
# 1705 "data/maps/TradeCenter/scripts.pory"
	.string "Your PARTY has no Pokémon.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_1:
# 1709 "data/maps/TradeCenter/scripts.pory"
	.string "Choose a Pokémon to inflict a status\n"
	.string "condition on.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_2:
# 1722 "data/maps/TradeCenter/scripts.pory"
	.string "Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_3:
# 1723 "data/maps/TradeCenter/scripts.pory"
	.string "Toxic Poison$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_4:
# 1724 "data/maps/TradeCenter/scripts.pory"
	.string "Paralysis$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_5:
# 1725 "data/maps/TradeCenter/scripts.pory"
	.string "Sleep$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_6:
# 1726 "data/maps/TradeCenter/scripts.pory"
	.string "Burn$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_7:
# 1727 "data/maps/TradeCenter/scripts.pory"
	.string "Freeze$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_8:
# 1729 "data/maps/TradeCenter/scripts.pory"
	.string "Which status condition would you like\n"
	.string "to inflict?$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_9:
# 1738 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "poisoned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_10:
# 1750 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being frozen.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_11:
# 1756 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being burned.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_12:
# 1762 "data/maps/TradeCenter/scripts.pory"
	.string "That Pokémon is immune to being\n"
	.string "paralyzed.$"

PokemonCenter_2F_EventScript_InflictStatusMenu_Text_13:
# 1770 "data/maps/TradeCenter/scripts.pory"
	.string "Your Pokémon was inflicted with a\n"
	.string "status condition!$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_0:
# 1785 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon's Hidden Power type\n"
	.string "would you like to change?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_1:
# 1800 "data/maps/TradeCenter/scripts.pory"
	.string "What would you like your Pokémon's\n"
	.string "Hidden Power type to be?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_2:
# 1801 "data/maps/TradeCenter/scripts.pory"
	.string "Fighting$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_3:
# 1802 "data/maps/TradeCenter/scripts.pory"
	.string "Flying$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_4:
# 1804 "data/maps/TradeCenter/scripts.pory"
	.string "Ground$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_5:
# 1805 "data/maps/TradeCenter/scripts.pory"
	.string "Rock$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_6:
# 1806 "data/maps/TradeCenter/scripts.pory"
	.string "Bug$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_7:
# 1807 "data/maps/TradeCenter/scripts.pory"
	.string "Ghost$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_8:
# 1808 "data/maps/TradeCenter/scripts.pory"
	.string "Steel$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_9:
# 1809 "data/maps/TradeCenter/scripts.pory"
	.string "Fire$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_10:
# 1810 "data/maps/TradeCenter/scripts.pory"
	.string "Water$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_11:
# 1811 "data/maps/TradeCenter/scripts.pory"
	.string "Grass$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_12:
# 1812 "data/maps/TradeCenter/scripts.pory"
	.string "Electric$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_13:
# 1813 "data/maps/TradeCenter/scripts.pory"
	.string "Psychic$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_14:
# 1814 "data/maps/TradeCenter/scripts.pory"
	.string "Ice$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_15:
# 1815 "data/maps/TradeCenter/scripts.pory"
	.string "Dragon$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_16:
# 1816 "data/maps/TradeCenter/scripts.pory"
	.string "Dark$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_17:
# 1817 "data/maps/TradeCenter/scripts.pory"
	.string "Fairy$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_18:
# 1855 "data/maps/TradeCenter/scripts.pory"
	.string "Come back later if you ever want to\n"
	.string "change your Pokémon's Hidden Power\l"
	.string "type.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_19:
# 1868 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type is already {STR_VAR_2}.$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_20:
# 1873 "data/maps/TradeCenter/scripts.pory"
	.string "Are you sure you want to change\n"
	.string "{STR_VAR_1}'s Hidden Power type to\l"
	.string "{STR_VAR_2}?$"

PokemonCenter_2F_EventScript_ChangeHiddenPowerType_Text_21:
# 1876 "data/maps/TradeCenter/scripts.pory"
	.string "Your {STR_VAR_1}'s Hidden Power\n"
	.string "type was changed to {STR_VAR_2}!$"

Common_Text_CaveIsDarkUseFlash::
# 348 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "{PLAYER}'s Pokémon used Flash!$"

Common_Text_CaveIsDarkNeedFlash::
# 352 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "It's better to turn back.$"

Common_Text_BerryTreeSproutEncounter::
# 703 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the sprouting\n"
	.string "berry tree!$"

Common_Text_BerryTreeTallEncounter::
# 707 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the growing\n"
	.string "berry tree!$"

Common_Text_BerryTreeFlowersEncounter::
# 711 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon in the flowering\n"
	.string "berry tree!$"

Common_Text_BerryTreeBerriesEncounter::
# 715 "data/maps/TradeCenter/scripts.pory"
	.string "There's a wild Pokémon eating the\n"
	.string "berries in the tree!$"

MoveTutor_Text_BasicAndEliteMoves::
# 968 "data/maps/TradeCenter/scripts.pory"
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
# 973 "data/maps/TradeCenter/scripts.pory"
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"

MoveTutor_Text_WhichMoveWouldYouLikeToTeach::
# 977 "data/maps/TradeCenter/scripts.pory"
	.string "Which move would you like to teach to\n"
	.string "one of your Pokémon?$"
