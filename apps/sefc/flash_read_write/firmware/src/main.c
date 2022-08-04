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
#include <string.h>

#define buffer_size                 128

#define LED_ON                      LED_Set
#define LED_OFF                     LED_Clear
#define LED_TOGGLE                  LED_Toggle

void populate_buffer(uint32_t* data)
{
    int i = 0;

    for (i = 0; i < 128; i++)
    {
        *(data + i) = i;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************


int main ( void )
{
    uint32_t data [buffer_size] = {0};
    uint32_t start_address = 0x1001E00;

    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    /*Populate random data to programmed*/
    populate_buffer(data);
    
    while(SEFC0_IsBusy());
    
    /*Erase the sector*/
    SEFC0_SectorErase(start_address);
    
    while(SEFC0_IsBusy());

    /*Program 512 byte page*/
    SEFC0_PageWrite(data, start_address);
    
    /* Verify the programmed content*/
    if (!memcmp(data, (void *)start_address, sizeof(data)))
    {
        LED_ON();
    }
    
    while ( true )
    {
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

