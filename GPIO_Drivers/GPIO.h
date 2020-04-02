#ifndef GPIO
#define GPIO


/*
	- Don't use A0,A1,C0,C1,C2,C3,D5, it's reserved for tiva launchpad
	- To make port, make instanse of GPIO_HandlingPort then set its attributes then pass its address to GPIO_InitialPort function
	- To make pin, make instanse of GPIO_HandlingPin then set its attributes then pass its address to GPIO_InitialPin function
	- Use Ouput to set a port or pin as output(1) or Input to set it as input(0)
	- Available set,get,toggle,reset,setport as macros or functions
	- use bool type (it's defined as enum)
	- Support using single pin in any port 
	``example : (GPIO_PORTA_APB_DATA_PIN3 = 0x04) -> 0000 1000 to set the third pin and it mask automatically the others
	- Support all ports for AHB or APB Bus
*/

#include "Data_Type.h"
#include "TivaC_IO.h"
#include "Tiva_C_Ports.h"
#include <stdint.h>
typedef struct {
	
volatile uint32_t* PortBase;
bool Direction;										 //to select the port input or output
bool PullUpSelect;                 //to activate pull up resistor
bool PullDownSelect; 							 //to activate pull down resistor
bool DigitalEnable; 							 //to activate digital mode
bool AlternateFunctionSelect;      //to select gpio or alternative fucntion mode
bool Lock;                         //to unlock commit register
bool AnalogModeSelect; 						 //to activate analog mode
bool Commit;											 //determines which bits of the GPIOAFSEL, GPIOPUR, GPIOPDR, and GPIODEN registers are committed
uint8_t PortControl;									 //to select the mode of the every pin in the port (see page 1351)

}GPIO_HandlingPort;

typedef struct {
	
volatile uint32_t* PortBase;
bool Direction;										 //to select the pin input or output
bool PullUpSelect;                 //to activate pull up resistor
bool PullDownSelect; 							 //to activate pull down resistor
bool DigitalEnable; 							 //to activate digital mode
bool AlternateFunctionSelect;      //to select gpio or alternative fucntion mode
bool Lock;                         //to unlock commit register
bool AnalogModeSelect; 						 //to activate analog mode
bool Commit;											 //determines which bits of the GPIOAFSEL, GPIOPUR, GPIOPDR, and GPIODEN registers are committed
uint8_t PortControl;							 //to select the mode of the every pin in the port (see page 1351)
uint8_t PinNumber;

}GPIO_HandlingPin;


/* 		setting, clearing and toggling pin values		*/
#define Set_bit(reg,bit) (reg|=1<<bit)
#define Reset_bit(reg,bit) (reg&=~(1<<bit))
#define Toggle_bit(reg,bit) (reg^=1<<bit)
/*		Getting pin value 	*/
#define Get_bit(reg,bit) ((reg>>bit)&1)
/*		
			setting port direction		
			when the required port is set i.e. ==1; it is set to be an output
*/

#define Set_PortDirection(reg) reg=0xFF

void GPIO_PortDirection(volatile uint32_t* port , bool state);
void GPIO_PinDirection(volatile uint32_t* port, uint8_t pin,bool state);
void GPIO_PortWrite(volatile uint32_t* port ,int8_t value );
int8_t GPIO_PortRead(uint32_t port);
bool GPIO_PinRead(uint32_t port ,uint8_t pin);
void GPIO_PinWrite(volatile uint32_t* port , uint8_t pin , bool value);
void GPIO_Initial(volatile uint32_t* port,uint8_t pin);
void GPIO_InitialPort(GPIO_HandlingPort* port);
void GPIO_InitialPin(GPIO_HandlingPin* port);

#endif
