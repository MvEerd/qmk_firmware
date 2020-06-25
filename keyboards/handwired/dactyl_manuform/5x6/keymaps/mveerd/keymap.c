/* Layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

#define L1 MO(1)
#define L2 MO(2)

#define L1_GRV    LT(L1,KC_GRV)
#define L1_BSPACE LT(L1,KC_BSPACE)
#define L2_SCLN   LT(L2, KC_SCLN)
#define CTL_SPACE LCTL_T(KC_SPACE)
#define CTL_ENTER RCTL_T(KC_ENTER)
#define LBRACKET  KC_LBRACKET
#define RBRACKET  KC_RBRACKET
#define RAINBOW   RGB_MODE_RAINBOW


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_5x6(
     KC_ESC    ,KC_1      ,KC_2      ,KC_3      ,KC_4      ,KC_5      ,                KC_6      ,KC_7      ,KC_8      ,KC_9      ,KC_0      ,KC_MINS   ,
     KC_ESC    ,KC_Q      ,KC_W      ,KC_E      ,KC_R      ,KC_T      ,                KC_Y      ,KC_U      ,KC_I      ,KC_O      ,KC_P      ,KC_QUOTE  ,
     KC_LSFT   ,KC_A      ,KC_S      ,KC_D      ,KC_F      ,KC_G      ,                KC_H      ,KC_J      ,KC_K      ,KC_L      ,L2_SCLN   ,KC_RSHIFT ,
     L1_GRV    ,KC_Z      ,KC_X      ,KC_C      ,KC_V      ,KC_B      ,                KC_N      ,KC_M      ,KC_COMM   ,KC_DOT    ,KC_SLSH   ,KC_BSLASH ,
                           KC_LEFT   ,KC_RIGHT  ,                                                            KC_UP     ,KC_DOWN   ,
                                                 CTL_SPACE ,L1_BSPACE ,                KC_TAB    ,CTL_ENTER ,
                                                 KC_PGUP   ,KC_LGUI   ,                KC_END    ,KC_DEL    ,
                                                 KC_PGDN   ,KC_F24    ,                KC_LGUI   ,KC_LALT
  ),

   [1] = LAYOUT_5x6(
     KC_TILD   ,KC_EXLM   , KC_AT    ,KC_HASH   ,KC_DLR    ,KC_PERC   ,                 KC_CIRC   ,KC_AMPR   ,KC_ASTR   ,KC_LPRN   ,KC_RPRN   ,KC_DEL    ,
     _______   ,_______   ,_______   ,_______   ,_______   ,KC_LBRC   ,                 KC_RBRC   ,KC_LPRN   ,KC_RPRN   ,_______   ,_______   ,KC_PLUS   ,
     _______   ,KC_HOME   ,KC_PGUP   ,KC_PGDN   ,KC_END    ,KC_LPRN   ,                 KC_RPRN   ,KC_LCBR   ,KC_RCBR   ,LBRACKET  ,RBRACKET  ,KC_PIPE   ,
     _______   ,_______   ,_______   ,_______   ,_______   ,_______   ,                 _______   ,KC_P1     ,KC_P2     ,KC_P3     ,KC_EQL    ,KC_UNDS   ,
                           _______   ,KC_PSCR   ,                                                             _______   ,KC_P0     ,
                                                 _______   ,_______   ,                 _______   ,_______   ,
                                                 _______   ,_______   ,                 _______   ,_______   ,
                                                 _______   ,_______   ,                 _______   ,_______
  ),

  [2]    = LAYOUT_5x6(
    KC_F12    ,KC_F1     ,KC_F2     , KC_F3    , KC_F4    ,KC_F5     ,                   KC_F6     , KC_F7    ,KC_F8      ,KC_F9     ,KC_F10    ,KC_F11    ,
    RGB_TOG   ,RGB_M_B   ,RGB_M_R   ,_______   ,_______   ,KC_LBRC   ,                   KC_RBRC   ,_______   ,KC_NLCK    ,KC_INS    ,KC_SLCK   ,KC_MUTE   ,
    _______   ,KC_LEFT   ,KC_UP     ,KC_DOWN   ,KC_RGHT   ,KC_LPRN   ,                   KC_RPRN   ,KC_MPRV   ,KC_MPLY    ,KC_MNXT   ,_______   ,KC_VOLU   ,
    RAINBOW   ,RGB_M_SN  ,_______   ,_______   ,_______   ,_______   ,                   _______   ,_______   ,_______    ,_______   ,_______   ,KC_VOLD   ,
                                     RGB_HUI   ,_______   ,                                                    KC_EQL     ,_______   ,
                                                RGB_VAD   ,_______   ,                   KC_VOLD   ,KC_VOLU   ,
                                                _______   ,_______   ,                   _______   ,_______   ,
                                                _______   ,RESET     ,                   _______   ,_______
  ),
};
