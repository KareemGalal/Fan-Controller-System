/*
 * DIO_config.h
 *
 *  Created on: Jan 27, 2016
 *      Author: Kareem Galal
 */

#ifndef _DIO_CONFIG_H_
#define _DIO_CONFIG_H_

/*******************************************************/
/***************** Public Definitions  *****************/
/*******************************************************/

/*Comment!: Pin Initial Direction */
/*Range!  : DIO_u8INPUT ~ DIO_u8OUTPUT*/
/*Comment!: PortA */
#define DIO_u8PIN0_INITDIR			DIO_u8OUTPUT	 //CH_LCD_DATA0
#define DIO_u8PIN1_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA1
#define DIO_u8PIN2_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA2
#define DIO_u8PIN3_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA3
#define DIO_u8PIN4_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA4
#define DIO_u8PIN5_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA5
#define DIO_u8PIN6_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA6
#define DIO_u8PIN7_INITDIR			DIO_u8OUTPUT     //CH_LCD_DATA7
/*Comment!: PortB */
#define DIO_u8PIN8_INITDIR			DIO_u8OUTPUT	//CH_LCD_RS
#define DIO_u8PIN9_INITDIR			DIO_u8OUTPUT	//CH_LCD_RW
#define DIO_u8PIN10_INITDIR			DIO_u8OUTPUT 	//CH_LCD_ENABLE
#define DIO_u8PIN11_INITDIR			DIO_u8INPUT
#define DIO_u8PIN12_INITDIR			DIO_u8INPUT
#define DIO_u8PIN13_INITDIR			DIO_u8INPUT
#define DIO_u8PIN14_INITDIR			DIO_u8INPUT
#define DIO_u8PIN15_INITDIR			DIO_u8INPUT
/*Comment!: PortC */
#define DIO_u8PIN16_INITDIR			DIO_u8INPUT //KEYPAD_ROW1_PIN
#define DIO_u8PIN17_INITDIR			DIO_u8INPUT //KEYPAD_ROW2_PIN
#define DIO_u8PIN18_INITDIR			DIO_u8INPUT //KEYPAD_ROW3_PIN
#define DIO_u8PIN19_INITDIR			DIO_u8INPUT //KEYPAD_ROW4_PIN
#define DIO_u8PIN20_INITDIR			DIO_u8OUTPUT //KEYPAD_COLUMN1_PIN
#define DIO_u8PIN21_INITDIR			DIO_u8OUTPUT //KEYPAD_COLUMN2_PIN
#define DIO_u8PIN22_INITDIR			DIO_u8OUTPUT //KEYPAD_COLUMN3_PIN
#define DIO_u8PIN23_INITDIR			DIO_u8OUTPUT //KEYPAD_COLUMN4_PIN
/*Comment!: PortD */
#define DIO_u8PIN24_INITDIR			DIO_u8OUTPUT//Shift Register SER_DATA_PIN
#define DIO_u8PIN25_INITDIR			DIO_u8OUTPUT//Shift Register SCK_PIN
#define DIO_u8PIN26_INITDIR			DIO_u8OUTPUT//Shift Register RCK_PIN
#define DIO_u8PIN27_INITDIR			DIO_u8INPUT
#define DIO_u8PIN28_INITDIR			DIO_u8INPUT
#define DIO_u8PIN29_INITDIR			DIO_u8INPUT
#define DIO_u8PIN30_INITDIR			DIO_u8INPUT
#define DIO_u8PIN31_INITDIR			DIO_u8INPUT	//Control Switch

/*Comment!: Pin Initial Values*/
/*Range!  : DIO_u8HIGH ~ DIO_u8LOW*/
/*Comment!: PortA */
#define DIO_u8PIN0_INITVAL			DIO_u8LOW	 //CH_LCD_DATA0
#define DIO_u8PIN1_INITVAL			DIO_u8LOW    //CH_LCD_DATA1
#define DIO_u8PIN2_INITVAL			DIO_u8LOW    //CH_LCD_DATA2
#define DIO_u8PIN3_INITVAL			DIO_u8LOW    //CH_LCD_DATA3
#define DIO_u8PIN4_INITVAL			DIO_u8LOW    //CH_LCD_DATA4
#define DIO_u8PIN5_INITVAL			DIO_u8LOW    //CH_LCD_DATA5
#define DIO_u8PIN6_INITVAL			DIO_u8LOW    //CH_LCD_DATA6
#define DIO_u8PIN7_INITVAL			DIO_u8LOW    //CH_LCD_DATA7
/*Comment!: PortB */
#define DIO_u8PIN8_INITVAL			DIO_u8LOW   //CH_LCD_RS
#define DIO_u8PIN9_INITVAL			DIO_u8LOW   //CH_LCD_RW
#define DIO_u8PIN10_INITVAL			DIO_u8LOW   //CH_LCD_ENABLE
#define DIO_u8PIN11_INITVAL			DIO_u8LOW
#define DIO_u8PIN12_INITVAL			DIO_u8LOW
#define DIO_u8PIN13_INITVAL			DIO_u8LOW
#define DIO_u8PIN14_INITVAL			DIO_u8LOW
#define DIO_u8PIN15_INITVAL			DIO_u8LOW
/*Comment!: PortC */
#define DIO_u8PIN16_INITVAL			DIO_u8HIGH //KEYPAD_ROW1_PIN >> Active Pull-Up Resistor
#define DIO_u8PIN17_INITVAL			DIO_u8HIGH //KEYPAD_ROW2_PIN >> Active Pull-Up Resistor
#define DIO_u8PIN18_INITVAL			DIO_u8HIGH //KEYPAD_ROW3_PIN >> Active Pull-Up Resistor
#define DIO_u8PIN19_INITVAL			DIO_u8HIGH //KEYPAD_ROW4_PIN >> Active Pull-Up Resistor
#define DIO_u8PIN20_INITVAL			DIO_u8HIGH //KEYPAD_COLUMN1_PIN
#define DIO_u8PIN21_INITVAL			DIO_u8HIGH //KEYPAD_COLUMN2_PIN
#define DIO_u8PIN22_INITVAL			DIO_u8HIGH //KEYPAD_COLUMN3_PIN
#define DIO_u8PIN23_INITVAL			DIO_u8HIGH //KEYPAD_COLUMN4_PIN
/*Comment!: PortD */
#define DIO_u8PIN24_INITVAL			DIO_u8LOW
#define DIO_u8PIN25_INITVAL			DIO_u8LOW
#define DIO_u8PIN26_INITVAL			DIO_u8LOW
#define DIO_u8PIN27_INITVAL			DIO_u8LOW
#define DIO_u8PIN28_INITVAL			DIO_u8LOW
#define DIO_u8PIN29_INITVAL			DIO_u8LOW
#define DIO_u8PIN30_INITVAL			DIO_u8LOW
#define DIO_u8PIN31_INITVAL			DIO_u8HIGH //Active Pull-Up Resistor for the Control Switch

#endif /* _DIO_CONFIG_H_ */
