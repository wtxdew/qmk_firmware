// Copyright 2022 wutong (@wtxdew)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* USB Device descriptor parameter */
#define VENDOR_ID       0xF1F1
#define PRODUCT_ID      0x00D1
#define DEVICE_VER      0x0001
#define MANUFACTURER    Winry
#define PRODUCT         Winry GD1

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B3, D1, C7 }
#define MATRIX_COL_PINS { F5, F7, F1, B6, D3, D5, D4, D6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS



/******************************************************************************
* RGB Lighting                                                              
******************************************************************************/
#define RGB_DI_PIN B1
#define RGBLED_NUM 40

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

/* RGB Configuration */
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 150 /* The maximum brightness level */
#define RGBLIGHT_SLEEP


/* Effect and Animation */
// #define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_TWINKLE

// #define RGBLIGHT_EFFECT_BREATHE_CENTER	//used to calculate the curve for the breathing animation. Valid values are 1.0 to 2.7
// #define RGBLIGHT_EFFECT_BREATHE_MAX

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
