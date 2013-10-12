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
 *  ======== EKS_LM4F232.c ========
 *  This file is responsible for setting up the board specific items for the
 *  EKS_LM4F232 board.
 *
 *  The following defines are used to determine which TI-RTOS peripheral drivers
 *  to include:
 *     TI_DRIVERS_GPIO_INCLUDED
 *     TI_DRIVERS_I2C_INCLUDED
 *     TI_DRIVERS_SDSPI_INCLUDED
 *     TI_DRIVERS_SPI_INCLUDED
 *     TI_DRIVERS_UART_INCLUDED
 *     TI_DRIVERS_USBMSCHFATFS_INCLUDED
 *     TI_DRIVERS_WATCHDOG_INCLUDED
 *     TI_DRIVERS_WIFI_INCLUDED
 *  These defines are created when a useModule is done on the driver in the
 *  application's .cfg file. The actual #define is in the application
 *  generated header file that is brought in via the xdc/cfg/global.h.
 *  For example the following in the .cfg file
 *     var GPIO = xdc.useModule('ti.drivers.GPIO');
 *  Generates the following
 *     #define TI_DRIVERS_GPIO_INCLUDED 1
 *  If there is no useModule of ti.drivers.GPIO, the constant is set to 0.
 *
 *  Note: a useModule is generated in the .cfg file via the graphical
 *  configuration tool when the "Add xxx to my configuration" is checked
 *  or "Use xxx" is selected.
 */

#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_ints.h>
#include <inc/hw_gpio.h>

#include <driverlib/gpio.h>
#include <driverlib/sysctl.h>
#include <driverlib/i2c.h>
#include <driverlib/ssi.h>
#include <driverlib/udma.h>
#include <driverlib/pin_map.h>

#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/hal/Hwi.h>

#include "EKS_LM4F232.h"

#define GPIO_PORTF_LOCK_R       (*((volatile uint32_t *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile uint32_t *)0x40025524))
#define GPIO_PORTD_LOCK_R       (*((volatile uint32_t *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile uint32_t *)0x40007524))

#pragma DATA_ALIGN(EKS_LM4F232_DMAControlTable, 1024)
static tDMAControlTable EKS_LM4F232_DMAControlTable[32];
static int DMA_count = -1;

/*
 *  ======== EKS_LM4F232_errorDMAHwi ========
 */
static Void EKS_LM4F232_errorDMAHwi(UArg arg)
{
    System_printf("DMA error code: %d\n", uDMAErrorStatusGet());
    uDMAErrorStatusClear();
    System_abort("DMA error!!");
}

/*
 *  ======== EKS_LM4F232_initDMA ========
 */
Void EKS_LM4F232_initDMA(Void)
{
    if(DMA_count == -1) {
        Hwi_Params  hwiParams;
        Hwi_Handle  hwi;

        Hwi_Params_init(&hwiParams);
        hwi = Hwi_create(INT_UDMAERR, EKS_LM4F232_errorDMAHwi, &hwiParams, NULL);
        if (!hwi) {
            System_abort("Couldn't create DMA error hwi");
        }

        SysCtlPeripheralEnable(SYSCTL_PERIPH_UDMA);
        uDMAEnable();
        uDMAControlBaseSet(EKS_LM4F232_DMAControlTable);
        DMA_count++;
    }
}

/*
 *  ======== EKS_LM4F232_initGeneral ========
 */
Void EKS_LM4F232_initGeneral(Void)
{
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOM);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
}

#if TI_DRIVERS_GPIO_INCLUDED
#include <ti/drivers/GPIO.h>

/* Callback functions for the GPIO interrupt example. */
Void gpioButtonFxn(Void);
Void gpioButtonFxn2(Void);

/* GPIO configuration structure */

const GPIO_HWAttrs gpioHWAttrs[EKS_LM4F232_GPIOCOUNT] = {
    {GPIO_PORTL_BASE, GPIO_PIN_0, GPIO_OUTPUT}, /* EKS_LM4F232_LED1 */
    {GPIO_PORTL_BASE, GPIO_PIN_1, GPIO_OUTPUT}, /* EKS_LM4F232_LED2 */
    {GPIO_PORTL_BASE, GPIO_PIN_2, GPIO_OUTPUT}, /* EKS_LM4F232_LED3 */
    {GPIO_PORTL_BASE, GPIO_PIN_3, GPIO_OUTPUT}, /* EKS_LM4F232_LED4 */
    {GPIO_PORTL_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* EKS_LM4F232_LED5 */
    {GPIO_PORTL_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /* EKS_LM4F232_LED6 */
    {GPIO_PORTK_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* EKS_LM4F232_DIOA0 */
    {GPIO_PORTK_BASE, GPIO_PIN_5, GPIO_OUTPUT}, /* EKS_LM4F232_DIOA1 */
    {GPIO_PORTK_BASE, GPIO_PIN_6, GPIO_OUTPUT}, /* EKS_LM4F232_DIODATA */
    {GPIO_PORTK_BASE, GPIO_PIN_7, GPIO_OUTPUT}, /* EKS_LM4F232_DIOCLK */
    {GPIO_PORTD_BASE, GPIO_PIN_3, GPIO_OUTPUT}, /* EKS_LM4F232_OBD */
    {GPIO_PORTH_BASE, GPIO_PIN_3, GPIO_OUTPUT}, /* EKS_LM4F232_SD_ON */
    {GPIO_PORTN_BASE, GPIO_PIN_7, GPIO_OUTPUT}, /* EKS_LM4F232_PWRRF */
    {GPIO_PORTD_BASE, GPIO_PIN_4, GPIO_OUTPUT}, /* EKS_LM4F232_PWRTELIT_EN */
    {GPIO_PORTK_BASE, GPIO_PIN_4 | GPIO_PIN_5, GPIO_OUTPUT}, /* EKS_LM4F232_DIOA0A1 */

};

/* GPIO callback structure to set callbacks for GPIO interrupts */
const GPIO_Callbacks EKS_LM4F232_gpioPortMCallbacks = {
    GPIO_PORTM_BASE, INT_GPIOM,
    {NULL, NULL, gpioButtonFxn, gpioButtonFxn2, NULL, NULL, NULL, NULL}
};

const GPIO_Config GPIO_config[] = {
    {&gpioHWAttrs[0]},
    {&gpioHWAttrs[1]},
    {&gpioHWAttrs[2]},
    {&gpioHWAttrs[3]},
    {&gpioHWAttrs[4]},
    {&gpioHWAttrs[5]},
    {&gpioHWAttrs[6]},
    {&gpioHWAttrs[7]},
    {&gpioHWAttrs[8]},
    {&gpioHWAttrs[9]},
    {&gpioHWAttrs[10]},
    {&gpioHWAttrs[11]},
    {&gpioHWAttrs[12]},
    {&gpioHWAttrs[13]},
    {&gpioHWAttrs[14]},
    {NULL},
};

/*
 *  ======== EKS_LM4F232_initGPIO ========
 */
Void EKS_LM4F232_initGPIO(Void)
{
    /* EKS_LM4F232_SW1 - EKS_LM4F232_SW5 */
  //  UChar allButtons = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4;

    /* Setup the LED GPIO pins used */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_0); /* EKS_LM4F232_LED1 */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_1); /* EKS_LM4F232_LED2 */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_2); /* EKS_LM4F232_LED3 */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_3); /* EKS_LM4F232_LED4 */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_4); /* EKS_LM4F232_LED5 */
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_5); /* EKS_LM4F232_LED6 */
    GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_4); /* EKS_LM4F232_DIOA0 */
    GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_5); /* EKS_LM4F232_DIOA1 */
    GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_6); /* EKS_LM4F232_DIODATA */
    GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_7); /* EKS_LM4F232_DIOCLK */
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_3); /* EKS_LM4F232_OBD */
    GPIOPinTypeGPIOOutput(GPIO_PORTH_BASE, GPIO_PIN_3); /* EKS_LM4F232_SD_ON */
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_7); /* EKS_LM4F232_PWRRF */
    GPIOPinTypeGPIOOutput(GPIO_PORTD_BASE, GPIO_PIN_4); /* EKS_LM4F232_PWRTELIT_EN */
    /* Setup the button GPIO pins used */
    //GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, allButtons);
    //GPIOPadConfigSet(GPIO_PORTM_BASE, allButtons, GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);

    /* Once GPIO_init is called, GPIO_config cannot be changed */
    GPIO_init();
    GPIO_write(EKS_LM4F232_LED1, EKS_LM4F232_LED_OFF);
    GPIO_write(EKS_LM4F232_LED2, EKS_LM4F232_LED_OFF);
    GPIO_write(EKS_LM4F232_LED3, EKS_LM4F232_LED_OFF);
    GPIO_write(EKS_LM4F232_LED4, EKS_LM4F232_LED_OFF);
    GPIO_write(EKS_LM4F232_LED5, EKS_LM4F232_LED_OFF);
    GPIO_write(EKS_LM4F232_LED6, EKS_LM4F232_LED_OFF);
}
#endif /* TI_DRIVERS_GPIO_INCLUDED */

#if TI_DRIVERS_I2C_INCLUDED
#include <ti/drivers/I2C.h>
#include <ti/drivers/i2c/I2CTiva.h>

/* I2C objects */
I2CTiva_Object i2cTivaObjects[EKS_LM4F232_I2CCOUNT];

/* I2C configuration structure, describing which pins are to be used */
const I2CTiva_HWAttrs i2cTivaHWAttrs[EKS_LM4F232_I2CCOUNT] = {
    {I2C0_BASE, INT_I2C0},
    {I2C2_BASE, INT_I2C2}
};

const I2C_Config I2C_config[] = {
    {&I2CTiva_fxnTable, &i2cTivaObjects[0], &i2cTivaHWAttrs[0]},
    {&I2CTiva_fxnTable, &i2cTivaObjects[1], &i2cTivaHWAttrs[1]},
    {NULL, NULL, NULL}
};

/*
 *  ======== EKS_LM4F232_initI2C ========
 */
Void EKS_LM4F232_initI2C(Void)
{
    /* I2C0 Init */
    /* Enable the peripheral */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);

    /* Configure the appropriate pins to be I2C instead of GPIO. */
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);

    /* I2C2 Init */
    /* Enable the peripheral */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C2);

    /* Configure the appropriate pins to be I2C instead of GPIO. */
    GPIOPinConfigure(GPIO_PF6_I2C2SCL);
    GPIOPinConfigure(GPIO_PF7_I2C2SDA);
    GPIOPinTypeI2CSCL(GPIO_PORTF_BASE, GPIO_PIN_6);
    GPIOPinTypeI2C(GPIO_PORTF_BASE, GPIO_PIN_7);

    I2C_init();
}
#endif /* TI_DRIVERS_I2C_INCLUDED */

#if TI_DRIVERS_SDSPI_INCLUDED
#include <ti/drivers/SDSPI.h>
#include <ti/drivers/sdspi/SDSPITiva.h>

/* SDSPI objects */
SDSPITiva_Object sdspiTivaobjects[EKS_LM4F232_SDSPICOUNT];

/* SDSPI configuration structure, describing which pins are to be used */
const SDSPITiva_HWAttrs sdspiTivaHWattrs[EKS_LM4F232_SDSPICOUNT] = {
    {
        SSI2_BASE,          /* SPI base address */

        GPIO_PORTH_BASE,    /* The GPIO port used for the SPI pins */
        GPIO_PIN_4,         /* SCK */
        GPIO_PIN_6,         /* MISO */
        GPIO_PIN_7,         /* MOSI */

        GPIO_PORTH_BASE,    /* Chip select port */
        GPIO_PIN_5,         /* Chip select pin */

        GPIO_PORTH_BASE,    /* GPIO TX port */
        GPIO_PIN_7,         /* GPIO TX pin */
    }
};

const SDSPI_Config SDSPI_config[] = {
    {&SDSPITiva_fxnTable, &sdspiTivaobjects[0], &sdspiTivaHWattrs[0]},
    {NULL, NULL, NULL}
};

/*
 *  ======== EKS_LM4F232_initSDSPI ========
 */
Void EKS_LM4F232_initSDSPI(Void)
{
    /* Enable the peripherals used by the SD Card */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI2);

    /* Configure pad settings */
    GPIOPadConfigSet(GPIO_PORTH_BASE,
            GPIO_PIN_4 | GPIO_PIN_7,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    GPIOPadConfigSet(GPIO_PORTH_BASE,
            GPIO_PIN_6,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD_WPU);

    GPIOPadConfigSet(GPIO_PORTH_BASE,
            GPIO_PIN_5,
            GPIO_STRENGTH_4MA, GPIO_PIN_TYPE_STD);

    SDSPI_init();
}
#endif /* TI_DRIVERS_SDSPI_INCLUDED */

#if TI_DRIVERS_SPI_INCLUDED
#include <ti/drivers/SPI.h>
#include <ti/drivers/spi/SPITivaDMA.h>

/* SPI objects */
SPITivaDMA_Object spiTivaDMAobjects[EKS_LM4F232_SPICOUNT];

/* SPI configuration structure, describing which pins are to be used */
const SPITivaDMA_HWAttrs spiTivaDMAHWAttrs[EKS_LM4F232_SPICOUNT] = {
    {
        SSI0_BASE,
        INT_SSI0,
        UDMA_CHANNEL_SSI0RX,
        UDMA_CHANNEL_SSI0TX,
        uDMAChannelAssign,
        UDMA_CH10_SSI0RX,
        UDMA_CH11_SSI0TX
    },
    {
        SSI1_BASE,
        INT_SSI1,
        UDMA_CHANNEL_SSI1RX,
        UDMA_CHANNEL_SSI1TX,
        uDMAChannelAssign,
        UDMA_CH24_SSI1RX,
        UDMA_CH25_SSI1TX
    },
    {
        SSI2_BASE,
        INT_SSI2,
        UDMA_SEC_CHANNEL_UART2RX_12,
        UDMA_SEC_CHANNEL_UART2TX_13,
        uDMAChannelAssign,
        UDMA_CH12_SSI2RX,
        UDMA_CH13_SSI2TX
    },
    {
        SSI3_BASE,
        INT_SSI3,
        UDMA_SEC_CHANNEL_TMR2A_14,
        UDMA_SEC_CHANNEL_TMR2B_15,
        uDMAChannelAssign,
        UDMA_CH14_SSI3RX,
        UDMA_CH15_SSI3TX
    }
};

const SPI_Config SPI_config[] = {
    {&SPITivaDMA_fxnTable, &spiTivaDMAobjects[0], &spiTivaDMAHWAttrs[0]},
    {&SPITivaDMA_fxnTable, &spiTivaDMAobjects[1], &spiTivaDMAHWAttrs[1]},
    {&SPITivaDMA_fxnTable, &spiTivaDMAobjects[2], &spiTivaDMAHWAttrs[2]},
    {&SPITivaDMA_fxnTable, &spiTivaDMAobjects[3], &spiTivaDMAHWAttrs[3]},
    {NULL, NULL, NULL},
};

/*
 *  ======== EKS_LM4F232_initSPI ========
 */
Void EKS_LM4F232_initSPI(Void)
{
	 /* SPI1
	    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI1);

	    Need to unlock PF0
	    HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = GPIO_LOCK_KEY;
	    HWREG(GPIO_PORTF_BASE + GPIO_O_CR) |= GPIO_PIN_0;
	    GPIOPinConfigure(GPIO_PF0_SSI1RX);
	    GPIOPinConfigure(GPIO_PF1_SSI1TX);
	    GPIOPinConfigure(GPIO_PF2_SSI1CLK);
	    GPIOPinConfigure(GPIO_PF3_SSI1FSS);

	    GPIOPinTypeSSI(GPIO_PORTF_BASE, GPIO_PIN_0 | GPIO_PIN_1 |
	                                    GPIO_PIN_2 | GPIO_PIN_3);
	    HWREG(GPIO_PORTF_BASE + GPIO_O_LOCK) = GPIO_LOCK_M;*/


		/* SSI0 */
		    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI0);

		    GPIOPinConfigure(GPIO_PA2_SSI0CLK);
		    GPIOPinConfigure(GPIO_PA3_SSI0FSS);
		    GPIOPinConfigure(GPIO_PA4_SSI0RX);
		    GPIOPinConfigure(GPIO_PA5_SSI0TX);

		    GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_2 | GPIO_PIN_3 |
		                                    GPIO_PIN_4 | GPIO_PIN_5);
			/* SSI2 */
			    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI2);

			    GPIOPinConfigure(GPIO_PH4_SSI2CLK);
			    GPIOPinConfigure(GPIO_PH5_SSI2FSS);
			    GPIOPinConfigure(GPIO_PH6_SSI2RX);
			    GPIOPinConfigure(GPIO_PH7_SSI2TX);

			    GPIOPinTypeSSI(GPIO_PORTH_BASE, GPIO_PIN_4 | GPIO_PIN_5 |
			                                    GPIO_PIN_6 | GPIO_PIN_7);

    /* SSI3 */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI3);

    GPIOPinConfigure(GPIO_PK0_SSI3CLK);
    GPIOPinConfigure(GPIO_PK1_SSI3FSS);
    GPIOPinConfigure(GPIO_PK2_SSI3RX);
    GPIOPinConfigure(GPIO_PK3_SSI3TX);

    GPIOPinTypeSSI(GPIO_PORTK_BASE, GPIO_PIN_0 | GPIO_PIN_1 |
                                    GPIO_PIN_2 | GPIO_PIN_3);

    EKS_LM4F232_initDMA();
    SPI_init();
}
#endif /* TI_DRIVERS_SPI_INCLUDED */

#if TI_DRIVERS_UART_INCLUDED
#include <ti/drivers/UART.h>
#include <ti/drivers/uart/UARTTiva.h>

/* UART objects */
UARTTiva_Object uartTivaObjects[EKS_LM4F232_UARTCOUNT];

/* UART configuration structure */
const UARTTiva_HWAttrs uartTivaHWAttrs[EKS_LM4F232_UARTCOUNT] = {
//		{UART0_BASE, INT_UART0}, /* EKS_LM4F232_UART0 */
		{UART1_BASE, INT_UART1}, /* EKS_LM4F232_UART1 */
		{UART2_BASE, INT_UART2}, /* EKS_LM4F232_UART2 */
	    {UART3_BASE, INT_UART3}, /* EKS_LM4F232_UART3 */
		{UART4_BASE, INT_UART4}, /* EKS_LM4F232_UART4 */
		{UART5_BASE, INT_UART5}, /* EKS_LM4F232_UART5 */
		{UART6_BASE, INT_UART6}, /* EKS_LM4F232_UART6 */
		{UART7_BASE, INT_UART7}, /* EKS_LM4F232_UART7 */
};

const UART_Config UART_config[] = {
			{
    	       &UARTTiva_fxnTable,
    	        &uartTivaObjects[0],
    	        &uartTivaHWAttrs[0]
    	    },
    	    {
    	        &UARTTiva_fxnTable,
    	        &uartTivaObjects[1],
    	        &uartTivaHWAttrs[1]
    	    },
    	    {
    	        &UARTTiva_fxnTable,
    	        &uartTivaObjects[2],
    	        &uartTivaHWAttrs[2]
    	    },
    	    {
    	        &UARTTiva_fxnTable,
    	        &uartTivaObjects[3],
    	        &uartTivaHWAttrs[3]
    	    },
    	    {
    	      	&UARTTiva_fxnTable,
    	      	&uartTivaObjects[4],
    	      	&uartTivaHWAttrs[4]
    	    },
    	    {
    	      	&UARTTiva_fxnTable,
    	      	&uartTivaObjects[5],
    	      	&uartTivaHWAttrs[5]
    	    },
    	    {
    	      	&UARTTiva_fxnTable,
    	      	&uartTivaObjects[6],
    	      	&uartTivaHWAttrs[6]
    	    },

    {NULL, NULL, NULL}
};

/*
 *  ======== EKS_LM4F232_initUART ========
 */
Void EKS_LM4F232_initUART()
{
	/* Enable and configure the peripherals used by the uart. */
			/*SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
		    GPIOPinConfigure(GPIO_PA0_U0RX);
		    GPIOPinConfigure(GPIO_PA1_U0TX);
		    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);*/

			SysCtlPeripheralEnable(SYSCTL_PERIPH_UART1);
		    GPIOPinConfigure(GPIO_PC4_U1RX);
		    GPIOPinConfigure(GPIO_PC5_U1TX);
		    GPIOPinTypeUART(GPIO_PORTC_BASE, GPIO_PIN_4 | GPIO_PIN_5);

		    //SPeci�lis loclkolt PIN PD7 (NMI) Unlock
		   // GPIO_PORTD_LOCK_R= GPIO_LOCK_KEY ;
		   // GPIO_PORTD_CR_R = 0xFF; de most PG 5 használt csak
		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART2);
		    GPIOPinConfigure(GPIO_PG4_U2RX);
		    GPIOPinConfigure(GPIO_PG5_U2TX);
		    GPIOPinTypeUART(GPIO_PORTG_BASE, GPIO_PIN_4 | GPIO_PIN_5 );

		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART3);
		    GPIOPinConfigure(GPIO_PC6_U3RX);
		    GPIOPinConfigure(GPIO_PC7_U3TX);
		    GPIOPinTypeUART(GPIO_PORTC_BASE, GPIO_PIN_6 | GPIO_PIN_7);

		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART4);
		    GPIOPinConfigure(GPIO_PJ0_U4RX);
		    GPIOPinConfigure(GPIO_PJ1_U4TX);
		    GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_0 | GPIO_PIN_1);

		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART5);
		    GPIOPinConfigure(GPIO_PJ2_U5RX);
		    GPIOPinConfigure(GPIO_PJ3_U5TX);
		    GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_2 | GPIO_PIN_3);

		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART6);
		    GPIOPinConfigure(GPIO_PJ4_U6RX);
		    GPIOPinConfigure(GPIO_PJ5_U6TX);
		    GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_4 | GPIO_PIN_5);

		    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART7);
		    GPIOPinConfigure(GPIO_PE0_U7RX);
		    GPIOPinConfigure(GPIO_PE1_U7TX);
		    GPIOPinTypeUART(GPIO_PORTE_BASE, GPIO_PIN_0 | GPIO_PIN_1);


    /* Initialize the UART driver */
    UART_init();
}
#endif /* TI_DRIVERS_UART_INCLUDED */

/*
 *  ======== EKS_LM4F232_initUSB ========
 *  This function just turns on the USB
 */
Void EKS_LM4F232_initUSB(EKS_LM4F232_USBMode usbMode)
{
    /* Enable the USB peripheral and PLL */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_USB0);
    SysCtlUSBPLLEnable();

    /* Setup pins for USB operation */
    GPIOPinTypeUSBAnalog(GPIO_PORTB_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    GPIOPinTypeUSBAnalog(GPIO_PORTL_BASE, GPIO_PIN_6 | GPIO_PIN_7);

    /* Additional configurations for Host mode */
    if (usbMode == EKS_LM4F232_USBHOST) {
        /* Configure the pins needed */
        GPIOPinConfigure(GPIO_PG4_USB0EPEN);
        GPIOPinConfigure(GPIO_PG5_USB0PFLT);
        GPIOPinTypeUSBDigital(GPIO_PORTG_BASE, GPIO_PIN_4 | GPIO_PIN_5);
    }
}

#if TI_DRIVERS_USBMSCHFATFS_INCLUDED
#include <ti/drivers/USBMSCHFatFs.h>
#include <ti/drivers/usbmschfatfs/USBMSCHFatFsTiva.h>

/* USBMSCHFatFs objects */
USBMSCHFatFsTiva_Object usbmschfatfstivaObjects[EKS_LM4F232_USBMSCHFatFsCOUNT];

/* USBMSCHFatFs configuration structure, describing which pins are to be used */
const USBMSCHFatFsTiva_HWAttrs usbmschfatfstivaHWAttrs[EKS_LM4F232_USBMSCHFatFsCOUNT] = {
    {INT_USB0}
};

const USBMSCHFatFs_Config USBMSCHFatFs_config[] = {
    {
        &USBMSCHFatFsTiva_fxnTable,
        &usbmschfatfstivaObjects[0],
        &usbmschfatfstivaHWAttrs[0]
    },
    {NULL, NULL, NULL}
};

/*
 *  ======== EKS_LM4F232_initUSBMSCHFatFs ========
 */
Void EKS_LM4F232_initUSBMSCHFatFs(Void)
{
    /* Initialize the DMA control table */
    EKS_LM4F232_initDMA();

    /* Call the USB initialization function for the USB Reference modules */
    EKS_LM4F232_initUSB(EKS_LM4F232_USBHOST);
    USBMSCHFatFs_init();
}
#endif /* TI_DRIVERS_USBMSCHFATFS_INCLUDED */

#if TI_DRIVERS_WATCHDOG_INCLUDED
#include <ti/drivers/Watchdog.h>
#include <ti/drivers/watchdog/WatchdogTiva.h>

/* Watchdog objects */
WatchdogTiva_Object watchdogTivaObjects[EKS_LM4F232_WATCHDOGCOUNT];

/* Watchdog configuration structure */
const WatchdogTiva_HWAttrs watchdogTivaHWAttrs[EKS_LM4F232_WATCHDOGCOUNT] = {
    /* EKS_LM4F232_WATCHDOG0 with 1 sec period at default CPU clock freq */
    {WATCHDOG0_BASE, INT_WATCHDOG, 80000000},
};

const Watchdog_Config Watchdog_config[] = {
    {&WatchdogTiva_fxnTable, &watchdogTivaObjects[0], &watchdogTivaHWAttrs[0]},
    {NULL, NULL, NULL},
};

/*
 *  ======== EKS_LM4F232_initWatchdog ========
 *
 * NOTE: To use the other watchdog timer with base address WATCHDOG1_BASE,
 *       an additional function call may need be made to enable PIOSC. Enabling
 *       WDOG1 does not do this. Enabling another peripheral that uses PIOSC
 *       such as ADC0 or SSI0, however, will do so. Example:
 *
 *       SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
 *       SysCtlPeripheralEnable(SYSCTL_PERIPH_WDOG1);
 *
 *       See the following forum post for more information:
 *       http://e2e.ti.com/support/microcontrollers/stellaris_arm_cortex-m3_microcontroller/f/471/p/176487/654390.aspx#654390
 */
Void EKS_LM4F232_initWatchdog()
{
    /* Enable peripherals used by Watchdog */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_WDOG0);

    /* Initialize the Watchdog driver */
    Watchdog_init();
}
#endif /* TI_DRIVERS_WATCHDOG_INCLUDED */

#if TI_DRIVERS_WIFI_INCLUDED
#include <ti/drivers/WiFi.h>
#include <ti/drivers/wifi/WiFiTivaCC3000.h>

/* WiFi objects */
WiFiTivaCC3000_Object wiFiTivaCC3000Objects[EKS_LM4F232_WIFICOUNT];

/* WiFi configuration structure */
const WiFiTivaCC3000_HWAttrs wiFiTivaCC3000HWAttrs[EKS_LM4F232_WIFICOUNT] = {
    { GPIO_PORTC_BASE, /* IRQ port */
      GPIO_PIN_7,      /* IRQ pin */
      INT_GPIOC,       /* IRQ port interrupt vector */

      GPIO_PORTH_BASE, /* CS port */
      GPIO_PIN_1,      /* CS pin */

      GPIO_PORTC_BASE, /* WLAN EN port */
      GPIO_PIN_6       /* WLAN EN pin */
    }
};

const WiFi_Config WiFi_config[] = {
    {
        &WiFiTivaCC3000_fxnTable,
        &wiFiTivaCC3000Objects[0],
        &wiFiTivaCC3000HWAttrs[0]
    },
    {NULL,NULL, NULL},
};

/*
 *  ======== EKS_LM4F232_initWiFi ========
 */
Void EKS_LM4F232_initWiFi(Void)
{
    /* Configure IRQ pin */
    GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_7);

    GPIOPadConfigSet(GPIO_PORTC_BASE, GPIO_PIN_7, GPIO_STRENGTH_2MA,
                            GPIO_PIN_TYPE_STD_WPU);

    /* Configure WLAN EN pin */
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_6);
    GPIOPadConfigSet(GPIO_PORTC_BASE, GPIO_PIN_6, GPIO_STRENGTH_2MA,
                            GPIO_PIN_TYPE_STD_WPD);
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, 0);

    /* Configure CS pin */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
    GPIOPinTypeGPIOOutput(GPIO_PORTH_BASE, GPIO_PIN_1);
    GPIOPadConfigSet(GPIO_PORTH_BASE, GPIO_PIN_1, GPIO_STRENGTH_2MA,
                            GPIO_PIN_TYPE_STD_WPU);
    GPIOPinWrite(GPIO_PORTH_BASE, GPIO_PIN_1, (~0));

    /* Configure SSI3 */
    SysCtlPeripheralEnable(SYSCTL_PERIPH_SSI3);

    GPIOPinConfigure(GPIO_PH0_SSI3CLK);
    GPIOPinConfigure(GPIO_PH2_SSI3RX);
    GPIOPinConfigure(GPIO_PH3_SSI3TX);

    GPIOPinTypeSSI(GPIO_PORTH_BASE, GPIO_PIN_0 | GPIO_PIN_2 | GPIO_PIN_3);

    /* Call necessary SPI init functions */
    SPI_init();
    EKS_LM4F232_initDMA();

    /* Initialize WiFi driver */
    WiFi_init();
}
#endif /* TI_DRIVERS_WIFI_INCLUDED */
