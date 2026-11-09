#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "actors/group12.h"

#include "make_const_nonconst.h"
#include "levels/bbh/header.h"

static const LevelScript script_func_local_1[] = {
    //OBJECT(/*model*/ MODEL_BBH_TUMBLING_PLATFORM,      /*pos*/  2961,     0,  -768, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvBBHTumblingBridge),
    //OBJECT(/*model*/ MODEL_BBH_MOVING_BOOKSHELF,       /*pos*/ -1994,   819,   213, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHauntedBookshelf),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 3150, 0, 1688, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 3342, 0, 1332, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 3522, 0, 1510, 0, -125, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 3722, 0, 1600, 0, -90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 2490, 0, 1874, 0, -50, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ 1610, 922, -834, 0, -50, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvMrI),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  690,  80, -1466, 0, -140, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  154,  80, -1030, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/ -1028, 80,  -424, 0, 0, 0,    /*bhvParam*/ 0x00000000, /*bhv*/ bhvBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  590, 1000, -1048, 0, 90, 0,  /*bhvParam*/ 0x00000000, /*bhv*/ bhvBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/ -1574, 80, -1192,  0, 0, 0,   /*bhvParam*/ 0x00000000, /*bhv*/ bhvKeyBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  3242, 1000, -814, 0, 0, 0,   /*bhvParam*/ 0x00020000, /*bhv*/ bhvKeyBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  -356, 1000, -706, 0, 0, 0,   /*bhvParam*/ 0x00030000, /*bhv*/ bhvKeyBoo),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/   1642, 80,  -960, 0, 0, 0,   /*bhvParam*/ 0x00010000, /*bhv*/ bhvKeyBoo),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BBH_MOVING_BOOKSHELF,       /*pos*/ -2199,   921,   213, /*angle*/ 0, 0, 0,   /*bhvParam*/ 0, /*bhv*/ bhvHauntedBookshelf),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/   1200, 1100, 1800, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvStar),
    OBJECT(/*model*/ MODEL_STAR,  /*pos*/  -2000, 1300, 1850, /*angle*/ 0, 0, 0, /*bhvParam*/ 0x01000000, /*bhv*/ bhvStar),
    RETURN(),
};


const LevelScript level_bbh_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),

    AREA(/*index*/ 1, bbh_geo),
        JUMP_LINK(script_func_global_1),
        JUMP_LINK(script_func_global_10),
        JUMP_LINK(script_func_global_18),
        LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR, RCP_HmsMainDoor),
        LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       haunted_bookshelf_geo),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -700, 0, -1650, /*angle*/ 0, 90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/   -52,    0, 1458, 0,90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/   -52,    0,  640, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/   432,    0,  -51, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  1612,    0, -51, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  2100,    0, 1460, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/   931,    0, -1683, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ -2172,    0, 1074, 0,  0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  3456,    0, 1078, 0,  0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  -764,  922, 1408, 0,  90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  -764,  922,  642, 0,  90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/   182,  922,  -50, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  1612,  922,  -50, 0, -180, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  2100,  922, 1818, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/  2100,  922,  488, 0, 90, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_CASTLE_DOOR,       /*pos*/ -2176, 1075, 1072, 0, 0, 0, /*bhvParam*/ 0x00000000, /*bhv*/ bhvDoor),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 717, 1024, 1843, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvSpinAirborneWarp),
        WARP_NODE(/*id*/ WARP_NODE_0A,      /*destLevel*/ LEVEL_BBH,      /*destArea*/ 1,  /*destNode*/ WARP_NODE_0A,  /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_SUCCESS, /*destLevel*/ LEVEL_CASTLE,  /*destArea*/ 0x01, /*destNode*/ 0x26,         /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH,   /*destLevel*/ LEVEL_CASTLE,  /*destArea*/ 0x01, /*destNode*/ 0x23,         /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        JUMP_LINK(script_func_local_3),
        TERRAIN(/*terrainData*/ bbh_collision),
        ROOMS(/*surfaceRooms*/ bbh_collision_rooms),
        MACRO_OBJECTS(/*objList*/ bbh_macro),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0005, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ 717, 0, 1843),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
