## Malila is a smartwatch OS for Linux phones.

It's based on [RIOT](https://www.riot-os.org/) and runs on the [PineTime](https://www.pine64.org/pinetime/). It's an implementation of [these](https://github.com/arteeh/pinetime) GNOME-style mockups.

Adwaita, GNOME's design language, is named after [the oldest tortoise in history](https://en.wikipedia.org/wiki/Adwaita). Malila is named after [the second](https://en.wikipedia.org/wiki/Tu%27i_Malila).

### How to build...

1. Install the package `make`
2. Open a terminal in this repository
3. Run `git submodule init`
4. Run `git submodule update`

#### on the Pinetime

5. Install the packages `arm-none-eabi-gcc-cs arm-none-eabi-newlib`
6. Enter the `source` folder
7. Run `BOARD=pinetime make`
8. The binary will be at `bin/pinetime/malila.bin`, flash this to your device. For this you can use my flashing tool [Pinetime Flasher](https://flathub.org/apps/details/com.arteeh.Flasher) with the "Flash firmware from file" option.

#### on native hardware for testing

5. Install the packages `gcc glibc-devel.i686`
6. Enter the `source` folder
7. Run `BOARD=native make all term` to build and run the software
