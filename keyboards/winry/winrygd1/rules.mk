# MCU name
MCU = atmega32u4

F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
OPT_DEFS += -DBOOTLOADER_SIZE=4096

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
BOOTMAGIC_ENABLE 	= yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE  	= no       # Mouse keys
EXTRAKEY_ENABLE 	= yes      # Audio control and System control
CONSOLE_ENABLE 		= no       # Console for debug
COMMAND_ENABLE 		= no       # Commands for debug and configuration
NKRO_ENABLE 			= yes      # Enable N-Key Rollover
BACKLIGHT_ENABLE 	= no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE 	= yes      # Enable keyboard RGB underglow
KEY_LOCK_ENABLE 	= yes      # Enable KC_LOCK support
VIA_ENABLE 				= yes
