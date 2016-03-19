/*
   CH_LCD_Interface.h

    Created on: Feb 22, 2016
        Author: Kareem Galal
*/

#ifndef _CH_LCD_INTERFACE_H_
#define _CH_LCD_INTERFACE_H_

/*******************************************************/
/***************** Public Definitions ******************/
/*******************************************************/



/*******************************************************/
/*****************  Public Functions  ******************/
/*******************************************************/

/*Comment!: Function to Write Command to the LCD*/
extern void CH_LCD_u8Write_Command(u8 Copy_u8PtrVal);

/*Comment!: Function to Write Data on the LCD*/
extern void CH_LCD_u8Write_Data(u8 Copy_u8PtrVal);

/*Comment!: Initialize the LCD16*2*/
extern void CH_LCD_voidInit(void);

#endif	/* _CH_LCD_INTERFACE_H_ */
