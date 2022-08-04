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


/***************************************
 * Check PWM outputs on pins
 * Channel 0 PWMH - PA00
 * Channel 0 PWML - PA19
 * Channel 1 PWMH - PA02
 * Channel 1 PWML - PD25
 * Channel 2 PWMH - PC19
 * Channel 2 PWML - PD26
***************************************/

/* Duty cycle increment value */
#define DUTY_INCREMENT (10U)

/* Save PWM period */
uint16_t period;

/* This function is called after PWM0 counter event */
void PWM_CounterEventHandler(uint32_t status, uintptr_t context)
{
    /* duty cycle values */
    static uint16_t duty0 = 1250U;
    static uint16_t duty2 = 2500U;

    PWM_ChannelDutySet(PWM_CHANNEL_0, duty0);
    PWM_ChannelDutySet(PWM_CHANNEL_2, duty2);
    
    /* Increment duty cycle values */
    duty0 += DUTY_INCREMENT;
    duty2 += DUTY_INCREMENT;
    
    if (duty0 > period)
        duty0 = 0U;
    if (duty2 > period)
        duty2 = 0U;
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
    
    /* Register callback function for Channel 0 counter event */
    PWM_CallbackRegister(PWM_CounterEventHandler, (uintptr_t)NULL);
    
    /* Read the period */
    period = PWM_ChannelPeriodGet(PWM_CHANNEL_0);
    
    /* Start all synchronous channels by starting channel 0*/
    PWM_ChannelsStart(PWM_CHANNEL_0_MASK);

    while ( true )
    {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        SYS_Tasks ( );
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

