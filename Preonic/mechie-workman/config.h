#pragma once

#define DAC_SAMPLE_MAX 1023U

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(ZELDA_CHEST)
#endif

#define MUSIC_MASK (keycode != KC_NO)

#define MIDI_BASIC
