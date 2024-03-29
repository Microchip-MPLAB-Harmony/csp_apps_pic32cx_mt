---
parent: Harmony 3 peripheral library application examples for PIC32CX MT family
title: RTC alarm interrupt 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# RTC alarm interrupt

This example shows how to use the RTC to configure the time and generate the alarm.

## Description

This example application shows how to setup system time and configure alarm using the RTC Peripheral Library. The application sets up an alarm to be generated after 20 seconds of the configured system time. The application displays a message on the alarm trigger.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/rtc/rtc_alarm/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtsh_db.X | MPLABX project for [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cx_mtsh_db.X | [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)
|||

### Setting up [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)

- Power on the board using a 12V power supply on J3
- Attach a debugger to the SWD/JTAG port J17

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application project using its IDE
4. The console displays the current time and the alarm time (System time starts at 12:00:00 and gets updated every second)

    ![output](images/output_rtc_alarm_1.png)

5. Once the alarm time is reached, it print the alarm message and turns on the LED (System time keeps updating)

    ![output](images/output_rtc_alarm_2.png)

Following table provides the LED name:

| Board      | LED Name |
| ---------- | ---------------- |
| [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) | D20 LED |
|||
