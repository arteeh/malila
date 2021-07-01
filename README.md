# Malila

A simple smartwatch operating system based on [RIOT](https://www.riot-os.org/), made for the [Pinetime](https://www.pine64.org/pinetime/).

## How to build

1. Install the package `make`
2. Open a terminal in this repository
3. Run `git submodule init`
4. Run `git submodule update`

### On the Pinetime

5. Install the packages `arm-none-eabi-gcc-cs arm-none-eabi-newlib`
6. Enter the `source` folder
7. Run `BOARD=pinetime make`
8. The binary will be at `bin/pinetime/malila.bin`, flash this to your device. For this you can use my flashing tool [Pinetime Flasher](https://flathub.org/apps/details/com.arteeh.Flasher) with the "Flash firmware from file" option.

### On native hardware for testing

5. Install the packages `gcc glibc-devel.i686`
6. Enter the `source` folder
7. Run `BOARD=native make all term` to build and run the software
8. Make sure to zoom out your terminal (ctrl + -) as far as possible to properly see the display output

### Generating the fonts

1. Install the package `python3-pip`
2. Install the font converter's dependencies: `pip3 install Pillow fontTools argparse`
3. Run `sudo chmod +x ./generatefonts`
4. Run `./generatefonts`