---
parent: Harmony 3 peripheral library application examples for PIC32CX MT family
title: ACC interrupt 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# ACC interrupt

This example application shows how to use an analog comparator controller (ACC) generate an interrupt on a compare event. 

## Description

This example application shows how to use the ACC Peripheral library to generate an interrupt when a rising/falling edge is detected on one the analog input pins. 


## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click Clone button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/acc/acc_interrupt/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtsh_db.X | MPLABX project for [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cx_mtsh_db.X | [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |
|||

### Setting up [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)

- Power on the board using a 12V power supply on J3
- Attach a debugger to the SWD/JTAG port J17
- Use a jumper wire to connect "Pin 3 of Xplained Pro Header (ACC_AD1)" to 3.3v Power Supply (Pin 3 of Xpro Power)

## Running the Application

1. Build and run the application using its IDE
2. Observe LED turning on
3. Remove the connected jumper wire and connect to Ground Pin
4. Observe LED turning off


| Board| LED|
|:---------|:---------:|
| [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) | D20 LED (Red) |