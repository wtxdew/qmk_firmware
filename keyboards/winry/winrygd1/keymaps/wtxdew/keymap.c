#include "winrygd1.h"

#define _DJMAX    0  // Default layer
#define _LAYER2   1  // offical layer
#define _LAYER3   2  // layer
#define _TOOL     5  // Tools layer
#define _HINT     6  // FUNC layer
#define _ROOT     7  // Root layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( 
    KC_ESC,  KC_LSFT,                                     KC_RSFT, KC_F10,  
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
		TG(1),   KC_F4,   KC_F9,   KC_C,    KC_COMM, KC_DEL,  KC_UP,   MO(6), 
		KC_1,    KC_2,    KC_F8,   KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT),

  [1] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_1,    KC_2,    KC_3,    KC_7,    KC_8,    KC_9,    KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [2] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [3] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [4] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [5] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  [6] = LAYOUT(
		MO(7),   KC_TRNS,                                     KC_TRNS, KC_TRNS, 
		KC_TRNS, TO(0),   TO(1),   TO(2),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS),

  [7] = LAYOUT(
		KC_TRNS, KC_TRNS,                                     KC_TRNS, RESET,   
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};



