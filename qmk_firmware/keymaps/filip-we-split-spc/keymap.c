/*
Copyright 2020 <me@homedrop.org>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum unicode_names {
    AA,
    AA_UP,
    AE,
    AE_UP,
    OO,
    OO_UP
};

const uint32_t PROGMEM unicode_map[] = {
    [AA]    = 0x00E5,
    [AA_UP] = 0x00C5,
    [AE]    = 0x00E4,
    [AE_UP] = 0x00C4,
    [OO]    = 0x00F6,
    [OO_UP] = 0x00D6,
};

enum layers {
    _US_INTL,
    _DEFAULT,
    _UC,
    _SYM_FN,
    _NP,
    _LAYER_CTL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_US_INTL] = LAYOUT_60_ansi_split_spc(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      RALT(KC_W),   KC_RBRC,   KC_BSLS,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      RALT(KC_P), RALT(KC_Q),          KC_ENT,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,                         KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,              KC_SPC,               LT(_NP, KC_ESC),      LT(_SYM_FN, KC_SPC),  KC_RALT,   KC_RGUI,   KC_RCTL,   MO(_LAYER_CTL)
    ),

    [_DEFAULT] = LAYOUT_60_ansi_split_spc(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,
        KC_CAPS,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,              KC_ENT,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,                         KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,              KC_SPC,               LT(_NP, KC_ESC),      LT(_SYM_FN, KC_SPC),  KC_RALT,   KC_RGUI,   KC_RCTL,   MO(_LAYER_CTL)
    ),

    [_UC] = LAYOUT_60_ansi_split_spc(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   XP(AA, AA_UP), KC_TRNS, KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   XP(OO, OO_UP), XP(AE, AE_UP),    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                         KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,              KC_TRNS,              KC_TRNS,              KC_TRNS,              KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),

    [_SYM_FN] = LAYOUT_60_ansi_split_spc(
        _______,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_DEL,
        _______,   _______,   BL_DEC,    BL_INC,    BL_TOGG,   _______,   KC_NLCK,   KC_INS,    KC_SLCK,   KC_PAUS,   KC_PSCR,   KC_LBRC,   KC_RBRC,   KC_BSLS,
        _______,   RGB_MOD,   RGB_VAD,   RGB_VAI,   RGB_TOG,   _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  KC_SCLN,   KC_QUOT,              KC_ENT,
        _______,   RGB_SAD,   RGB_HUD,   RGB_HUI,   RGB_SAI,   _______,   KC_PGDN,   KC_END,    KC_HOME,   KC_PGUP,   _______,                         _______,
        _______,   _______,   _______,              KC_BSPC,              KC_TRNS,              KC_TRNS,              _______,   _______,   _______,   _______
    ),

    [_NP] = LAYOUT_60_ansi_split_spc(
        _______,   _______,   _______,   _______,   _______,   _______,   KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PCMM,   _______,   _______,   _______,   _______,
        _______,   _______,   KC_WH_U,   KC_WH_D,   KC_BTN2,   _______,   KC_P7,     KC_P8,     KC_P9,     KC_PMNS,   _______,   _______,   _______,   _______,
        _______,   KC_MS_L,   KC_MS_U,   KC_MS_D,   KC_MS_R,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PPLS,   _______,   _______,              _______,
        _______,   KC_MFFD,   KC_VOLU,   KC_VOLD,   KC_MPLY,   _______,   KC_P1,     KC_P2,     KC_P3,     KC_P0,     _______,                         _______,
        _______,   _______,   _______,              KC_BTN1,              KC_TRNS,              KC_TRNS,              _______,   _______,   _______,   _______
    ),

    [_LAYER_CTL] = LAYOUT_60_ansi_split_spc(
        RESET,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   UC_M_WI,   UC_M_WC,   UC_M_LN,   UC_M_MA,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   DF(_US_INTL), DF(_DEFAULT), DF(_UC), _______, _______, _______,   _______,   _______,   _______,   _______,   _______,              _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,                         _______,
        _______,   _______,   _______,              KC_TRNS,              KC_TRNS,              KC_TRNS,              _______,   _______,   _______,   _______
    )
};
