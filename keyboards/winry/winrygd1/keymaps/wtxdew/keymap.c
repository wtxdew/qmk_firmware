#include "winrygd1.h"

#define _TOOL     5  // TOOL layer
#define _FUNC     6  // FUNC layer
#define _ROOT     7  // ROOT layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( 
     KC_ESC, KC_LSFT,                                     KC_RSFT, KC_BSPC,  
	 	 KC_TAB,    KC_A,    KC_S,    KC_D,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT, 
	 	 KC_F10,   KC_F4,   KC_F9,    KC_C, KC_COMM,  KC_DEL,   KC_UP,   MO(6), 
	 	   KC_1,    KC_2,   KC_F8,  KC_SPC,  KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT),

  [1] = LAYOUT(
     KC_ESC,    KC_1,                                        KC_0,  KC_BSPC, 
     KC_TAB,    KC_2,    KC_3,    KC_4,    KC_7,    KC_8,    KC_9,   KC_ENT, 
       KC_Q,    KC_W,    KC_E,    KC_5,    KC_6,  KC_DEL,   KC_UP,    MO(6), 
       KC_N,    KC_S,    KC_D,  KC_SPC,  KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT),

  [2] = LAYOUT(
		_______, _______,                                     _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______),

  [3] = LAYOUT(
		_______, _______,                                     _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______),

  [4] = LAYOUT(
		_______, _______,                                     _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______),

  [5] = LAYOUT(
		_______, _______,                                     _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
      KC_F5,   KC_F6, _______, _______, _______, _______, _______, _______),

  [6] = LAYOUT(
		  MO(7), _______,                                     _______, _______, 
		  TG(5),   TO(0),   TO(1),   TO(2), _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, RGB_VAI, _______, 
		_______, _______, _______, RGB_TOG, RGB_MOD, _______, RGB_VAD, _______),

  [7] = LAYOUT(
		_______, _______,                                     _______,   RESET,   
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______)
};


/****************
 * RGB Lighting *
 ****************/
const rgblight_segment_t PROGMEM warning_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 40, HSV_RED}       // Light 40 LEDs, starting with LED 0
);
const rgblight_segment_t PROGMEM wake_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 40, HSV_WHITE}       
);
const rgblight_segment_t PROGMEM tools_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 40, HSV_PURPLE}      
);
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    wake_layer,  
    tools_layer,
    warning_layer // Overrides other layers
);

///
void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
    rgblight_enable_noeeprom(); 
    rgblight_blink_layer_repeat(0, 500, 3);
}
///
void suspend_power_down_user(void) {
  rgblight_disable_noeeprom();
}
///
void suspend_wakeup_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_blink_layer_repeat(0, 500, 3);
}
///
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (biton32(state)) {
    case 0:
        rgblight_sethsv_noeeprom(30, 218, rgblight_get_val()); //HSV_GOLDENROD
        break;
    case 1:
        rgblight_sethsv_noeeprom(128, 255, rgblight_get_val()); // HSV_CYAN
        break;
    case 2:
        rgblight_sethsv_noeeprom(85, 255, rgblight_get_val()); // HSV_GREEN
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
    rgblight_set_layer_state(1, layer_state_cmp(state, _TOOL));
    rgblight_set_layer_state(2, layer_state_cmp(state, _ROOT));
  return state;
}
