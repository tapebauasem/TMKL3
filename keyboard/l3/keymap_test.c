#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* layer 0: qwerty */
  KEYMAP_TKL87(\
      ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,         PSCR,SLCK,PAUS,
      GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, NO,  BSPC,   INS, HOME,PGUP,
      TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,        DEL, END, PGDN,
      LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,  ENT,
      LSFT,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,                  UP,
      CAPS,NO,  LALT,               SPC,                LALT,NO,  RCTL,             LEFT,DOWN,RGHT),
  /* layer 1: space fn */
  KEYMAP_TKL87(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                  TRNS,
      TRNS,NO,  TRNS,               TRNS,               TRNS,NO,  TRNS,             TRNS,TRNS,TRNS),
  /* layer 2: gaming */
  KEYMAP_TKL87(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                  TRNS,
      TRNS,NO,  TRNS,               TRNS,               TRNS,NO,  TRNS,             TRNS,TRNS,TRNS),
  /* layer 3: first function layer */
  KEYMAP_TKL87(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                  TRNS,
      TRNS,NO,  TRNS,               TRNS,               TRNS,NO,  TRNS,             TRNS,TRNS,TRNS),
  /* layer 4: second function layer */
  KEYMAP_TKL87(\
      TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,   TRNS,TRNS,TRNS,
      TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,
      FN3, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO,  TRNS,
      TRNS,NO,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                  TRNS,
      TRNS,NO,  TRNS,               TRNS,               TRNS,NO,  TRNS,             TRNS,TRNS,TRNS),
};

enum LayerId {
  LAYER_QWERTY,
  LAYER_SPACEFN,
  LAYER_GAMING,
  LAYER_FUNCTIONS_FIRST,
  LAYER_FUNCTIONS_SECOND
};

const action_t fn_actions[] PROGMEM = {
  [0] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_FIRST, KC_CAPS),
  [1] = ACTION_LAYER_MODS(LAYER_FUNCTIONS_SECOND, MOD_RALT),
  [2] = ACTION_MODS_KEY(MOD_RSFT, KC_GRV),
  [3] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_FIRST, KC_ESC),
  [4] = ACTION_LAYER_TAP_KEY(LAYER_FUNCTIONS_SECOND, KC_SPACE),
  [5] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_SWITCH),
  [6] = ACTION_DEFAULT_LAYER_SET(LAYER_QWERTY),
  [7] = ACTION_DEFAULT_LAYER_SET(LAYER_SPACEFN),
  [8] = ACTION_LAYER_TOGGLE(LAYER_GAMING),
  [9] = ACTION_MODS_KEY(MOD_LSFT, KC_INS)
};