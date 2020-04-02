#ifndef EEPROM_H
#define EEPROM_H

#include "GPIO.h"

#define READ_WRITE_ARRAY_SIZE 4

void EEPROM_Init(bool);
void EEPROM_WriteData(uint16_t currentBlock, uint8_t currentOffset,int32_t data);
int32_t EEPROM_ReadData(uint16_t currentBlock, uint8_t currentOffset);

#endif
