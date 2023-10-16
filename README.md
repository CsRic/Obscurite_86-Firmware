# Obscurite 86 Firmware
My customized keyboard based on QMK. Only contains the keyboard source code.   
![obscurite 86](https://github.com/CsRic/Obscurite_86-Firmware/assets/59389055/0368bb37-232c-46de-991c-ba63dd95ca50)

## Basic Info
- processor: atmega32u4  
- bootloader: atmel-dfu
- layout: 84+2 (splited spacebar):
![design](https://github.com/CsRic/Obscurite_86-Firmware/assets/59389055/395f5a0a-0714-4881-8633-8a5f7e0f3dbc)

## This Repo
Contains only the QMK source code of my keyboard part.  
`src/obscirite_86` should be put into `qmk_firmware/keyboards/csric/.`, in the QMK repo.  
No pcb design source. I bought the pcb from a designer. I have no knowledge.

## Features
- Navigation layer with rgb indicators.
- Numpad layer with rgb indicators.
- Function layer with rgb indicators.
---------------
- Custom keycode for switchable right spacebar.
---------------
- Holding behavior for interactive RGB matrix, which isn't supported by native Quantum RGB Matrix. Attack - Decay - Sustain - Release (not in use) for each key strike.
![holding rgb](https://github.com/CsRic/Obscurite_86-Firmware/assets/59389055/5bbc66fb-5229-4b7c-8979-7aaf383fdf8a)