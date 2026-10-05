// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum my_layers {
    _LAYER0 = 0,
    _LAYER1,
    _LAYER2,
    _LAYER3,
    _LAYER4,
    _LAYER5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │TAB│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ - │BSP│ 
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───│
     * │ CTL │ A │ S │ D │ F │ G │ H │ J │ K │ L │ , │ENTER│
     * ├─────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─────│
     * │ SHIFT │ Z │ X │ C │ V │ B │ N │ M │ / │U P│   .   │
     * ├─────┬─┴──┬┴───┼───┼───┴─┬─┴───┼───┼───┴┬──┴─┬─────│
     * │ ESC │LGUI│LALT│MO1│SPACE│SHIFT│MO3│LEFT│DOWN│RIGHT│
     * └─────┴────┴────┴───┴─────┴─────┴───┴────┴────┴─────┘
     */
    [_LAYER0] = LAYOUT(
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_MINS, KC_BSPC, 
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_COMM, KC_ENT, 
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M,    KC_SLSH, KC_UP,  KC_DOT, 
        KC_ESC,  KC_LGUI, KC_LALT, MO(1),  KC_SPC,  KC_RSFT, MO(3),   KC_LEFT, KC_DOWN, KC_RGHT
    ),
        [_LAYER1] = LAYOUT(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
        KC_NO, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,   KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO
    ),
        [_LAYER2] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
        [_LAYER3] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, MS_UP, MS_WHLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_NO, MS_BTN1, MS_BTN2, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, MS_WHLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
        [_LAYER4] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
            [_LAYER5] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
};

uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {   0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12 },
    {  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24, NO_LED },
    {  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35, NO_LED, NO_LED },
    {  36,  37,  38,  39,  40,  41,  42,  43,  44,  45, NO_LED, NO_LED, NO_LED }
}, {
    {  0,  0}, { 17,  0}, { 35,  0}, { 52,  0}, { 69,  0}, { 87,  0}, {104,  0}, {121,  0}, {138,  0}, {156,  0}, {173,  0}, {190,  0}, {208,  0},
    {  6, 21}, { 26, 21}, { 43, 21}, { 61, 21}, { 78, 21}, { 95, 21}, {113, 21}, {130, 21}, {147, 21}, {165, 21}, {182, 21}, {202, 21},
    {  9, 43}, { 35, 43}, { 52, 43}, { 69, 43}, { 87, 43}, {104, 43}, {121, 43}, {138, 43}, {156, 43}, {173, 43}, {199, 43},
    {  6, 64}, { 30, 64}, { 52, 64}, { 71, 64}, { 93, 64}, {119, 64}, {141, 64}, {161, 64}, {183, 64}, {208, 64}
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };
#endif

