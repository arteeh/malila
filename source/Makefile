APPLICATION = malila
RIOTBASE ?= riot
# BOARD is not included in this makefile. Define it manually by e.g. running "BOARD=pinetime make"

# Packages
USEPKG += lvgl
USEPKG += micropython

# Modules including custom ones
USEMODULE += xtimer
USEMODULE += display

# Add modules folder to compile custom modules
EXTERNAL_MODULE_DIRS += modules

include $(RIOTBASE)/Makefile.include
