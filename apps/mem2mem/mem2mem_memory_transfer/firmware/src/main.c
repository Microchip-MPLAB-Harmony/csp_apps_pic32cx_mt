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
#include <string.h>                     // Defines strncmp

#define LED_On      LED_Set
#define LED_Off     LED_Clear

#define TRANSFER_SIZE 1024

char srcBuffer[TRANSFER_SIZE] = {};
char dstBuffer1[TRANSFER_SIZE] = {};
volatile bool completeStatus = false;

void APP_Callback(MEM2MEM_TRANSFER_EVENT status, uintptr_t context)
{
    if(status == MEM2MEM_TRANSFER_EVENT_COMPLETE)
    {
        completeStatus = true;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    uint32_t i = 0;
    bool status = false;
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    LED_Off();

    /* Build the srcBuffer */
    while(i < TRANSFER_SIZE)
    {
        srcBuffer[i] = (uint8_t)i;
        i++;
    }
    printf("\n\r-------------------------------------------------------------");
    printf("\n\r\t\t DMAC Memory Transfer DEMO\t\t");
    printf("\n\r-------------------------------------------------------------");
    
    /* Register a callback with DMAC PLIB to get transfer complete and erro
     * events. */
    MEM2MEM0_CallbackRegister(APP_Callback, 0);
    do
    {
        status = MEM2MEM0_ChannelTransfer(&srcBuffer, &dstBuffer1, TRANSFER_SIZE, MEM2MEM_TRANSFER_WIDTH_WORD);
    } while(status != true);
    
    while ( true )
    {
        if(completeStatus == true)
        {
            completeStatus = false;
            /* Verify both the transfers */
            if( (strncmp(srcBuffer, dstBuffer1, TRANSFER_SIZE) == 0))
            {
                /* Successfully transferred the data using DMAC */
                printf("\n\r DMAC Memory Transfer Successful with Data Match\n\r");                    
                LED_On();
            }
            else
            {
                /* Data transfers done, but data mismatch occurred */
                printf("\n\r DMAC Memory Transfer Successful with Data Mismatch !!!\n\r");                    
                LED_Off();
            }
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

