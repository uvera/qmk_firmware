/*
Copyright 2021 Adam Honse

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _BASE,
    _FN,
    _FN2,
    _FN3,
};

// enum custom_keycodes {
//     THICK_ARR = SAFE_RANGE,
//     SLIM_ARR,
//     NLOP,
//     DBANG,
//     KTELV,
//     JSELV,
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*  Row:        0                1           2           3         4           5        6        7           8           9           10          11          12          13       */
    [_BASE] = { { KC_GRV,            KC_1,       KC_2,       KC_3,     KC_4,       KC_5,    KC_6,    KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC, },
                { KC_TAB,            KC_Q,       KC_W,       KC_E,     KC_R,       KC_T,    KC_Y,    KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS, },
                { LT(_FN,KC_ESCAPE), KC_A,       KC_S,       KC_D,     KC_F,       KC_G,    KC_H,    KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_NO,      KC_ENT,  },
                { KC_LSFT,           KC_NO,      KC_Z,       KC_X,     KC_C,       KC_V,    KC_B,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_NO,      LT(_FN3, KC_DEL), },
                { KC_LCPO,           KC_LGUI,    KC_LALT,    KC_NO,    KC_NO,      KC_NO,   KC_SPC,  KC_NO,      KC_NO,      KC_RALT,  MO(_FN),    KC_NO,      MO(_FN2),   KC_RCPC, },
              },
    [_FN]   = { { KC_GRV,            KC_F1,      KC_F2,      KC_F3,    KC_F4,      KC_F5,   KC_F6,   KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______, },
                { _______,           _______,    KC_UP,      _______,  _______,    _______, _______, _______,    _______,    _______,    KC_PSCR,    KC_HOME,    KC_END,     _______, },
                { _______,           KC_LEFT,    KC_DOWN,    KC_RIGHT, _______,    _______, _______, _______,    _______,    _______,    KC_PGUP,    KC_PGDN,    _______,    _______, },
                { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,    KC_INS,     KC_DEL,     _______,    KC_LOCK, },
                { _______,           _______,    _______,    _______,  _______,    _______, KC_CAPS, _______,    _______,    _______,    _______,    _______,    _______,    RESET,   },
             },

    [_FN2]  = { { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    RGB_MOD,    RGB_VAD,    RGB_TOG,    RGB_VAI,     _______,},
                { _______,           RGB_M_P,    RGB_M_B,    RGB_M_R,  RGB_M_SW,   _______, _______, _______,    _______,    _______,    _______,    RGB_HUD,    RGB_HUI,     _______,},
                { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,    RGB_SAD,    RGB_SAI,    _______,     _______,},
                { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,    RGB_SPD,    RGB_SPI,    _______,     _______,},
                { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,     KC_APP, },
             },
    [_FN3]  = { { _______,           _______,    _______,    _______,  _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,     _______,},
                { _______,           _______,    KC_MS_UP,    _______,  _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,     _______,},
                { _______,           KC_MS_LEFT,    KC_MS_DOWN,    KC_MS_RIGHT,  _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,     _______,},
                { KC_MS_ACCEL2,           _______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, _______, _______,    _______,    KC_MS_BTN1,    KC_MS_BTN3,    KC_MS_BTN2,    _______,     _______,},
                { KC_MS_ACCEL0,           _______,    KC_MS_ACCEL1,    _______,  _______,    _______, _______, _______,    _______,    _______,    _______,    _______,    _______,     _______,},
             }
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_FN,KC_ESCAPE):
        case LT(_FN3, KC_DEL):
            return 250; 
        default:
            return TAPPING_TERM;
    }
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case JSELV:
//             if (record->event.pressed) {
//                 SEND_STRING("??");
//             }
//             return false;
//         case KTELV:
//             if (record->event.pressed) {
//                 SEND_STRING("?:");
//             }
//             return false;
//         case THICK_ARR:
//             if (record->event.pressed) {
//                 SEND_STRING("=>");
//             }
//             return false;
//         case SLIM_ARR:
//             if (record->event.pressed) {
//                 SEND_STRING("->");
//             }
//             return false;
//         case NLOP:
//             if (record->event.pressed) {
//                 SEND_STRING("?.");
//             }
//             return false;
//         case DBANG:
//             if (record->event.pressed) {
//                 SEND_STRING("!!");
//             }
//             return false;
//     }
//     return true;
// }
