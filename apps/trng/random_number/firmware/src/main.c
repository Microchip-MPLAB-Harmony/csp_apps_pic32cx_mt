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

void switch_handler( PIO_PIN pin, uintptr_t context )
{
    printf("\n\rThe generated 32-bit random number is :- \t 0x%08lx", TRNG_ReadData());
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    PIO_PinInterruptCallbackRegister(SWITCH_PIN, &switch_handler, (uintptr_t)NULL );
    SWITCH_InterruptEnable(); 
    printf("\n\r-------------------------------------------------------------");
    printf("\n\r\t\t TRNG DEMO\t\t");
    printf("\n\r-------------------------------------------------------------");
    printf("\n\rPress SWITCH to generate a 32-bit random number \t");
    while(1)
    {
    }
    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}



/*******************************************************************************
 End of File
*/