#pragma once
#include "quantum.h"

#ifdef TAP_DANCE_ENABLE

#include "process_tap_dance.h"

//Tap Dance Declarations
enum {
  COMM_QUOT = 0,
  BACKSPACE,
  DELETE
};

#define TD_COMM TD(COMM_QUOT)
#define TD_BSPC TD(BACKSPACE)
#define TD_DEL TD(DELETE)

#endif
