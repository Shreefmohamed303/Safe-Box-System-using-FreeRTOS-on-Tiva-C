 /********************************************************************************
 * Module : UART
 *
 * File Name : uart.c
 *
 * Description : Source File for UART Module
 *
 * Author : Shreef Mohamed & Ayman Nasr 
 *
 * Created on: Feb 23, 2020
 *
 ********************************************************************************/
 
#include "uart.h" 




	/*
	 *           UART_init Function 
	 * Takes: address of "UART0_HandleTypedef" to make configuration 
	 * Return:  No thing  
	 * Steps of Initializtaions UART:
	 * 1. call function to enable clk for both UART and its PORT
	 * 2. Disable UART Module till finishing the initializations
	 * 3. Make your Configurations in the UART Registers 
	 * 4. Enable UART Module 
	*/

/**
  * @brief  UART0_init Function definition
  */
void UART0_init(UART_HandleTypedef *const uartConfig)
{
	/* Variables  */ 
		 float32_t baudRateDivisor;
	   uint16_t intBRD;
	/* 1. Calling the Function to initialize the clk */ 
			void UART0_MSPInit();
	/* 2. Disable UART Module */
		UART0_CTL_R &= ~(UART_CTL_UARTEN);
	/* 3. Make your Configurations in the UART Registers */
	
		/* 3.1 Configuration of UART0 CTL Register */
		UART0_CTL_R=0 ; 

    /* Configuring the baud rate of UART transmitting & receiving
         if UART is configured to high speed so we divide by 8 else
         diving by 16.
         Seperating the integer part & fractional part of baud rate
         divisor into 2 vars and assigning UART IntegerBRD & FracBRD
    */
    if(uartConfig->HighSpeed == HIGH_SPEED_ENABLE)
    {
        baudRateDivisor = F_CPU / (8 * uartConfig->BaudRate);
        intBRD = baudRateDivisor;
        baudRateDivisor = ( baudRateDivisor - (float32_t)intBRD ) * 100;
        UART0_IBRD_R = intBRD;
        UART0_FBRD_R = (uint8_t)((baudRateDivisor*64)+0.5 );
    }
    else
    {    
        baudRateDivisor = F_CPU / (16 * uartConfig->BaudRate);
        intBRD = baudRateDivisor;
        baudRateDivisor = ( baudRateDivisor - (float32_t)intBRD ) * 100;
        UART2_IBRD_R = intBRD;
        UART0_FBRD_R = (uint8_t)((baudRateDivisor*64)+0.5 );
    }
    
    /* Configuring High Speed Bit
         0 ==> The UART is clocked using the system clock divided by 16
         1 ==> The UART is clocked using the system clock divided by 8
    */
    switch(uartConfig->HighSpeed)
    {
        case HIGH_SPEED_ENABLE: UART0_CTL_R |= UART_CTL_HSE; break;
        case HIGH_SPEED_DISABLE: UART0_CTL_R &= ~(UART_CTL_HSE); break;
    }
    /* UART Transmit Enable/Disable*/
    switch(uartConfig->TransmitEnable)
    {
        case TRANSMIT_ENABLE: UART0_CTL_R |= UART_CTL_TXE; break;
        case TRANSMIT_DISABLE: UART0_CTL_R &= ~(UART_CTL_TXE); break;
    }
    /* UART Receive Enable/Disable*/
    switch(uartConfig->ReceiveEnable)
    {
        case RECEIVE_ENABLE: UART0_CTL_R |= UART_CTL_RXE; break;
        case RECEIVE_DISABLE: UART0_CTL_R &= ~(UART_CTL_RXE); break;
    }
   
	
	/* 3.2 Configuration of UART0 LCRH Register */ 
		UART0_LCRH_R=0; 
	// configure the word length of the Data check this enum >> UART_WordLength
	switch(uartConfig->WordLength) 
	{
		case UART_WORDLENGTH_5B: 
				 UART0_LCRH_R |=UART_LCRH_WLEN_5; 
				 break ;
		case UART_WORDLENGTH_6B: 
				 UART0_LCRH_R |=UART_LCRH_WLEN_6; 
				 break ;
		case UART_WORDLENGTH_7B: 
				 UART0_LCRH_R |=UART_LCRH_WLEN_7; 
				 break ;
		case UART_WORDLENGTH_8B: 
				 UART0_LCRH_R |=UART_LCRH_WLEN_8; 
				 break ;		
	}
	//Configure number of FIFOs used if we enable it , FIFO will carry up to 16 element
	// check this enum >> UART_ParityEnable
	switch(uartConfig->FIFO)
	{
		case FIFO_ENABLE : 
				 UART0_LCRH_R |= UART_LCRH_FEN;
					break ; 
		case FIFO_DISABLE : 
				 UART0_LCRH_R &= ~(UART_LCRH_FEN);
					break ; 
	}
	//Enable or Disable Parity check this enum >> UART_ParityEnable
	switch(uartConfig->ParityEnable)
	{
		case PARITY_ENABLE: 
				 UART0_LCRH_R |= UART_LCRH_PEN ;
				 break;
		case PARITY_DISABLE:
				 UART0_LCRH_R &= ~(UART_LCRH_PEN) ;
				 break; 
	}
	//Configure either one stop bit or 2 stop bits 
	// check this enum >> UART_StopBits
	switch(uartConfig->StopBits)
	{
		case UART_STOPBITS_2: 
				 UART0_LCRH_R |= UART_LCRH_STP2;
				 break; 
		case UART_STOPBITS_1: 
				 UART0_LCRH_R &= ~(UART_LCRH_STP2);
				 break; 
	}
		/* Configuring Parity Error bit either odd or even check */
    switch(uartConfig->ParitySelect)
    {
        case ODD_PARITY: UART0_LCRH_R &= ~(UART_LCRH_EPS); break ;
        case EVEN_PARITY: UART0_LCRH_R |= UART_LCRH_EPS; break;
    }
		
		/* 4. Enable UART Module */ 
		UART0_CTL_R |= UART_CTL_UARTEN; 

}
	
	

/**
  * @brief  UART0_trasnmitChar Function definition
  */
void UART0_trasnmitChar (uint8_t data)
{
	//polling till FIFO is not FULL >> when TXFF in Flag reg ==0 then transmit data 
	while((UART0_FR_R&UART_FR_TXFF)==1);
	UART0_DR_R = data ; 	
}

/**
  * @brief  UART0_MSPInit Function definition
  */
void UART0_MSPInit()
{
	//Enable clock for UART0 peripheral 
	SYSCTL_RCGCUART_R  |= SYSCTL_DC2_UART0;
	//Enable clock for PORT A
	SYSCTL_RCGCGPIO_R  |= SYSCTL_DC4_GPIOA;
	//polling to make sure that clock is enabled 
	while((SYSCTL_PRGPIO_R & SYSCTL_DC4_GPIOA)==0);
	//select PA0 , PA1 in PORTA as ALTERNATIVE Function
	GPIO_PORTA_AFSEL_R |= 0x03;
	/*Select Type of Alternative Function by 3 steps :
	 * 1. make change in the 1st 8 bits so, mask the rest of the register 
	 * 2. give the 1st 4 bits its value >> "GPIO_PCTL_PA0_U0RX" by making OR
	 * 3. give the 2nd 4 bits its value >> "GPIO_PCTL_PA1_U0TX" by making OR
	 */
	GPIO_PORTA_PCTL_R  = (GPIO_PORTA_PCTL_R&0xFFFFFF00) | GPIO_PCTL_PA0_U0RX | GPIO_PCTL_PA1_U0TX ;
	//Configure  PA0 , PA1  as Digigital 
	GPIO_PORTA_DEN_R   |= 0x03;
	//prevent PA0 , PA1  from being analog
	GPIO_PORTA_AMSEL_R &= ~(0x03); 
}
/**
  * @brief  UART0_trasnmitString Function definition
  */
void UART0_trasnmitString (uint8_t *pdata)
{
	//polling till reach the NULL of the string 
	while(*pdata != '\0')
	{
		UART0_trasnmitChar(*pdata);
		pdata++ ; 
	}
	//Transmit The NULL 
	UART0_trasnmitChar(*pdata);
}

/**
  * @brief  UART_receiveChar Function definition
  */
/*
uint8_t UART_receiveChar (void){
    
    while((UART0_FR_R & UART_FR_RXFE));
    return UART0_DR_R;
}
*/

/**
  * @brief  UART_receiveString Function definition
  */
/*

void UART0_receiveString (uint8_t *pdata)
{
	//polling till reach the NULL of the string 
	while(UART0_receiveChar() != '\0')
	{
		*pdata=UART0_receiveChar(); 
		 pdata++; 
	}
}
*/



/********************************** UART4 **********************************/ 



void UART4_init(UART_HandleTypedef *const uartConfig)
{
	/* Variables  */ 
		 float32_t baudRateDivisor;
	   uint16_t intBRD;
	/* 1. Calling the Function to initialize the clk */ 
			UART4_MSPInit();
	/* 2. Disable UART Module */
		UART4_CTL_R &= ~(UART_CTL_UARTEN);
	/* 3. Make your Configurations in the UART Registers */
	
		/* 3.1 Configuration of UART0 CTL Register */
		UART4_CTL_R=0 ; 

    /* Configuring the baud rate of UART transmitting & receiving
         if UART is configured to high speed so we divide by 8 else
         diving by 16.
         Seperating the integer part & fractional part of baud rate
         divisor into 2 vars and assigning UART IntegerBRD & FracBRD
    */
    if(uartConfig->HighSpeed == HIGH_SPEED_ENABLE)
    {
        baudRateDivisor = F_CPU / (8.0 * uartConfig->BaudRate);
        intBRD = baudRateDivisor;
        baudRateDivisor = ( baudRateDivisor - (float32_t)intBRD ) ;
        UART4_IBRD_R = intBRD;
        UART4_FBRD_R = (uint8_t)((baudRateDivisor*64)+0.5 );
    }
    else
    {    
        baudRateDivisor = F_CPU / (16.0 * uartConfig->BaudRate);
        intBRD = baudRateDivisor;
        baudRateDivisor = ( baudRateDivisor - (float32_t)intBRD );
        UART4_IBRD_R = intBRD;
        UART4_FBRD_R = (uint8_t)((baudRateDivisor*64)+0.5 );
    }
    
    /* Configuring High Speed Bit
         0 ==> The UART is clocked using the system clock divided by 16
         1 ==> The UART is clocked using the system clock divided by 8
    */
    switch(uartConfig->HighSpeed)
    {
        case HIGH_SPEED_ENABLE: UART4_CTL_R |= UART_CTL_HSE; break;
        case HIGH_SPEED_DISABLE: UART4_CTL_R &= ~(UART_CTL_HSE); break;
    }
    /* UART Transmit Enable/Disable*/
    switch(uartConfig->TransmitEnable)
    {
        case TRANSMIT_ENABLE: UART4_CTL_R |= UART_CTL_TXE; break;
        case TRANSMIT_DISABLE: UART4_CTL_R &= ~(UART_CTL_TXE); break;
    }
    /* UART Receive Enable/Disable*/
    switch(uartConfig->ReceiveEnable)
    {
        case RECEIVE_ENABLE: UART4_CTL_R |= UART_CTL_RXE; break;
        case RECEIVE_DISABLE: UART4_CTL_R &= ~(UART_CTL_RXE); break;
    }
   
	
	/* 3.2 Configuration of UART0 LCRH Register */ 
		//UART0_LCRH_R=0; 
	// configure the word length of the Data check this enum >> UART_WordLength
	switch(uartConfig->WordLength) 
	{
		case UART_WORDLENGTH_5B: 
				 UART4_LCRH_R |=UART_LCRH_WLEN_5; 
				 break ;
		case UART_WORDLENGTH_6B: 
				 UART4_LCRH_R |=UART_LCRH_WLEN_6; 
				 break ;
		case UART_WORDLENGTH_7B: 
				 UART4_LCRH_R |=UART_LCRH_WLEN_7; 
				 break ;
		case UART_WORDLENGTH_8B: 
				 UART4_LCRH_R |=UART_LCRH_WLEN_8; 
				 break ;		
	}
	//Configure number of FIFOs used if we enable it , FIFO will carry up to 16 element
	// check this enum >> UART_ParityEnable
	switch(uartConfig->FIFO)
	{
		case FIFO_ENABLE : 
				 UART4_LCRH_R |= UART_LCRH_FEN;
					break ; 
		case FIFO_DISABLE : 
				 UART4_LCRH_R &= ~(UART_LCRH_FEN);
					break ; 
	}
	//Enable or Disable Parity check this enum >> UART_ParityEnable
	switch(uartConfig->ParityEnable)
	{
		case PARITY_ENABLE: 
				 UART4_LCRH_R |= UART_LCRH_PEN ;
				 break;
		case PARITY_DISABLE:
				 UART4_LCRH_R &= ~(UART_LCRH_PEN) ;
				 break; 
	}
	//Configure either one stop bit or 2 stop bits 
	// check this enum >> UART_StopBits
	switch(uartConfig->StopBits)
	{
		case UART_STOPBITS_2: 
				 UART4_LCRH_R |= UART_LCRH_STP2;
				 break; 
		case UART_STOPBITS_1: 
				 UART4_LCRH_R &= ~(UART_LCRH_STP2);
				 break; 
	}
		/* Configuring Parity Error bit either odd or even check */
    switch(uartConfig->ParitySelect)
    {
        case ODD_PARITY: UART4_LCRH_R &= ~(UART_LCRH_EPS); break ;
        case EVEN_PARITY: UART4_LCRH_R |= UART_LCRH_EPS; break;
    }
		
		UART4_CC_R = 0x5 ; 
		
		/* 4. Enable UART Module */ 
		UART4_CTL_R |= UART_CTL_UARTEN; 

}
	
	

/**
  * @brief  UART0_trasnmitChar Function definition
  */
void UART4_trasnmitChar (uint8_t data)
{
	//polling till FIFO is not FULL >> when TXFF in Flag reg ==0 then transmit data 
	while((UART4_FR_R&UART_FR_TXFF)==1);
	UART4_DR_R = data ; 	
}

/**
  * @brief  UART0_MSPInit Function definition
  */
void UART4_MSPInit()
{
	//Enable clock for UART0 peripheral 
	SYSCTL_RCGCUART_R  |= 0x10;
	//Enable clock for PORT C
	SYSCTL_RCGCGPIO_R  |= SYSCTL_DC4_GPIOC;
	//polling to make sure that clock is enabled 
	while((SYSCTL_PRGPIO_R & SYSCTL_DC4_GPIOC)==0);
	//select PC4 , PC5 in PORTC as ALTERNATIVE Function
	GPIO_PORTC_AFSEL_R |= 0x30;
	/*Select Type of Alternative Function by 3 steps :
	 * 1. make change in the 1st 8 bits so, mask the rest of the register 
	 * 2. give the 1st 4 bits its value >> "GPIO_PCTL_PC4_U4RX" by making OR
	 * 3. give the 2nd 4 bits its value >> "GPIO_PCTL_PC5_U4TX" by making OR
	 */
	GPIO_PORTC_PCTL_R  = (GPIO_PORTC_PCTL_R&0xFF00FFFF) | GPIO_PCTL_PC5_U4TX | GPIO_PCTL_PC4_U4RX ;
	//Configure  PC4 , PC5  as Digigital 
	GPIO_PORTC_DEN_R   |= 0x30;
	//prevent PC4 , PC5  from being analog
	GPIO_PORTC_AMSEL_R &= ~(0x30); 
}
/**
  * @brief  UART0_trasnmitString Function definition
  */
void UART4_trasnmitString (uint8_t *pdata)
{
	//polling till reach the NULL of the string 
	while(*pdata != '\0')
	{
		UART4_trasnmitChar(*pdata);
		pdata++ ; 
	}
	//Transmit The NULL 
	UART4_trasnmitChar(*pdata);
}

/**
  * @brief  UART4_receiveChar Function definition
  */

uint8_t UART4_receiveChar (void){
    
    while((UART4_FR_R & UART_FR_RXFE));
    return UART4_DR_R;
}


/**
  * @brief  UART_receiveString Function definition
  */


void UART4_receiveString (uint8_t *pdata)
{
	//polling till reach the NULL of the string 
	while(UART4_receiveChar() != '\0')
	{
		*pdata=UART4_receiveChar(); 
		 pdata++; 
	}
}

