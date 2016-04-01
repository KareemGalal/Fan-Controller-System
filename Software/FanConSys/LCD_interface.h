/*
  * LCD_interface.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef LCD_INTERFACE_C_
#define LCD_INTERFACE_C_

/****************************************************************/
/*********************Public Definitions*************************/
/****************************************************************/
#define LCD_u8DISABLE		0
#define LCD_u8ENABLE			1


#define  LCD_u8LINE1				1
#define  LCD_u8LINE2				2

/****************************************************************/
/***********************Public FUNCTIONS*************************/
/****************************************************************/
extern void LCD_voidInit(void);

extern u8 LCD_u8WriteCommand(u8 Copy_u8Command);

extern u8 LCD_u8WriteData(u8 Copy_u8Data);

extern void LCD_voidClearAll(void);

extern void LCD_voidClearChar(void);

extern void LCD_voidWriteString(u8 Copy_u8String []);

extern u8 LCD_u8GoTOXY(u8 Copy_u8LineIdx,u8 Copy_u8CharIdx);

#endif /* LCD_INTERFACE_C_ */
