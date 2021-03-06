#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT,
    _US_INTL,
    _FN,
    _NUMPAD,
    _CTL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_60_ansi(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
        LT(_NUMPAD, KC_TAB), KC_Q, KC_W, KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,                         KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,                                    LT(_FN, KC_SPC),                            KC_RALT,   KC_RGUI,   KC_RCTL,   MO(_CTL)
    ),
    [_US_INTL] = LAYOUT_60_ansi(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
        LT(_NUMPAD, KC_TAB), KC_Q, KC_W, KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      RALT(KC_W), KC_RBRC,  KC_BSLS,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      RALT(KC_P), RALT(KC_Q),          KC_ENT,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,                         KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,                                    LT(_FN, KC_SPC),                            KC_RALT,   KC_RGUI,   KC_RCTL,   MO(_CTL)
    ),
    [_FN] = LAYOUT_60_ansi(
        KC_ESC,    KC_F1,  KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_DEL,
        _______,   KC_NLCK,   KC_INS,    KC_SLCK,   KC_PAUS,   _______,   _______,   KC_BTN1,   KC_BTN2,   _______,   KC_PSCR,   _______,   _______,   _______,
        _______,   KC_MS_L,   KC_MS_U,   KC_MS_D,   KC_MS_R,   KC_ESC,    KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  KC_SCLN,   _______,              _______,
        _______,   KC_MFFD,   KC_VOLU,   KC_VOLD,   KC_MPLY,   KC_BSPC,   KC_PGDN,   KC_END,    KC_HOME,   KC_PGUP,   _______,                         _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______
    ),
    [_NUMPAD] = LAYOUT_60_ansi(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   KC_PMNS,   KC_P7,     KC_P8,     KC_P9,     KC_PEQL,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   KC_PPLS,   KC_P4,     KC_P5,     KC_P6,     KC_PDOT,   KC_PMNS,   _______,              _______,
        _______,   _______,   _______,   _______,   _______,   KC_PAST,   KC_P1,     KC_P2,     KC_P3,     KC_P0,     KC_PSLS,                         _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______
    ),
    [_CTL] = LAYOUT_60_ansi(
        RESET,     DF(_US_INTL), DF(_DEFAULT),   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   BL_DEC,    BL_INC,    BL_TOGG,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   RGB_MOD,   RGB_VAD,   RGB_VAI,   RGB_TOG,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,   RGB_SAD,   RGB_HUD,   RGB_HUI,   RGB_SAI,   _______,   _______,   _______,   _______,   _______,   _______,                         _______,
        _______,   _______,   _______,                                    _______,                                    _______,   _______,   _______,   _______
    ),

};
