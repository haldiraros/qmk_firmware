/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once


// place overrides here

#define ENCODER_RESOLUTION 2

#define RGB_MATRIX_TOG_LAYERS

#define TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 175

#define SPACE_CADET_MODIFIER_CARRYOVER
#define LSPO_KEYS KC_LSFT, KC_TRNS, KC_LBRC
#define RSPC_KEYS KC_RSFT, KC_TRNS, KC_RBRC
#define LCPO_KEYS KC_LCTL, KC_TRNS, KC_MINS
#define RCPC_KEYS KC_RCTL, KC_TRNS, KC_EQL
