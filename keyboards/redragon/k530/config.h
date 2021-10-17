/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0C45
#define PRODUCT_ID      0x5004
#define DEVICE_VER      0x0001

#define MANUFACTURER    Redragon
#define PRODUCT         K530
#define DESCRIPTION     K530 Draconic

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5 }
#define MATRIX_ROW_PINS { D7, D6, D5, D4, D3 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Per-key tapping term, for use with Magic FN */
#define TAPPING_TERM_PER_KEY

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* Enable reactive RGB animations */
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#include "config_led.h"

// #define MK_KINETIC_SPEED
// #define MOUSEKEY_INITIAL_SPEED 300
// #define MOUSEKEY_BASE_SPEED 2000
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 96

#define MK_3_SPEED 
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 3
#define MK_C_INTERVAL_UNMOD 2 

#define MK_C_OFFSET_2 38 
#define MK_C_INTERVAL_2 2 

#define MK_C_OFFSET_1 10 
#define MK_C_INTERVAL_1 2 

#define MK_C_OFFSET_0 1 
#define MK_C_INTERVAL_0 2 

#define FORCE_NKRO