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

#define SWITCH_PRESSED_STATE            0   // Active LOW switch
#define LED_On()                        LED_Set()
#define LED_Off()                       LED_Clear()

typedef enum
{
   APP_STATE_LED_ON,
   APP_STATE_LED_TOGGLE

}APP_STATE;

volatile static APP_STATE  state = APP_STATE_LED_ON;

void controlLED(PIO_PIN pin, uintptr_t context)
{
    if(SWITCH_Get() == SWITCH_PRESSED_STATE)
    {
        /* Turn ON LED */
        LED_On();
    }
    else
    {
        /* Turn OFF LED */
        LED_Off();
    }
}
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );

    PIO_PinInterruptCallbackRegister(SWITCH_PIN, controlLED, (uintptr_t)NULL);
    PIO_PinInterruptEnable(SWITCH_PIN);

    while ( true )
    {
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/
