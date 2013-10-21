/* NOTE:
 * packet-spice.h is auto-generated from a Spice protocol definition by a tool
 * included in the spice-common repository
 * (http://cgit.freedesktop.org/spice/spice-common/)
 * To re-generate this file, run the following command from the root of the
 * spice-common tree:
 *      python ./spice_codegen.py --generate-wireshark-dissector \
 *              spice.proto packet-spice.h
 */
#ifndef _H_SPICE_ENUMS
#define _H_SPICE_ENUMS

/* Generated from spice.proto, don't edit */

typedef enum SpiceLinkErr {
    SPICE_LINK_ERR_OK,
    SPICE_LINK_ERR_ERROR,
    SPICE_LINK_ERR_INVALID_MAGIC,
    SPICE_LINK_ERR_INVALID_DATA,
    SPICE_LINK_ERR_VERSION_MISMATCH,
    SPICE_LINK_ERR_NEED_SECURED,
    SPICE_LINK_ERR_NEED_UNSECURED,
    SPICE_LINK_ERR_PERMISSION_DENIED,
    SPICE_LINK_ERR_BAD_CONNECTION_ID,
    SPICE_LINK_ERR_CHANNEL_NOT_AVAILABLE,

    SPICE_LINK_ERR_ENUM_END
} SpiceLinkErr;

static const value_string spice_link_err_vs[] =  {
    { SPICE_LINK_ERR_OK, "OK" },
    { SPICE_LINK_ERR_ERROR, "ERROR" },
    { SPICE_LINK_ERR_INVALID_MAGIC, "INVALID_MAGIC" },
    { SPICE_LINK_ERR_INVALID_DATA, "INVALID_DATA" },
    { SPICE_LINK_ERR_VERSION_MISMATCH, "VERSION_MISMATCH" },
    { SPICE_LINK_ERR_NEED_SECURED, "NEED_SECURED" },
    { SPICE_LINK_ERR_NEED_UNSECURED, "NEED_UNSECURED" },
    { SPICE_LINK_ERR_PERMISSION_DENIED, "PERMISSION_DENIED" },
    { SPICE_LINK_ERR_BAD_CONNECTION_ID, "BAD_CONNECTION_ID" },
    { SPICE_LINK_ERR_CHANNEL_NOT_AVAILABLE, "CHANNEL_NOT_AVAILABLE" },
    { 0, NULL } };

typedef enum SpiceWarnCode {
    SPICE_WARN_GENERAL,

    SPICE_WARN_CODE_ENUM_END
} SpiceWarnCode;

static const value_string spice_warn_code_vs[] =  {
    { SPICE_WARN_GENERAL, "WARN_GENERAL" },
    { 0, NULL } };

typedef enum SpiceInfoCode {
    SPICE_INFO_GENERAL,

    SPICE_INFO_CODE_ENUM_END
} SpiceInfoCode;

static const value_string spice_info_code_vs[] =  {
    { SPICE_INFO_GENERAL, "INFO_GENERAL" },
    { 0, NULL } };

typedef enum SpiceMigrateFlags {
    SPICE_MIGRATE_NEED_FLUSH = (1 << 0),
    SPICE_MIGRATE_NEED_DATA_TRANSFER = (1 << 1),

    SPICE_MIGRATE_FLAGS_MASK = 0x3
} SpiceMigrateFlags;

static const value_string spice_migrate_flags_vs[] =  {
    { SPICE_MIGRATE_NEED_FLUSH, "NEED_FLUSH" },
    { SPICE_MIGRATE_NEED_DATA_TRANSFER, "NEED_DATA_TRANSFER" },
    { 0, NULL } };

typedef enum SpiceCompositeFlags {
    SPICE_COMPOSITE_OP0 = (1 << 0),
    SPICE_COMPOSITE_OP1 = (1 << 1),
    SPICE_COMPOSITE_OP2 = (1 << 2),
    SPICE_COMPOSITE_OP3 = (1 << 3),
    SPICE_COMPOSITE_OP4 = (1 << 4),
    SPICE_COMPOSITE_OP5 = (1 << 5),
    SPICE_COMPOSITE_OP6 = (1 << 6),
    SPICE_COMPOSITE_OP7 = (1 << 7),
    SPICE_COMPOSITE_SRC_FILTER0 = (1 << 8),
    SPICE_COMPOSITE_SRC_FILTER1 = (1 << 9),
    SPICE_COMPOSITE_SRC_FILTER2 = (1 << 10),
    SPICE_COMPOSITE_MASK_FILTER0 = (1 << 11),
    SPICE_COMPOSITE_MASK_FITLER1 = (1 << 12),
    SPICE_COMPOSITE_MASK_FILTER2 = (1 << 13),
    SPICE_COMPOSITE_SRC_REPEAT0 = (1 << 14),
    SPICE_COMPOSITE_SRC_REPEAT1 = (1 << 15),
    SPICE_COMPOSITE_MASK_REPEAT0 = (1 << 16),
    SPICE_COMPOSITE_MASK_REPEAT1 = (1 << 17),
    SPICE_COMPOSITE_COMPONENT_ALPHA = (1 << 18),
    SPICE_COMPOSITE_HAS_MASK = (1 << 19),
    SPICE_COMPOSITE_HAS_SRC_TRANSFORM = (1 << 20),
    SPICE_COMPOSITE_HAS_MASK_TRANSFORM = (1 << 21),
    SPICE_COMPOSITE_SOURCE_OPAQUE = (1 << 22),
    SPICE_COMPOSITE_MASK_OPAQUE = (1 << 23),
    SPICE_COMPOSITE_DEST_OPAQUE = (1 << 24),

    SPICE_COMPOSITE_FLAGS_MASK = 0x1ffffff
} SpiceCompositeFlags;

static const value_string spice_composite_flags_vs[] =  {
    { SPICE_COMPOSITE_OP0, "OP0" },
    { SPICE_COMPOSITE_OP1, "OP1" },
    { SPICE_COMPOSITE_OP2, "OP2" },
    { SPICE_COMPOSITE_OP3, "OP3" },
    { SPICE_COMPOSITE_OP4, "OP4" },
    { SPICE_COMPOSITE_OP5, "OP5" },
    { SPICE_COMPOSITE_OP6, "OP6" },
    { SPICE_COMPOSITE_OP7, "OP7" },
    { SPICE_COMPOSITE_SRC_FILTER0, "SRC_FILTER0" },
    { SPICE_COMPOSITE_SRC_FILTER1, "SRC_FILTER1" },
    { SPICE_COMPOSITE_SRC_FILTER2, "SRC_FILTER2" },
    { SPICE_COMPOSITE_MASK_FILTER0, "MASK_FILTER0" },
    { SPICE_COMPOSITE_MASK_FITLER1, "MASK_FITLER1" },
    { SPICE_COMPOSITE_MASK_FILTER2, "MASK_FILTER2" },
    { SPICE_COMPOSITE_SRC_REPEAT0, "SRC_REPEAT0" },
    { SPICE_COMPOSITE_SRC_REPEAT1, "SRC_REPEAT1" },
    { SPICE_COMPOSITE_MASK_REPEAT0, "MASK_REPEAT0" },
    { SPICE_COMPOSITE_MASK_REPEAT1, "MASK_REPEAT1" },
    { SPICE_COMPOSITE_COMPONENT_ALPHA, "COMPONENT_ALPHA" },
    { SPICE_COMPOSITE_HAS_MASK, "HAS_MASK" },
    { SPICE_COMPOSITE_HAS_SRC_TRANSFORM, "HAS_SRC_TRANSFORM" },
    { SPICE_COMPOSITE_HAS_MASK_TRANSFORM, "HAS_MASK_TRANSFORM" },
    { SPICE_COMPOSITE_SOURCE_OPAQUE, "SOURCE_OPAQUE" },
    { SPICE_COMPOSITE_MASK_OPAQUE, "MASK_OPAQUE" },
    { SPICE_COMPOSITE_DEST_OPAQUE, "DEST_OPAQUE" },
    { 0, NULL } };

typedef enum SpiceNotifySeverity {
    SPICE_NOTIFY_SEVERITY_INFO,
    SPICE_NOTIFY_SEVERITY_WARN,
    SPICE_NOTIFY_SEVERITY_ERROR,

    SPICE_NOTIFY_SEVERITY_ENUM_END
} SpiceNotifySeverity;

static const value_string spice_notify_severity_vs[] =  {
    { SPICE_NOTIFY_SEVERITY_INFO, "INFO" },
    { SPICE_NOTIFY_SEVERITY_WARN, "WARN" },
    { SPICE_NOTIFY_SEVERITY_ERROR, "ERROR" },
    { 0, NULL } };

typedef enum SpiceNotifyVisibility {
    SPICE_NOTIFY_VISIBILITY_LOW,
    SPICE_NOTIFY_VISIBILITY_MEDIUM,
    SPICE_NOTIFY_VISIBILITY_HIGH,

    SPICE_NOTIFY_VISIBILITY_ENUM_END
} SpiceNotifyVisibility;

static const value_string spice_notify_visibility_vs[] =  {
    { SPICE_NOTIFY_VISIBILITY_LOW, "LOW" },
    { SPICE_NOTIFY_VISIBILITY_MEDIUM, "MEDIUM" },
    { SPICE_NOTIFY_VISIBILITY_HIGH, "HIGH" },
    { 0, NULL } };

typedef enum SpiceMouseMode {
    SPICE_MOUSE_MODE_SERVER = (1 << 0),
    SPICE_MOUSE_MODE_CLIENT = (1 << 1),

    SPICE_MOUSE_MODE_MASK = 0x3
} SpiceMouseMode;

static const value_string spice_mouse_mode_vs[] =  {
    { SPICE_MOUSE_MODE_SERVER, "SERVER" },
    { SPICE_MOUSE_MODE_CLIENT, "CLIENT" },
    { 0, NULL } };

typedef enum SpicePubkeyType {
    SPICE_PUBKEY_TYPE_INVALID,
    SPICE_PUBKEY_TYPE_RSA,
    SPICE_PUBKEY_TYPE_RSA2,
    SPICE_PUBKEY_TYPE_DSA,
    SPICE_PUBKEY_TYPE_DSA1,
    SPICE_PUBKEY_TYPE_DSA2,
    SPICE_PUBKEY_TYPE_DSA3,
    SPICE_PUBKEY_TYPE_DSA4,
    SPICE_PUBKEY_TYPE_DH,
    SPICE_PUBKEY_TYPE_EC,

    SPICE_PUBKEY_TYPE_ENUM_END
} SpicePubkeyType;

static const value_string spice_pubkey_type_vs[] =  {
    { SPICE_PUBKEY_TYPE_INVALID, "INVALID" },
    { SPICE_PUBKEY_TYPE_RSA, "RSA" },
    { SPICE_PUBKEY_TYPE_RSA2, "RSA2" },
    { SPICE_PUBKEY_TYPE_DSA, "DSA" },
    { SPICE_PUBKEY_TYPE_DSA1, "DSA1" },
    { SPICE_PUBKEY_TYPE_DSA2, "DSA2" },
    { SPICE_PUBKEY_TYPE_DSA3, "DSA3" },
    { SPICE_PUBKEY_TYPE_DSA4, "DSA4" },
    { SPICE_PUBKEY_TYPE_DH, "DH" },
    { SPICE_PUBKEY_TYPE_EC, "EC" },
    { 0, NULL } };

typedef enum SpiceClipType {
    SPICE_CLIP_TYPE_NONE,
    SPICE_CLIP_TYPE_RECTS,

    SPICE_CLIP_TYPE_ENUM_END
} SpiceClipType;

static const value_string spice_clip_type_vs[] =  {
    { SPICE_CLIP_TYPE_NONE, "NONE" },
    { SPICE_CLIP_TYPE_RECTS, "RECTS" },
    { 0, NULL } };

typedef enum SpicePathFlags {
    SPICE_PATH_BEGIN = (1 << 0),
    SPICE_PATH_END = (1 << 1),
    SPICE_PATH_CLOSE = (1 << 3),
    SPICE_PATH_BEZIER = (1 << 4),

    SPICE_PATH_FLAGS_MASK = 0x1b
} SpicePathFlags;

static const value_string spice_path_flags_vs[] =  {
    { SPICE_PATH_BEGIN, "BEGIN" },
    { SPICE_PATH_END, "END" },
    { SPICE_PATH_CLOSE, "CLOSE" },
    { SPICE_PATH_BEZIER, "BEZIER" },
    { 0, NULL } };

typedef enum SpiceVideoCodecType {
    SPICE_VIDEO_CODEC_TYPE_MJPEG = 1,

    SPICE_VIDEO_CODEC_TYPE_ENUM_END
} SpiceVideoCodecType;

static const value_string spice_video_codec_type_vs[] =  {
    { SPICE_VIDEO_CODEC_TYPE_MJPEG, "MJPEG" },
    { 0, NULL } };

typedef enum SpiceStreamFlags {
    SPICE_STREAM_FLAGS_TOP_DOWN = (1 << 0),

    SPICE_STREAM_FLAGS_MASK = 0x1
} SpiceStreamFlags;

static const value_string spice_stream_flags_vs[] =  {
    { SPICE_STREAM_FLAGS_TOP_DOWN, "TOP_DOWN" },
    { 0, NULL } };

typedef enum SpiceBrushType {
    SPICE_BRUSH_TYPE_NONE,
    SPICE_BRUSH_TYPE_SOLID,
    SPICE_BRUSH_TYPE_PATTERN,

    SPICE_BRUSH_TYPE_ENUM_END
} SpiceBrushType;

static const value_string spice_brush_type_vs[] =  {
    { SPICE_BRUSH_TYPE_NONE, "NONE" },
    { SPICE_BRUSH_TYPE_SOLID, "SOLID" },
    { SPICE_BRUSH_TYPE_PATTERN, "PATTERN" },
    { 0, NULL } };

typedef enum SpiceMaskFlags {
    SPICE_MASK_FLAGS_INVERS = (1 << 0),

    SPICE_MASK_FLAGS_MASK = 0x1
} SpiceMaskFlags;

static const value_string spice_mask_flags_vs[] =  {
    { SPICE_MASK_FLAGS_INVERS, "INVERS" },
    { 0, NULL } };

typedef enum SpiceImageType {
    SPICE_IMAGE_TYPE_BITMAP,
    SPICE_IMAGE_TYPE_QUIC,
    SPICE_IMAGE_TYPE_RESERVED,
    SPICE_IMAGE_TYPE_LZ_PLT = 100,
    SPICE_IMAGE_TYPE_LZ_RGB,
    SPICE_IMAGE_TYPE_GLZ_RGB,
    SPICE_IMAGE_TYPE_FROM_CACHE,
    SPICE_IMAGE_TYPE_SURFACE,
    SPICE_IMAGE_TYPE_JPEG,
    SPICE_IMAGE_TYPE_FROM_CACHE_LOSSLESS,
    SPICE_IMAGE_TYPE_ZLIB_GLZ_RGB,
    SPICE_IMAGE_TYPE_JPEG_ALPHA,

    SPICE_IMAGE_TYPE_ENUM_END
} SpiceImageType;

static const value_string spice_image_type_vs[] =  {
    { SPICE_IMAGE_TYPE_BITMAP, "BITMAP" },
    { SPICE_IMAGE_TYPE_QUIC, "QUIC" },
    { SPICE_IMAGE_TYPE_RESERVED, "RESERVED" },
    { SPICE_IMAGE_TYPE_LZ_PLT, "LZ_PLT" },
    { SPICE_IMAGE_TYPE_LZ_RGB, "LZ_RGB" },
    { SPICE_IMAGE_TYPE_GLZ_RGB, "GLZ_RGB" },
    { SPICE_IMAGE_TYPE_FROM_CACHE, "FROM_CACHE" },
    { SPICE_IMAGE_TYPE_SURFACE, "SURFACE" },
    { SPICE_IMAGE_TYPE_JPEG, "JPEG" },
    { SPICE_IMAGE_TYPE_FROM_CACHE_LOSSLESS, "FROM_CACHE_LOSSLESS" },
    { SPICE_IMAGE_TYPE_ZLIB_GLZ_RGB, "ZLIB_GLZ_RGB" },
    { SPICE_IMAGE_TYPE_JPEG_ALPHA, "JPEG_ALPHA" },
    { 0, NULL } };

typedef enum SpiceImageFlags {
    SPICE_IMAGE_FLAGS_CACHE_ME = (1 << 0),
    SPICE_IMAGE_FLAGS_HIGH_BITS_SET = (1 << 1),
    SPICE_IMAGE_FLAGS_CACHE_REPLACE_ME = (1 << 2),

    SPICE_IMAGE_FLAGS_MASK = 0x7
} SpiceImageFlags;

static const value_string spice_image_flags_vs[] =  {
    { SPICE_IMAGE_FLAGS_CACHE_ME, "CACHE_ME" },
    { SPICE_IMAGE_FLAGS_HIGH_BITS_SET, "HIGH_BITS_SET" },
    { SPICE_IMAGE_FLAGS_CACHE_REPLACE_ME, "CACHE_REPLACE_ME" },
    { 0, NULL } };

typedef enum SpiceBitmapFmt {
    SPICE_BITMAP_FMT_INVALID,
    SPICE_BITMAP_FMT_1BIT_LE,
    SPICE_BITMAP_FMT_1BIT_BE,
    SPICE_BITMAP_FMT_4BIT_LE,
    SPICE_BITMAP_FMT_4BIT_BE,
    SPICE_BITMAP_FMT_8BIT,
    SPICE_BITMAP_FMT_16BIT,
    SPICE_BITMAP_FMT_24BIT,
    SPICE_BITMAP_FMT_32BIT,
    SPICE_BITMAP_FMT_RGBA,
    SPICE_BITMAP_FMT_8BIT_A,

    SPICE_BITMAP_FMT_ENUM_END
} SpiceBitmapFmt;

static const value_string spice_bitmap_fmt_vs[] =  {
    { SPICE_BITMAP_FMT_INVALID, "INVALID" },
    { SPICE_BITMAP_FMT_1BIT_LE, "1BIT_LE" },
    { SPICE_BITMAP_FMT_1BIT_BE, "1BIT_BE" },
    { SPICE_BITMAP_FMT_4BIT_LE, "4BIT_LE" },
    { SPICE_BITMAP_FMT_4BIT_BE, "4BIT_BE" },
    { SPICE_BITMAP_FMT_8BIT, "8BIT" },
    { SPICE_BITMAP_FMT_16BIT, "16BIT" },
    { SPICE_BITMAP_FMT_24BIT, "24BIT" },
    { SPICE_BITMAP_FMT_32BIT, "32BIT" },
    { SPICE_BITMAP_FMT_RGBA, "RGBA" },
    { SPICE_BITMAP_FMT_8BIT_A, "8BIT_A" },
    { 0, NULL } };

typedef enum SpiceBitmapFlags {
    SPICE_BITMAP_FLAGS_PAL_CACHE_ME = (1 << 0),
    SPICE_BITMAP_FLAGS_PAL_FROM_CACHE = (1 << 1),
    SPICE_BITMAP_FLAGS_TOP_DOWN = (1 << 2),

    SPICE_BITMAP_FLAGS_MASK = 0x7
} SpiceBitmapFlags;

static const value_string spice_bitmap_flags_vs[] =  {
    { SPICE_BITMAP_FLAGS_PAL_CACHE_ME, "PAL_CACHE_ME" },
    { SPICE_BITMAP_FLAGS_PAL_FROM_CACHE, "PAL_FROM_CACHE" },
    { SPICE_BITMAP_FLAGS_TOP_DOWN, "TOP_DOWN" },
    { 0, NULL } };

typedef enum SpiceJpegAlphaFlags {
    SPICE_JPEG_ALPHA_FLAGS_TOP_DOWN = (1 << 0),

    SPICE_JPEG_ALPHA_FLAGS_MASK = 0x1
} SpiceJpegAlphaFlags;

static const value_string spice_jpeg_alpha_flags_vs[] =  {
    { SPICE_JPEG_ALPHA_FLAGS_TOP_DOWN, "TOP_DOWN" },
    { 0, NULL } };

typedef enum SpiceImageScaleMode {
    SPICE_IMAGE_SCALE_MODE_INTERPOLATE,
    SPICE_IMAGE_SCALE_MODE_NEAREST,

    SPICE_IMAGE_SCALE_MODE_ENUM_END
} SpiceImageScaleMode;

static const value_string spice_image_scale_mode_vs[] =  {
    { SPICE_IMAGE_SCALE_MODE_INTERPOLATE, "INTERPOLATE" },
    { SPICE_IMAGE_SCALE_MODE_NEAREST, "NEAREST" },
    { 0, NULL } };

typedef enum SpiceRopd {
    SPICE_ROPD_INVERS_SRC = (1 << 0),
    SPICE_ROPD_INVERS_BRUSH = (1 << 1),
    SPICE_ROPD_INVERS_DEST = (1 << 2),
    SPICE_ROPD_OP_PUT = (1 << 3),
    SPICE_ROPD_OP_OR = (1 << 4),
    SPICE_ROPD_OP_AND = (1 << 5),
    SPICE_ROPD_OP_XOR = (1 << 6),
    SPICE_ROPD_OP_BLACKNESS = (1 << 7),
    SPICE_ROPD_OP_WHITENESS = (1 << 8),
    SPICE_ROPD_OP_INVERS = (1 << 9),
    SPICE_ROPD_INVERS_RES = (1 << 10),

    SPICE_ROPD_MASK = 0x7ff
} SpiceRopd;

static const value_string spice_ropd_vs[] =  {
    { SPICE_ROPD_INVERS_SRC, "INVERS_SRC" },
    { SPICE_ROPD_INVERS_BRUSH, "INVERS_BRUSH" },
    { SPICE_ROPD_INVERS_DEST, "INVERS_DEST" },
    { SPICE_ROPD_OP_PUT, "OP_PUT" },
    { SPICE_ROPD_OP_OR, "OP_OR" },
    { SPICE_ROPD_OP_AND, "OP_AND" },
    { SPICE_ROPD_OP_XOR, "OP_XOR" },
    { SPICE_ROPD_OP_BLACKNESS, "OP_BLACKNESS" },
    { SPICE_ROPD_OP_WHITENESS, "OP_WHITENESS" },
    { SPICE_ROPD_OP_INVERS, "OP_INVERS" },
    { SPICE_ROPD_INVERS_RES, "INVERS_RES" },
    { 0, NULL } };

typedef enum SpiceLineFlags {
    SPICE_LINE_FLAGS_START_WITH_GAP = (1 << 2),
    SPICE_LINE_FLAGS_STYLED = (1 << 3),

    SPICE_LINE_FLAGS_MASK = 0xc
} SpiceLineFlags;

static const value_string spice_line_flags_vs[] =  {
    { SPICE_LINE_FLAGS_START_WITH_GAP, "START_WITH_GAP" },
    { SPICE_LINE_FLAGS_STYLED, "STYLED" },
    { 0, NULL } };

typedef enum SpiceStringFlags {
    SPICE_STRING_FLAGS_RASTER_A1 = (1 << 0),
    SPICE_STRING_FLAGS_RASTER_A4 = (1 << 1),
    SPICE_STRING_FLAGS_RASTER_A8 = (1 << 2),
    SPICE_STRING_FLAGS_RASTER_TOP_DOWN = (1 << 3),

    SPICE_STRING_FLAGS_MASK = 0xf
} SpiceStringFlags;

static const value_string spice_string_flags_vs[] =  {
    { SPICE_STRING_FLAGS_RASTER_A1, "RASTER_A1" },
    { SPICE_STRING_FLAGS_RASTER_A4, "RASTER_A4" },
    { SPICE_STRING_FLAGS_RASTER_A8, "RASTER_A8" },
    { SPICE_STRING_FLAGS_RASTER_TOP_DOWN, "RASTER_TOP_DOWN" },
    { 0, NULL } };

typedef enum SpiceSurfaceFlags {
    SPICE_SURFACE_FLAGS_PRIMARY = (1 << 0),

    SPICE_SURFACE_FLAGS_MASK = 0x1
} SpiceSurfaceFlags;

static const value_string spice_surface_flags_vs[] =  {
    { SPICE_SURFACE_FLAGS_PRIMARY, "PRIMARY" },
    { 0, NULL } };

typedef enum SpiceSurfaceFmt {
    SPICE_SURFACE_FMT_INVALID,
    SPICE_SURFACE_FMT_1_A,
    SPICE_SURFACE_FMT_8_A = 8,
    SPICE_SURFACE_FMT_16_555 = 16,
    SPICE_SURFACE_FMT_32_XRGB = 32,
    SPICE_SURFACE_FMT_16_565 = 80,
    SPICE_SURFACE_FMT_32_ARGB = 96,

    SPICE_SURFACE_FMT_ENUM_END
} SpiceSurfaceFmt;

static const value_string spice_surface_fmt_vs[] =  {
    { SPICE_SURFACE_FMT_INVALID, "INVALID" },
    { SPICE_SURFACE_FMT_1_A, "1_A" },
    { SPICE_SURFACE_FMT_8_A, "8_A" },
    { SPICE_SURFACE_FMT_16_555, "16_555" },
    { SPICE_SURFACE_FMT_32_XRGB, "32_xRGB" },
    { SPICE_SURFACE_FMT_16_565, "16_565" },
    { SPICE_SURFACE_FMT_32_ARGB, "32_ARGB" },
    { 0, NULL } };

typedef enum SpiceAlphaFlags {
    SPICE_ALPHA_FLAGS_DEST_HAS_ALPHA = (1 << 0),
    SPICE_ALPHA_FLAGS_SRC_SURFACE_HAS_ALPHA = (1 << 1),

    SPICE_ALPHA_FLAGS_MASK = 0x3
} SpiceAlphaFlags;

static const value_string spice_alpha_flags_vs[] =  {
    { SPICE_ALPHA_FLAGS_DEST_HAS_ALPHA, "DEST_HAS_ALPHA" },
    { SPICE_ALPHA_FLAGS_SRC_SURFACE_HAS_ALPHA, "SRC_SURFACE_HAS_ALPHA" },
    { 0, NULL } };

typedef enum SpiceResourceType {
    SPICE_RES_TYPE_INVALID,
    SPICE_RES_TYPE_PIXMAP,

    SPICE_RESOURCE_TYPE_ENUM_END
} SpiceResourceType;

static const value_string spice_resource_type_vs[] =  {
    { SPICE_RES_TYPE_INVALID, "INVALID" },
    { SPICE_RES_TYPE_PIXMAP, "PIXMAP" },
    { 0, NULL } };

typedef enum SpiceKeyboardModifierFlags {
    SPICE_KEYBOARD_MODIFIER_FLAGS_SCROLL_LOCK = (1 << 0),
    SPICE_KEYBOARD_MODIFIER_FLAGS_NUM_LOCK = (1 << 1),
    SPICE_KEYBOARD_MODIFIER_FLAGS_CAPS_LOCK = (1 << 2),

    SPICE_KEYBOARD_MODIFIER_FLAGS_MASK = 0x7
} SpiceKeyboardModifierFlags;

static const value_string spice_keyboard_modifier_flags_vs[] =  {
    { SPICE_KEYBOARD_MODIFIER_FLAGS_SCROLL_LOCK, "SCROLL_LOCK" },
    { SPICE_KEYBOARD_MODIFIER_FLAGS_NUM_LOCK, "NUM_LOCK" },
    { SPICE_KEYBOARD_MODIFIER_FLAGS_CAPS_LOCK, "CAPS_LOCK" },
    { 0, NULL } };

typedef enum SpiceMouseButton {
    SPICE_MOUSE_BUTTON_INVALID,
    SPICE_MOUSE_BUTTON_LEFT,
    SPICE_MOUSE_BUTTON_MIDDLE,
    SPICE_MOUSE_BUTTON_RIGHT,
    SPICE_MOUSE_BUTTON_UP,
    SPICE_MOUSE_BUTTON_DOWN,

    SPICE_MOUSE_BUTTON_ENUM_END
} SpiceMouseButton;

static const value_string spice_mouse_button_vs[] =  {
    { SPICE_MOUSE_BUTTON_INVALID, "INVALID" },
    { SPICE_MOUSE_BUTTON_LEFT, "LEFT" },
    { SPICE_MOUSE_BUTTON_MIDDLE, "MIDDLE" },
    { SPICE_MOUSE_BUTTON_RIGHT, "RIGHT" },
    { SPICE_MOUSE_BUTTON_UP, "UP" },
    { SPICE_MOUSE_BUTTON_DOWN, "DOWN" },
    { 0, NULL } };

typedef enum SpiceMouseButtonMask {
    SPICE_MOUSE_BUTTON_MASK_LEFT = (1 << 0),
    SPICE_MOUSE_BUTTON_MASK_MIDDLE = (1 << 1),
    SPICE_MOUSE_BUTTON_MASK_RIGHT = (1 << 2),

    SPICE_MOUSE_BUTTON_MASK_MASK = 0x7
} SpiceMouseButtonMask;

static const value_string spice_mouse_button_mask_vs[] =  {
    { SPICE_MOUSE_BUTTON_MASK_LEFT, "LEFT" },
    { SPICE_MOUSE_BUTTON_MASK_MIDDLE, "MIDDLE" },
    { SPICE_MOUSE_BUTTON_MASK_RIGHT, "RIGHT" },
    { 0, NULL } };

typedef enum SpiceCursorType {
    SPICE_CURSOR_TYPE_ALPHA,
    SPICE_CURSOR_TYPE_MONO,
    SPICE_CURSOR_TYPE_COLOR4,
    SPICE_CURSOR_TYPE_COLOR8,
    SPICE_CURSOR_TYPE_COLOR16,
    SPICE_CURSOR_TYPE_COLOR24,
    SPICE_CURSOR_TYPE_COLOR32,

    SPICE_CURSOR_TYPE_ENUM_END
} SpiceCursorType;

static const value_string spice_cursor_type_vs[] =  {
    { SPICE_CURSOR_TYPE_ALPHA, "ALPHA" },
    { SPICE_CURSOR_TYPE_MONO, "MONO" },
    { SPICE_CURSOR_TYPE_COLOR4, "COLOR4" },
    { SPICE_CURSOR_TYPE_COLOR8, "COLOR8" },
    { SPICE_CURSOR_TYPE_COLOR16, "COLOR16" },
    { SPICE_CURSOR_TYPE_COLOR24, "COLOR24" },
    { SPICE_CURSOR_TYPE_COLOR32, "COLOR32" },
    { 0, NULL } };

typedef enum SpiceCursorFlags {
    SPICE_CURSOR_FLAGS_NONE = (1 << 0),
    SPICE_CURSOR_FLAGS_CACHE_ME = (1 << 1),
    SPICE_CURSOR_FLAGS_FROM_CACHE = (1 << 2),

    SPICE_CURSOR_FLAGS_MASK = 0x7
} SpiceCursorFlags;

static const value_string spice_cursor_flags_vs[] =  {
    { SPICE_CURSOR_FLAGS_NONE, "NONE" },
    { SPICE_CURSOR_FLAGS_CACHE_ME, "CACHE_ME" },
    { SPICE_CURSOR_FLAGS_FROM_CACHE, "FROM_CACHE" },
    { 0, NULL } };

typedef enum SpiceAudioDataMode {
    SPICE_AUDIO_DATA_MODE_INVALID,
    SPICE_AUDIO_DATA_MODE_RAW,
    SPICE_AUDIO_DATA_MODE_CELT_0_5_1,

    SPICE_AUDIO_DATA_MODE_ENUM_END
} SpiceAudioDataMode;

static const value_string spice_audio_data_mode_vs[] =  {
    { SPICE_AUDIO_DATA_MODE_INVALID, "INVALID" },
    { SPICE_AUDIO_DATA_MODE_RAW, "RAW" },
    { SPICE_AUDIO_DATA_MODE_CELT_0_5_1, "CELT_0_5_1" },
    { 0, NULL } };

typedef enum SpiceAudioFmt {
    SPICE_AUDIO_FMT_INVALID,
    SPICE_AUDIO_FMT_S16,

    SPICE_AUDIO_FMT_ENUM_END
} SpiceAudioFmt;

static const value_string spice_audio_fmt_vs[] =  {
    { SPICE_AUDIO_FMT_INVALID, "INVALID" },
    { SPICE_AUDIO_FMT_S16, "S16" },
    { 0, NULL } };

typedef enum SpiceTunnelServiceType {
    SPICE_TUNNEL_SERVICE_TYPE_INVALID,
    SPICE_TUNNEL_SERVICE_TYPE_GENERIC,
    SPICE_TUNNEL_SERVICE_TYPE_IPP,

    SPICE_TUNNEL_SERVICE_TYPE_ENUM_END
} SpiceTunnelServiceType;

static const value_string spice_tunnel_service_type_vs[] =  {
    { SPICE_TUNNEL_SERVICE_TYPE_INVALID, "INVALID" },
    { SPICE_TUNNEL_SERVICE_TYPE_GENERIC, "GENERIC" },
    { SPICE_TUNNEL_SERVICE_TYPE_IPP, "IPP" },
    { 0, NULL } };

typedef enum SpiceTunnelIpType {
    SPICE_TUNNEL_IP_TYPE_INVALID,
    SPICE_TUNNEL_IP_TYPE_IPV4,

    SPICE_TUNNEL_IP_TYPE_ENUM_END
} SpiceTunnelIpType;

static const value_string spice_tunnel_ip_type_vs[] =  {
    { SPICE_TUNNEL_IP_TYPE_INVALID, "INVALID" },
    { SPICE_TUNNEL_IP_TYPE_IPV4, "IPv4" },
    { 0, NULL } };

typedef enum SpiceVscMessageType {
    SPICE_VSC_MESSAGE_TYPE_INIT = 1,
    SPICE_VSC_MESSAGE_TYPE_ERROR,
    SPICE_VSC_MESSAGE_TYPE_READERADD,
    SPICE_VSC_MESSAGE_TYPE_READERREMOVE,
    SPICE_VSC_MESSAGE_TYPE_ATR,
    SPICE_VSC_MESSAGE_TYPE_CARDREMOVE,
    SPICE_VSC_MESSAGE_TYPE_APDU,
    SPICE_VSC_MESSAGE_TYPE_FLUSH,
    SPICE_VSC_MESSAGE_TYPE_FLUSHCOMPLETE,

    SPICE_VSC_MESSAGE_TYPE_ENUM_END
} SpiceVscMessageType;

static const value_string spice_vsc_message_type_vs[] =  {
    { SPICE_VSC_MESSAGE_TYPE_INIT, "Init" },
    { SPICE_VSC_MESSAGE_TYPE_ERROR, "Error" },
    { SPICE_VSC_MESSAGE_TYPE_READERADD, "ReaderAdd" },
    { SPICE_VSC_MESSAGE_TYPE_READERREMOVE, "ReaderRemove" },
    { SPICE_VSC_MESSAGE_TYPE_ATR, "ATR" },
    { SPICE_VSC_MESSAGE_TYPE_CARDREMOVE, "CardRemove" },
    { SPICE_VSC_MESSAGE_TYPE_APDU, "APDU" },
    { SPICE_VSC_MESSAGE_TYPE_FLUSH, "Flush" },
    { SPICE_VSC_MESSAGE_TYPE_FLUSHCOMPLETE, "FlushComplete" },
    { 0, NULL } };

enum {
    SPICE_CHANNEL_MAIN = 1,
    SPICE_CHANNEL_DISPLAY,
    SPICE_CHANNEL_INPUTS,
    SPICE_CHANNEL_CURSOR,
    SPICE_CHANNEL_PLAYBACK,
    SPICE_CHANNEL_RECORD,
    SPICE_CHANNEL_TUNNEL,
    SPICE_CHANNEL_SMARTCARD,
    SPICE_CHANNEL_USBREDIR,
    SPICE_CHANNEL_PORT,

    SPICE_END_CHANNEL
};

static const value_string channel_types_vs[] = {
    { SPICE_CHANNEL_MAIN, "MAIN" },
    { SPICE_CHANNEL_DISPLAY, "DISPLAY" },
    { SPICE_CHANNEL_INPUTS, "INPUTS" },
    { SPICE_CHANNEL_CURSOR, "CURSOR" },
    { SPICE_CHANNEL_PLAYBACK, "PLAYBACK" },
    { SPICE_CHANNEL_RECORD, "RECORD" },
    { SPICE_CHANNEL_TUNNEL, "TUNNEL" },
    { SPICE_CHANNEL_SMARTCARD, "SMARTCARD" },
    { SPICE_CHANNEL_USBREDIR, "USBREDIR" },
    { SPICE_CHANNEL_PORT, "PORT" },

    { 0, NULL }
};

enum {
    SPICE_MSG_MIGRATE = 1,
    SPICE_MSG_MIGRATE_DATA,
    SPICE_MSG_SET_ACK,
    SPICE_MSG_PING,
    SPICE_MSG_WAIT_FOR_CHANNELS,
    SPICE_MSG_DISCONNECTING,
    SPICE_MSG_NOTIFY,
    SPICE_MSG_LIST,
};

static const value_string spice_msg_vs[] =  {
    { SPICE_MSG_MIGRATE, "Server MIGRATE" },
    { SPICE_MSG_MIGRATE_DATA, "Server MIGRATE_DATA" },
    { SPICE_MSG_SET_ACK, "Server SET_ACK" },
    { SPICE_MSG_PING, "Server PING" },
    { SPICE_MSG_WAIT_FOR_CHANNELS, "Server WAIT_FOR_CHANNELS" },
    { SPICE_MSG_DISCONNECTING, "Server DISCONNECTING" },
    { SPICE_MSG_NOTIFY, "Server NOTIFY" },
    { SPICE_MSG_LIST, "Server LIST" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_ACK_SYNC = 1,
    SPICE_MSGC_ACK,
    SPICE_MSGC_PONG,
    SPICE_MSGC_MIGRATE_FLUSH_MARK,
    SPICE_MSGC_MIGRATE_DATA,
    SPICE_MSGC_DISCONNECTING,
};

static const value_string spice_msgc_vs[] =  {
    { SPICE_MSGC_ACK_SYNC, "Client ACK_SYNC" },
    { SPICE_MSGC_ACK, "Client ACK" },
    { SPICE_MSGC_PONG, "Client PONG" },
    { SPICE_MSGC_MIGRATE_FLUSH_MARK, "Client MIGRATE_FLUSH_MARK" },
    { SPICE_MSGC_MIGRATE_DATA, "Client MIGRATE_DATA" },
    { SPICE_MSGC_DISCONNECTING, "Client DISCONNECTING" },
    { 0, NULL }
};

enum {
    SPICE_MSG_MAIN_MIGRATE_BEGIN = 101,
    SPICE_MSG_MAIN_MIGRATE_CANCEL,
    SPICE_MSG_MAIN_INIT,
    SPICE_MSG_MAIN_CHANNELS_LIST,
    SPICE_MSG_MAIN_MOUSE_MODE,
    SPICE_MSG_MAIN_MULTI_MEDIA_TIME,
    SPICE_MSG_MAIN_AGENT_CONNECTED,
    SPICE_MSG_MAIN_AGENT_DISCONNECTED,
    SPICE_MSG_MAIN_AGENT_DATA,
    SPICE_MSG_MAIN_AGENT_TOKEN,
    SPICE_MSG_MAIN_MIGRATE_SWITCH_HOST,
    SPICE_MSG_MAIN_MIGRATE_END,
    SPICE_MSG_MAIN_NAME,
    SPICE_MSG_MAIN_UUID,
    SPICE_MSG_MAIN_AGENT_CONNECTED_TOKENS,
    SPICE_MSG_MAIN_MIGRATE_BEGIN_SEAMLESS,
    SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_ACK,
    SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_NACK,

    SPICE_MSG_END_MAIN
};

static const value_string spice_msg_main_vs[] =  {
    { SPICE_MSG_MAIN_MIGRATE_BEGIN, "Server MIGRATE_BEGIN" },
    { SPICE_MSG_MAIN_MIGRATE_CANCEL, "Server MIGRATE_CANCEL" },
    { SPICE_MSG_MAIN_INIT, "Server INIT" },
    { SPICE_MSG_MAIN_CHANNELS_LIST, "Server CHANNELS_LIST" },
    { SPICE_MSG_MAIN_MOUSE_MODE, "Server MOUSE_MODE" },
    { SPICE_MSG_MAIN_MULTI_MEDIA_TIME, "Server MULTI_MEDIA_TIME" },
    { SPICE_MSG_MAIN_AGENT_CONNECTED, "Server AGENT_CONNECTED" },
    { SPICE_MSG_MAIN_AGENT_DISCONNECTED, "Server AGENT_DISCONNECTED" },
    { SPICE_MSG_MAIN_AGENT_DATA, "Server AGENT_DATA" },
    { SPICE_MSG_MAIN_AGENT_TOKEN, "Server AGENT_TOKEN" },
    { SPICE_MSG_MAIN_MIGRATE_SWITCH_HOST, "Server MIGRATE_SWITCH_HOST" },
    { SPICE_MSG_MAIN_MIGRATE_END, "Server MIGRATE_END" },
    { SPICE_MSG_MAIN_NAME, "Server NAME" },
    { SPICE_MSG_MAIN_UUID, "Server UUID" },
    { SPICE_MSG_MAIN_AGENT_CONNECTED_TOKENS, "Server AGENT_CONNECTED_TOKENS" },
    { SPICE_MSG_MAIN_MIGRATE_BEGIN_SEAMLESS, "Server MIGRATE_BEGIN_SEAMLESS" },
    { SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_ACK, "Server MIGRATE_DST_SEAMLESS_ACK" },
    { SPICE_MSG_MAIN_MIGRATE_DST_SEAMLESS_NACK, "Server MIGRATE_DST_SEAMLESS_NACK" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_MAIN_CLIENT_INFO = 101,
    SPICE_MSGC_MAIN_MIGRATE_CONNECTED,
    SPICE_MSGC_MAIN_MIGRATE_CONNECT_ERROR,
    SPICE_MSGC_MAIN_ATTACH_CHANNELS,
    SPICE_MSGC_MAIN_MOUSE_MODE_REQUEST,
    SPICE_MSGC_MAIN_AGENT_START,
    SPICE_MSGC_MAIN_AGENT_DATA,
    SPICE_MSGC_MAIN_AGENT_TOKEN,
    SPICE_MSGC_MAIN_MIGRATE_END,
    SPICE_MSGC_MAIN_MIGRATE_DST_DO_SEAMLESS,
    SPICE_MSGC_MAIN_MIGRATE_CONNECTED_SEAMLESS,

    SPICE_MSGC_END_MAIN
};

static const value_string spice_msgc_main_vs[] =  {
    { SPICE_MSGC_MAIN_CLIENT_INFO, "Client CLIENT_INFO" },
    { SPICE_MSGC_MAIN_MIGRATE_CONNECTED, "Client MIGRATE_CONNECTED" },
    { SPICE_MSGC_MAIN_MIGRATE_CONNECT_ERROR, "Client MIGRATE_CONNECT_ERROR" },
    { SPICE_MSGC_MAIN_ATTACH_CHANNELS, "Client ATTACH_CHANNELS" },
    { SPICE_MSGC_MAIN_MOUSE_MODE_REQUEST, "Client MOUSE_MODE_REQUEST" },
    { SPICE_MSGC_MAIN_AGENT_START, "Client AGENT_START" },
    { SPICE_MSGC_MAIN_AGENT_DATA, "Client AGENT_DATA" },
    { SPICE_MSGC_MAIN_AGENT_TOKEN, "Client AGENT_TOKEN" },
    { SPICE_MSGC_MAIN_MIGRATE_END, "Client MIGRATE_END" },
    { SPICE_MSGC_MAIN_MIGRATE_DST_DO_SEAMLESS, "Client MIGRATE_DST_DO_SEAMLESS" },
    { SPICE_MSGC_MAIN_MIGRATE_CONNECTED_SEAMLESS, "Client MIGRATE_CONNECTED_SEAMLESS" },
    { 0, NULL }
};

enum {
    SPICE_MSG_DISPLAY_MODE = 101,
    SPICE_MSG_DISPLAY_MARK,
    SPICE_MSG_DISPLAY_RESET,
    SPICE_MSG_DISPLAY_COPY_BITS,
    SPICE_MSG_DISPLAY_INVAL_LIST,
    SPICE_MSG_DISPLAY_INVAL_ALL_PIXMAPS,
    SPICE_MSG_DISPLAY_INVAL_PALETTE,
    SPICE_MSG_DISPLAY_INVAL_ALL_PALETTES,
    SPICE_MSG_DISPLAY_STREAM_CREATE = 122,
    SPICE_MSG_DISPLAY_STREAM_DATA,
    SPICE_MSG_DISPLAY_STREAM_CLIP,
    SPICE_MSG_DISPLAY_STREAM_DESTROY,
    SPICE_MSG_DISPLAY_STREAM_DESTROY_ALL,
    SPICE_MSG_DISPLAY_DRAW_FILL = 302,
    SPICE_MSG_DISPLAY_DRAW_OPAQUE,
    SPICE_MSG_DISPLAY_DRAW_COPY,
    SPICE_MSG_DISPLAY_DRAW_BLEND,
    SPICE_MSG_DISPLAY_DRAW_BLACKNESS,
    SPICE_MSG_DISPLAY_DRAW_WHITENESS,
    SPICE_MSG_DISPLAY_DRAW_INVERS,
    SPICE_MSG_DISPLAY_DRAW_ROP3,
    SPICE_MSG_DISPLAY_DRAW_STROKE,
    SPICE_MSG_DISPLAY_DRAW_TEXT,
    SPICE_MSG_DISPLAY_DRAW_TRANSPARENT,
    SPICE_MSG_DISPLAY_DRAW_ALPHA_BLEND,
    SPICE_MSG_DISPLAY_SURFACE_CREATE,
    SPICE_MSG_DISPLAY_SURFACE_DESTROY,
    SPICE_MSG_DISPLAY_STREAM_DATA_SIZED,
    SPICE_MSG_DISPLAY_MONITORS_CONFIG,
    SPICE_MSG_DISPLAY_DRAW_COMPOSITE,
    SPICE_MSG_DISPLAY_STREAM_ACTIVATE_REPORT,

    SPICE_MSG_END_DISPLAY
};

static const value_string spice_msg_display_vs[] =  {
    { SPICE_MSG_DISPLAY_MODE, "Server MODE" },
    { SPICE_MSG_DISPLAY_MARK, "Server MARK" },
    { SPICE_MSG_DISPLAY_RESET, "Server RESET" },
    { SPICE_MSG_DISPLAY_COPY_BITS, "Server COPY_BITS" },
    { SPICE_MSG_DISPLAY_INVAL_LIST, "Server INVAL_LIST" },
    { SPICE_MSG_DISPLAY_INVAL_ALL_PIXMAPS, "Server INVAL_ALL_PIXMAPS" },
    { SPICE_MSG_DISPLAY_INVAL_PALETTE, "Server INVAL_PALETTE" },
    { SPICE_MSG_DISPLAY_INVAL_ALL_PALETTES, "Server INVAL_ALL_PALETTES" },
    { SPICE_MSG_DISPLAY_STREAM_CREATE, "Server STREAM_CREATE" },
    { SPICE_MSG_DISPLAY_STREAM_DATA, "Server STREAM_DATA" },
    { SPICE_MSG_DISPLAY_STREAM_CLIP, "Server STREAM_CLIP" },
    { SPICE_MSG_DISPLAY_STREAM_DESTROY, "Server STREAM_DESTROY" },
    { SPICE_MSG_DISPLAY_STREAM_DESTROY_ALL, "Server STREAM_DESTROY_ALL" },
    { SPICE_MSG_DISPLAY_DRAW_FILL, "Server DRAW_FILL" },
    { SPICE_MSG_DISPLAY_DRAW_OPAQUE, "Server DRAW_OPAQUE" },
    { SPICE_MSG_DISPLAY_DRAW_COPY, "Server DRAW_COPY" },
    { SPICE_MSG_DISPLAY_DRAW_BLEND, "Server DRAW_BLEND" },
    { SPICE_MSG_DISPLAY_DRAW_BLACKNESS, "Server DRAW_BLACKNESS" },
    { SPICE_MSG_DISPLAY_DRAW_WHITENESS, "Server DRAW_WHITENESS" },
    { SPICE_MSG_DISPLAY_DRAW_INVERS, "Server DRAW_INVERS" },
    { SPICE_MSG_DISPLAY_DRAW_ROP3, "Server DRAW_ROP3" },
    { SPICE_MSG_DISPLAY_DRAW_STROKE, "Server DRAW_STROKE" },
    { SPICE_MSG_DISPLAY_DRAW_TEXT, "Server DRAW_TEXT" },
    { SPICE_MSG_DISPLAY_DRAW_TRANSPARENT, "Server DRAW_TRANSPARENT" },
    { SPICE_MSG_DISPLAY_DRAW_ALPHA_BLEND, "Server DRAW_ALPHA_BLEND" },
    { SPICE_MSG_DISPLAY_SURFACE_CREATE, "Server SURFACE_CREATE" },
    { SPICE_MSG_DISPLAY_SURFACE_DESTROY, "Server SURFACE_DESTROY" },
    { SPICE_MSG_DISPLAY_STREAM_DATA_SIZED, "Server STREAM_DATA_SIZED" },
    { SPICE_MSG_DISPLAY_MONITORS_CONFIG, "Server MONITORS_CONFIG" },
    { SPICE_MSG_DISPLAY_DRAW_COMPOSITE, "Server DRAW_COMPOSITE" },
    { SPICE_MSG_DISPLAY_STREAM_ACTIVATE_REPORT, "Server STREAM_ACTIVATE_REPORT" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_DISPLAY_INIT = 101,
    SPICE_MSGC_DISPLAY_STREAM_REPORT,

    SPICE_MSGC_END_DISPLAY
};

static const value_string spice_msgc_display_vs[] =  {
    { SPICE_MSGC_DISPLAY_INIT, "Client INIT" },
    { SPICE_MSGC_DISPLAY_STREAM_REPORT, "Client STREAM_REPORT" },
    { 0, NULL }
};

enum {
    SPICE_MSG_INPUTS_INIT = 101,
    SPICE_MSG_INPUTS_KEY_MODIFIERS,
    SPICE_MSG_INPUTS_MOUSE_MOTION_ACK = 111,

    SPICE_MSG_END_INPUTS
};

static const value_string spice_msg_inputs_vs[] =  {
    { SPICE_MSG_INPUTS_INIT, "Server INIT" },
    { SPICE_MSG_INPUTS_KEY_MODIFIERS, "Server KEY_MODIFIERS" },
    { SPICE_MSG_INPUTS_MOUSE_MOTION_ACK, "Server MOUSE_MOTION_ACK" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_INPUTS_KEY_DOWN = 101,
    SPICE_MSGC_INPUTS_KEY_UP,
    SPICE_MSGC_INPUTS_KEY_MODIFIERS,
    SPICE_MSGC_INPUTS_KEY_SCANCODE,
    SPICE_MSGC_INPUTS_MOUSE_MOTION = 111,
    SPICE_MSGC_INPUTS_MOUSE_POSITION,
    SPICE_MSGC_INPUTS_MOUSE_PRESS,
    SPICE_MSGC_INPUTS_MOUSE_RELEASE,

    SPICE_MSGC_END_INPUTS
};

static const value_string spice_msgc_inputs_vs[] =  {
    { SPICE_MSGC_INPUTS_KEY_DOWN, "Client KEY_DOWN" },
    { SPICE_MSGC_INPUTS_KEY_UP, "Client KEY_UP" },
    { SPICE_MSGC_INPUTS_KEY_MODIFIERS, "Client KEY_MODIFIERS" },
    { SPICE_MSGC_INPUTS_KEY_SCANCODE, "Client KEY_SCANCODE" },
    { SPICE_MSGC_INPUTS_MOUSE_MOTION, "Client MOUSE_MOTION" },
    { SPICE_MSGC_INPUTS_MOUSE_POSITION, "Client MOUSE_POSITION" },
    { SPICE_MSGC_INPUTS_MOUSE_PRESS, "Client MOUSE_PRESS" },
    { SPICE_MSGC_INPUTS_MOUSE_RELEASE, "Client MOUSE_RELEASE" },
    { 0, NULL }
};

enum {
    SPICE_MSG_CURSOR_INIT = 101,
    SPICE_MSG_CURSOR_RESET,
    SPICE_MSG_CURSOR_SET,
    SPICE_MSG_CURSOR_MOVE,
    SPICE_MSG_CURSOR_HIDE,
    SPICE_MSG_CURSOR_TRAIL,
    SPICE_MSG_CURSOR_INVAL_ONE,
    SPICE_MSG_CURSOR_INVAL_ALL,

    SPICE_MSG_END_CURSOR
};

static const value_string spice_msg_cursor_vs[] =  {
    { SPICE_MSG_CURSOR_INIT, "Server INIT" },
    { SPICE_MSG_CURSOR_RESET, "Server RESET" },
    { SPICE_MSG_CURSOR_SET, "Server SET" },
    { SPICE_MSG_CURSOR_MOVE, "Server MOVE" },
    { SPICE_MSG_CURSOR_HIDE, "Server HIDE" },
    { SPICE_MSG_CURSOR_TRAIL, "Server TRAIL" },
    { SPICE_MSG_CURSOR_INVAL_ONE, "Server INVAL_ONE" },
    { SPICE_MSG_CURSOR_INVAL_ALL, "Server INVAL_ALL" },
    { 0, NULL }
};

enum {
    SPICE_MSG_PLAYBACK_DATA = 101,
    SPICE_MSG_PLAYBACK_MODE,
    SPICE_MSG_PLAYBACK_START,
    SPICE_MSG_PLAYBACK_STOP,
    SPICE_MSG_PLAYBACK_VOLUME,
    SPICE_MSG_PLAYBACK_MUTE,
    SPICE_MSG_PLAYBACK_LATENCY,

    SPICE_MSG_END_PLAYBACK
};

static const value_string spice_msg_playback_vs[] =  {
    { SPICE_MSG_PLAYBACK_DATA, "Server DATA" },
    { SPICE_MSG_PLAYBACK_MODE, "Server MODE" },
    { SPICE_MSG_PLAYBACK_START, "Server START" },
    { SPICE_MSG_PLAYBACK_STOP, "Server STOP" },
    { SPICE_MSG_PLAYBACK_VOLUME, "Server VOLUME" },
    { SPICE_MSG_PLAYBACK_MUTE, "Server MUTE" },
    { SPICE_MSG_PLAYBACK_LATENCY, "Server LATENCY" },
    { 0, NULL }
};

enum {
    SPICE_MSG_RECORD_START = 101,
    SPICE_MSG_RECORD_STOP,
    SPICE_MSG_RECORD_VOLUME,
    SPICE_MSG_RECORD_MUTE,

    SPICE_MSG_END_RECORD
};

static const value_string spice_msg_record_vs[] =  {
    { SPICE_MSG_RECORD_START, "Server START" },
    { SPICE_MSG_RECORD_STOP, "Server STOP" },
    { SPICE_MSG_RECORD_VOLUME, "Server VOLUME" },
    { SPICE_MSG_RECORD_MUTE, "Server MUTE" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_RECORD_DATA = 101,
    SPICE_MSGC_RECORD_MODE,
    SPICE_MSGC_RECORD_START_MARK,

    SPICE_MSGC_END_RECORD
};

static const value_string spice_msgc_record_vs[] =  {
    { SPICE_MSGC_RECORD_DATA, "Client DATA" },
    { SPICE_MSGC_RECORD_MODE, "Client MODE" },
    { SPICE_MSGC_RECORD_START_MARK, "Client START_MARK" },
    { 0, NULL }
};

enum {
    SPICE_MSG_TUNNEL_INIT = 101,
    SPICE_MSG_TUNNEL_SERVICE_IP_MAP,
    SPICE_MSG_TUNNEL_SOCKET_OPEN,
    SPICE_MSG_TUNNEL_SOCKET_FIN,
    SPICE_MSG_TUNNEL_SOCKET_CLOSE,
    SPICE_MSG_TUNNEL_SOCKET_DATA,
    SPICE_MSG_TUNNEL_SOCKET_CLOSED_ACK,
    SPICE_MSG_TUNNEL_SOCKET_TOKEN,

    SPICE_MSG_END_TUNNEL
};

static const value_string spice_msg_tunnel_vs[] =  {
    { SPICE_MSG_TUNNEL_INIT, "Server INIT" },
    { SPICE_MSG_TUNNEL_SERVICE_IP_MAP, "Server SERVICE_IP_MAP" },
    { SPICE_MSG_TUNNEL_SOCKET_OPEN, "Server SOCKET_OPEN" },
    { SPICE_MSG_TUNNEL_SOCKET_FIN, "Server SOCKET_FIN" },
    { SPICE_MSG_TUNNEL_SOCKET_CLOSE, "Server SOCKET_CLOSE" },
    { SPICE_MSG_TUNNEL_SOCKET_DATA, "Server SOCKET_DATA" },
    { SPICE_MSG_TUNNEL_SOCKET_CLOSED_ACK, "Server SOCKET_CLOSED_ACK" },
    { SPICE_MSG_TUNNEL_SOCKET_TOKEN, "Server SOCKET_TOKEN" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_TUNNEL_SERVICE_ADD = 101,
    SPICE_MSGC_TUNNEL_SERVICE_REMOVE,
    SPICE_MSGC_TUNNEL_SOCKET_OPEN_ACK,
    SPICE_MSGC_TUNNEL_SOCKET_OPEN_NACK,
    SPICE_MSGC_TUNNEL_SOCKET_FIN,
    SPICE_MSGC_TUNNEL_SOCKET_CLOSED,
    SPICE_MSGC_TUNNEL_SOCKET_CLOSED_ACK,
    SPICE_MSGC_TUNNEL_SOCKET_DATA,
    SPICE_MSGC_TUNNEL_SOCKET_TOKEN,

    SPICE_MSGC_END_TUNNEL
};

static const value_string spice_msgc_tunnel_vs[] =  {
    { SPICE_MSGC_TUNNEL_SERVICE_ADD, "Client SERVICE_ADD" },
    { SPICE_MSGC_TUNNEL_SERVICE_REMOVE, "Client SERVICE_REMOVE" },
    { SPICE_MSGC_TUNNEL_SOCKET_OPEN_ACK, "Client SOCKET_OPEN_ACK" },
    { SPICE_MSGC_TUNNEL_SOCKET_OPEN_NACK, "Client SOCKET_OPEN_NACK" },
    { SPICE_MSGC_TUNNEL_SOCKET_FIN, "Client SOCKET_FIN" },
    { SPICE_MSGC_TUNNEL_SOCKET_CLOSED, "Client SOCKET_CLOSED" },
    { SPICE_MSGC_TUNNEL_SOCKET_CLOSED_ACK, "Client SOCKET_CLOSED_ACK" },
    { SPICE_MSGC_TUNNEL_SOCKET_DATA, "Client SOCKET_DATA" },
    { SPICE_MSGC_TUNNEL_SOCKET_TOKEN, "Client SOCKET_TOKEN" },
    { 0, NULL }
};

enum {
    SPICE_MSG_SMARTCARD_DATA = 101,

    SPICE_MSG_END_SMARTCARD
};

static const value_string spice_msg_smartcard_vs[] =  {
    { SPICE_MSG_SMARTCARD_DATA, "Server DATA" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_SMARTCARD_DATA = 101,
    SPICE_MSGC_SMARTCARD_HEADER = 101,
    SPICE_MSGC_SMARTCARD_ERROR = 101,
    SPICE_MSGC_SMARTCARD_ATR = 101,
    SPICE_MSGC_SMARTCARD_READER_ADD = 101,

    SPICE_MSGC_END_SMARTCARD
};

static const value_string spice_msgc_smartcard_vs[] =  {
    { SPICE_MSGC_SMARTCARD_DATA, "Client DATA" },
    { SPICE_MSGC_SMARTCARD_HEADER, "Client HEADER" },
    { SPICE_MSGC_SMARTCARD_ERROR, "Client ERROR" },
    { SPICE_MSGC_SMARTCARD_ATR, "Client ATR" },
    { SPICE_MSGC_SMARTCARD_READER_ADD, "Client READER_ADD" },
    { 0, NULL }
};

enum {
    SPICE_MSG_SPICEVMC_DATA = 101,

    SPICE_MSG_END_SPICEVMC
};

static const value_string spice_msg_spicevmc_vs[] =  {
    { SPICE_MSG_SPICEVMC_DATA, "Server DATA" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_SPICEVMC_DATA = 101,

    SPICE_MSGC_END_SPICEVMC
};

static const value_string spice_msgc_spicevmc_vs[] =  {
    { SPICE_MSGC_SPICEVMC_DATA, "Client DATA" },
    { 0, NULL }
};

enum {
    SPICE_MSG_PORT_INIT = 201,
    SPICE_MSG_PORT_EVENT,

    SPICE_MSG_END_PORT
};

static const value_string spice_msg_port_vs[] =  {
    { SPICE_MSG_PORT_INIT, "Server INIT" },
    { SPICE_MSG_PORT_EVENT, "Server EVENT" },
    { 0, NULL }
};

enum {
    SPICE_MSGC_PORT_EVENT = 201,

    SPICE_MSGC_END_PORT
};

static const value_string spice_msgc_port_vs[] =  {
    { SPICE_MSGC_PORT_EVENT, "Client EVENT" },
    { 0, NULL }
};

#endif /* _H_SPICE_ENUMS */
