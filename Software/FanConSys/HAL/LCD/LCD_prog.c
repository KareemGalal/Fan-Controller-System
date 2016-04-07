/*
 * LCD_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */
#include "..\..\Utilities\types.h"
#include "..\..\Utilities\delay.h"
#include "..\..\MCAL\DIO\DIO_interface.h"
#include "LCD_interface.h"
#include "LCD_config.h"
#include "LCD_private.h"



extern void LCD_voidInit(void)
{

	VoidDelay_MS(20);
	LCD_u8WriteCommand(0b00110000);
	VoidDelay_MS(5);
	LCD_u8WriteCommand(0b00110000);
	VoidDelay_MS(1);
	LCD_u8WriteCommand(0b00110000);

	LCD_u8WriteCommand(0x3C);
	LCD_u8WriteCommand(0x06);
	LCD_u8WriteCommand(0x0c);

	LCD_voidClearAll();

}


extern u8 LCD_u8WriteCommand(u8 Copy_u8Command){

	DIO_u8WritePinVal(LCD_u8PIN_DATA0,GetBit(Copy_u8Command,0));
	DIO_u8WritePinVal(LCD_u8PIN_DATA1,GetBit(Copy_u8Command,1));
	DIO_u8WritePinVal(LCD_u8PIN_DATA2,GetBit(Copy_u8Command,2));
	DIO_u8WritePinVal(LCD_u8PIN_DATA3,GetBit(Copy_u8Command,3));
	DIO_u8WritePinVal(LCD_u8PIN_DATA4,GetBit(Copy_u8Command,4));
	DIO_u8WritePinVal(LCD_u8PIN_DATA5,GetBit(Copy_u8Command,5));
	DIO_u8WritePinVal(LCD_u8PIN_DATA6,GetBit(Copy_u8Command,6));
	DIO_u8WritePinVal(LCD_u8PIN_DATA7,GetBit(Copy_u8Command,7));

	DIO_u8WritePinVal(LCD_u8PIN_RS,DIO_u8LOW);
	DIO_u8WritePinVal(LCD_u8PIN_RW,DIO_u8LOW);
	DIO_u8WritePinVal(LCD_u8PIN_EN,DIO_u8HIGH);

	VoidDelay_MS(1);
	DIO_u8WritePinVal(LCD_u8PIN_EN,DIO_u8LOW);

	return 0;
}

extern u8 LCD_u8WriteData(u8 Copy_u8Data){

	DIO_u8WritePinVal(LCD_u8PIN_DATA0,GetBit(Copy_u8Data,0));
	DIO_u8WritePinVal(LCD_u8PIN_DATA1,GetBit(Copy_u8Data,1));
	DIO_u8WritePinVal(LCD_u8PIN_DATA2,GetBit(Copy_u8Data,2));
	DIO_u8WritePinVal(LCD_u8PIN_DATA3,GetBit(Copy_u8Data,3));
	DIO_u8WritePinVal(LCD_u8PIN_DATA4,GetBit(Copy_u8Data,4));
	DIO_u8WritePinVal(LCD_u8PIN_DATA5,GetBit(Copy_u8Data,5));
	DIO_u8WritePinVal(LCD_u8PIN_DATA6,GetBit(Copy_u8Data,6));
	DIO_u8WritePinVal(LCD_u8PIN_DATA7,GetBit(Copy_u8Data,7));

	DIO_u8WritePinVal(LCD_u8PIN_RS,DIO_u8HIGH);
	DIO_u8WritePinVal(LCD_u8PIN_RW,DIO_u8LOW);
	DIO_u8WritePinVal(LCD_u8PIN_EN,DIO_u8HIGH);

	VoidDelay_MS(1);
	DIO_u8WritePinVal(LCD_u8PIN_EN,DIO_u8LOW);



return 0;
}

extern void LCD_voidWriteString(u8 Copy_u8String [])
{
	u8 Local_u8ArrCounter;

	for( Local_u8ArrCounter=0; Copy_u8String [Local_u8ArrCounter]!='\0';Local_u8ArrCounter++)
	{
		 LCD_u8WriteData( Copy_u8String [Local_u8ArrCounter]);

	}

}
extern void LCD_voidClearAll(void){

	LCD_u8WriteCommand(LCD_u8CLEAR);

}
extern u8 LCD_u8GoTOXY(u8 Copy_u8LineIdx,u8 Copy_u8CharIdx)
{
	u8 Local_ReturnCheck = u8OK;
    u8 Local_u8CurserPos = 0x80;
	if (Copy_u8LineIdx >2||Copy_u8LineIdx <0 )
	{
		Local_ReturnCheck = u8ERROR;
	}
	else
	{
		switch (Copy_u8LineIdx)
		{
		case (LCD_u8LINE1):
				Local_u8CurserPos = (0x80+Copy_u8CharIdx);
				LCD_u8WriteCommand(Local_u8CurserPos);

				break;

		case (LCD_u8LINE2):
				Local_u8CurserPos = (0xC0+Copy_u8CharIdx);
						LCD_u8WriteCommand(Local_u8CurserPos);
				break;
		}
	}

	return Local_ReturnCheck;
}
