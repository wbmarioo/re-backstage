// 0x0E0005F8
const GeoLayout tumbling_platform_near_geo[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, tumbling_platform_near_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
