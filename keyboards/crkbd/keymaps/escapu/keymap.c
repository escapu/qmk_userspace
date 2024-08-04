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
#include "bongocat.h"
#include "bongocat.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------------------------.                    ,-------------------------------------------------------------------------.
       KC_ESC,        KC_Q,        KC_W,        KC_E,        KC_R,          KC_T,                         KC_Y,        KC_U,        KC_I,        KC_O,           KC_P,  KC_BSPC,
  //|--------+------------+------------+------------+------------+--------------|                    |--------+------------+------------+------------+---------------+---------|
       KC_TAB, SFT_T(KC_A), CTL_T(KC_S), GUI_T(KC_D), ALT_T(KC_F),          KC_G,                         KC_H, SFT_T(KC_J), CTL_T(KC_K), GUI_T(KC_L), ALT_T(KC_SCLN),  KC_QUOT,
  //|--------+------------+------------+------------+------------+--------------|                    |--------+------------+------------+------------+---------------+---------|
        MO(5),        KC_Z,        KC_X,        KC_C,        KC_V,          KC_B,                         KC_N,        KC_M,     KC_COMM,      KC_DOT,        KC_SLSH,    MO(4 ),
  //|--------+------------+------------+------------+------------+--------------+--------|  |--------+--------+------------+------------+------------+---------------+---------|
                                                            MO(1), SFT_T(KC_SPC),  KC_DEL,     KC_ENT, KC_SPACE,   MO(2)
                                                      //`--------------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------------------.                    ,------------------------------------------------------------------.
      XXXXXXX,       KC_1,       KC_2,       KC_3,       KC_4,    KC_5,                           KC_6,       KC_7,     KC_8,       KC_9,        KC_0,  KC_DEL,
  //|--------+-----------+-----------+-----------+-----------+--------|                    |----------+-----------+---------+-----------+------------+--------|
      XXXXXXX, A(KC_LEFT), C(KC_LEFT), C(KC_RGHT), A(KC_RGHT), KC_WH_U,                        KC_PGUP,    KC_LEFT,    KC_UP,    KC_DOWN,    KC_RIGHT,  KC_PGDN,
  //|--------+-----------+-----------+-----------+-----------+--------|                    |----------+-----------+---------+-----------+------------+--------|
       KC_ENT,    KC_UNDO,     KC_CUT,    KC_COPY,   KC_PASTE, KC_WH_D,                     KC_MS_BTN1, KC_MS_LEFT, KC_MS_UP, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN2,
  //|--------+-----------+-----------+-----------+-----------+--------+--------|  |--------+----------+-----------+---------+-----------+------------+--------|
                                                      _______,  KC_LSFT, KC_DEL,     KC_ENT, KC_SPACE,   MO(3)
                                                  //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TILD,  KC_GRV,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_NUBS,  KC_NUHS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_ENT, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, KC_BSLS,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            MO(3), KC_LSFT, KC_BSPC,     KC_ENT, KC_SPACE, _______
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
                                          _______, KC_LSFT, KC_BSPC,     KC_ENT, KC_SPACE, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,                      KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, KC_LSFT,  KC_DEL,     KC_ENT, KC_SPACE, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX,                      KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, KC_LSFT,  KC_DEL,     KC_ENT, KC_SPACE, _______
                                      //`--------------------------'  `--------------------------'
  )
};

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, KC_BSPC); // shift + del = backspace
const key_override_t backspace_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL); // shift + backspace = del
const key_override_t space_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPC, KC_ENT); // shift + space = enter

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	&backspace_key_override,
	&space_key_override,
	NULL // Null terminate the array of overrides!
};

//
//layer_state_t layer_state_set_user(layer_state_t state) {
//    switch (get_highest_layer(state)) {
//    case 0:
//        rgblight_sethsv_noeeprom (HSV_WHITE);
//        break;
//    case 1:
//        rgblight_sethsv_noeeprom (HSV_RED);
//        break;
//    case 2:
//        rgblight_sethsv_noeeprom (HSV_GREEN);
//        break;
//    case 3:
//        rgblight_sethsv_noeeprom (HSV_BLUE);
//        break;
//    case 4 :
//        rgblight_sethsv_noeeprom (HSV_YELLOW);
//        break;
//    case 5 :
//        rgblight_sethsv_noeeprom (HSV_YELLOW);
//        break;
//    default: //  for any other layers, or the default layer
//        rgblight_sethsv_noeeprom (HSV_PURPLE);
//        break;
//    }
//  return state;
//}


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
//        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    } else {
        return OLED_ROTATION_180;
    }
    return rotation;
}


static void render_status(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("0\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("1\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("2\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("3\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("4\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("5\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("?"), false);
    }

}

//
//static void render_logo(void) {
//    static const char PROGMEM qmk_logo[] = {
//        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
//        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
//        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
//    };
//
//    oled_write_P(qmk_logo, false);
//}

bool oled_task_user(void) { // funcion indica que poner en cada OLED
    if (is_keyboard_master()) { // OLED del master
        oled_set_cursor(0, 0); // posiciona los pixeles en la pantalla
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)

//        oled_write("chow", false); // escribe en la pantalla
    } else { // OLED del slave
        render_anim_bongocat();
        oled_set_cursor(0, 0);
        oled_write_P(PSTR("WPM"), false);
        oled_write(get_u8_str(get_current_wpm(), ' '), false);
    }
    return false;
}

#endif

