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