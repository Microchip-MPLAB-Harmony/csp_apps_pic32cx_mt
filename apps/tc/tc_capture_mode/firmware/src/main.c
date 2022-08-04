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

#define CMP_VAL_INCREMENT (100U)

/* Calculated duty cycle of the input waveform in %*/
uint32_t duty;
/* Calculated frequency of the input waveform in Hz*/
uint32_t frequency;

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    uint16_t period, on_time, off_time;
    uint16_t cmp_period, cmp_val=0; 
    
    /* Initialize all modules */
    SYS_Initialize ( NULL );

    SYSTICK_TimerStart();
    cmp_period = TC0_CH0_ComparePeriodGet();
    TC0_CH0_CompareStart();
    TC0_CH1_CaptureStart();

    printf("\n\r---------------------------------------------------------");
    printf("\n\r                    TC Capture Demo                 ");
    printf("\n\r---------------------------------------------------------\n\r"); 
    
    printf("Connect input signal to TC0_CH1 PA31 Pin \n\n\r");
    
    while ( true )
    {
        /* Change the duty cycle of the input waveform  */
        cmp_val += CMP_VAL_INCREMENT;
        if (cmp_val >= cmp_period)
        {
            cmp_val = CMP_VAL_INCREMENT;
        }
        TC0_CH0_CompareASet(cmp_val);
        
        /* Wait for compare event */
        while((TC0_CH1_CaptureStatusGet() & TC_CAPTURE_B_LOAD) != TC_CAPTURE_B_LOAD);
        
        /* Read Captured values */ 
        off_time = TC0_CH1_CaptureAGet();
        period = TC0_CH1_CaptureBGet();

        /* Compute Duty Cycle in percentage and Frequency in Hz */
        on_time = period - off_time;
        duty = ((on_time) * 100U) / period;
        frequency = (TC0_CH1_CaptureFrequencyGet() / period);
        
        /* Send the measured data to console for display  */
        printf("Frequency of waveform: %d Hz \t Duty Cycle of waveform: %d %%", (int)frequency, (int)duty);
        printf("\r\n"); 
                
        /* Wait for 1 second */ 
        SYSTICK_DelayMs(1000);
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

