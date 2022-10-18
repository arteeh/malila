### Malila is a watch operating system for Linux phones. It's based on [RIOT](https://www.riot-os.org/) and runs on the [PineTime](https://www.pine64.org/pinetime/).

## How to build

1. Install the packages `make arm-none-eabi-gcc-cs arm-none-eabi-newlib`
2. Open a terminal in this repository
3. Run `git submodule init`
4. Run `git submodule update`
5. In your terminal, enter the `source` folder
6. Run `make`
7. The binary will be at `bin/pinetime/malila.bin`. Flash this to your device. For this you can use [my flashing tool](https://flathub.org/apps/details/com.arteeh.Flasher) with the "Flash firmware from file" option.
