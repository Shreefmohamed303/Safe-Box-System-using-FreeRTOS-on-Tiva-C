#include "GPIO.h"
void GPIO_PortDirection(volatile uint32_t* port , bool state)
{
	if(state == Output)
		*port |= 0x000000FF ;
	else if(state == Input)
		*port &= 0xFFFFFF00 ;	
}

void GPIO_PinDirection(volatile uint32_t* port, uint8_t pin,bool state )
{
	if(state == Output)
		Set_bit(*port,pin);
	else if(state == Input)
		Reset_bit(*port,pin);	
}

void GPIO_PortWrite(volatile uint32_t* port ,int8_t value )
{
	*port |= 0x00000000 | value ;
}

int8_t GPIO_PortRead(uint32_t port)
{
	return port; 
}

bool GPIO_PinRead(uint32_t port ,uint8_t pin)
{
	return  (bool)((port >> pin) & 0x00000001);
}

void GPIO_PinWrite(volatile uint32_t* port , uint8_t pin , bool value)
{
	*port |= 0x00000000 | (value << pin); 
}

void GPIO_Initial(volatile uint32_t* port,uint8_t pin)
{
	/*
		To enable General-Purpose Input/Output Run Mode Clock Gating Control (RCGCGPIO) register
		to enable port's clock
	*/
	
	if(port == GPIO_PORTA_APB_BASE)
	{
		Set_bit(GPIO_RCGC,0);
		while(!GPIO_PinRead(GPIO_PR,0));
		GPIO_PORTA_APB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTA_APB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTA_APB_DEN_R,pin);
		//Set_bit(GPIO_PORTA_APB_PUR_R,pin);
		Reset_bit(GPIO_PORTA_APB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTA_APB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTA_APB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTA_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,0);
		while(!GPIO_PinRead(GPIO_PR,0));
		GPIO_PORTA_AHB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTA_AHB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTA_AHB_DEN_R,pin);
		//Set_bit(GPIO_PORTA_AHB_PUR_R,pin);
		Reset_bit(GPIO_PORTA_AHB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTA_AHB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTA_AHB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTB_APB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		GPIO_PORTB_APB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTB_APB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTB_APB_DEN_R,pin);
		//Set_bit(GPIO_PORTB_APB_PUR_R,pin);
		Reset_bit(GPIO_PORTB_APB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTB_APB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTB_APB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTB_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		GPIO_PORTB_AHB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTB_AHB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTB_AHB_DEN_R,pin);
		//Set_bit(GPIO_PORTB_AHB_PUR_R,pin);
		Reset_bit(GPIO_PORTB_AHB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTB_AHB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTB_AHB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTC_APB_BASE)
	{
		Set_bit(GPIO_RCGC,2);
		while(!GPIO_PinRead(GPIO_PR,2));
		GPIO_PORTC_APB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTC_APB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTC_APB_DEN_R,pin);
		//Set_bit(GPIO_PORTC_APB_PUR_R,pin);
		Reset_bit(GPIO_PORTC_APB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTC_APB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTC_APB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTC_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,2);
		while(!GPIO_PinRead(GPIO_PR,2));
		GPIO_PORTC_AHB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTC_AHB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTC_AHB_DEN_R,pin);
		//Set_bit(GPIO_PORTC_AHB_PUR_R,pin);
		Reset_bit(GPIO_PORTC_AHB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTC_AHB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTC_AHB_PCTL_R,pin);
	}
	else if(port == GPIO_PORTF_APB_BASE)
	{
		Set_bit(GPIO_RCGC,5);
		while(!GPIO_PinRead(GPIO_PR,5));
		GPIO_PORTF_APB_LOCK_R = 0x4C4F434B ; // to unlock the register
		Set_bit(GPIO_PORTF_APB_CR_R,pin);    //to make the written values to the GPIOAFSEL, GPIOPUR, GPIOPDR, or GPIODEN  registers is active 
		Set_bit(GPIO_PORTF_APB_DEN_R,pin);
		//Set_bit(GPIO_PORTC_APB_PUR_R,pin);
		Reset_bit(GPIO_PORTF_APB_AMSEL_R,pin);
		Reset_bit(GPIO_PORTF_APB_AFSEL_R,pin);
		Reset_bit(GPIO_PORTF_APB_PCTL_R,pin);
	}

		/*
	else if(port == GPIO_PORTD_APB_BASE || port == GPIO_PORTD_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,3);
	}
	else if(port == GPIO_PORTE_APB_BASE || port == GPIO_PORTE_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,4);
	}
	else if(port == GPIO_PORTF_APB_BASE || port == GPIO_PORTF_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,5);
	}*/
	
	
}

/*

	- Initialization of GPIO Port
	- To use this fucntion make instanse of GPIO_HandlingTypedef and pass the address of it
	- Before using it you must set the attributes of the struct 
	
*/

void GPIO_InitialPort(GPIO_HandlingPort* port)
{
	
	//initialization of Port A APB BUS 
	
	if(port->PortBase == GPIO_PORTA_APB_BASE)
	{
		Set_bit(GPIO_RCGC,0);
		while(!GPIO_PinRead(GPIO_PR,0));
		if(port->Lock)
		{
			GPIO_PORTA_APB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xFC and orring as mask to avoid accessing A0,A1
		GPIO_PORTA_APB_CR_R |= (port->Commit) ? 0xFC : 0x00;
		GPIO_PORTA_APB_DEN_R |= (port->DigitalEnable) ? 0xFC : 0x00;
		GPIO_PORTA_APB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xFC : 0x00;
		GPIO_PORTA_APB_PUR_R |= (port->PullUpSelect) ? 0xFC : 0x00;
		GPIO_PORTA_APB_PDR_R |= (port->PullDownSelect) ? 0xFC : 0x00;
		GPIO_PORTA_APB_AMSEL_R |= (port->AnalogModeSelect) ? 0xFC : 0x00;
		GPIO_PortDirection(&GPIO_PORTA_APB_DIR_R,port->Direction);
		/*sense the port control register os 32 bit the first pin (PIN0) of any port will have	
			the access to the first 4 bits (0 -> 3 ) to specify which it is uart or can ... etc ( see page 1351 in datasheet)
		and the second pin (PIN1) have the second 4 bits (4 -> 7) and so on for all pins
  	*/
		for(uint8_t i = 2;i<8;i=i+1)					//start from 2 as A0,A1 is reserved for tiva launchpad
		{
			GPIO_PORTA_APB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port A AHB BUS 
	
	else if(port->PortBase == GPIO_PORTA_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,0);
		while(!GPIO_PinRead(GPIO_PR,0));
		if(port->Lock)
		{
			GPIO_PORTA_AHB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xFC and orring as mask to avoid accessing A0,A1
		GPIO_PORTA_AHB_CR_R |= (port->Commit) ? 0xFC : 0x00;
		GPIO_PORTA_AHB_DEN_R |= (port->DigitalEnable) ? 0xFC : 0x00;
		GPIO_PORTA_AHB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xFC : 0x00;
		GPIO_PORTA_AHB_PUR_R |= (port->PullUpSelect) ? 0xFC : 0x00;
		GPIO_PORTA_AHB_PDR_R |= (port->PullDownSelect) ? 0xFC : 0x00;
		GPIO_PORTA_AHB_AMSEL_R |= (port->AnalogModeSelect) ? 0xFC : 0x00;
		GPIO_PortDirection(&GPIO_PORTA_AHB_DIR_R,port->Direction);
		for(uint8_t i = 2;i<8;i=i+1)    //start from 2 as A0,A1 is reserved for tiva launchpad
		{
			GPIO_PORTA_AHB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port B APB BUS 
	
	else if(port->PortBase == GPIO_PORTB_APB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		if(port->Lock)
		{
			GPIO_PORTB_APB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTB_APB_CR_R = (port->Commit) ? 0xFF : 0x00;
		GPIO_PORTB_APB_DEN_R = (port->DigitalEnable) ? 0xFF : 0x00;
		GPIO_PORTB_APB_AFSEL_R = (port->AlternateFunctionSelect) ? 0xFF : 0x00;
		GPIO_PORTB_APB_PUR_R = (port->PullUpSelect) ? 0xFF : 0x00;
		GPIO_PORTB_APB_PDR_R = (port->PullDownSelect) ? 0xFF : 0x00;
		GPIO_PORTB_APB_AMSEL_R = (port->AnalogModeSelect) ? 0xFF : 0x00;
		GPIO_PortDirection(&GPIO_PORTB_APB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<8;i=i+1)
		{
			GPIO_PORTB_APB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port B AHB BUS
	
	else if(port->PortBase == GPIO_PORTB_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		if(port->Lock)
		{
			GPIO_PORTB_AHB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTB_AHB_CR_R = (port->Commit) ? 0xFF : 0x00;
		GPIO_PORTB_AHB_DEN_R = (port->DigitalEnable) ? 0xFF : 0x00;
		GPIO_PORTB_AHB_AFSEL_R = (port->AlternateFunctionSelect) ? 0xFF : 0x00;
		GPIO_PORTB_AHB_PUR_R = (port->PullUpSelect) ? 0xFF : 0x00;
		GPIO_PORTB_AHB_PDR_R = (port->PullDownSelect) ? 0xFF : 0x00;
		GPIO_PORTB_AHB_AMSEL_R = (port->AnalogModeSelect) ? 0xFF : 0x00;
		GPIO_PortDirection(&GPIO_PORTB_AHB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<8;i=i+1)
		{
			GPIO_PORTB_AHB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port C APB BUS
	
	else if(port->PortBase == GPIO_PORTC_APB_BASE)
	{
		Set_bit(GPIO_RCGC,2);
		while(!GPIO_PinRead(GPIO_PR,2));
		if(port->Lock)
		{
			GPIO_PORTC_APB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xF0 and orring as mask to avoid accessing C0,C1,C2,C3
		GPIO_PORTC_APB_CR_R |= (port->Commit) ? 0xF0 : 0x00;
		GPIO_PORTC_APB_DEN_R |= (port->DigitalEnable) ? 0xF0 : 0x00;
		GPIO_PORTC_APB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_APB_PUR_R |= (port->PullUpSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_APB_PDR_R |= (port->PullDownSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_APB_AMSEL_R |= (port->AnalogModeSelect) ? 0xF0 : 0x00;
		GPIO_PortDirection(&GPIO_PORTC_APB_DIR_R,port->Direction);
		for(uint8_t i = 4;i<8;i=i+1)   //start from 4 as C0,C1,C2,C3 is reserved for tiva launchpad
		{
			GPIO_PORTC_APB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port C AHB BUS
	
	else if(port->PortBase == GPIO_PORTC_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,2);
		while(!GPIO_PinRead(GPIO_PR,2));
		if(port->Lock)
		{
			GPIO_PORTC_AHB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xF0 and orring as mask to avoid accessing C0,C1,C2,C3
		GPIO_PORTC_AHB_CR_R |= (port->Commit) ? 0xF0 : 0x00;
		GPIO_PORTC_AHB_DEN_R |= (port->DigitalEnable) ? 0xF0 : 0x00;
		GPIO_PORTC_AHB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_AHB_PUR_R |= (port->PullUpSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_AHB_PDR_R |= (port->PullDownSelect) ? 0xF0 : 0x00;
		GPIO_PORTC_AHB_AMSEL_R |= (port->AnalogModeSelect) ? 0xF0 : 0x00;
		GPIO_PortDirection(&GPIO_PORTC_AHB_DIR_R,port->Direction);
		for(uint8_t i = 4;i<8;i=i+1)   //start from 4 as C0,C1,C2,C3 is reserved for tiva launchpad
		{
			GPIO_PORTC_AHB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port D APB BUS
	
	else if(port->PortBase == GPIO_PORTD_APB_BASE)
	{
		Set_bit(GPIO_RCGC,3);
		while(!GPIO_PinRead(GPIO_PR,3));
		if(port->Lock)
		{
			GPIO_PORTD_APB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xDF and orring as mask to avoid accessing D5
		GPIO_PORTD_APB_CR_R |= (port->Commit) ? 0xDF : 0x00;
		GPIO_PORTD_APB_DEN_R |= (port->DigitalEnable) ? 0xDF : 0x00;
		GPIO_PORTD_APB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xDF : 0x00;
		GPIO_PORTD_APB_PUR_R |= (port->PullUpSelect) ? 0xDF : 0x00;
		GPIO_PORTD_APB_PDR_R |= (port->PullDownSelect) ? 0xDF : 0x00;
		GPIO_PORTD_APB_AMSEL_R |= (port->AnalogModeSelect) ? 0xDF : 0x00;
		GPIO_PortDirection(&GPIO_PORTD_APB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<8;i=i+1)   //D5 is reserved for tiva launchpad
		{
			if(i != 5)
			{
				GPIO_PORTD_APB_PCTL_R |= (port->PortControl << (i*4));
			}
		}
	}
	
	//initialization of Port D AHB BUS
	
	else if(port->PortBase == GPIO_PORTD_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,3);
		while(!GPIO_PinRead(GPIO_PR,3));
		if(port->Lock)
		{
			GPIO_PORTD_AHB_LOCK_R = 0x4C4F434B ;
		}
		//using 0xF0 and orring as mask to avoid accessing D5
		GPIO_PORTD_AHB_CR_R |= (port->Commit) ? 0xDF : 0x00;
		GPIO_PORTD_AHB_DEN_R |= (port->DigitalEnable) ? 0xDF : 0x00;
		GPIO_PORTD_AHB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0xDF : 0x00;
		GPIO_PORTD_AHB_PUR_R |= (port->PullUpSelect) ? 0xDF : 0x00;
		GPIO_PORTD_AHB_PDR_R |= (port->PullDownSelect) ? 0xDF : 0x00;
		GPIO_PORTD_AHB_AMSEL_R |= (port->AnalogModeSelect) ? 0xDF : 0x00;
		GPIO_PortDirection(&GPIO_PORTD_AHB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<8;i=i+1)   //D5 is reserved for tiva launchpad
		{
			if(i != 5)
			{
				GPIO_PORTD_AHB_PCTL_R |= (port->PortControl << (i*4));
			}
		}
	}
	
	//initialization of Port E APB BUS
	
	else if(port->PortBase == GPIO_PORTE_APB_BASE)
	{
		Set_bit(GPIO_RCGC,4);
		while(!GPIO_PinRead(GPIO_PR,4));
		if(port->Lock)
		{
			GPIO_PORTE_APB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTE_APB_CR_R |= (port->Commit) ? 0x3F : 0x00;
		GPIO_PORTE_APB_DEN_R |= (port->DigitalEnable) ? 0x3F : 0x00;
		GPIO_PORTE_APB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0x3F : 0x00;
		GPIO_PORTE_APB_PUR_R |= (port->PullUpSelect) ? 0x3F : 0x00;
		GPIO_PORTE_APB_PDR_R |= (port->PullDownSelect) ? 0x3F : 0x00;
		GPIO_PORTE_APB_AMSEL_R |= (port->AnalogModeSelect) ? 0x3F : 0x00;
		GPIO_PortDirection(&GPIO_PORTE_APB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<6;i=i+1)   
		{
			GPIO_PORTE_APB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port E AHB BUS
	
	else if(port->PortBase == GPIO_PORTE_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,4);
		while(!GPIO_PinRead(GPIO_PR,4));
		if(port->Lock)
		{
			GPIO_PORTE_AHB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTE_AHB_CR_R |= (port->Commit) ? 0x3F : 0x00;
		GPIO_PORTE_AHB_DEN_R |= (port->DigitalEnable) ? 0x3F : 0x00;
		GPIO_PORTE_AHB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0x3F : 0x00;
		GPIO_PORTE_AHB_PUR_R |= (port->PullUpSelect) ? 0x3F : 0x00;
		GPIO_PORTE_AHB_PDR_R |= (port->PullDownSelect) ? 0x3F : 0x00;
		GPIO_PORTE_AHB_AMSEL_R |= (port->AnalogModeSelect) ? 0x3F : 0x00;
		GPIO_PortDirection(&GPIO_PORTE_AHB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<6;i=i+1)   
		{
			GPIO_PORTE_AHB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port F APB BUS
	
	else if(port->PortBase == GPIO_PORTF_APB_BASE)
	{
		Set_bit(GPIO_RCGC,5);
		while(!GPIO_PinRead(GPIO_PR,5));
		if(port->Lock)
		{
			GPIO_PORTF_APB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTF_APB_CR_R |= (port->Commit) ? 0x1F : 0x00;
		GPIO_PORTF_APB_DEN_R |= (port->DigitalEnable) ? 0x1F : 0x00;
		GPIO_PORTF_APB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0x1F : 0x00;
		GPIO_PORTF_APB_PUR_R |= (port->PullUpSelect) ? 0x1F : 0x00;
		GPIO_PORTF_APB_PDR_R |= (port->PullDownSelect) ? 0x1F : 0x00;
		GPIO_PORTF_APB_AMSEL_R |= (port->AnalogModeSelect) ? 0x1F : 0x00;
		GPIO_PortDirection(&GPIO_PORTF_APB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<5;i=i+1)   
		{
			GPIO_PORTF_APB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
	
	//initialization of Port F AHB BUS
	
	else if(port->PortBase == GPIO_PORTF_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,5);
		while(!GPIO_PinRead(GPIO_PR,5));
		if(port->Lock)
		{
			GPIO_PORTF_AHB_LOCK_R = 0x4C4F434B ;
		}
		GPIO_PORTF_AHB_CR_R |= (port->Commit) ? 0x1F : 0x00;
		GPIO_PORTF_AHB_DEN_R |= (port->DigitalEnable) ? 0x1F : 0x00;
		GPIO_PORTF_AHB_AFSEL_R |= (port->AlternateFunctionSelect) ? 0x1F : 0x00;
		GPIO_PORTF_AHB_PUR_R |= (port->PullUpSelect) ? 0x1F : 0x00;
		GPIO_PORTF_AHB_PDR_R |= (port->PullDownSelect) ? 0x1F : 0x00;
		GPIO_PORTF_AHB_AMSEL_R |= (port->AnalogModeSelect) ? 0x1F : 0x00;
		GPIO_PortDirection(&GPIO_PORTF_AHB_DIR_R,port->Direction);
		for(uint8_t i = 0;i<5;i=i+1)   
		{
			GPIO_PORTF_AHB_PCTL_R |= (port->PortControl << (i*4));
		}
	}
}

/*

	- Initialization of GPIO Port with specefic pin
	- To use this fucntion make instanse of GPIO_HandlingTypedef and pass the address
		of it and pass pin number (0 -> 7) 
	- Before using it you must set the attributes of the struct 
	
*/


void GPIO_InitialPin(GPIO_HandlingPin* port)
{
	//initialization of Port A APB BUS with specific pin
		
	if(port->PortBase == GPIO_PORTA_APB_BASE)
	{
		if(port->PinNumber >=2 && port->PinNumber <= 7)
		{
			Set_bit(GPIO_RCGC,0);
			while(!GPIO_PinRead(GPIO_PR,0));
			if(port->Lock)
			{
				GPIO_PORTA_APB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTA_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTA_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTA_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTA_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTA_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTA_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTA_APB_AMSEL_R,port->PinNumber);
			GPIO_PORTA_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTA_APB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	//initialization of Port A AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTA_AHB_BASE)
	{
		if(port->PinNumber >= 2 && port->PinNumber <= 7)
		{
			Set_bit(GPIO_RCGC,0);
			while(!GPIO_PinRead(GPIO_PR,0));
			if(port->Lock)
			{
				GPIO_PORTA_AHB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTA_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTA_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTA_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTA_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTA_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTA_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTA_AHB_AMSEL_R,port->PinNumber);
			GPIO_PORTA_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTA_AHB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port B APB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTB_APB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		if(port->Lock)
		{
			GPIO_PORTB_APB_LOCK_R = 0x4C4F434B ;
		}
		(port->Commit) ? Set_bit(GPIO_PORTB_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_CR_R,port->PinNumber);
		(port->DigitalEnable) ? Set_bit(GPIO_PORTB_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_DEN_R,port->PinNumber);
		(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTB_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_AFSEL_R,port->PinNumber);
		(port->PullUpSelect) ? Set_bit(GPIO_PORTB_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_PUR_R,port->PinNumber);
		(port->PullDownSelect) ? Set_bit(GPIO_PORTB_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_PDR_R,port->PinNumber);
		(port->AnalogModeSelect) ? Set_bit(GPIO_PORTB_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTB_APB_AMSEL_R,port->PinNumber);
		GPIO_PORTB_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
		GPIO_PinDirection(&GPIO_PORTB_APB_DIR_R,port->PinNumber,port->Direction);
	}
	
	//initialization of Port B AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTB_AHB_BASE)
	{
		Set_bit(GPIO_RCGC,1);
		while(!GPIO_PinRead(GPIO_PR,1));
		if(port->Lock)
		{
			GPIO_PORTB_AHB_LOCK_R = 0x4C4F434B ;
		}
		(port->Commit) ? Set_bit(GPIO_PORTB_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_CR_R,port->PinNumber);
		(port->DigitalEnable) ? Set_bit(GPIO_PORTB_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_DEN_R,port->PinNumber);
		(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTB_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_AFSEL_R,port->PinNumber);
		(port->PullUpSelect) ? Set_bit(GPIO_PORTB_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_PUR_R,port->PinNumber);
		(port->PullDownSelect) ? Set_bit(GPIO_PORTB_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_PDR_R,port->PinNumber);
		(port->AnalogModeSelect) ? Set_bit(GPIO_PORTB_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTB_AHB_AMSEL_R,port->PinNumber);
		GPIO_PORTB_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
		GPIO_PinDirection(&GPIO_PORTB_AHB_DIR_R,port->PinNumber,port->Direction);
	}
	
	//initialization of Port C APB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTC_APB_BASE)
	{
		if(port->PinNumber >= 4 && port->PinNumber <= 7)
		{
			Set_bit(GPIO_RCGC,2);
			while(!GPIO_PinRead(GPIO_PR,2));
			if(port->Lock)
			{
				GPIO_PORTC_APB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTC_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTC_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTC_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTC_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTC_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTC_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTC_APB_AMSEL_R,port->PinNumber);
			GPIO_PORTC_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTC_APB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port C AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTC_AHB_BASE)
	{
		if(port->PinNumber >= 4 && port->PinNumber <= 7)
		{
			Set_bit(GPIO_RCGC,2);
			while(!GPIO_PinRead(GPIO_PR,2));
			if(port->Lock)
			{
				GPIO_PORTC_AHB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTC_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTC_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTC_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTC_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTC_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTC_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTC_AHB_AMSEL_R,port->PinNumber);
			GPIO_PORTC_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTC_AHB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port D APB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTD_APB_BASE)
	{
		if(port->PinNumber != 5)
		{
			Set_bit(GPIO_RCGC,3);
			while(!GPIO_PinRead(GPIO_PR,3));
			if(port->Lock)
			{
				GPIO_PORTD_APB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTD_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTD_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTD_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTD_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTD_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTD_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTD_APB_AMSEL_R,port->PinNumber);
			GPIO_PORTD_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTD_APB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port D AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTD_AHB_BASE)
	{
		if(port->PinNumber != 5)
		{
			Set_bit(GPIO_RCGC,3);
			while(!GPIO_PinRead(GPIO_PR,3));
			if(port->Lock)
			{
				GPIO_PORTD_AHB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTD_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTD_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTD_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTD_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTD_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTD_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTD_AHB_AMSEL_R,port->PinNumber);
			GPIO_PORTD_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTD_AHB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port E APB BUS with specific pin
		
	else if(port->PortBase == GPIO_PORTE_APB_BASE)
	{
		if(port->PinNumber <= 5)
		{
			Set_bit(GPIO_RCGC,4);
			while(!GPIO_PinRead(GPIO_PR,4));
			if(port->Lock)
			{
				GPIO_PORTE_APB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTE_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTE_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTE_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTE_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTE_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTE_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTE_APB_AMSEL_R,port->PinNumber);
			GPIO_PORTE_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTE_APB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	//initialization of Port E AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTE_AHB_BASE)
	{
		if(port->PinNumber <= 5)
		{
			Set_bit(GPIO_RCGC,4);
			while(!GPIO_PinRead(GPIO_PR,4));
			if(port->Lock)
			{
				GPIO_PORTE_AHB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTE_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTE_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTE_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTE_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTE_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTE_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTE_AHB_AMSEL_R,port->PinNumber);
			GPIO_PORTE_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTE_AHB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	
	//initialization of Port F APB BUS with specific pin
		
	else if(port->PortBase == GPIO_PORTF_APB_BASE)
	{
		if(port->PinNumber <= 4)
		{
			Set_bit(GPIO_RCGC,5);
			while(!GPIO_PinRead(GPIO_PR,5));
			if(port->Lock)
			{
				GPIO_PORTF_APB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTF_APB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTF_APB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTF_APB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTF_APB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTF_APB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTF_APB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTF_APB_AMSEL_R,port->PinNumber);
			GPIO_PORTF_APB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTF_APB_DIR_R,port->PinNumber,port->Direction);
		}
	}
	//initialization of Port F AHB BUS with specific pin
	
	else if(port->PortBase == GPIO_PORTF_AHB_BASE)
	{
		if(port->PinNumber <= 4)
		{
			Set_bit(GPIO_RCGC,5);
			while(!GPIO_PinRead(GPIO_PR,5));
			if(port->Lock)
			{
				GPIO_PORTF_AHB_LOCK_R = 0x4C4F434B ;
			}
			(port->Commit) ? Set_bit(GPIO_PORTF_AHB_CR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_CR_R,port->PinNumber);
			(port->DigitalEnable) ? Set_bit(GPIO_PORTF_AHB_DEN_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_DEN_R,port->PinNumber);
			(port->AlternateFunctionSelect) ? Set_bit(GPIO_PORTF_AHB_AFSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_AFSEL_R,port->PinNumber);
			(port->PullUpSelect) ? Set_bit(GPIO_PORTF_AHB_PUR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_PUR_R,port->PinNumber);
			(port->PullDownSelect) ? Set_bit(GPIO_PORTF_AHB_PDR_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_PDR_R,port->PinNumber);
			(port->AnalogModeSelect) ? Set_bit(GPIO_PORTF_AHB_AMSEL_R,port->PinNumber) : Reset_bit(GPIO_PORTF_AHB_AMSEL_R,port->PinNumber);
			GPIO_PORTF_AHB_PCTL_R |= (port->PortControl << (4*port->PinNumber)) | 0x00000000;
			GPIO_PinDirection(&GPIO_PORTF_AHB_DIR_R,port->PinNumber,port->Direction);
		}
	}
}

