#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |   1   |   2   |   3   |
 * |-------+-------+-------|
 * |   4   |   5   |   6   |
 * |-------+-------+-------|
 * |   7   |   8   | 9/FN  | 9/FN = Hold 9 for FN
 * `-----------------------'
 */
[0] = LAYOUT( \
  KC_1,       KC_2,      KC_3,       \
  KC_4,       KC_5,      KC_6,       \
  KC_7,       KC_8,      LT(1, KC_9) \
),

/* LAYER 1
 * ,-----------------------.
 * |  ESC  |   +   |   -   |
 * |-------+-------+-------|
 * | Enter |   *   |   /   |
 * |-------+-------+-------|
 * |   0   |   .   |       |
 * `-----------------------'
 */
[1] = LAYOUT( \
  KC_ESC,   KC_PLUS, KC_MINS, \
  KC_ENTER, KC_ASTR, KC_SLSH, \
  KC_0,     KC_DOT,  KC_TRNS  \
)

};
