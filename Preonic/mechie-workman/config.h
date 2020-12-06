#pragma once

// Loudness, must be ((2^N)-1)U, default (and maximum) is N=16 for uint16_t
#define DAC_SAMPLE_MAX 1023U

// Slow down tempo while waiting on a beter fix, see e.g. https://github.com/qmk/qmk_firmware/issues/8825
#undef TEMPO_DEFAULT
#define TEMPO_DEFAULT 255

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ZELDA_CHEST)
#endif

#define MIDI_BASIC

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_WHEEL_DELAY 0
