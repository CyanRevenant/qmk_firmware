#include QMK_KEYBOARD_H

enum layer_names {
    _NP,
    _NL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NP] = LAYOUT_ortho_6x4(
        KC_BSPC, KC_COPY, KC_PASTE,  KC_NUM,
        TG(_NL), KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_DOT,  KC_PDOT, KC_PENT
    ),

    [_NL] = LAYOUT_ortho_6x4(
        KC_DEL, KC_MPLY, KC_VOLD, KC_VOLU,
        _______, KC_BSLS, _______, BL_DOWN,
        KC_HOME, KC_UP,   KC_PGUP, BL_UP, 
        KC_LEFT, BL_TOGG, KC_RIGHT, BL_UP, 
        KC_END, KC_DOWN,  KC_PGDN, BL_BRTG,
        KC_INS, _______, KC_DEL, BL_BRTG
    )
};
