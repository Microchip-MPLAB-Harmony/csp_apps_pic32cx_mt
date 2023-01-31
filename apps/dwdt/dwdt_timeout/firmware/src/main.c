/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes


// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

volatile bool deadLockSwitchPressed = false;
volatile uint32_t tickleCounter = 0U;

void deadLockSet(PIO_PIN pin, uintptr_t context)
{
    (void)pin;
    (void)context;
    deadLockSwitchPressed = true;
}
void timerCallback(uintptr_t context)
{
    (void)context;
    tickleCounter++;
    if(!deadLockSwitchPressed)
    {
        LED_RED_Toggle();
    }
    else
    {
        LED_RED_Set();
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
int main( void )
{
    /* Initialize all modules */
    SYS_Initialize( NULL );
    PIO_PinInterruptCallbackRegister( Scroll_Dn_SW_PIN, deadLockSet, 0U);
    PIO_PinInterruptEnable( Scroll_Dn_SW_PIN );
    SYSTICK_TimerCallbackSet(timerCallback, 0U);

    printf( "\r\n-------------------------------------------------------------" );
    printf( "\r\n                          DWDT DEMO" );
    printf( "\r\n-------------------------------------------------------------" );
    printf( "\r\nFlashing LED indicates process is running\r\nPress SWITCH " 
            "to simulate a deadlock\r\n");
    
    SYSTICK_TimerStart();
    while( true )
    {
        if(!deadLockSwitchPressed)
        {
            if(tickleCounter > 2U)
            {
                DWDT_WDT0_Clear();
                tickleCounter = 0U;
            }
        }
        else
        {
            printf("\r\nProcess Starvation..............\r\nDevice Will Reset\r\n");
            while(true)
            {
                /* Spin forever */
            }
        }
    }

    /* Execution should not come here during normal operation */
    return( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

