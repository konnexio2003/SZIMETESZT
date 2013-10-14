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
#include <ti/sysbios/fatfs/ff.h>
#include <ti/sysbios/knl/Clock.h>

/* TI-RTOS Header files */
#include <ti/drivers/GPIO.h>
// #include <ti/drivers/I2C.h>
 #include <ti/drivers/SDSPI.h>
 #include <ti/drivers/SPI.h>
 #include <ti/drivers/UART.h>
// #include <ti/drivers/USBMSCHFatFs.h>
// #include <ti/drivers/Watchdog.h>
// #include <ti/drivers/WiFi.h>
#include "driverlib/hibernate.h"
#include "driverlib/sysctl.h"
#include "inc/hw_hibernate.h"
#include "utils/ustdlib.h"
/* Example/Board Header files */
#include "Board.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
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
#define CPY_BUFF_SIZE       2048

/* String conversion macro */
#define STR_(n)             #n
#define STR(n)              STR_(n)

/* Drive number used for FatFs */
#define DRIVE_NUM           0

const Char  inputfile[] = STR(DRIVE_NUM)":input.txt";
const Char outputfile[] = STR(DRIVE_NUM)":output.txt";

const Char textarray[] = \
"***********************************************************************\n"
"0         1         2         3         4         5         6         7\n"
"01234567890123456789012345678901234567890123456789012345678901234567890\n"
"This is some text to be inserted into the inputfile if there isn't     \n"
"already an existing file located on the SDCard.                        \n"
"If an inputfile already exists, or if the file was already once        \n"
"generated, then the inputfile will NOT be modified.                    \n"
"***********************************************************************\n";
typedef char fnme[13];
void timefname(struct tm* ct, fnme fn);
UChar cpy_buff[CPY_BUFF_SIZE];
Void SDTask(UArg arg0, UArg arg1)
{
    FRESULT fresult;
    SDSPI_Handle sdspiHandle;
    SDSPI_Params sdspiParams;

    /* Variables for the CIO functions */
    FIL src, dst;

    /* Variables to keep track of the file copy progress */
    UInt bytesRead = 0;
    UInt bytesWritten = 0;
    UInt filesize;
    UInt totalBytesCopied = 0;

    /* Mount and register the SD Card */
    SDSPI_Params_init(&sdspiParams);
    sdspiHandle = SDSPI_open(Board_SDSPI, DRIVE_NUM, &sdspiParams);
    if (sdspiHandle == NULL) {
        System_abort("Error starting the SD card\n");
    }
    else {
        System_printf("Drive %u is mounted\n", DRIVE_NUM);
    }

    /* Try to open the source file */
    fresult = f_open(&src, inputfile, FA_READ);
    if (fresult != FR_OK) {
        System_printf("Creating a new file \"%s\"...", inputfile);

        /* Open file for both reading and writing */
        fresult = f_open(&src, inputfile, FA_CREATE_NEW|FA_READ|FA_WRITE);
        if (fresult != FR_OK) {
            System_printf("Error: \"%s\" could not be created\n",
                    inputfile);
//mci            System_abort("Aborting...\n");
        }

        f_write(&src, textarray, strlen(textarray), &bytesWritten);
        f_sync(&src);

        /* Reset the internal file pointer */
        f_lseek(&src, 0);

        System_printf("done\n");
    }
    else {
        System_printf("Using existing copy of \"%s\"\n", inputfile);
    }

    /* Create a new file object for the file copy */
    fresult = f_open(&dst, outputfile, FA_CREATE_ALWAYS|FA_WRITE);
    if (fresult != FR_OK) {
        System_printf("Error opening \"%s\"\n", outputfile);
//mci        System_abort("Aborting...\n");
    }
    else {
        System_printf("Starting file copy\n");
    }

    /*  Copy the contents from the src to the dst */
    while (TRUE) {
        /*  Read from source file */
        fresult = f_read(&src, cpy_buff, CPY_BUFF_SIZE, &bytesRead);
        if (fresult || bytesRead == 0) {
            break; /* Error or EOF */
        }

        /*  Write to dst file */
        fresult = f_write(&dst, cpy_buff, bytesRead, &bytesWritten);
        if (fresult || bytesWritten < bytesRead) {
            System_printf("Disk Full\n");
            break; /* Error or Disk Full */
        }

        /*  Update the total number of bytes copied */
        totalBytesCopied += bytesWritten;
    }

    f_sync(&dst);

    /* Get the filesize of the source file */
    filesize = f_size(&src);

    /* Close both inputfile[] and outputfile[] */
    f_close(&src);
    f_close(&dst);

    System_printf("File \"%s\" (%u B) copied to \"%s\" (Wrote %u B)\n",
                  inputfile, filesize, outputfile, totalBytesCopied);

    /* Now output the outputfile[] contents onto the console */
    fresult = f_open(&dst, outputfile, FA_READ);
    if (fresult != FR_OK) {
        System_printf("Error opening \"%s\"\n", outputfile);
 //mci       System_abort("Aborting...\n");
    }

    /* Print file contents */
    while (TRUE) {
        /* Read from output file */
        fresult = f_read(&dst, cpy_buff, CPY_BUFF_SIZE, &bytesRead);
        if (fresult || bytesRead == 0) {
            break; /* Error or EOF */
        }
        /* Write output */
        System_printf("%s", cpy_buff);
    }

    /* Close the file */
    f_close(&dst);

    /* Stopping the SDCard */
    SDSPI_close(sdspiHandle);
    System_printf("Drive %u unmounted\n", DRIVE_NUM);

 //   BIOS_exit(0);
}




Void UartTest (UArg a0, UArg a1)
{
Char inputbuf[60];
int db;
const Char testPrompt[] = "\fTest 012345:\r\n";
/* Create a UART with data processing off. */
	uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_OFF;
    uartParams.dataLength=UART_LEN_8;
    uartParams.baudRate = 4800; //57600 4800
    uartParams.readTimeout = 2000;
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
    uartParams.dataLength=UART_LEN_8;
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
//ELM
//UART_write(uart6, "ATWS\r", 5);
UART_write(uart6, "ATZ\r", 4);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
UART_read(uart6, inputbuf, 30);
GPIO_write(Board_GSM_ONOFF,Board_PIN_ON);
Task_sleep(100);
GPIO_write(Board_GSM_ONOFF,Board_PIN_OFF);
Task_sleep(2000);
GPIO_write(Board_GSM_ONOFF,Board_PIN_ON);
Task_sleep(1000);
UART_write(uart4, testPrompt, sizeof(testPrompt));
while (TRUE) {
db=UART_read(uart3, inputbuf, 110);
if (db==0)
 	{
	GPIO_write(Board_GSM_ONOFF,Board_PIN_ON);
	Task_sleep(100);
	GPIO_write(Board_GSM_ONOFF,Board_PIN_OFF);
	Task_sleep(2000);
	GPIO_write(Board_GSM_ONOFF,Board_PIN_ON);
	Task_sleep(1000);
	}
System_printf(inputbuf);
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
unsigned long ulRTC;
unsigned long ulR1;
struct tm CLKtime;
fnme ttt;
    /* Call board init functions. */
    Board_initGeneral();
    Board_initGPIO();
    // Board_initDMA();
    // Board_initI2C();
     Board_initSDSPI();
     Board_initSPI();
     Board_initUART();
    // Board_initUSB(Board_USBDEVICE);
    // Board_initUSBMSCHFatFs();
    // Board_initWatchdog();
    // Board_initWiFi();
SysCtlPeripheralEnable(SYSCTL_PERIPH_HIBERNATE);
//
// Enable the Hibernate module to run.
//
HibernateEnableExpClk(SysCtlClockGet());
    /* Turn on user LED */
    GPIO_write(Board_PW_OBD , Board_LED_ON);
    GPIO_write(Board_SD_ON , Board_LED_ON);
    GPIO_write(Board_PWRRF , Board_LED_ON);
    GPIO_write(Board_PWRTELIT_EN , Board_LED_ON);
    GPIO_write(Board_LED1 , Board_LED_ON);

// The hibernate peripheral trim register must be set per silicon
// erratum 2.1

HibernateRTCTrimSet(0x7FFF);
//
// Start the RTC running.  If it was already running then this will have
// no effect.
//
HibernateRTCEnable();
//
// Get the current time in seconds from the RTC.
//
ulRTC = HibernateRTCGet();
ulR1   = HibernateRTCSSGet();
//
// Convert the RTC time to a time structure.
//
ulocaltime(ulRTC, &CLKtime);
timefname(&CLKtime,ttt);
System_printf("RTC Time is: %4u %2u.%2u. %2u:%2u %2us    %6u\n",
CLKtime.tm_year,CLKtime.tm_mon,CLKtime.tm_mday,CLKtime.tm_hour,CLKtime.tm_min,CLKtime.tm_sec, 1000*ulR1/32768);
System_printf("Starting the example\nSystem provider is set to SysMin, halt the target and use ROV to view output.\n");
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
void timefname(struct tm*  ct, fnme fn)
{

	usprintf(fn,"%2u%002u%002u.%002u\n",ct->tm_year,ct->tm_mon,ct->tm_mday,ct->tm_hour);

}
