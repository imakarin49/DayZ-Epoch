#include "Melee.hpp"

#define COMBINE_MAG class CombineMag\
{\
	text = $STR_MAG_COMBINE;\
	script = "spawn player_combineMag;";\
};

#include "9x18.hpp"			//Makarov
#include "9x19.hpp"			//MP5, PDW, Bizon, M9, G17
#include "10x22.hpp"		//P99
#include "45ACP.hpp"		//Colt M1911, Revolver
#include "545x39.hpp"		//AK74, RPK74
#include "556x45.hpp"		//M249, STANAG, G36
#include "762x39.hpp"		//AK47, SA58
#include "762x51.hpp"		//M240, FN FAL, DMR, M24
#include "762x54r.hpp"		//PK, SVD, Mosin
#include "46x30.hpp"		//MP7
#include "680x43.hpp"		//ACR
#include "Misc.hpp"			//CZ550, Lee-Enfield
#include "Shotgun.hpp"
#include "Arrows.hpp"
#include "LauncherAmmo.hpp"
#include "127x99.hpp" //Remove after A2OA stable branch exceeds Version 1.63.131129

#undef COMBINE_MAG