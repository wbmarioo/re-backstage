#ifndef COMMON0_H
#define COMMON0_H

#include "types.h"
#include "headers.h"

// slide_exit_podium
extern Hierarchy RCP_HmsEndoor[];
extern const Collision endoor_info[];

// cannon_barrel
extern Hierarchy RCP_HmsCannonBody[];

// cannon_base
extern Hierarchy RCP_HmsCannonBase[];

// carryboy
extern Hierarchy RCP_HmsEnemycarryboy[];
extern Gfx RCP_carry_boy_carry9[];
extern Gfx RCP_carry_boy_carry0[];
extern Gfx RCP_carry_boy_carry1[];
extern Gfx RCP_carry_boy_carry8[];
extern Gfx RCP_carry_boy_carry7[];
extern Gfx RCP_carry_boy_carry5[];
extern Gfx RCP_carry_boy_carry2[];
extern Gfx RCP_carry_boy_carry6[];
extern Gfx RCP_carry_boy_carry3[];
extern Gfx RCP_carry_boy_carry4[];
extern AnimePtr carryboy_anime[];

// koopa_shell
extern Hierarchy RCP_HmsRedNoko[];
extern Hierarchy RCP_HmsGreenNoko[];

// test_platform
extern const GeoLayout test_platform_geo[];
extern const Gfx unknown_seg8_dl_08026260[];
extern const Collision unknown_seg8_collision_080262F8[];

#endif
