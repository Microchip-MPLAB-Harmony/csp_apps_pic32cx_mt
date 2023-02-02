---
parent: Harmony 3 peripheral library application examples for PIC32CX MT family
title: FLEXCOM SPI EEPROM read write 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# FLEXCOM SPI EEPROM read write

This example application shows how to use the flexcom module in SPI mode.

## Description

This application configures the flexcom peripheral in SPI mode to read and write data from an external EEPROM memory chip. Data is written to the EEPROM and then read back and compared. Successful comparison is indicated by turning on an LED.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/flexcom/flexcom_spi_eeprom/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtc_db.X | MPLABX project for [PIC32CXMTC Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A) |
| pic32cx_mtg_db.X | MPLABX project for [PIC32CXMTG Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV11K09A) |
| pic32cx_mtsh_db.X | MPLABX project for [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cx_mtc_db.X | [PIC32CXMTC Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A) |
| pic32cx_mtg_db.X | [PIC32CXMTG Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV11K09A) |
| pic32cx_mtsh_db.X| [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |
|||

### Setting up [PIC32CXMTC Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A)

- Plug the [EEPROM 4 Click board](https://www.mikroe.com/eeprom-4-click) into the MikroBus socket of the [PIC32CXMTC Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A)
- Connect the Debug USB port on the board to the computer using a micro USB cable

### Setting up [PIC32CXMTG Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV11K09A)

- Plug the [EEPROM 4 Click board](https://www.mikroe.com/eeprom-4-click) into the MikroBus-1 socket of the [PIC32CXMTG Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV11K09A)
- Connect the Debug USB port on the board to the computer using a micro USB cable

### Setting up [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)

- Plug an [EEPROM 4 Click board](https://www.mikroe.com/eeprom-4-click) into the MikroBus socket of the [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)
- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and Program the application project using its IDE
2. LED indicates the success or failure:
    - LED is turned ON when the value read from the EEPROM matched with the written value
    - LED is turned OFF when the value read from the EEPROM did not match with the written value

Following table provides the LED name:

| Board      | LED Name |
| ---------- | ---------------- |
| [PIC32CXMTC Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A)  | D24 |
| [PIC32CXMTG Evaluation Kit](https://www.microchip.com/en-us/development-tool/EV11K09A)  | D3 |
| [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)  | D20 |
|||
