/*
 * ADC_private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/

#define 	AssignBit(Reg,BitNum,Value)	Reg=(((~(1<<BitNum)&(Reg))|(Value<<BitNum)))
#define SetBit(Reg,BitNum)		Reg|=(1<<BitNum)
#define GetBit(Reg,BitNum)		(Reg&(1<<BitNum))>>BitNum
#define clrBit(Reg,BitNum)    	Reg&=~(1<<BitNum)
/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/

/*Comment!: Mapping  Registers Addresses	*/

#define ADC_u8ADC					*((volatile u16*) (0x24))
#define ADC_u8ADCL				*((volatile u8*) (0X24))
#define ADC_u8ADCH				*((volatile u8*) (0X25))

#define ADC_u8ADCSRA			*((volatile u8*) (0X26))
#define ADC_u8ADMUX			*((volatile u8*) (0X27))
#define ADC_u8SFIOR		   	    *((volatile u8*) (0X50))

/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/

/*Comment!:  The Result Adjust Bit */
#define ADC_u8ADLAR				5

/*Comment!:  The Enable  Bit */
#define ADC_u8ADEN				7

/*Comment!:  The Triggering Source Enable Bit*/
#define ADC_u8ADATE				5

/*Comment!:  The  Interrupt Flag Bit*/
#define ADC_u8ADIF			4

/*Comment!:  The  Interrupt Enable Bit*/
#define ADC_u8ADIE			3

/*Comment!: The Start Conversion Bit*/
#define ADC_u8ADSC			6
/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*Comment!:               */
#if		(ADC_u8PRESCALLER 	==	128)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000111

#endif

#if 		(ADC_u8PRESCALLER ==		64)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000110

#endif

#if 		(ADC_u8PRESCALLER 	==	32)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000101

#endif

#if 		(ADC_u8PRESCALLER 	==	16)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000100

#endif

#if 		(ADC_u8PRESCALLER 	==	8)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000011

#endif

#if 		(ADC_u8PRESCALLER 	==	4)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000010

#endif

#if 		(ADC_u8PRESCALLER 	==	2)
#undef 	ADC_u8PRESCALLER
#define		ADC_u8PRESCALLER	0b00000001

#endif

/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/

#if 		(ADC_u8VREFSRC 	==	0)
#undef 	ADC_u8VREFSRC
#define		ADC_u8VREFSRC	0b00000000

#endif
#if 		(ADC_u8VREFSRC 	==	1)
#undef 	ADC_u8VREFSRC
#define		ADC_u8VREFSRC	0b01000000

#endif
#if 		(ADC_u8VREFSRC 	==	2)
#undef 	ADC_u8VREFSRC
#define		ADC_u8VREFSRC	0b11000000

#endif

/*******************************************************************************************************************/
/*******************************************************************************************************************/
/*******************************************************************************************************************/



#endif /* ADC_PRIVATE_H_ */
