# STM32L562E-DK Discovery board

## Overview

The STM32L562E-DK Discovery kit is designed as a complete demonstration and development platform for the STMicroelectronics Arm® Cortex®-M33 core-based STM32L562QEI6Q microcontroller with TrustZone®. It features 256 Kbytes of internal SRAM and 512 Kbytes of internal flash memory, one flexible memory controller (FMC) interface, one Octo-SPI memory interface, one TFT-LCD controller, one RTC, up to 16 timers, one USB Type-C® device FS port with UCPD controller, two SAI ports, four I2C buses, six USART ports, three SPIs, one CAN-FD port, one SDMMC interface, 2x 12-bit ADC, 2x 12-bit DAC, two low-power comparators, four digital filters for sigma-delta modulation, touch-sensing capability, an embedded step-down converter, and JTAG and ETM debugging support.

STM32L562E-DK, associated with the fanout expansion board, is used as a reference design for user application development, although it is not considered as the final application.

The full range of hardware features on the board helps the user to evaluate all the peripherals (USB, USART, digital microphones, ADC and DAC, TFT LCD, Octo-SPI flash memory device, microSD™ card, audio codec, joystick, user button, Bluetooth® Low Energy, accelerometer and gyroscope) and to develop applications. Extension headers allow easy connection of a daughterboard or wrapping board for a specific application.

An STLINK-V3E is integrated on the board, as an embedded in-circuit debugger and programmer for the STM32 MCU and the USB Virtual COM port bridge.

## Getting started

- [User manual](https://www.st.com/resource/en/user_manual/um2617-discovery-kit-with-stm32l562qe-mcu-stmicroelectronics.pdf)

### ST-LINK driver installation and firmware upgrade (on Microsoft Windows)

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html).
4. Extract the archive and run the `ST-LinkUpgrade.exe` program.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. When the ST-LINK driver is correctly installed, the current ST-LINK version is displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.

## Technical reference

- [STM32L562QE microcontroller](https://www.st.com/en/microcontrollers-microprocessors/stm32l562qe.html)
- [STM32L562E-DK board](https://www.st.com/en/evaluation-tools/stm32l562e-dk.html)
- [User manual](https://www.st.com/resource/en/user_manual/um2617-discovery-kit-with-stm32l562qe-mcu-stmicroelectronics.pdf)
- [Data brief](https://www.st.com/resource/en/data_brief/stm32l562e-dk.pdf)
- [Schematic](https://www.st.com/resource/en/schematic_pack/mb1373-l562qeq-c01_schematic.pdf)
