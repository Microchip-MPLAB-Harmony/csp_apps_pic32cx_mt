﻿---
title: Harmony 3 peripheral library application examples for PIC32CX MT family
nav_order: 1
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Harmony 3 peripheral library application examples for PIC32CX MT family 

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 peripheral library application examples for PIC32CX MT family

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

## Contents Summary

| Folder     | Description                             |
| ---        | ---                                     |
| apps       | Contains peripheral library example applications |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [github pages](https://microchip-mplab-harmony.github.io/csp_apps_pic32cx_mt/) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of one or more peripheral libraries.

| Name | Description |
| ---- | ----------- |
| [ACC interrupt](apps/acc/acc_interrupt/readme.md) | This example application shows how to use an analog comparator controller (ACC) generate an interrupt on a compare event.  |
| [ADC Polling](apps/adc/adc_polled_mode/readme.md) | This example demonstrates how to sample an analog input in polled mode and send the converted data to console |
| [ADC user sequence](apps/adc/adc_user_sequence/readme.md) | This example demonstrates how to sample two analog inputs using the user sequencer in software trigger mode and send the converted data to the console |
| [Clock configuration](apps/clock/clock_config/readme.md) | This example application shows how to configure the clock system to run the device at maximum frequency. It also outputs a prescaled clock signal on a GPIO pin for measurement and verification |
| [DWDT timeout](apps/dwdt/dwdt_timeout/readme.md) | This example application shows how to generate a Dual Watchdog timer reset by simulating a deadlock |
| [FLEXCOM SPI EEPROM read write](apps/flexcom/spi/master/flexcom_spi_eeprom/readme.md) | This example application shows how to use the flexcom module in SPI mode |
| [FLEXCOM TWI (I2C) EEPROM](apps/flexcom/twi/master/flexcom_twi_eeprom/readme.md) | This example application shows how to use the flexcom module in TWI mode |
| [FLEXCOM USART ring buffer](apps/flexcom/usart/flexcom_usart_ring_buffer_interrupt/readme.md) | This example application demonstrates how to use the FLEXCOM peripheral in USART ring buffer mode |
| [MEM2MEM memory transfer](apps/mem2mem/mem2mem_memory_transfer/readme.md) | This application demonstrates data transfer between two memory location using MEM2MEM |
| [PIO interrupt](apps/pio/pio_led_on_off_interrupt/readme.md) | This example shows how to generate GPIO interrupt on switch press and release, and indicate the switch status using the LED |
| [PIO polling](apps/pio/pio_led_on_off_polling/readme.md) | This example shows how to poll the switch input, and indicate the switch status using the LED |
| [PWM Generation](apps/pwm/pwm_synchronous_channels/readme.md) | This example shows how to use the PWM peripheral to generate PWM signals with dead time |
| [QSPI flash read write](apps/qspi/qspi_read_write/readme.md) | This example shows how to use the QSPI Peripheral library to perform erase, write and read operation with the QSPI Serial Flash memory in Quad IO mode |
| [RSTC interrupt](apps/rstc/led_switcher/readme.md) | This example shows how to use the RSTC peripheral to generate an interrupt instead of generating a reset, when the Reset switch is pressed on board |
| [RTC alarm interrupt](apps/rtc/rtc_alarm/readme.md) | This example shows how to use the RTC to configure the time and generate the alarm |
| [RTT periodic interrupt](apps/rtt/rtt_periodic_timeout/readme.md) | This example shows how to use the RTT to generate periodic interrupts |
| [SEFC read write](apps/sefc/flash_read_write/readme.md) | This example shows how to use SEFC to erase and program the internal Flash memory |
| [SUPC wakeup using RTC](apps/supc/supc_wakeup_rtc/readme.md) | This example shows how to enter different low power modes and exit it using the RTC alarm |
| [SUPC wakeup using RTT](apps/supc/supc_wakeup_rtt/readme.md) | This example shows how to enter different low power modes and exit it using the RTT alarm |
| [Systick periodic interrupt](apps/systick/systick_periodic_timeout/readme.md) | This example shows how to use the SysTick to generate periodic interrupts |
| [TC capture mode](apps/tc/tc_capture_mode/readme.md) | This example shows how to use the TC module in capture mode to measure duty cycle and frequency of an external input |
| [TC compare mode](apps/tc/tc_compare_mode/readme.md) | This example shows how to use the TC module in compare mode to generate an active low, active high, and toggle output on compare match |
| [TC timer mode](apps/tc/tc_timer_mode/readme.md) | This example shows how to use the TC module in timer mode to generate periodic interrupt |
| [TRNG random number](apps/trng/random_number/readme.md) | This example application shows how to use the TRNG Peripheral library to generate and read a random number |
| [UART ring buffer](apps/uart/uart_ring_buffer_interrupt/readme.md) | This example application shows how to use UART peripheral in ring buffer mode |

____


[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt.svg?style=social)]()