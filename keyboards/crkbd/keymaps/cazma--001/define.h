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
#include <stdio.h>

// defined by yuukive
enum layer_names {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NUMBER
};

enum custom_keycodes {
  RGBRST = SAFE_RANGE, // Reset Lighting
  LOWEI, // Tap Eisu or Hold LOWER
  RAIKN, // Tap Kana or Hold RAISE
  ADJSP, // Tap Space or Hold ADJUST
  CTLES, // Tap ESC+Eisu or Hold Ctrl
  HELLO  // Output Hello World
};
#define CAD LCTL(LALT(KC_DEL)) // Ctrl + Alt + Del
#define CTLBC LCTL(KC_LBRC)
#define CTRBC LCTL(KC_RBRC)
#define CT_Z LCTL(KC_Z)
#define CT_X LCTL(KC_X)
#define CT_C LCTL(KC_C)
#define CT_V LCTL(KC_V)
#define CT_A LCTL(KC_A)

#define SFSP SFT_T(KC_SPC)
#define SFSC SFT_T(KC_SCLN)
#define GUILB GUI_T(KC_LBRC)
#define ALTRB ALT_T(KC_RBRC)
#define RGUIQT RGUI_T(KC_QUOT)
#define RALTEQ RALT_T(KC_EQL)

#define NUMET LT(_NUMBER, KC_ENT)
#define LOWET LT(_LOWER, KC_ENT)
// #define ADJSP LT(_ADJUST, KC_SPC) // does't work for helix: achieved by process_record_user

#define DT_L LGUI(KC_LEFT) // Win + Ctrl + ←
#define DT_R LGUI(KC_RIGHT)  // Win + Ctrl + →
#define DT_V LCTL(KC_TAB)  // Win + TAB

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

#define PROCESS_OVERRIDE_BEHAVIOR (false)
#define PROCESS_USUAL_BEHAVIOR (true)
