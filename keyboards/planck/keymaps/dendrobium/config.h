#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(NO_SOUND)
	#define MUSIC_MASK (keycode != KC_NO)
#endif

#define PREVENT_STUCK_MODIFIERS

#endif