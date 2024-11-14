# Board: STMicroelectronics [STM32L562E-DK](https://www.st.com/en/evaluation-tools/stm32l562e-dk.html)

## Default GCC Board Layer

Device: **STM32L562QEI6Q**

System Core Clock: **110 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/CubeMX.md) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  | 64 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART1** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                     | Connection
|:----------------------|:----------------------|:----------------------------------------------|:------------------------------
| Driver_GPIO0          | GPIO                  | Arduino digital I/O pins D2..D10, D14..D19    | ARDUINO_UNO_D2..D10, D14..D19
| Driver_I2C1           | I2C1                  | Arduino I2C pins D20..D21                     | ARDUINO_UNO_I2C
| Driver_MCI1           | SDMMC1                | MicroSD slot (CN1)                            | CMSIS_MCI
| Driver_SPI3           | SPI3                  | Arduino SPI pins D10..D13                     | ARDUINO_UNO_SPI
| Driver_USART1         | USART1                | ST-LINK connector (CN17)                      | STDIN, STDOUT, STDERR
| Driver_USART3         | USART3                | PMOD+ pins PMOD#2..PMOD#3 (CN4)               | CMSIS_USART
| Driver_USART21        | LPUART1               | Arduino UART pins D0..D1                      | ARDUINO_UNO_UART
| Driver_USBD0          | USB_FS                | User USB connector (CN16)                     | CMSIS_USB_Device
| CMSIS-Driver VIO      | GPIO                  | LEDs (LD9, LD10) and USER button (B2)         | CMSIS_VIO

Reference to [Arduino UNO connector description](https://github.com/Open-CMSIS-Pack/cmsis-toolbox/blob/main/docs/ReferenceApplications.md#arduino-shield).

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | USER button (B2)
| vioLED0               | LED red     (LD9)
| vioLED1               | LED green   (LD10)
