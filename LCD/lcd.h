#include <stdint.h>
#include "../GPIO_Drivers/Data_Type.h"
#include "../tm4c123gh6pm.h"
#include <time.h> 

// Data Port
#define DATA_PORT GPIO_PORTB_DATA_R
#define DATA_PORT_DIR GPIO_PORTB_DIR_R
#define DATA_PORT_AFSEL GPIO_PORTB_AFSEL_R
#define DATA_PORT_PCTL GPIO_PORTB_PCTL_R
#define DATA_PORT_AMSEL GPIO_PORTB_AMSEL_R
#define DATA_PORT_DEN GPIO_PORTB_DEN_R
// Control Port
#define CTRL_PORT GPIO_PORTA_DATA_R
#define CTRL_PORT_DIR GPIO_PORTA_DIR_R
#define CTRL_PORT_AFSEL GPIO_PORTA_AFSEL_R
#define CTRL_PORT_PCTL GPIO_PORTA_PCTL_R
#define CTRL_PORT_AMSEL GPIO_PORTA_AMSEL_R
#define CTRL_PORT_DEN GPIO_PORTA_DEN_R
#define RS 7
#define RW 6
#define E  5
#define DB7 7
// Commands
#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80 
#define SET_CURSOR_DIR_BACKWORD 0x4
#define SET_CURSOR_DIR_FORWARD 0x6
#define SHIFT_CURSOR_LEFT 0x10
#define SHIFT_CURSOR_RIGHT 0x14
#define LCD_OFF 0x8
#define LCD_ON 0xF
#define RETURN_HOME 0x2
#define BLINK_TIME_ms 1000
// Set & Clear 
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

// ************* LCD **************** 
// public :
void delay_m(int n);
void delay_u(int n);
void LCD_Init(void);

void LCD_Write_Command(char cmd);
void LCD_Write_Char(char data);
void LCD_Write_String(char* string);
void LCD_Clear();

void LCD_Set_Cursor_Position(uint8_t row, uint8_t col );
void LCD_Write_Char_Position(uint8_t row, uint8_t col , char c);
void LCD_Write_String_Position( uint8_t row, uint8_t col , char* string);

void LCD_Shift_Cursor_Left();
void LCD_Shift_Cursor_Right();
void LCD_Shift_Cursor_Up();
void LCD_Shift_Cursor_Down();

void LCD_Back();
void LCD_Blink();
