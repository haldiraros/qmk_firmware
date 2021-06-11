SRC += haldiraros.c \
	   process_records.c \
	   custom_tap_dance.c

# Some usual defaults
MOUSEKEY_ENABLE         = no    # Mouse keys (+4700)
EXTRAKEY_ENABLE         = yes   # Audio control and System control (+450)
TAP_DANCE_ENABLE        = yes


ifeq ($(strip $(ENCODER_ENABLE)), yes)
  SRC += custom_encoder.c
endif

ifneq ($(strip $(RGB_MATRIX_ENABLE)), no)
  OPT_DEFS += -DRGB_ENABLE
  SRC += custom_rgb.c
endif

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  OPT_DEFS += -DRGB_ENABLE
  SRC += custom_rgb.c
endif
