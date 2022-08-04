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


static bool alarmTriggered = false;

void RTC_Callback( uint32_t int_cause, uintptr_t context )
{
	if( int_cause & RTC_INT_ALARM )
	{
        alarmTriggered = true;
        LED_Set();
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
    struct tm sys_time;
    struct tm alarm_time;
    //15-01-2018 12:00:00 Monday
    sys_time.tm_hour = 12;
    sys_time.tm_sec = 00;
    sys_time.tm_min = 00;
    sys_time.tm_mon = 0;
    sys_time.tm_year = 118;
    sys_time.tm_mday = 15;
    sys_time.tm_wday = 1;
    
    //15-01-2018 12:00:20 Monday
    alarm_time.tm_hour = 12;
    alarm_time.tm_sec = 20;
    alarm_time.tm_min = 00;
    alarm_time.tm_mon = 0;
    alarm_time.tm_year = 118;
    alarm_time.tm_mday = 15;
    alarm_time.tm_wday = 1;

    printf("\n\r---------------------------------------------------------");
    printf("\n\r                    RTC Demo");
    printf("\n\r---------------------------------------------------------\n\r");

    RTC_CallbackRegister(RTC_Callback, (uintptr_t) NULL);
    
    if( RTC_TimeSet(&sys_time) == false )
    {
        printf("\n\rError setting up time\n");
        while( true );
    }
    
    if( RTC_AlarmSet(&alarm_time, RTC_ALARM_MASK_HHMISS)== false )
    {
        printf("\n\rError setting up alarm\n");
        while( true );
    }

    printf("\n\rThe Alarm will Trigger at 12:00:20\n\n\r");
    
    while( true )
    {
        RTC_TimeGet(&sys_time);
        printf("System time is:   %02d:%02d:%02d\r",sys_time.tm_hour, sys_time.tm_min, sys_time.tm_sec);
        if( alarmTriggered )
        {
            RTC_TimeGet(&sys_time);
            printf("System time is:   %02d:%02d:%02d",sys_time.tm_hour, sys_time.tm_min, sys_time.tm_sec);
            alarmTriggered = false;
            printf("\n\rAlarm Triggered !!!!!!!!\n\r");
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/
