/*
 * Copyright (c) 2013, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== empty.c ========
 */
/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
// #include <ti/drivers/I2C.h>
 #include <ti/drivers/SDSPI.h>
 #include <ti/drivers/SPI.h>
 #include <ti/drivers/UART.h>
// #include <ti/drivers/USBMSCHFatFs.h>
// #include <ti/drivers/Watchdog.h>
// #include <ti/drivers/WiFi.h>

/* Example/Board Header files */
#include "Board.h"
/* String conversion macro */
#define STR_(n)             #n
#define STR(n)              STR_(n)
#define NUL     '\0'
#define CR		'\n'
UART_Handle uart1,uart2,uart3,uart4,uart5,uart6,uart7;
UART_Params uartParams;

#define SPI_MSG_LENGTH    26

/* Allocate buffers in .dma section of memory for concerto devices */
#ifdef MWARE
#pragma DATA_SECTION(masterRxBuffer, ".dma");
#pragma DATA_SECTION(masterTxBuffer, ".dma");
#pragma DATA_SECTION(slaveRxBuffer, ".dma");
#pragma DATA_SECTION(slaveTxBuffer, ".dma");
#endif

UChar masterRxBuffer[SPI_MSG_LENGTH];
UChar masterTxBuffer[SPI_MSG_LENGTH] = "Hello, this is master SPI";

UChar slaveRxBuffer[SPI_MSG_LENGTH];
UChar slaveTxBuffer[SPI_MSG_LENGTH] =  "Hello, this is slave SPI";

Void slaveTaskFxn (UArg arg0, UArg arg1)
{
    SPI_Handle slaveSpi;
    SPI_Params slaveSpiParams;
    SPI_Transaction slaveTransaction;
    UInt transferOK;

    /* Initialize SPI handle with slave mode */
    SPI_Params_init(&slaveSpiParams);
    slaveSpiParams.mode = SPI_SLAVE;
    slaveSpi = SPI_open(Board_SPI1, &slaveSpiParams);
    if (slaveSpi == NULL) {
        System_abort("Error initializing SPI\n");
    }
    else {
        System_printf("SPI slave initialized\n");
    }

    /* Initialize slave SPI transaction structure */
    slaveTransaction.count = SPI_MSG_LENGTH;
    slaveTransaction.txBuf = (Ptr)slaveTxBuffer;
    slaveTransaction.rxBuf = (Ptr)slaveRxBuffer;

    /* Initiate SPI transfer */
    transferOK = SPI_transfer(slaveSpi, &slaveTransaction);

    if(transferOK) {
        /* Print contents of slave receive buffer */
        System_printf("Slave: %s\n", slaveRxBuffer);
    }
    else {
        System_printf("Unsuccessful slave SPI transfer");
    }
    System_flush();
    /* Deinitialize SPI */
    SPI_close(slaveSpi);
}
/*
 *  ======== masterTaskFxn ========
 *  Task function for master task.
 *
 *  This task runs at a lower priority after the slave
 *  task to ensure it is ready for a transaction.
 *  Master SPI sends a message to slave and also
 *  receives message from slave. Task for this function
 *  is created statically. See the project's .cfg
 *  file.
 */
Void masterTaskFxn (UArg arg0, UArg arg1)
{
    SPI_Handle masterSpi;
    SPI_Transaction masterTransaction;
    UInt transferOK;

    /* Initialize SPI handle as default master */
    masterSpi = SPI_open(Board_SPI2, NULL);
    if (masterSpi == NULL) {
        System_abort("Error initializing SPI\n");
    }
    else {
        System_printf("SPI master initialized\n");
    }

    /* Initialize master SPI transaction structure */
    masterTransaction.count = SPI_MSG_LENGTH;
    masterTransaction.txBuf = (Ptr)masterTxBuffer;
    masterTransaction.rxBuf = (Ptr)masterRxBuffer;

    /* Initiate SPI transfer */
    transferOK = SPI_transfer(masterSpi, &masterTransaction);

    if(transferOK) {
        /* Print contents of master receive buffer */
        System_printf("Master: %s\n", masterRxBuffer);
    }
    else {
        System_printf("Unsuccessful master SPI transfer");
    }

    /* Deinitialize SPI */
    SPI_close(masterSpi);

    System_printf("Done\n");
    System_flush();

 //   BIOS_exit(0);
}

Void UartTest (UArg a0, UArg a1)
{
//Char inputbuf[20];
char testchar=0;
char Measurebyte=0x55;
const Char testPrompt[] = "\fTest 012345:\r\n";
/* Create a UART with data processing off. */
	uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uartParams.baudRate = 4800; //57600 4800
      //uartParams.readTimeout = 2000;
        uart1 = UART_open(UART1_GSM , &uartParams);
        uart2 = UART_open(UART2_GPS, &uartParams);
        uart3 = UART_open(UART3_GPSTRCACE, &uartParams);
        uart4 = UART_open(UART4_PORT, &uartParams);
        uart5 = UART_open(UART5_RF, &uartParams);
        uart7 = UART_open(UART7_USB, &uartParams);
        uartParams.writeDataMode = UART_DATA_BINARY;
        uartParams.readDataMode = UART_DATA_TEXT;
        uartParams.readReturnMode = UART_RETURN_NEWLINE;
        uartParams.readEcho = UART_ECHO_OFF;
        uartParams.baudRate = 9600; //57600 4800
        uartParams.readTimeout = 5000;
        uart6 = UART_open(UART6_ELM, &uartParams);

        if (uart1 == NULL) {
        System_abort("Error opening the UART1");
        }
        if (uart2 == NULL) {
        System_abort("Error opening the UART2");
        }
        if (uart3 == NULL) {
        System_abort("Error opening the UART3");
        }
        if (uart4 == NULL) {
        System_abort("Error opening the UART4");
        }
        if (uart5 == NULL) {
        System_abort("Error opening the UART5");
        }
        if (uart6 == NULL) {
        System_abort("Error opening the UART6");
        }
        if (uart7 == NULL) {
        System_abort("Error opening the UART7");
        }
UART_write(uart4, testPrompt, sizeof(testPrompt));
while (TRUE) {

	UART_write(uart1, &testchar, 1);
	UART_write(uart2, &testchar, 1);
	UART_write(uart3, &testchar, 1);
	UART_write(uart4, &Measurebyte, 1);
	UART_write(uart5, &testchar, 1);
	UART_write(uart6, &testchar, 1);
	UART_write(uart7, &testchar, 1);
    testchar++;
    Task_sleep(100);
    }
}
Void PortTest (UArg a0, UArg a1)
{
char i;



	 while (TRUE) {
		 //teszt latch
		 for (i=0;i<4;i++) {
			 GPIO_write(Board_DIOCLK , Board_PIN_ON );
		 	 GPIO_write(Board_DIOA0A1, (i<<4));
			// GPIO_toggle(Board_DIODATA);
			 GPIO_write(Board_DIODATA , Board_PIN_ON );
			 GPIO_write(Board_DIOCLK , Board_PIN_OFF );
			 Task_sleep(100);
			 GPIO_write(Board_DIOCLK , Board_PIN_ON );
			 Task_sleep(100);
			 GPIO_write(Board_DIOCLK , Board_PIN_OFF );
		 }
		 for (i=0;i<4;i++) {
		 			 GPIO_write(Board_DIOCLK , Board_PIN_ON );
		 		 	 GPIO_write((Board_DIOA0A1  ), (i << 4));
		 			// GPIO_toggle(Board_DIODATA);
		 		 	 GPIO_write(Board_DIODATA , Board_PIN_OFF );
		 			 GPIO_write(Board_DIOCLK , Board_PIN_OFF );
		 			 Task_sleep(100);
		 			 GPIO_write(Board_DIOCLK , Board_PIN_ON );
		 			 Task_sleep(100);
		 			 GPIO_write(Board_DIOCLK , Board_PIN_OFF );
		 		 }

	 }
}




/*
 *  ======== main ========
 */
Int main(Void)
{
    /* Call board init functions. */
    Board_initGeneral();
    Board_initGPIO();
    // Board_initDMA();
    // Board_initI2C();
   //  Board_initSDSPI();
     Board_initSPI();
     Board_initUART();
    // Board_initUSB(Board_USBDEVICE);
    // Board_initUSBMSCHFatFs();
    // Board_initWatchdog();
    // Board_initWiFi();

    /* Turn on user LED */
    GPIO_write(Board_PW_OBD , Board_LED_ON);
    GPIO_write(Board_SD_ON , Board_LED_ON);
    GPIO_write(Board_PWRRF , Board_LED_ON);
    GPIO_write(Board_PWRTELIT_EN , Board_LED_ON);
    GPIO_write(Board_LED1 , Board_LED_ON);

    System_printf("Starting the example\nSystem provider is set to SysMin. "
                  "Halt the target and use ROV to view output.\n");
    /* SysMin will only print to the console when you call flush or exit */
    System_flush();

    /* Start BIOS */
    BIOS_start();

    return (0);
}
Void GPIOTicker(UArg arg0)
{
GPIO_toggle(Board_LED1 );
GPIO_toggle(Board_LED2);
GPIO_toggle(Board_LED3);
GPIO_toggle(Board_LED4);
GPIO_toggle(Board_LED5);
GPIO_toggle(Board_LED6);
}
