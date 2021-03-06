#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _WORKMAN,
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
  _MISC,
  _GRAVE,
  _ACUTE,
  _DIAERESIS,
};

enum custom_keycodes {
  C_MISC_GR = SAFE_RANGE,
  C_MISC_LCK,
  C_CTR,
  C_LPL,
  C_GRA,
  C_GRE,
  C_GRI,
  C_GRO,
  C_GRU,
  C_ACA,
  C_ACE,
  C_ACI,
  C_ACO,
  C_ACU,
  C_DIA,
  C_DIE,
  C_DII,
  C_DIO,
  C_DIU,
  ALT_FIRST = C_CTR,
  ALT_LAST = C_DIU,
};

#define WORKMAN DF(_WORKMAN)
#define QWERTY DF(_QWERTY)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define GRAV_BS LT(_GRAVE, KC_BSLS)
#define ACUT_QT LT(_ACUTE, KC_QUOT)
#define UMLAUT MO(_DIAERESIS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Workman
 * ,-----------------------------------------------------------------------------------.
 * |   =  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | GUI  |   Q  |   D  |   R  |   W  |   B  |   J  |   F  |   U  |   P  |   ;  |Grav~\|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   H  |   T  |   G  |   Y  |   N  |   E  |   O  |   I  |Acut~'|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   M  |   C  |   V  |   K  |   L  |   ,  |   .  |   /  |Misc~`|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |LCtrl | LAlt | Esc  | Del  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_WORKMAN] = LAYOUT_preonic_1x2uC(
  KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_LGUI, KC_Q,    KC_D,    KC_R,    KC_W,    KC_B,    KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, GRAV_BS,
  KC_TAB,  KC_A,    KC_S,    KC_H,    KC_T,    KC_G,    KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    ACUT_QT,
  KC_LSFT, KC_Z,    KC_X,    KC_M,    KC_C,    KC_V,    KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, C_MISC_GR,
  KC_LCTL, KC_LALT, KC_ESC,  KC_DEL,  LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   =  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | GUI  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   \  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Misc~`|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |LCtrl | LAlt | Esc  | Del  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_1x2uC(
  KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_LGUI, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, C_MISC_GR,
  KC_LCTL, KC_LALT, KC_ESC,  KC_DEL,  LOWER,       KC_SPC,       RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   +  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |   _  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   +  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |   _  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |\/\/\/|\/\/\/|   {  |   }  | Caps |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |WhlDwn| WhlUp|  End | Home | Calc |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | [==] |  Backspace  |Adjust| Mute | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_1x2uC(
  KC_PLUS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
  KC_PLUS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_CAPS,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_WH_D, KC_WH_U, KC_END,  KC_HOME, KC_CALC,
  _______, _______, _______, _______, _______,      KC_BSPC,     ADJUST,  KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   =  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   =  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |\/\/\/|\/\/\/|   [  |   ]  | Caps |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |WhlDwn| WhlUp| PgDwn| PgUp | Calc |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Adjust|    Enter    | [==] | Mute | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_1x2uC(
  KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_BSLS,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11, KC_F12, KC_WH_D, KC_WH_U, KC_PGDN, KC_PGUP, KC_CALC,
  _______, _______, _______, _______, ADJUST,     KC_ENT,     _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|MidiOn|MidOff|\/\/\/|\/\/\/|Workmn|Qwerty|RGBBrD|RGBBrU|RGBPla|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |TgNKRO|MusMod| AudOn|AudOff|\/\/\/|\/\/\/|\/\/\/|\/\/\/|Sat Dw|Sat Up|RGBMod|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+| MusOn|MusOff|\/\/\/|\/\/\/|EfSpDw|EfSpUp|Hue Dw|Hue Up| TgRGB|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | [==] |             | [==] |\/\/\/| Prev | Next | Menu |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_1x2uC(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, RESET,   DEBUG,   MI_ON,   MI_OFF,  XXXXXXX, XXXXXXX, WORKMAN, QWERTY,  RGB_VAD, RGB_VAI, RGB_M_P,
  _______, NK_TOGG, MU_MOD,  AU_ON,   AU_OFF,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAD, RGB_SAI, RGB_MOD,
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  XXXXXXX, XXXXXXX, RGB_SPD, RGB_SPI, RGB_HUD, RGB_HUI, RGB_TOG,
  _______, _______, _______, _______, _______,      _______,     _______, XXXXXXX, KC_MPRV, KC_MNXT, KC_APP
),

/* Misc
 * ,-----------------------------------------------------------------------------------.
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/| N_Lck|  N_/ |  N_* |  N_- | Mse_R|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |WhlDwn| Mic_W| WhlUp|\/\/\/|\/\/\/|\/\/\/|  N_7 |  N_8 |  N_9 |  N_+ | Mse_C|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Mse_A| Mse_S| Mse_D|\/\/\/|\/\/\/|\/\/\/|  N_4 |  N_5 |  N_6 |  N_+ | Mse_L|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |\/\/\/|\/\/\/|  N_1 |  N_2 |  N_3 | N_Ent| [==] |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |  N_0 |  N_. | N_Ent|MiscLk|
 * `-----------------------------------------------------------------------------------'
 */
[_MISC] = LAYOUT_preonic_1x2uC(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_BTN2,
  _______, KC_WH_D, KC_MS_U, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_BTN3,
  _______, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_BTN1,
  _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
  _______, _______, _______, _______, _______,      _______,     _______, KC_P0,   KC_PDOT, KC_PENT, C_MISC_LCK
),

/* Grave (`) via Win Alt Codes
 * ,-----------------------------------------------------------------------------------.
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   Ù  |\/\/\/|\/\/\/| [==] |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|   À  |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   È  |   Ò  |   Ì  |Umlaut|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |\/\/\/|\/\/\/|\/\/\/|   Ç  |\/\/\/|\/\/\/|  L·L |\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/\/\/\/\|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * `-----------------------------------------------------------------------------------'
 */
[_GRAVE] = LAYOUT_preonic_1x2uC(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_GRU,   XXXXXXX, XXXXXXX, _______,
  XXXXXXX, C_GRA,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_GRE,   C_GRO,   C_GRI,   UMLAUT,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, C_CTR,   XXXXXXX, XXXXXXX, C_LPL,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* Acute (´) via Win Alt Codes
 * ,-----------------------------------------------------------------------------------.
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   Ú  |\/\/\/|\/\/\/|Umlaut|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|   Á  |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   É  |   Ó  |   Í  | [==] |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |\/\/\/|\/\/\/|\/\/\/|   Ç  |\/\/\/|\/\/\/|  L·L |\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/\/\/\/\|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * `-----------------------------------------------------------------------------------'
 */
[_ACUTE] = LAYOUT_preonic_1x2uC(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_ACU,   XXXXXXX, XXXXXXX, UMLAUT,
  XXXXXXX, C_ACA,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_ACE,   C_ACO,   C_ACI,   _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, C_CTR,   XXXXXXX, XXXXXXX, C_LPL,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* Diaeresis (¨) via Win Alt Codes
 * ,-----------------------------------------------------------------------------------.
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   Ü  |\/\/\/|\/\/\/| [==] |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|   Ä  |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|   Ë  |   Ö  |   Ï  | [==] |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |\/\/\/|\/\/\/|\/\/\/|   Ç  |\/\/\/|\/\/\/|  L·L |\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/\/\/\/\|\/\/\/|\/\/\/|\/\/\/|\/\/\/|\/\/\/|
 * `-----------------------------------------------------------------------------------'
 */
[_DIAERESIS] = LAYOUT_preonic_1x2uC(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_DIU,   XXXXXXX, XXXXXXX, _______,
  XXXXXXX, C_DIA,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, C_DIE,   C_DIO,   C_DII,   _______,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, C_CTR,   XXXXXXX, XXXXXXX, C_LPL,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

};

#define ALT_0XYZ_CODE(x, y, z) SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_ ## x) SS_TAP(X_KP_ ## y) SS_TAP(X_KP_ ## z))

char *alt_codes[][2] = {
  {
    ALT_0XYZ_CODE(2, 3, 1), // ç
    ALT_0XYZ_CODE(1, 9, 9), // Ç
  },
  {
    SS_TAP(X_L)ALT_0XYZ_CODE(1, 8, 3)SS_TAP(X_L), // l·l
    SS_LSFT(SS_TAP(X_L))ALT_0XYZ_CODE(1, 8, 3)SS_LSFT(SS_TAP(X_L)), // L·L
  },
  {
    ALT_0XYZ_CODE(2, 2, 4), // à
    ALT_0XYZ_CODE(1, 9, 2), // À
  },
  {
    ALT_0XYZ_CODE(2, 3, 2), // è
    ALT_0XYZ_CODE(2, 0, 0), // È
  },
  {
    ALT_0XYZ_CODE(2, 3, 6), // ì
    ALT_0XYZ_CODE(2, 0, 4), // Ì
  },
  {
    ALT_0XYZ_CODE(2, 4, 2), // ò
    ALT_0XYZ_CODE(2, 1, 0), // Ò
  },
  {
    ALT_0XYZ_CODE(2, 4, 9), // ù
    ALT_0XYZ_CODE(2, 1, 7), // Ù
  },
  {
    ALT_0XYZ_CODE(2, 2, 5), // á
    ALT_0XYZ_CODE(1, 9, 3), // Á
  },
  {
    ALT_0XYZ_CODE(2, 3, 3), // é
    ALT_0XYZ_CODE(2, 0, 1), // É
  },
  {
    ALT_0XYZ_CODE(2, 3, 7), // í
    ALT_0XYZ_CODE(2, 0, 5), // Í
  },
  {
    ALT_0XYZ_CODE(2, 4, 3), // ó
    ALT_0XYZ_CODE(2, 1, 1), // Ó
  },
  {
    ALT_0XYZ_CODE(2, 5, 0), // ú
    ALT_0XYZ_CODE(2, 1, 8), // Ú
  },
  {
    ALT_0XYZ_CODE(2, 2, 8), // ä
    ALT_0XYZ_CODE(1, 9, 6), // Ä
  },
  {
    ALT_0XYZ_CODE(2, 3, 5), // ë
    ALT_0XYZ_CODE(2, 0, 3), // Ë
  },
  {
    ALT_0XYZ_CODE(2, 3, 9), // ï
    ALT_0XYZ_CODE(2, 0, 7), // Ï
  },
  {
    ALT_0XYZ_CODE(2, 4, 6), // ö
    ALT_0XYZ_CODE(2, 1, 4), // Ö
  },
  {
    ALT_0XYZ_CODE(2, 5, 2), // ü
    ALT_0XYZ_CODE(2, 2, 0), // Ü
  },
};

#define MISC_GR_TIMER_THRESHOLD 250U
static uint16_t misc_gr_timer_latch;
static uint16_t misc_gr_timer_repeat = MISC_GR_TIMER_THRESHOLD + 1U;
bool misc_gr_is_locked = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case C_MISC_GR: {
      if (record->event.pressed) {
        if (timer_elapsed(misc_gr_timer_repeat) < MISC_GR_TIMER_THRESHOLD) {
          register_code(KC_GRAVE);
        } else {
          layer_on(_MISC);
          if (!misc_gr_is_locked) {
            misc_gr_timer_latch = timer_read();
          }
        }
      } else {
        if (!misc_gr_is_locked) {
          layer_off(_MISC);
          if (timer_elapsed(misc_gr_timer_latch) < MISC_GR_TIMER_THRESHOLD) {
            register_code(KC_GRAVE);
          }
        }
        unregister_code(KC_GRAVE);
        misc_gr_timer_repeat = timer_read();
      }
      return false;
    }
    case C_MISC_LCK: {
      if (record->event.pressed) {
        misc_gr_is_locked = !misc_gr_is_locked;
        if (!misc_gr_is_locked) {
          layer_off(_MISC);
        }
      }
      return false;
    }
    case ALT_FIRST ... ALT_LAST: {
      if (!record->event.pressed) {
        return false;
      }
      bool caps = IS_HOST_LED_ON(USB_LED_CAPS_LOCK) ? true : false;
      uint8_t shift = get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT));

      if (caps) {
        send_string(SS_TAP(X_CAPSLOCK));
      }
      unregister_code(KC_LSFT);
      unregister_code(KC_RSFT);

      uint16_t index = keycode - ALT_FIRST;
      send_string(alt_codes[index][caps || shift]);

      if (caps) {
        send_string(SS_TAP(X_CAPSLOCK));
      }
      if (shift & MOD_BIT(KC_LSFT)) {
        register_code(KC_LSFT);
      }
      if (shift & MOD_BIT(KC_RSFT)) {
        register_code(KC_RSFT);
      }
      return false;
    }
  }
  return true;
}

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}
