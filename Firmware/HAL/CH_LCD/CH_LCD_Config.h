/*
   CH_LCD_Config.h

    Created on: Feb 22, 2016
        Author: Kareem Galal
*/


#ifndef _CH_LCD_CONFIG_H_
#define _CH_LCD_CONFIG_H_

/*******************************************************/
/**************** Public Definitions *******************/
/*******************************************************/

/*Comment!: Data Bus Pins */
/*Range!  : DIO_u8PIN0 : DIO_u8PIN31 */
#define CH_LCD_DATA0	DIO_u8PIN0	
#define CH_LCD_DATA1    DIO_u8PIN1
#define CH_LCD_DATA2    DIO_u8PIN2
#define CH_LCD_DATA3    DIO_u8PIN3
#define CH_LCD_DATA4    DIO_u8PIN4
#define CH_LCD_DATA5    DIO_u8PIN5
#define CH_LCD_DATA6    DIO_u8PIN6
#define CH_LCD_DATA7    DIO_u8PIN7

/*Comment!: Data Bus Pins */
/*Range!  : DIO_u8PIN0 : DIO_u8PIN31 */
#define CH_LCD_RS			DIO_u8PIN8
#define CH_LCD_RW           DIO_u8PIN9
#define CH_LCD_ENABLE       DIO_u8PIN10


#endif	/* _CH_LCD_CONFIG_H_ */
