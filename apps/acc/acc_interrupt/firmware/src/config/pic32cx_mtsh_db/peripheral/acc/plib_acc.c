/*******************************************************************************
  Analog Comparator Controller (ACC) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_acc.c

  Summary
    Source for ACC peripheral library interface Implementation.

  Description
    This file defines the interface to the ACC peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    None.

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
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
// DOM-IGNORE-END

#include <stddef.h>
#include "interrupts.h"
#include "device.h"
#include "plib_acc.h"


typedef struct
{
    ACC_CALLBACK pCallback;
    uintptr_t context;
}ACC_CALLBACK_OBJ;

volatile static ACC_CALLBACK_OBJ accCallbackObj;


void ACC_Initialize(void)
{
    /* Configure mode */
    uint32_t regVal = ACC_REGS->ACC_MR & ~(ACC_MR_Msk);
    regVal = (  ACC_MR_SELPLUS_AD1  |
              ACC_MR_SELMINUS_VREFTEMP  |
              ACC_MR_EDGETYP_ANY 
              );
    ACC_REGS->ACC_MR = regVal;

    /* Configure Output mask duration */
    ACC_REGS->ACC_ACR &= ~(ACC_ACR_MSEL_Msk);

    /* Configure interrupt */
    ACC_REGS->ACC_IER |= ACC_IER_CE_Msk;

    /* Enable write protect */
    ACC_REGS->ACC_WPMR = (ACC_WPMR_WPKEY_PASSWD | ACC_WPMR_WPEN_Msk);
}


void ACC_Enable(void)
{
    /* Disable write protect */
    ACC_REGS->ACC_WPMR = (ACC_WPMR_WPKEY_PASSWD);

    /* Enable comparator */
    ACC_REGS->ACC_MR |= ACC_MR_ACEN_Msk;

    /* Enable write protect */
    ACC_REGS->ACC_WPMR = (ACC_WPMR_WPKEY_PASSWD | ACC_WPMR_WPEN_Msk);
}


void ACC_Disable(void)
{
    /* Disable write protect */
    ACC_REGS->ACC_WPMR = (ACC_WPMR_WPKEY_PASSWD);

    /* Enable comparator */
    ACC_REGS->ACC_MR &= ~ACC_MR_ACEN_Msk;

    /* Enable write protect */
    ACC_REGS->ACC_WPMR = (ACC_WPMR_WPKEY_PASSWD | ACC_WPMR_WPEN_Msk);
}


void ACC_CallbackRegister(ACC_CALLBACK pCallback, uintptr_t context)
{
    accCallbackObj.pCallback = pCallback;
    accCallbackObj.context = context;
}


void __attribute__((used)) ACC_InterruptHandler(void)
{
    uint32_t isr = ACC_REGS->ACC_ISR;
    /* Additional temporary variable used to prevent MISRA violations (Rule 13.x) */
    uintptr_t context = accCallbackObj.context;
    if ((accCallbackObj.pCallback != NULL) && ((isr & ACC_ISR_MASK_Msk) == 0U))
    {
        accCallbackObj.pCallback(((isr & ACC_ISR_SCO_Msk) != 0U), context);
    }
}
