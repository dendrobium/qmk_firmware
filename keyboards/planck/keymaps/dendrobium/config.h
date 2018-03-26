#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(ZELDA_PUZZLE)
#endif

#define MUSIC_MASK (keycode != KC_NO)

#define PERMISSIVE_HOLD

#define MOUSEKEY_WHEEL_MAX_SPEED 3

#endif