 /******************************************************************************
 *
 * Module: KEYPAD
 *
 * File Name: keypad.h
 *
 * Description: Header file for the Keypad driver
 *
 * Author: Amr Mostafa
 *
 *******************************************************************************/
//#include "stdint.h"
#include "../GPIO_Drivers/Data_Type.h"
#include "../tm4c123gh6pm.h"
#include <stdint.h>
#ifndef KEYPAD_H_
#define KEYPAD_H_

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* Keypad configurations for number of rows and columns */
#define N_col 4
#define N_row 4



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Function responsible for getting the pressed keypad key
 */
void keypad_Init(void);
uint8_t KeyPad_getPressedKey(void);

#endif