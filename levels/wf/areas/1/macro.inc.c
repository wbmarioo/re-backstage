const MacroObject mountain_macro[] = {
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/ 1920, 2560,  2560), //bottom left coin
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/-1164, 1024,  3890), // cannon coin right
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/-1365, 1024,  3890), // cannon coin middle
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/-1576, 1024,  3890), // cannon coin left
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/ 3840, 1075,  -1791),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/ 3840, 1075,  -767),
    MACRO_OBJECT(/*preset*/ macro_yellow_coin_1,        /*yaw*/   0, /*pos*/ 3840, 1075,  -2815),
    MACRO_OBJECT_WITH_BHV_PARAM(/*preset*/ macro_cannon_open,               /*yaw*/   0, /*pos*/ -1844,  1026,  3893, /*bhvParam*/ 0x40),
    #ifdef POWBUILD
    MACRO_OBJECT(/*preset*/ macro_butterfly_triplet,    /*yaw*/   0, /*pos*/  4574,   300,  4970),
    #endif
    MACRO_OBJECT_END(),
};
