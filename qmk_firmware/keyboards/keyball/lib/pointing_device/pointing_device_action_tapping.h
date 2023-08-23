// Backport https://github.com/qmk/qmk_firmware/blob/master/quantum/action_tapping.h#L53-L59
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE

#if defined(TAPPING_TERM_PER_KEY) && !defined(NO_ACTION_TAPPING)
#    define GET_TAPPING_TERM(keycode, record) get_tapping_term(keycode, record)
#elif defined(DYNAMIC_TAPPING_TERM_ENABLE) && !defined(NO_ACTION_TAPPING)
#    define GET_TAPPING_TERM(keycode, record) g_tapping_term
#else
#    define GET_TAPPING_TERM(keycode, record) (TAPPING_TERM)
#endif

#endif // POINTING_DEVICE_AUTO_MOUSE_ENABLE
