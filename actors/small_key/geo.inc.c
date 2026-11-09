// 0x0C000188
const GeoLayout small_key_geo[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 80),
    GEO_OPEN_NODE(),
        GEO_SCALE(0x00, 16384),
        GEO_OPEN_NODE(),
            GEO_SWITCH_CASE(4, geo_switch_anim_state),
            GEO_OPEN_NODE(),
                GEO_DISPLAY_LIST(LAYER_OPAQUE, small_key_seg5_dl_05006A48), // Red
                GEO_DISPLAY_LIST(LAYER_OPAQUE, small_key_seg5_dl_05006A28), // Green
                GEO_DISPLAY_LIST(LAYER_OPAQUE, small_key_seg5_dl_05006A08), // Blue
                GEO_DISPLAY_LIST(LAYER_OPAQUE, small_key_seg5_dl_05006A68), // Yellow
            GEO_CLOSE_NODE(),
        GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
