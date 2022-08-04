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
    printf( "\r\nFlashing LED indicates process is running\r\nPress SW1 " 
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

