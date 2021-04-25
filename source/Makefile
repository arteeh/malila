APPLICATION = malila
BOARD ?= pinetime
RIOTBASE ?= riot

# ST-Link programmer
PROGRAMMER ?= openocd
OPENOCD_DEBUG_ADAPTER ?= stlink
STLINK_VERSION ?= 2

# Packages
#USEPKG += micropython

# Built-in modules
USEMODULE += xtimer
USEMODULE += cst816s

# Add modules folder to compile custom modules
EXTERNAL_MODULE_DIRS += modules/graphics

# Custom modules
USEMODULE += graphics

include $(RIOTBASE)/Makefile.include
