/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xADAD
#define PRODUCT_ID      0xC5C5 /* "[C]hop [S]hop" */
#define DEVICE_VER      0x0002
#define MANUFACTURER AeternusDecorum
#define PRODUCT ChopShop
#define DESCRIPTION ChopShop Keyboard

/* key matrix size */
#define MATRIX_ROWS 2 //5
#define MATRIX_COLS 4 //12

/*#define MATRIX_ROW_PINS { A5, A6, A7, A1, C13 }
#define MATRIX_COL_PINS { A0, B7, A2, B0, B1, B2 }

#define MATRIX_ROW_PINS_RIGHT { B14, A2, A1, A0, B8 }
#define MATRIX_COL_PINS_RIGHT { B7, A15, B9, B3, B5, B4 }*/

#define MATRIX_ROW_PINS { A15, A3 }
#define MATRIX_COL_PINS { A4, B4 }

#define MATRIX_ROW_PINS_RIGHT { A15, A3 }
#define MATRIX_COL_PINS_RIGHT { A4, B4 }

#define DIODE_DIRECTION COL2ROW

#define SPLIT_USB_DETECT

#define SPLIT_HAND_PIN A13 // SWD

#define SOFT_SERIAL_PIN B6
#define SELECT_SOFT_SERIAL_SPEED 1
#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_TX_PAL_MODE 7

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
