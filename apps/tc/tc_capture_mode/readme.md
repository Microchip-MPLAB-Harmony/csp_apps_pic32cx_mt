---
parent: Harmony 3 peripheral library application examples for PIC32CXMTSH family
title: TC capture mode 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TC capture mode

This example shows how to use the TC module in capture mode to measure duty cycle and frequency of an external input.

## Description

The TC channel is configured in capture mode to measure duty cycle and frequency of the PWM signal. The PWM signal is generated using another TC channel which is configured in compare mode. Output of the compare TC channel is connected to input of the capture TC channel.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/tc/tc_capture_mode/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtsh_db.X | MPLABX project for [PIC32CXMTSH-Development Board]() |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cx_mtsh_db.X | [PIC32CXMTSH-Development Board]()
|||

### Setting up [PIC32CXMTSH-Development Board]()

- TC0_CH0  generates the PWM waveform on pin PA02
- TC0_CH1 is configured in capture mode with the input signal connected to pin PA31
- Use a jumper wire to connect "Pin 10 of Xplained Pro Header (TC0_TIOA0)" to "Pin 1 of mikroBUS Socket (TC0_TIOA1)"
- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the EDBG Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application using its IDE
4. Console displays the frequency and duty cycle of the input signal
5. Frequency is constant (5000 Hz) and duty cycle changes by 1%

  ![output](images/output_tc_capture_mode.png)