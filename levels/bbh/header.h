#ifndef BBH_HEADER_H
#define BBH_HEADER_H

#include "types.h"

// geo
extern const GeoLayout bbh_geo[];
extern const GeoLayout tumbling_platform_far_geo[];
extern const GeoLayout tumbling_platform_near_geo[];
extern const GeoLayout haunted_bookshelf_geo[];

// leveldata
extern const Gfx bbh_dl_01_mesh[];
extern const Gfx bbh_dl_02_mesh[];
extern const Gfx bbh_dl_03_mesh[];
extern const Gfx bbh_dl_04_mesh[];
extern const Gfx bbh_dl_05_mesh[];
extern const Gfx bbh_dl_06_mesh[];
extern const Gfx bbh_dl_07_mesh[];
extern const Gfx bbh_dl_08_mesh[];
extern const Gfx bbh_dl_09_mesh[];
extern const Gfx bbh_dl_10_mesh[];
extern const Gfx bbh_dl_11_mesh[];
extern const Gfx tumbling_platform_far_dl[];
extern const Gfx tumbling_platform_near_dl[];
extern const Gfx bbh_haunted_bookshelf_dl[];

extern const Collision bbh_collision[];
extern const u8 bbh_collision_rooms[];
extern const MacroObject bbh_macro[];
extern const Collision bbh_collision_tumbling_bridge[];
extern const Collision bbh_collision_haunted_bookshelf[];

// script
extern const LevelScript level_bbh_entry[];

#endif
