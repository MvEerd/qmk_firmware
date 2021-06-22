/* Layout for the Dactyl Manuform 5x6 Keyboard */
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _COLE 1
#define _RAISE 2
#define _LOWER 3
#define _ADJUST 4


#define L1 MO(_RAISE)
#define L2 MO(_LOWER)
#define L3 MO(_ADJUST)

#define L1_GRV      LT(L1,KC_GRV)
#define L1_BSPACE   LT(L1,KC_BSPACE)
#define L2_SCLN     LT(L2, KC_SCLN)
#define L3_BSLASH   LT(L3, KC_BSLASH)
#define CTL_SPACE   LCTL_T(KC_SPACE)
#define CTL_BSPACE  LCTL_T(KC_BSPACE)
#define CTL_ENTER   RCTL_T(KC_ENTER)
#define LBRACKET    KC_LBRACKET
#define RBRACKET    KC_RBRACKET
#define RAINBOW     RGB_MODE_RAINBOW
#define RGB_FOR     RGB_MODE_FORWARD
#define RGB_REV     RGB_MODE_REVERSE
#define ALTRIGHT    LALT_T(KC_RIGHT)
#define SFT_QUOTE   MT(MOD_RSFT, KC_QUOTE)
#define SFT_TAB     MT(KC_TAB, MOD_RSFT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_QWERTY] = LAYOUT_5x6(
     KC_EQL    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5       ,                KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0      ,KC_MINS   ,
     KC_ESC    ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T       ,                KC_Y      ,KC_U      ,KC_I      ,KC_O      ,KC_P      ,KC_BSLASH ,
     KC_LSFT   ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G       ,                KC_H      ,KC_J      ,KC_K      ,KC_L      ,L2_SCLN   ,SFT_QUOTE ,
     L1_GRV    ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B       ,                KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,L3_BSLASH ,
                           KC_LEFT   ,ALTRIGHT  ,                                                             KC_UP     ,KC_DOWN   ,
                                                 LT(L1,KC_SPACE) ,CTL_BSPACE ,                SFT_TAB   ,CTL_ENTER ,
                                                 KC_PGUP   ,KC_F24     ,                KC_END    ,KC_DEL    ,
                                                 KC_PGDN   ,KC_LGUI    ,                KC_LGUI   ,KC_LALT
  ),
    
   [_COLE] = LAYOUT_5x6(
     _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,
     _______   ,_______   ,_______   ,KC_F      ,KC_P      ,KC_B      ,                KC_J      ,KC_L      ,KC_U      ,KC_Y      ,KC_SCLN   ,_______   ,
     _______   ,KC_A      ,KC_R      ,KC_S      ,KC_T      ,KC_G      ,                KC_M      ,KC_N      ,KC_E      ,KC_I      ,KC_O      ,_______   ,
     _______   ,KC_Z      ,KC_X      ,KC_C      ,KC_D      ,KC_V      ,                KC_K      ,KC_H      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,_______   ,
                           _______   ,_______   ,                                                            _______   ,_______   ,
                                                 _______   ,_______   ,                _______   ,_______ ,
                                                 _______   ,_______   ,                _______   ,_______ ,
                                                 _______   ,_______   ,                _______   ,_______
  ),

   [_RAISE] = LAYOUT_5x6(
     KC_TILD   ,KC_EXLM   , KC_AT    ,KC_HASH   ,KC_DLR    ,KC_PERC  ,                 KC_CIRC   ,KC_AMPR   ,KC_ASTR   ,KC_LPRN   ,KC_RPRN   ,KC_DEL    ,
     _______   ,_______   , KC_7     ,KC_8      ,KC_9      ,_______  ,                 _______   ,KC_LPRN   ,KC_RPRN   ,KC_LT     ,KC_GT     ,KC_PIPE   ,
     _______   ,_______   , KC_4     ,KC_5      ,KC_6      ,_______  ,                 _______   ,KC_LCBR   ,KC_RCBR   ,LBRACKET  ,RBRACKET  ,KC_PIPE   ,
     _______   ,_______   , KC_1     ,KC_2      ,KC_3      ,_______  ,                 _______   ,_______   ,_______   ,_______   ,KC_EQL    ,KC_UNDS   ,
                           _______   ,KC_0      ,                                                            _______   ,_______   ,
                                                 _______   ,_______   ,                 _______   ,_______   ,
                                                 _______   ,_______   ,                 _______   ,_______   ,
                                                 _______   ,_______   ,                 _______   ,_______
  ),

  [_LOWER]    = LAYOUT_5x6(
    KC_MUTE   ,KC_F1     ,KC_F2     , KC_F3    , KC_F4    ,KC_F5     ,                   KC_F6     , KC_F7    ,KC_F8      ,KC_F9     ,KC_F10    ,KC_F11    ,
    _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                   KC_RBRC   ,_______   ,KC_NLCK    ,KC_INS    ,KC_SLCK   ,KC_MUTE   ,
    _______   ,KC_HOME   ,KC_PGDN   ,KC_PGUP   ,KC_END    ,_______   ,                   KC_LEFT   ,KC_DOWN   ,KC_UP      ,KC_RIGHT  ,_______   ,_______   ,
    _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                   _______   ,_______   ,_______    ,_______   ,_______   ,_______   ,
                                     _______   ,_______   ,                                                    KC_EQL     ,_______   ,
                                                _______   ,_______   ,                   KC_VOLD   ,KC_VOLU   ,
                                                _______   ,_______   ,                   KC_HOME   ,KC_END    ,
                                                _______   ,_______   ,                   _______   ,_______
  ),

  [_ADJUST]    = LAYOUT_5x6(
    RGB_TOG   ,RGB_M_P   ,RGB_M_B   ,RGB_M_R   ,RGB_M_SW  ,RGB_M_SN  ,                   RGB_M_K   ,RGB_M_X   ,RGB_M_G    ,RGB_M_T   ,_______   ,TG(_COLE) ,
    RGB_TOG   ,RGB_M_B   ,RGB_M_R   ,_______   ,_______   ,_______   ,                   KC_RBRC   ,_______   ,KC_NLCK    ,KC_INS    ,KC_SLCK   ,KC_MUTE   ,
    _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                   KC_RPRN   ,KC_MPRV   ,KC_MPLY    ,KC_MNXT   ,_______   ,KC_VOLU   ,
    RAINBOW   ,RGB_M_SN  ,_______   ,_______   ,RGB_REV   ,RGB_FOR   ,                   _______   ,_______   ,_______    ,_______   ,_______   ,KC_VOLD   ,
                                     RGB_SAD   ,RGB_SAI   ,                                                    KC_EQL     ,_______   ,
                                                RGB_VAD   ,RGB_VAI   ,                   KC_VOLD   ,KC_VOLU   ,
                                                RGB_HUD   ,RGB_HUI   ,                   _______   ,_______   ,
                                                _______   ,RESET     ,                   RESET     ,_______
  ),
};

// RGB Modes
// 1 = Static
// 2-5 = Breathing
// 6-8 = Rainbow
// 9-14 = Swirl
// 15-20 = Snake
// 21-24 = Nightrider
// 25 = Christmas
// 26-30 = Static Gradient
const uint8_t RGBLED_RAINBOW_SWIRL_INTERVALS[] PROGMEM = {100, 50, 10};

uint8_t prev = _QWERTY;
uint32_t desired = 9;
uint16_t hue = 120;
uint16_t sat = 255;
uint16_t val = 255;

void get_hsv(void) {
	hue = rgblight_get_hue();
	sat = rgblight_get_sat();
	val = rgblight_get_val();
}

void reset_hsv(void) {
	rgblight_sethsv(hue, sat, val);
}

void matrix_init_user() {
	rgblight_mode(desired);
	rgblight_enable();
    reset_hsv();
}

layer_state_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
    if (prev != _ADJUST) {
        switch (layer) {
            case _RAISE:
                rgblight_mode(1);
                rgblight_sethsv(200, 255, val);
                break;
            case _LOWER:
                rgblight_mode(1);
                rgblight_sethsv(100, 255, val);
                break;
            default: //  for any other layers, or the default layer
                rgblight_mode(desired);
                if(desired < 6 || (desired > 14 && desired < 25)) { // Skip in rainbow modes.
                reset_hsv();
                }
                break;
        }
    } else {
       desired = rgblight_get_mode();
       get_hsv();
    }
    prev = layer;
    return state;
}
