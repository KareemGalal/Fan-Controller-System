/*
 * DIO_private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/*Comment!: concatenate Helper */
#define conc(A7,A6,A5,A4,A3,A2,A1,A0)      conc_helper(A7,A6,A5,A4,A3,A2,A1,A0)
#define conc_helper(x7,x6,x5,x4,x3,x2,x1,x0)     0b##x0##x1##x2##x3##x4##x5##x6##x7

/*Comment!: Initialize PORTA Directions  */
#define DIO_u8PORTADir		conc(DIO_u8PIN0_INITDIR,DIO_u8PIN1_INITDIR,DIO_u8PIN2_INITDIR,\
		DIO_u8PIN3_INITDIR,DIO_u8PIN4_INITDIR,DIO_u8PIN5_INITDIR,DIO_u8PIN6_INITDIR,DIO_u8PIN7_INITDIR)
/*Comment!: Initialize PORTB Directions values */
#define DIO_u8PORTBDir		conc(DIO_u8PIN8_INITDIR,DIO_u8PIN9_INITDIR,DIO_u8PIN10_INITDIR,\
		DIO_u8PIN11_INITDIR,DIO_u8PIN12_INITDIR,DIO_u8PIN13_INITDIR,DIO_u8PIN14_INITDIR,DIO_u8PIN15_INITDIR)
/*Comment!: Initialize PORTC Directions values */
#define DIO_u8PORTCDir		conc(DIO_u8PIN16_INITDIR,DIO_u8PIN17_INITDIR,DIO_u8PIN18_INITDIR,\
		DIO_u8PIN19_INITDIR,DIO_u8PIN20_INITDIR,DIO_u8PIN21_INITDIR,DIO_u8PIN22_INITDIR,DIO_u8PIN23_INITDIR)
/*Comment!: Initialize PORTD Directions values */
#define DIO_u8PORTDDir		conc(DIO_u8PIN24_INITDIR,DIO_u8PIN25_INITDIR,DIO_u8PIN26_INITDIR,\
		DIO_u8PIN27_INITDIR,DIO_u8PIN28_INITDIR,DIO_u8PIN29_INITDIR,DIO_u8PIN30_INITDIR,DIO_u8PIN31_INITDIR)


/*Comment!: Initialize PORTA Values */
#define DIO_u8PORTAVal		conc(DIO_u8PIN0_INITVAL,DIO_u8PIN1_INITVAL,DIO_u8PIN2_INITVAL,\
		DIO_u8PIN3_INITVAL,DIO_u8PIN4_INITVAL,DIO_u8PIN5_INITVAL,DIO_u8PIN6_INITVAL,DIO_u8PIN7_INITVAL)
/*Comment!: Initialize PORTB Values */
#define DIO_u8PORTBVal		conc(DIO_u8PIN8_INITVAL,DIO_u8PIN9_INITVAL	,DIO_u8PIN10_INITVAL,\
		DIO_u8PIN11_INITVAL,DIO_u8PIN12_INITVAL,DIO_u8PIN13_INITVAL,DIO_u8PIN14_INITVAL,DIO_u8PIN15_INITVAL)
/*Comment!: Initialize PORTC Values */
#define DIO_u8PORTCVal		conc(DIO_u8PIN16_INITVAL,DIO_u8PIN17_INITVAL	,DIO_u8PIN18_INITVAL,\
		DIO_u8PIN19_INITVAL,DIO_u8PIN20_INITVAL,DIO_u8PIN21_INITVAL,DIO_u8PIN22_INITVAL,DIO_u8PIN23_INITVAL)
/*Comment!: Initialize PORTD Values */
#define DIO_u8PORTDVal		conc(DIO_u8PIN24_INITVAL,DIO_u8PIN25_INITVAL,DIO_u8PIN26_INITVAL,\
		DIO_u8PIN27_INITVAL,DIO_u8PIN28_INITVAL,DIO_u8PIN29_INITVAL,DIO_u8PIN30_INITVAL,DIO_u8PIN31_INITVAL)

/*Comment!: initialize Ports Number */
#define DIO_u8PortsNum		4
/*Comment!: Initialize Register Pins */
#define DIO_u8PortPinsNum	8


/*Comment!: Mapping The PORTA Registers Addresses	*/
#define DIO_u8PORTA 		((volatile u8*)(0X3B))
#define DIO_u8DDRA 			((volatile u8*)(0X3A))
#define DIO_u8PINA 			((volatile u8*)(0X39))

/*Comment!: Mapping The PORTB Registers Addresses	*/
#define DIO_u8PORTB 		((volatile u8*)(0X38))
#define DIO_u8DDRB 			((volatile u8*)(0X37))
#define DIO_u8PINB 			((volatile u8*)(0X36))

/*Comment!: Mapping The PORTC Registers Addresses	*/
#define DIO_u8PORTC 		((volatile u8*)(0X35))
#define DIO_u8DDRC 			((volatile u8*)(0X34))
#define DIO_u8PINC 			((volatile u8*)(0X33))

/*Comment!: Mapping The PORTD Registers Addresses	*/
#define DIO_u8PORTD 		((volatile u8*)(0X32))
#define DIO_u8DDRD 			((volatile u8*)(0X31))
#define DIO_u8PIND 			((volatile u8*)(0X30))


#endif /* DIO_PRIVATE_H_ */
