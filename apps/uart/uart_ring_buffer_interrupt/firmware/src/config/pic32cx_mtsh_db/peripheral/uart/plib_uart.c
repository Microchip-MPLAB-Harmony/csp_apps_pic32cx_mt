/*******************************************************************************
  UART PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_uart.c

  Summary:
    UART PLIB Implementation File

  Description:
    None

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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

#include "device.h"
#include "plib_uart.h"
#include "interrupts.h"

// *****************************************************************************
// *****************************************************************************
// Section: UART Implementation
// *****************************************************************************
// *****************************************************************************

UART_RING_BUFFER_OBJECT uartObj;

#define UART_READ_BUFFER_SIZE      20
/* Disable Read, Overrun, Parity and Framing error interrupts */
#define UART_RX_INT_DISABLE()      UART_REGS->UART_IDR = (UART_IDR_RXRDY_Msk | UART_IDR_FRAME_Msk | UART_IDR_PARE_Msk | UART_IDR_OVRE_Msk);
/* Enable Read, Overrun, Parity and Framing error interrupts */
#define UART_RX_INT_ENABLE()       UART_REGS->UART_IER = (UART_IER_RXRDY_Msk | UART_IER_FRAME_Msk | UART_IER_PARE_Msk | UART_IER_OVRE_Msk);

static uint8_t UART_ReadBuffer[UART_READ_BUFFER_SIZE];

#define UART_WRITE_BUFFER_SIZE     128
#define UART_TX_INT_DISABLE()      UART_REGS->UART_IDR = UART_IDR_TXEMPTY_Msk;
#define UART_TX_INT_ENABLE()       UART_REGS->UART_IER = UART_IER_TXEMPTY_Msk;

static uint8_t UART_WriteBuffer[UART_WRITE_BUFFER_SIZE];

void UART_Initialize( void )
{
    /* Reset UART */
    UART_REGS->UART_CR = (UART_CR_RSTRX_Msk | UART_CR_RSTTX_Msk | UART_CR_RSTSTA_Msk);

    /* Enable UART */
    UART_REGS->UART_CR = (UART_CR_TXEN_Msk | UART_CR_RXEN_Msk);

    /* Configure UART mode */
    UART_REGS->UART_MR = ((UART_MR_PAR_NO) | (0 << UART_MR_FILTER_Pos));

    /* Configure UART Baud Rate */
    UART_REGS->UART_BRGR = UART_BRGR_CD(65);

    /* Initialize instance object */
    uartObj.rdCallback = NULL;
    uartObj.rdInIndex = 0;
	uartObj.rdOutIndex = 0;
    uartObj.isRdNotificationEnabled = false;
    uartObj.isRdNotifyPersistently = false;
    uartObj.rdThreshold = 0;
    uartObj.wrCallback = NULL;
    uartObj.wrInIndex = 0;
	uartObj.wrOutIndex = 0;
    uartObj.isWrNotificationEnabled = false;
    uartObj.isWrNotifyPersistently = false;
    uartObj.wrThreshold = 0;

    /* Enable receive interrupt */
    UART_RX_INT_ENABLE()
}

bool UART_SerialSetup( UART_SERIAL_SETUP *setup, uint32_t srcClkFreq )
{
    bool status = false;
    uint32_t baud;
    uint32_t brgVal = 0;
    uint32_t uartMode;

    if (setup != NULL)
    {
        baud = setup->baudRate;

        if(srcClkFreq == 0)
        {
            srcClkFreq = UART_FrequencyGet();
        }

        /* Calculate BRG value */
        brgVal = srcClkFreq / (16 * baud);

        /* If the target baud rate is acheivable using this clock */
        if (brgVal <= 65535)
        {
            /* Configure UART mode */
            uartMode = UART_REGS->UART_MR;
            uartMode &= ~UART_MR_PAR_Msk;
            UART_REGS->UART_MR = uartMode | setup->parity ;

            /* Configure UART Baud Rate */
            UART_REGS->UART_BRGR = UART_BRGR_CD(brgVal);

            status = true;
        }
    }

    return status;
}

static void UART_ErrorClear( void )
{
    uint8_t dummyData = 0u;

    UART_REGS->UART_CR = UART_CR_RSTSTA_Msk;

    /* Flush existing error bytes from the RX FIFO */
    while( UART_SR_RXRDY_Msk == (UART_REGS->UART_SR & UART_SR_RXRDY_Msk) )
    {
        dummyData = (UART_REGS->UART_RHR & UART_RHR_RXCHR_Msk);
    }

    /* Ignore the warning */
    (void)dummyData;
}

UART_ERROR UART_ErrorGet( void )
{
    UART_ERROR errors = UART_ERROR_NONE;
    uint32_t status = UART_REGS->UART_SR;

    errors = (UART_ERROR)(status & (UART_SR_OVRE_Msk | UART_SR_PARE_Msk | UART_SR_FRAME_Msk));

    if(errors != UART_ERROR_NONE)
    {
        UART_ErrorClear();
    }

    /* All errors are cleared, but send the previous error state */
    return errors;
}

/* This routine is only called from ISR. Hence do not disable/enable USART interrupts. */
static inline bool UART_RxPushByte(uint8_t rdByte)
{
    uint32_t tempInIndex;
    bool isSuccess = false;

    tempInIndex = uartObj.rdInIndex + 1;

    if (tempInIndex >= UART_READ_BUFFER_SIZE)
    {
        tempInIndex = 0;
    }

    if (tempInIndex == uartObj.rdOutIndex)
    {
        /* Queue is full - Report it to the application. Application gets a chance to free up space by reading data out from the RX ring buffer */
        if(uartObj.rdCallback != NULL)
        {
            uartObj.rdCallback(UART_EVENT_READ_BUFFER_FULL, uartObj.rdContext);
        }

        /* Read the indices again in case application has freed up space in RX ring buffer */
        tempInIndex = uartObj.rdInIndex + 1;

        if (tempInIndex >= UART_READ_BUFFER_SIZE)
        {
            tempInIndex = 0;
        }

    }

    if (tempInIndex != uartObj.rdOutIndex)
    {
        UART_ReadBuffer[uartObj.rdInIndex] = rdByte;
        uartObj.rdInIndex = tempInIndex;
        isSuccess = true;
    }
    else
    {
        /* Queue is full. Data will be lost. */
    }

    return isSuccess;
}

/* This routine is only called from ISR. Hence do not disable/enable USART interrupts. */
static void UART_ReadNotificationSend(void)
{
    uint32_t nUnreadBytesAvailable;

    if (uartObj.isRdNotificationEnabled == true)
    {
        nUnreadBytesAvailable = UART_ReadCountGet();

        if(uartObj.rdCallback != NULL)
        {
            if (uartObj.isRdNotifyPersistently == true)
            {
                if (nUnreadBytesAvailable >= uartObj.rdThreshold)
                {
                    uartObj.rdCallback(UART_EVENT_READ_THRESHOLD_REACHED, uartObj.rdContext);
                }
            }
            else
            {
                if (nUnreadBytesAvailable == uartObj.rdThreshold)
                {
                    uartObj.rdCallback(UART_EVENT_READ_THRESHOLD_REACHED, uartObj.rdContext);
                }
            }
        }
    }
}

size_t UART_Read(uint8_t* pRdBuffer, const size_t size)
{
    size_t nBytesRead = 0;
	uint32_t rdOutIndex;
	uint32_t rdInIndex;

    while (nBytesRead < size)
    {
        UART_RX_INT_DISABLE();
		
		rdOutIndex = uartObj.rdOutIndex;
		rdInIndex = uartObj.rdInIndex;

        if (rdOutIndex != rdInIndex)
        {
            pRdBuffer[nBytesRead++] = UART_ReadBuffer[uartObj.rdOutIndex++];

            if (uartObj.rdOutIndex >= UART_READ_BUFFER_SIZE)
            {
                uartObj.rdOutIndex = 0;
            }
            UART_RX_INT_ENABLE();
        }
        else
        {
            UART_RX_INT_ENABLE();
            break;
        }
    }

    return nBytesRead;
}

size_t UART_ReadCountGet(void)
{
    size_t nUnreadBytesAvailable;
	uint32_t rdInIndex;
	uint32_t rdOutIndex;
    
	/* Take  snapshot of indices to avoid creation of critical section */
	rdInIndex = uartObj.rdInIndex;
	rdOutIndex = uartObj.rdOutIndex;

    if ( rdInIndex >=  rdOutIndex)
    {
        nUnreadBytesAvailable =  rdInIndex - rdOutIndex;
    }
    else
    {
        nUnreadBytesAvailable =  (UART_READ_BUFFER_SIZE -  rdOutIndex) + rdInIndex;
    }
    
    return nUnreadBytesAvailable;
}

size_t UART_ReadFreeBufferCountGet(void)
{
    return (UART_READ_BUFFER_SIZE - 1) - UART_ReadCountGet();
}

size_t UART_ReadBufferSizeGet(void)
{
    return (UART_READ_BUFFER_SIZE - 1);
}

bool UART_ReadNotificationEnable(bool isEnabled, bool isPersistent)
{
    bool previousStatus = uartObj.isRdNotificationEnabled;

    uartObj.isRdNotificationEnabled = isEnabled;

    uartObj.isRdNotifyPersistently = isPersistent;

    return previousStatus;
}

void UART_ReadThresholdSet(uint32_t nBytesThreshold)
{
    if (nBytesThreshold > 0)
    {
        uartObj.rdThreshold = nBytesThreshold;
    }
}

void UART_ReadCallbackRegister( UART_RING_BUFFER_CALLBACK callback, uintptr_t context)
{
    uartObj.rdCallback = callback;

    uartObj.rdContext = context;
}

/* This routine is only called from ISR. Hence do not disable/enable USART interrupts. */
static bool UART_TxPullByte(uint8_t* pWrByte)
{
    bool isSuccess = false;
	uint32_t wrOutIndex = uartObj.wrOutIndex;
	uint32_t wrInIndex = uartObj.wrInIndex;

    if (wrOutIndex != wrInIndex)
    {
        *pWrByte = UART_WriteBuffer[uartObj.wrOutIndex++];

        if (uartObj.wrOutIndex >= UART_WRITE_BUFFER_SIZE)
        {
            uartObj.wrOutIndex = 0;
        }
        isSuccess = true;
    }

    return isSuccess;
}

static inline bool UART_TxPushByte(uint8_t wrByte)
{
    uint32_t tempInIndex;
    bool isSuccess = false;

    tempInIndex = uartObj.wrInIndex + 1;

    if (tempInIndex >= UART_WRITE_BUFFER_SIZE)
    {
        tempInIndex = 0;
    }
    if (tempInIndex != uartObj.wrOutIndex)
    {
        UART_WriteBuffer[uartObj.wrInIndex] = wrByte;
        uartObj.wrInIndex = tempInIndex;
        isSuccess = true;
    }
    else
    {
        /* Queue is full. Report Error. */
    }

    return isSuccess;
}

/* This routine is only called from ISR. Hence do not disable/enable USART interrupts. */
static void UART_WriteNotificationSend(void)
{
    uint32_t nFreeWrBufferCount;

    if (uartObj.isWrNotificationEnabled == true)
    {
        nFreeWrBufferCount = UART_WriteFreeBufferCountGet();

        if(uartObj.wrCallback != NULL)
        {
            if (uartObj.isWrNotifyPersistently == true)
            {
                if (nFreeWrBufferCount >= uartObj.wrThreshold)
                {
                    uartObj.wrCallback(UART_EVENT_WRITE_THRESHOLD_REACHED, uartObj.wrContext);
                }
            }
            else
            {
                if (nFreeWrBufferCount == uartObj.wrThreshold)
                {
                    uartObj.wrCallback(UART_EVENT_WRITE_THRESHOLD_REACHED, uartObj.wrContext);
                }
            }
        }
    }
}

static size_t UART_WritePendingBytesGet(void)
{
    size_t nPendingTxBytes;
	
	/* Take a snapshot of indices to avoid creation of critical section */
	uint32_t wrOutIndex = uartObj.wrOutIndex;
	uint32_t wrInIndex = uartObj.wrInIndex;

    if ( wrInIndex >=  wrOutIndex)
    {
        nPendingTxBytes =  wrInIndex -  wrOutIndex;
    }
    else
    {
        nPendingTxBytes =  (UART_WRITE_BUFFER_SIZE -  wrOutIndex) + wrInIndex;
    }

    return nPendingTxBytes;
}

size_t UART_WriteCountGet(void)
{
    size_t nPendingTxBytes;    

    nPendingTxBytes = UART_WritePendingBytesGet();

    return nPendingTxBytes;
}

size_t UART_Write(uint8_t* pWrBuffer, const size_t size )
{
    size_t nBytesWritten  = 0;

    UART_TX_INT_DISABLE();

    while (nBytesWritten < size)
    {
        if (UART_TxPushByte(pWrBuffer[nBytesWritten]) == true)
        {
            nBytesWritten++;
        }
        else
        {
            /* Queue is full, exit the loop */
            break;
        }
    }

    /* Check if any data is pending for transmission */
    if (UART_WritePendingBytesGet() > 0)
    {
        /* Enable TX interrupt as data is pending for transmission */
        UART_TX_INT_ENABLE();
    }

    return nBytesWritten;
}

size_t UART_WriteFreeBufferCountGet(void)
{
    return (UART_WRITE_BUFFER_SIZE - 1) - UART_WriteCountGet();
}

size_t UART_WriteBufferSizeGet(void)
{
    return (UART_WRITE_BUFFER_SIZE - 1);
}

bool UART_TransmitComplete(void)
{
    if(UART_SR_TXEMPTY_Msk == (UART_REGS->UART_SR & UART_SR_TXEMPTY_Msk))
    {
        return true;
    }
	else
	{
		return false;
	}
}

bool UART_WriteNotificationEnable(bool isEnabled, bool isPersistent)
{
    bool previousStatus = uartObj.isWrNotificationEnabled;

    uartObj.isWrNotificationEnabled = isEnabled;

    uartObj.isWrNotifyPersistently = isPersistent;

    return previousStatus;
}

void UART_WriteThresholdSet(uint32_t nBytesThreshold)
{
    if (nBytesThreshold > 0)
    {
        uartObj.wrThreshold = nBytesThreshold;
    }
}

void UART_WriteCallbackRegister( UART_RING_BUFFER_CALLBACK callback, uintptr_t context)
{
    uartObj.wrCallback = callback;

    uartObj.wrContext = context;
}

static void UART_ISR_RX_Handler( void )
{
    /* Keep reading until there is a character availabe in the RX FIFO */
    while(UART_SR_RXRDY_Msk == (UART_REGS->UART_SR& UART_SR_RXRDY_Msk))
    {
        if (UART_RxPushByte( (uint8_t )(UART_REGS->UART_RHR& UART_RHR_RXCHR_Msk) ) == true)
        {
            UART_ReadNotificationSend();
        }
        else
        {
            /* UART RX buffer is full */
        }
    }
}

static void UART_ISR_TX_Handler( void )
{
    uint8_t wrByte;

    /* Keep writing to the TX FIFO as long as there is space */
    while(UART_SR_TXRDY_Msk == (UART_REGS->UART_SR & UART_SR_TXRDY_Msk))
    {
        if (UART_TxPullByte(&wrByte) == true)
        {
            UART_REGS->UART_THR |= wrByte;

            /* Send notification */
            UART_WriteNotificationSend();
        }
        else
        {
            /* Nothing to transmit. Disable the data register empty interrupt. */
            UART_TX_INT_DISABLE();
            break;
        }
    }
}

void UART_InterruptHandler( void )
{
    /* Error status */
    uint32_t errorStatus = (UART_REGS->UART_SR & (UART_SR_OVRE_Msk | UART_SR_FRAME_Msk | UART_SR_PARE_Msk));

    if(errorStatus != 0)
    {
        /* Client must call UARTx_ErrorGet() function to clear the errors */

        /* Disable Read, Overrun, Parity and Framing error interrupts */

        UART_REGS->UART_IDR = (UART_IDR_RXRDY_Msk | UART_IDR_FRAME_Msk | UART_IDR_PARE_Msk | UART_IDR_OVRE_Msk);

        /* UART errors are normally associated with the receiver, hence calling
         * receiver callback */
        if( uartObj.rdCallback != NULL )
        {
            uartObj.rdCallback(UART_EVENT_READ_ERROR, uartObj.rdContext);
        }
    }

    /* Receiver status */
    if(UART_SR_RXRDY_Msk == (UART_REGS->UART_SR & UART_SR_RXRDY_Msk))
    {
        UART_ISR_RX_Handler();
    }

    /* Transmitter status */
    if(UART_SR_TXRDY_Msk == (UART_REGS->UART_SR & UART_SR_TXRDY_Msk))
    {
        UART_ISR_TX_Handler();
    }

}