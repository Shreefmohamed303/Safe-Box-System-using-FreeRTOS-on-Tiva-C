 /********************************************************************************
 * Module : UART
 *
 * File Name : uart.h
 *
 * Description : Header File for UART Module
 *
 * Author : Shreef Mohamed & Ayman Nasr 
 *
 * Created on: Feb 23, 2020
 *
 ********************************************************************************/
 

#ifndef UART_H_
#define UART_H_


 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

/****************************includes***************************/
#include <stdint.h>
#include "D:/courses/Embedded Systems/Tiva C/Password-Based-DoorLock-system/GPIO_Drivers/Data_Type.h"
#include "../tm4c123gh6pm.h"




/************************** Enums & Structs ***************************/ 
typedef enum
{
	PARITY_ENABLE=1, 
	PARITY_DISABLE=0 
}UART_ParityEnable;

typedef enum 
{
	FIFO_ENABLE =1 , 
	FIFO_DISABLE=0
}UART_FIFO;

typedef enum 
{
	UART_WORDLENGTH_5B=0x0, 
	UART_WORDLENGTH_6B=0x1,
	UART_WORDLENGTH_7B=0x2,
	UART_WORDLENGTH_8B=0x3
}UART_WordLength;

typedef enum 
{
	UART_STOPBITS_1=0 , 
	UART_STOPBITS_2=1
}UART_StopBits;

typedef enum{
    ODD_PARITY = 1,
    EVEN_PARITY =0
}UART_ParitySelect;

typedef enum{
    HIGH_SPEED_ENABLE = 1,
    HIGH_SPEED_DISABLE = 0
}UART_HighSpeed;

typedef enum{
    TRANSMIT_ENABLE = 1,
    TRANSMIT_DISABLE = 0
}UART_TransmitEnable;

typedef enum{
    RECEIVE_ENABLE = 1,
    RECEIVE_DISABLE = 0
}UART_ReceiveEnable;


/**
  * @brief  UART handle Structure definition
  */
typedef struct
{
	uint32_t BaudRate; 	
	UART_WordLength WordLength; 
	UART_StopBits StopBits;
	UART_FIFO FIFO; 
	UART_ParityEnable ParityEnable;
	UART_ParitySelect ParitySelect;
	UART_HighSpeed HighSpeed ; 
	UART_ReceiveEnable ReceiveEnable; 
	UART_TransmitEnable TransmitEnable ; 
	
}UART_HandleTypedef;


/*****************************FUNCTION DECLARATIONS*************************************/ 
void UART0_init(UART_HandleTypedef *const uartConfig);
void UART0_trasnmitChar (uint8_t data);
uint8_t UART0_receiveChar (void); 
void UART0_trasnmitString (uint8_t *pdata);
void UART0_receiveString (uint8_t *pdata);
void UART0_MSPInit(void);

void UART4_init(UART_HandleTypedef *const uartConfig);
void UART4_trasnmitChar (uint8_t data);
uint8_t UART4_receiveChar (void); 
void UART4_trasnmitString (uint8_t *pdata);
void UART4_receiveString (uint8_t *pdata);
void UART4_MSPInit(void);
#endif

