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

#define ADC_VREF               (3.3f)

uint16_t adc_ch1_count, adc_ch2_count;

float adc_ch1_voltage, adc_ch2_voltage;

volatile bool result_ready = false;

/* This function is called after conversion of last channel in the user sequence */
void ADC_EventHandler(uint32_t interruptStatus, uint32_t eocInterruptStatus, uintptr_t context)
{
    /* Read the result of 3 channels*/
    adc_ch1_count = ADC_ChannelResultGet(ADC_CH1);
    adc_ch2_count = ADC_ChannelResultGet(ADC_CH2);
    result_ready = true;

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
    
    SYSTICK_TimerStart();
    /* Register callback function for ADC end of conversion interrupt*/
    ADC_CallbackRegister(ADC_EventHandler, (uintptr_t)NULL);
    
    printf("\n\r---------------------------------------------------------");
    printf("\n\r                    ADC User Sequence Demo                 ");
    printf("\n\r---------------------------------------------------------\n\r");
    printf("CH1 Count  CH1 Voltage  CH2 Count  CH2 Voltage  \n\r");           

    /* Start ADC conversion */
    ADC_ConversionStart();

    while ( true )
    {
        /* Check if result is ready to be transmitted to console */
        if (result_ready == true)
        {
            adc_ch1_voltage = (float)adc_ch1_count * ADC_VREF/4095U;
            adc_ch2_voltage = (float)adc_ch2_count * ADC_VREF/4095U;
            printf("0x%03x      %0.2f V       0x%03x      %0.2f V   \t\r",
                    adc_ch1_count, adc_ch1_voltage, adc_ch2_count, adc_ch2_voltage);
                
            result_ready = false;
 
            SYSTICK_DelayMs(1000);

            /* Start ADC conversion */
            ADC_ConversionStart();
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}
