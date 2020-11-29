#pragma once

#define DAC_SAMPLE_MAX 1023U

// Slow down tempo while waiting on a beter fix, see e.g. https://github.com/qmk/qmk_firmware/issues/8825
#undef TEMPO_DEFAULT
#define TEMPO_DEFAULT 255

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ZELDA_CHEST)
#endif

#define MUSIC_MASK (keycode != KC_NO)

#define MIDI_BASIC

#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERVAL 50
#define MOUSEKEY_MAX_SPEED 8
#define MOUSEKEY_TIME_TO_MAX 20
