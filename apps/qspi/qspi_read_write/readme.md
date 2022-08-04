---
parent: Harmony 3 peripheral library application examples for PIC32CXMTSH family
title: QSPI flash read write 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# QSPI flash read write

This example shows how to use the QSPI Peripheral library to perform erase, write and read operation with the QSPI Serial Flash memory in Quad IO mode.

## Description

This example uses the QSPI peripheral library to erase and write an array of values to the QSPI Serial Flash memory. It verifies the value written by reading the values back and comparing it to the value written.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/qspi/qspi_read_write/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtsh_db.X    | MPLABX Project for [PIC32CXMTSH-Development Board]()|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|pic32cx_mtsh_db.X | [PIC32CXMTSH-Development Board]()|
||

### Setting up [PIC32CXMTSH-Development Board]()

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and Program the application using its IDE
2. LED indicates success or failure:
    - The LED is toggled when the value read from the QSPI Serial Flash memory matched with the written value
    - The LED is turned ON when the value read from the QSPI Serial Flash did not match with the written value

The following table provides the LED name

| Board      | LED name |
| ----------------- | ---------------------------------------------- |
| [PIC32CXMTSH-Development Board]()    | D20 |
|||