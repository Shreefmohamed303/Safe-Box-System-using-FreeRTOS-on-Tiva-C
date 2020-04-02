#include "lcd.h"

uint8_t LCD_Cursor = 0x80;
void LCD_Handle_Cursor();
void LCD_Write_Command(char cmd);
void LCD_Delay();


void delay_m(int n){
int i,j;
for(i=0;i<n;i++)
for(j=0;j<3180;j++)
{}
}

void delay_u(int n){
int i,j;
for(i=0;i<n;i++)
for(j=0;j<3;j++)
{}
}


void LCD_Delay() {	
/* Commands take a delay of time so when we send command (in Send_Command function or LCD_init function) 
	 we need to make sure that the command has finished so we have 2 ways 
			1- waiting for the Busy-Flag Bit (DB7 bit in the Data Port Register (only when RS = 0) )
			2- Delay with the longest command time (max time for commands is 1.53 ms )*/	
//	while(DATA_PORT & (1<< DB7) );
	delay_m(2);
} 



void LCD_Init(void){
	SYSCTL_RCGCGPIO_R |= 0x03;            //clk for portA and portB
/******Portb data pins******/
	CTRL_PORT_AFSEL=0; 
	CTRL_PORT_PCTL=0;
	CTRL_PORT_AMSEL=0;
	DATA_PORT_DIR=0xFF;               //all port output D0->D7
	DATA_PORT_DEN=0xFF;               //all port digital
/******Porta control pins*****/
	DATA_PORT_AFSEL=0;
	DATA_PORT_PCTL=0;
	DATA_PORT_AMSEL=0;
	CTRL_PORT_DIR |= (1<<RS) | (1<<RW) | (1<<E) ;                 //last 3 pins output rs,rw,E
	CTRL_PORT_DEN |= (1<<RS) | (1<<RW) | (1<<E) ;                 //last 3 pins output rs,rw,E

	
/******Intializing lcd*****/
	delay_m(40);
	LCD_Write_Command(TWO_LINE_LCD_Eight_BIT_MODE);           //intializing 2 lines of lcd and 5x8 blocks   
	delay_u(50);
	LCD_Write_Command(CURSOR_ON);           //display data,on for the cursol, no blink cursol
	delay_u(50);
	LCD_Write_Command(CLEAR_COMMAND);           //clear lcd
	delay_m(2);

// for the problem of missing first charachter 
	LCD_Delay();
	delay_m(2);

LCD_Write_Command(LCD_ON); // blinking cursor , visible cursor
	LCD_Write_Command(RETURN_HOME); // cursor to the first point
}


void LCD_Write_Command(char cmd){
	CTRL_PORT &= ~(1<<RS);         //control pins set to 0 rs=0 for command
	CTRL_PORT &= ~(1<<RW);
	DATA_PORT = cmd;
	CTRL_PORT |= (1<<E);        	 //E=1
	delay_m(2);
	CTRL_PORT &= ~(1<<E);          //E=0
}

void LCD_Write_Char(char data){

	LCD_Handle_Cursor(); // update the LCD_Cursor variable to keep track of the cursor position, note : the actual cursor increses automatically when we write a char
	
	CTRL_PORT |= (1<<RS);          //rs=1 for writing data data
	CTRL_PORT &= ~(1<<RW);
	DATA_PORT = data;
	
	CTRL_PORT |= (1<<E);      	   //E=1
	delay_m(2);
	CTRL_PORT &= ~(1<<E);          //E=0
}

void LCD_Write_String(char* string)
{
	uint8_t i = 0;
	// loop until you reach the null character as an indication for the end of the string
	while ( string[i] != '\0' )
	{		
		LCD_Write_Char(string[i] );
		i++ ;
		delay_m(100);
	}	
}
void LCD_Clear()
{
	LCD_Write_Command(CLEAR_COMMAND); // clear the screen
	LCD_Delay(); // for the problem of missing first charachter 
	LCD_Write_Command(RETURN_HOME); // cursor position = top left corner (first position)
	LCD_Delay(); 
	LCD_Cursor = 0x80;
}
void LCD_Set_Cursor_Position(volatile uint8_t row, volatile uint8_t col )
{
	uint8_t Address ;
	if (row == 0)
		Address = 0x80 + col; // 80 is address of first line , address of the seconed element in the first line is 0x81 and so on
	else if (row == 1)			
		Address = 0xc0 + col; // c0 is address of seconed line
	
	LCD_Cursor = Address;
	
	if( (row != 0 && row != 1 ) || col < 0 || col > 15 ) // if the user is not ray2 and enter a num out of the range
	{
		LCD_Clear();
		LCD_Write_String("ERROR");
		LCD_Blink();
	}
	
	LCD_Write_Command(Address); // set the Cursor Position Command
	LCD_Delay();

}
void LCD_Write_Char_Position(uint8_t row, uint8_t col , char c)
{
	LCD_Set_Cursor_Position(row,col);
	LCD_Write_Char(c);
}
void LCD_Write_String_Position( uint8_t row, uint8_t col , char* string)
{
	LCD_Set_Cursor_Position(row,col);
	LCD_Write_String(string);
}


void LCD_Shift_Cursor_Left()
{
	// corner case if we try to go left when we at the most left at the seconed line
	if(LCD_Cursor == 0xc0 ) // if the cursor on the first index of the seconed line
	{
		LCD_Cursor = 0x8F;		// last index in the first line
		LCD_Write_Command(LCD_Cursor); // set the cursor position with the LCD_Cursor variable
	}
	// normal case , update the variable (go left = -1 ) , update the actual cursor
	else
	{
		LCD_Cursor --;
		LCD_Write_Command(LCD_Cursor);
	}	
	
}
void LCD_Shift_Cursor_Right()
{
	if(LCD_Cursor == 0x8F ) // if the cursor on the last index of the first line
	{
		LCD_Cursor = 0xc0;		// first index in the seconed line
		LCD_Write_Command(LCD_Cursor);
	}
	else
	{
		LCD_Cursor ++;
		LCD_Write_Command(LCD_Cursor);
	}
	
}

void LCD_Back() // delete the previous charachter 
{
	LCD_Shift_Cursor_Left(); // the current cursor is on the position after the last char, so shift left to get it
	LCD_Write_Char(' ');		 // white space for delete
	LCD_Shift_Cursor_Left(); // when you write ' ' , the cursor position get updated with +1 so we need to shift left again
}
void LCD_Blink()
{
	// make the screen ON then OFF then ON in a short loop for important messages
	for(int i = 0 ; i < 3 ; i ++)
	{
		delay_m(BLINK_TIME_ms);
		LCD_Write_Command(LCD_OFF);
		delay_m(BLINK_TIME_ms);
		LCD_Write_Command(LCD_ON);
	}
	LCD_Write_Command(LCD_ON);
}


uint8_t LCD_Read_Cursor_Address()
{	
	// el function msh sh8ala bs 5leha for future
		DATA_PORT_DIR = 0x00;			// DATA PORT is Input
		delay_m(2);

		CLEAR_BIT(CTRL_PORT,RS); // RS = 0 , for cursor address
		SET_BIT(CTRL_PORT,RW); 	 // RW = 1 , for Read
		delay_m(2);

	CTRL_PORT |= (1<<E);        	 //E=1
	delay_m(2);
	CTRL_PORT &= ~(1<<E);          //E=0
	
		uint8_t data = DATA_PORT;		// Read the Cursor Address (Data Port has the cursor address when rs = 0 , rw =1 ) 
		delay_m(2);
		DATA_PORT_DIR = 0xFF; 		// make the DATA PORT output agian

		return data;	
}


void LCD_Shift_Cursor_Up()
{
	uint8_t cursor_position = LCD_Cursor;
	if(cursor_position >= 0x80 && cursor_position <= 0x8F ) // if cursor at the first line stay where you are
		return;
	else if (cursor_position >= 0xc0 && cursor_position <= 0xcF) // if you are in the seconed line , sub the diffrenece between the 1st and 2nd lines(0x40)
		LCD_Write_Command(cursor_position - 0x40); // address of 1st = 0x80 & address of 2nd = 0xc0 
	
}
void LCD_Shift_Cursor_Down()
{
	uint8_t cursor_position = LCD_Cursor;
	if(cursor_position >= 0x80 && cursor_position <= 0x8F )  // if cursor at 1st line , add the diffrenece between the 2 lines (0x40)
		LCD_Write_Command(cursor_position + 0x40); // address of 1st = 0x80 & address of 2nd = 0xc0 , 0xc0 - 0x80 = 0x40
	else if (cursor_position >= 0xc0 && cursor_position <= 0xcF) // if cursor already at the 2nd line stay where you are
		return;
}
void LCD_Handle_Cursor()
{
	if(LCD_Cursor > 0x8F && LCD_Cursor < 0xc0 ) // if the cursor on the last index of the first line
	{
		LCD_Cursor = 0xc0;		// first index in the seconed line
		LCD_Write_Command(LCD_Cursor);
	}
	LCD_Cursor ++; // update anyway
} 
