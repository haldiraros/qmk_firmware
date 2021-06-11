#include "custom_tap_dance.h"
#include "custom_keycodes.h"

#ifdef TAP_DANCE_ENABLE

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [COMM_QUOT]  = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_QUOT),
  [BACKSPACE] = ACTION_TAP_DANCE_DOUBLE (KC_BSPACE, LCTL(KC_BSPACE)),
  [DELETE] = ACTION_TAP_DANCE_DOUBLE (KC_DELETE, LCTL(KC_DELETE))
};

#endif

