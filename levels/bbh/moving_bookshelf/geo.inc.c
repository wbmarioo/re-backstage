// 0x0E000610
const GeoLayout haunted_bookshelf_geo[] = {
    GEO_CULLING_RADIUS(1000),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_haunted_bookshelf_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
