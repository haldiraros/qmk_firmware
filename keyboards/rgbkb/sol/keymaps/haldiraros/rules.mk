# Default keymap does not have any overridden options from the rev1 / rev2 rules.mk files.
# Example:
#     if you wanted to disable EXTRAKEY_ENABLE, you would copy the line from the rev1/rules.mk file
#     and paste it in to this file, changing the yes to no. Like so:
# EXTRAKEY_ENABLE         = no       # Audio control and System control
#
# To keep things clean and tidy, as well as make upgrades easier, only place overrides from the defaults in this file.

ENCODER_ENABLE = yes

# RGB Options
RGBLIGHT_ENABLE         = no        # Enable global lighting effects. Do not enable with RGB Matrix
RGBLIGHT_ANIMATIONS     = no        # LED animations
LED_MIRRORED            = no        # Mirror LEDs across halves (enable DIP 1 on slave, and DIP 2 and 3 on master)
RGB_MATRIX_ENABLE       = yes       # Enable per-key coordinate based RGB effects. Do not enable with RGBlight
FULLHAND_ENABLE         = no        # Enables the additional 24 Full Hand LEDs
SF_ENABLE               = no        # Enables the additional 38 Starfighter LEDs

# Do not edit past here
include keyboards/$(KEYBOARD)/post_rules.mk
