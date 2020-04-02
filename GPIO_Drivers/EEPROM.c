#include "EEPROM.h"

void EEPROM_Init(bool access)
{
	Set_bit(EEPROM_RCGC,0);     											 //set the clock of the eeprom
	for(uint8_t i = 0;i<6;i=i+1);         										 //delay for 6 clock cycles
	while(GPIO_PinRead(EEDONE,0));     											   //polling the working bit in EEDONE register
	while(GPIO_PinRead(EESUPP,3) || GPIO_PinRead(EESUPP,2));   //polling PRETRY and ERETRY bits in EESUPP register
	Reset_bit(SREEPROM,0);                              //Reset the EEPROM module using REEPROM register
	for(uint8_t i = 0;i<6;i=i+1);  														 //delay for 6 clock cycles
	while(GPIO_PinRead(EEDONE,0));														 //polling the working bit in EEDONE register
	while(GPIO_PinRead(EESUPP,3) || GPIO_PinRead(EESUPP,2));   //polling PRETRY and ERETRY bits in EESUPP register
	GPIO_PinWrite(&EEPROT,3,access);        									 // set the access mode of the eeprom user or 
}

void EEPROM_WriteData(uint16_t currentBlock, uint8_t currentOffset,int32_t data)
{
	EEBLOCK = currentBlock;
	EEOFFSET = currentOffset;
	EERDWR = data;
	while((EEDONE & EEPROM_EEDONE_WORKING));
}

int32_t EEPROM_ReadData(uint16_t currentBlock, uint8_t currentOffset)
{		
	int32_t data;
	EEBLOCK = currentBlock;
	EEOFFSET = currentOffset;
	data = EERDWR;
	while((EEDONE & EEPROM_EEDONE_WORKING));
	return data;
}