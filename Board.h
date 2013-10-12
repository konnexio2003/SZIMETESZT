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

#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "EKS_LM4F232.h"

#define Board_initGeneral           EKS_LM4F232_initGeneral
#define Board_initGPIO              EKS_LM4F232_initGPIO
#define Board_initI2C               EKS_LM4F232_initI2C
#define Board_initSDSPI             EKS_LM4F232_initSDSPI
#define Board_initSPI               EKS_LM4F232_initSPI
#define Board_initUART              EKS_LM4F232_initUART
#define Board_initUSB               EKS_LM4F232_initUSB
#define Board_initUSBMSCHFatFs      EKS_LM4F232_initUSBMSCHFatFs
#define Board_initDMA               EKS_LM4F232_initDMA
#define Board_initWatchdog          EKS_LM4F232_initWatchdog
#define Board_initWiFi              EKS_LM4F232_initWiFi
#define Board_LED1                  EKS_LM4F232_LED1
#define Board_LED2                  EKS_LM4F232_LED2
#define Board_LED3                  EKS_LM4F232_LED3
#define Board_LED4                  EKS_LM4F232_LED4
#define Board_LED5                  EKS_LM4F232_LED5
#define Board_LED6                  EKS_LM4F232_LED6
#define Board_DIOA0					EKS_LM4F232_DIOA0
#define Board_DIOA1					EKS_LM4F232_DIOA1
#define Board_DIOA0A1				EKS_LM4F232_DIOA0A1
#define Board_DIODATA				EKS_LM4F232_DIODATA
#define Board_DIOCLK				EKS_LM4F232_DIOCLK
#define Board_PW_OBD				EKS_LM4F232_OBD
#define Board_SD_ON					EKS_LM4F232_SD_ON
#define Board_PWRRF					EKS_LM4F232_PWRRF
#define Board_PWRTELIT_EN			EKS_LM4F232_PWRTELIT_EN
#define Board_BUTTON                EKS_LM4F232_SW3
#define Board_BUTTON2               EKS_LM4F232_SW4
#define Board_LED_ON                EKS_LM4F232_LED_ON
#define Board_LED_OFF               EKS_LM4F232_LED_OFF
#define Board_PIN_ON                EKS_LM4F232_LED_ON
#define Board_PIN_OFF               EKS_LM4F232_LED_OFF
#define Board_SDSPI                 EKS_LM4F232_SDSPI0
#define Board_SPI0                  EKS_LM4F232_SPI0
#define Board_SPI1                  EKS_LM4F232_SPI3
#define Board_SPI2                  EKS_LM4F232_SPI2
#define Board_SPI_CC3000            EKS_LM4F232_SPI3
#define Board_USBMSCHFatFs          EKS_LM4F232_USBMSCHFatFs0
#define Board_I2C0                  EKS_LM4F232_I2C0
#define Board_I2C1                  EKS_LM4F232_I2C2
#define Board_USBDEVICE             EKS_LM4F232_USBDEVICE
#define Board_USBHOST               EKS_LM4F232_USBHOST
#define UART0                       EKS_LM4F232_UART0
#define UART1_GSM                   EKS_LM4F232_UART1
#define UART2_GPS	                EKS_LM4F232_UART2
#define UART3_GPSTRCACE				EKS_LM4F232_UART3
#define UART4_PORT	                EKS_LM4F232_UART4
#define UART5_RF	                EKS_LM4F232_UART5
#define UART6_ELM		            EKS_LM4F232_UART6
#define UART7_USB		            EKS_LM4F232_UART7
#define Board_UART                  EKS_LM4F232_UART4
#define Board_WATCHDOG              EKS_LM4F232_WATCHDOG0
#define Board_WIFI                  EKS_LM4F232_WIFI
#define Board_gpioCallbacks         EKS_LM4F232_gpioPortMCallbacks

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
