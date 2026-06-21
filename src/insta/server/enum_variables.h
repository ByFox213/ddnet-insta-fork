// This file can be included several times.

#ifndef LINK_CONFIG
#error "The config macros must be defined"
// This helps IDEs properly syntax highlight the uses of the macro below.
#define LINK_CONFIG(ConfigName, ConfigScriptName, EnumName, EnumValues)
#endif

LINK_CONFIG(SvBombtagBombWeapon, sv_bombtag_bomb_weapon, EBombWeapon, BOMB_WEAPON_ENUM)

#define BOMB_WEAPON_ENUM \
	X(GUN) \
	X(GRENADE) \
	X(LASER)
