APPLICATION = malila
BOARD ?= pinetime
RIOTBASE ?= riot

# Packages
#USEPKG += micropython

# Add modules folder to compile custom modules
EXTERNAL_MODULE_DIRS += modules/storage
EXTERNAL_MODULE_DIRS += modules/display
EXTERNAL_MODULE_DIRS += modules/graphics

# Custom modules
USEMODULE += storage
USEMODULE += display
USEMODULE += graphics

include $(RIOTBASE)/Makefile.include
