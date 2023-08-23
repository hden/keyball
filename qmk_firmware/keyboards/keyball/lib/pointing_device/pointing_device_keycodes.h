// Backport https://github.com/qmk/qmk_firmware/blob/master/quantum/quantum_keycodes.h

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE

#define QK_TO_GET_LAYER(kc) ((kc)&0x1F)
#define QK_MOMENTARY_GET_LAYER(kc) ((kc)&0x1F)
#define QK_TOGGLE_LAYER_GET_LAYER(kc) ((kc)&0x1F)
#define QK_LAYER_MOD_GET_LAYER(kc) (((kc) >> 5) & 0xF)
#define QK_LAYER_TAP_TOGGLE_GET_LAYER(kc) ((kc)&0x1F)
#define QK_LAYER_TAP_GET_LAYER(kc) (((kc) >> 8) & 0xF)
#endif // POINTING_DEVICE_AUTO_MOUSE_ENABLE
