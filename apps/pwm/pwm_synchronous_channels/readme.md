---
parent: Harmony 3 peripheral library application examples for PIC32CX MT family
title: PWM Generation 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# PWM Generation

This example shows how to use the PWM peripheral to generate PWM signals with dead time.

## Description

This example shows how to configure the PWM to generate synchronous PWM signals with dead time (used for motor control). The duty cycle of the PWM is updated in the interrupt handler.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cx_mt) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/pwm/pwm_synchronous_channels/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtsh_db.X    | MPLABX Project for [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|pic32cx_mtsh_db.X | [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)|
|||

### Setting up [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB)

- Power on the board using a 12V power supply on J3
- Attach a debugger to the SWD/JTAG port J17

## Running the Application

1. Build and Program the application using their respective IDEs
2. Observe the high-side and low-side PWM waveforms on the oscilloscope
3. Observe the dead time between the high side and low side

    ![output](images/output_pwm_synchronous_channels.png)

Refer to the below table for PWM output pins for different boards:

| PWM Channel      | [PIC32CXMTSH Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB) |
| ---------|----------------------|
| CH0_PWMH | PD03 (Pin 7 of Xplained PRO Socket) |
| CH0_PWML | PD17 (Pin 4 of J18 Test Point) |
| CH2_PWMH | PD16 (Pin 8 of Xplained PRO Socket) |
| CH2_PWMH | PD19 (Pin 1 of J18 Test Point) |
