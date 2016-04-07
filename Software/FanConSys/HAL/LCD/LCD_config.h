/*
 * LCD_config.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


/*Comment!: DATA Bus PINS  */

#define LCD_u8PIN_DATA0		DIO_u8PIN16
#define LCD_u8PIN_DATA1		DIO_u8PIN17
#define LCD_u8PIN_DATA2		DIO_u8PIN18
#define LCD_u8PIN_DATA3		DIO_u8PIN19
#define LCD_u8PIN_DATA4		DIO_u8PIN20
#define LCD_u8PIN_DATA5		DIO_u8PIN21
#define LCD_u8PIN_DATA6		DIO_u8PIN22
#define LCD_u8PIN_DATA7		DIO_u8PIN23

/*Comment!:  COTNTROL Bus PINS*/

#define LCD_u8PIN_RS		DIO_u8PIN31
#define LCD_u8PIN_RW		DIO_u8PIN30
#define LCD_u8PIN_EN		DIO_u8PIN29

/*Comment! LCD INITIAL STATE */
/*Rang!:  LCD_u8DISABLE ~ LCD_u8ENABLE*/
#define LCD_u8INITSTATE		LCD_u8ENABLE

#endif /* LCD_CONFIG_H_ */
