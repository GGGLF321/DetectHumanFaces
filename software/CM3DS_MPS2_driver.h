/*
 *-----------------------------------------------------------------------------
 * The confidential and proprietary information contained in this file may
 * only be used by a person authorised under and to the extent permitted
 * by a subsisting licensing agreement from ARM Limited.
 *
 *            (C) COPYRIGHT 2010-2017 ARM Limited.
 *                ALL RIGHTS RESERVED
 *
 * This entire notice must be reproduced on all copies of this file
 * and copies of this file may only be made by a person if such person is
 * permitted to do so under the terms of a subsisting license agreement
 * from ARM Limited.
 *
 *      SVN Information
 *
 *      Checked In          : $Date: 2012-05-28 18:02:02 +0100 (Mon, 28 May 2012) $
 *
 *      Revision            : $Revision: 210375 $
 *
 *      Release Information : CM3DesignStart-r0p0-02rel0
 *-----------------------------------------------------------------------------
 */
/*************************************************************************//**
 * @file     CM3DS_MPS2_driver.h
 * @brief    CM3DS_MPS2 Driver Header File
 * @version  $State:$
 * @date     $Date: 2012-05-28 18:02:02 +0100 (Mon, 28 May 2012) $
 *
 ******************************************************************************/

#ifndef CM3DS_MPS2_DRIVER_H
#define CM3DS_MPS2_DRIVER_H

 #include "CM3DS_MPS2.h"

 /***********************************uart**************************************/

 extern uint32_t  uart_init( UART_TypeDef * uart, uint32_t divider, uint32_t tx_en,
                           uint32_t rx_en, uint32_t tx_irq_en, uint32_t rx_irq_en, uint32_t tx_ovrirq_en, uint32_t rx_ovrirq_en);

  /**
   * @brief Returns whether the uart RX Buffer is Full.
   */

 extern uint32_t  uart_GetRxBufferFull( UART_TypeDef * uart);

  /**
   * @brief Returns whether the uart TX Buffer is Full.
   */

 extern uint32_t  uart_GetTxBufferFull( UART_TypeDef * uart);

  /**
   * @brief Sends a character to the uart TX Buffer.
   */


 extern void  uart_SendChar( UART_TypeDef * uart, char txchar);

  /**
   * @brief Receives a character from the uart RX Buffer.
   */

 extern char  uart_ReceiveChar( UART_TypeDef * uart);

  /**
   * @brief Returns uart Overrun status.
   */

 extern uint32_t  uart_GetOverrunStatus( UART_TypeDef * uart);

  /**
   * @brief Clears uart Overrun status Returns new uart Overrun status.
   */

 extern uint32_t  uart_ClearOverrunStatus( UART_TypeDef * uart);

  /**
   * @brief Returns uart Baud rate Divider value.
   */

 extern uint32_t  uart_GetBaudDivider( UART_TypeDef * uart);

  /**
   * @brief Return uart TX Interrupt Status.
   */

 extern uint32_t  uart_GetTxIRQStatus( UART_TypeDef * uart);

  /**
   * @brief Return uart RX Interrupt Status.
   */

 extern uint32_t  uart_GetRxIRQStatus( UART_TypeDef * uart);

  /**
   * @brief Clear uart TX Interrupt request.
   */

 extern void  uart_ClearTxIRQ( UART_TypeDef * uart);

  /**
   * @brief Clear uart RX Interrupt request.
   */

 extern void  uart_ClearRxIRQ( UART_TypeDef * uart);


  /**************************************SYSTICK********************************/
 extern void delay(uint32_t time);
 extern void Set_SysTick_CTRL(uint32_t ctrl);
 extern void Set_SysTick_LOAD(uint32_t load);
 extern uint32_t Read_SysTick_VALUE(void);
 extern void Set_SysTick_VALUE(uint32_t value);
 extern void Set_SysTick_CALIB(uint32_t calib);
 extern uint32_t Timer_Ini(void);
 extern uint8_t Timer_Stop(uint32_t *duration_t,uint32_t start_t);
 
 void SysCountDown();
 uint32_t ReadSystickIRQ();


void PrintBigInt(int bigInt);
void PrintFloat(float value);

  /*************************************PUSH_BTN*********************************/
 int getPushBtn( APB_BTN_TypeDef* apb_btn);
 
  /*************************************LED**************************************/
 void send2LED( uint32_t cnt);

  /*************************************TIMER*************************************/
 void rstTime();
 int getTime();

  /***************************************IGNITER**************************************/
 void WaitForReturn();
 void accStart();
 void WaitForCam();
 void CamStart();
 int getIndex();
 void AddrSwitch();

#endif
