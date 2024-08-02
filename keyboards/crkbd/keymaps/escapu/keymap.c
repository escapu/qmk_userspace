/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------------------.                    ,------------------------------------------------------------------------.
       KC_ESC,        KC_Q,        KC_W,        KC_E,        KC_R,    KC_T,                         KC_Y,        KC_U,       KC_I,        KC_O,           KC_P, KC_BSPC,
  //|--------+------------+------------+------------+------------+--------|                    |--------+------------+-----------+------------+---------------+---------|
       KC_TAB, SFT_T(KC_A), CTL_T(KC_S), GUI_T(KC_D), ALT_T(KC_F),    KC_G,                         KC_H, SFT_T(KC_J), CTL_T(KC_K), GUI_T(KC_L), ALT_T(KC_SCLN),  KC_QUOT,
  //|--------+------------+------------+------------+------------+--------|                    |--------+------------+-----------+------------+---------------+---------|
       KC_SPC,        KC_Z,        KC_X,        KC_C,        KC_V,    KC_B,                         KC_N,        KC_M,    KC_COMM,      KC_DOT,        KC_SLSH,    MO(4),
  //|--------+------------+------------+------------+------------+--------+--------|  |--------+--------+------------+-----------+------------+---------------+---------|
                                                          KC_LSFT,   MO(1),  KC_DEL,     KC_ENT,   MO(2), KC_SPACE
                                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,------------------------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,       KC_7,     KC_8,       KC_9,        KC_0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |----------+-----------+---------+-----------+------------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_PGUP,    KC_LEFT,    KC_UP,    KC_DOWN,    KC_RIGHT,  KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |----------+-----------+---------+-----------+------------+--------|
      XXXXXXX, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX,                     KC_MS_BTN1, KC_MS_LEFT, KC_MS_UP, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN2,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+----------+-----------+---------+-----------+------------+--------|
                                          KC_LSFT, _______, KC_DEL,     KC_ENT,   MO(3), KC_SPACE
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD,  KC_GRV,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_NUBS,  KC_NUHS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, KC_BSLS,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT,   MO(3), KC_BSPC,     KC_ENT, _______, KC_SPACE
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT, _______, KC_BSPC,     KC_ENT, _______, KC_SPACE
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT, _______,  KC_DEL,     KC_ENT, _______, KC_SPACE
                                      //`--------------------------'  `--------------------------'
  )
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, KC_BSPC);
const key_override_t backspace_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	&backspace_key_override,
	NULL // Null terminate the array of overrides!
};
