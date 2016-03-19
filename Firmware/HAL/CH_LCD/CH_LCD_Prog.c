/*
 CH_LCD_Prog.c

 Created on: Feb 22, 2016
 Author: Kareem Galal
 */

#include "..\..\Utilities\Types.h"
#include "..\..\Utilities\Util.h"
#include "..\..\Utilities\Delay.h"
#include "..\..\MCAL\DIO\DIO_Interface.h"
#include "CH_LCD_Interface.h"
#include "CH_LCD_Config.h"
#include "CH_LCD_Private.h"

static const u8 CH_LCD_u8DataPins[CH_LCD_u8NUM_EIGHT] = { CH_LCD_DATA0,
		CH_LCD_DATA1, CH_LCD_DATA2, CH_LCD_DATA3, CH_LCD_DATA4, CH_LCD_DATA5,
		CH_LCD_DATA6, CH_LCD_DATA7 };

/*Comment!: Function to Write Command to the LCD*/
extern void CH_LCD_u8Write_Command(u8 Copy_u8Command) {
	u8 Local_u8LoopIndex;
	DIO_u8WritePinVal(CH_LCD_RS, DIO_u8LOW);
	DIO_u8WritePinVal(CH_LCD_RW, DIO_u8LOW);
	DIO_u8WritePinVal(CH_LCD_ENABLE, DIO_u8HIGH);
	//voidDELAY_MS(1);
	for (Local_u8LoopIndex = CH_LCD_u8NUM_ZERO; Local_u8LoopIndex < CH_LCD_u8NUM_EIGHT; Local_u8LoopIndex++) {
		DIO_u8WritePinVal(CH_LCD_u8DataPins[Local_u8LoopIndex],GET_BIT(Copy_u8Command,Local_u8LoopIndex));
	}
	DIO_u8WritePinVal(CH_LCD_ENABLE, DIO_u8LOW);
}

/*Comment!: Function to Write Data on the LCD*/
extern void CH_LCD_u8Write_Data(u8 Copy_u8Data) {
	u8 Local_u8LoopIndex;
	DIO_u8WritePinVal(CH_LCD_RS, DIO_u8HIGH);
	DIO_u8WritePinVal(CH_LCD_RW, DIO_u8LOW);
	DIO_u8WritePinVal(CH_LCD_ENABLE, DIO_u8HIGH);
	//voidDELAY_MS(1); //>1us
	for (Local_u8LoopIndex = CH_LCD_u8NUM_ZERO; Local_u8LoopIndex < CH_LCD_u8NUM_EIGHT; Local_u8LoopIndex++) {
		DIO_u8WritePinVal(CH_LCD_u8DataPins[Local_u8LoopIndex],GET_BIT(Copy_u8Data,Local_u8LoopIndex));
	}
	DIO_u8WritePinVal(CH_LCD_ENABLE, DIO_u8LOW);
}

/*Comment!: Initialize the LCD 16*2*/
extern void CH_LCD_voidInit(void) {

	voidDELAY_MS(15); // >15
	CH_LCD_u8Write_Command(0x30);
	voidDELAY_MS(4); //>4.1
	CH_LCD_u8Write_Command(0x30);
	voidDELAY_MS(1); // >100 US
	CH_LCD_u8Write_Command(0x30);

	CH_LCD_u8Write_Command(0x38); //Function Set: 8-bit, 2 Line, 5x8 Dots
	CH_LCD_u8Write_Command(0x06); //entry mode set
	CH_LCD_u8Write_Command(0x0C); //Display ON/OFF Control Display on Cursor off

//	LCD_cmd(0x38);          // initialization of 16X2 LCD in 8bit mode
//	LCD_cmd(0x01);          // clear LCD
//	LCD_cmd(0x0E);          // cursor ON
//	LCD_cmd(0x80);        // ---8 go to first line and --0 is for 0th position

}
