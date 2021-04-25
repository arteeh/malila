APPLICATION = malila
BOARD ?= pinetime
RIOTBASE ?= riot

# ST-Link programmer
PROGRAMMER ?= openocd
OPENOCD_DEBUG_ADAPTER ?= stlink
STLINK_VERSION ?= 2

# Packages
#USEPKG += micropython
#USEPKG += lvgl

# Built-in modules
USEMODULE += xtimer
#USEMODULE += cst816s

# Add modules folder to compile custom modules
EXTERNAL_MODULE_DIRS += modules/display
EXTERNAL_MODULE_DIRS += modules/gui

# Custom modules
USEMODULE += display
USEMODULE += gui

include $(RIOTBASE)/Makefile.include
