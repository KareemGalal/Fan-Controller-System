/*
 * ADC_config.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*Comment!: SET The ADC  Initial State */
/*Range!: Enable : ADC_u8ENABLE   ~ Disable : ADC_u8DISABLE */

#define ADC_u8INITSTATE			ADC_u8ENABLE

/*Comment!: SET The ADC Auto Triggering*/
/*Range!: Enable : ADC_u8TRIGENABLE  ~ Disable : ADC_u8TRIGDISABLE */
#define ADC_u8AUTOTRIG			ADC_u8TRIGDISABLE

/*Comment!: SET The ADC Interrupt Enable*/
/*Range!: Enable : ADC_u8INTENABLE  ~ Disable : ADC_u8INTDISABLE */
#define ADC_u8INTERUPT			ADC_u8INTDISABLE

/*Comment!:  Set the Prescaler for the ADC */
/*Range!:   2 ~ 4 ~ 8 ~16 ~ 32 ~ 64 ~128  */

#define ADC_u8PRESCALLER					4



/*Comment!:  Set the Vref source for the ADC */
/*Range!:   External at Vrefpin  : 0 ~ Vref= Vcc : 1 ~ Internal with Vref= 2.56v : 2 */

#define ADC_u8VREFSRC						1

/*Comment! : Set the ADC Adjust Result */
/*Range!: Left Adjustment  : ADC_u8LEFTADJST ~ Right Adjustment  : ADC_u8RIGHTADJST*/

#define ADC_u8RESULTADJUST			ADC_u8RIGHTADJST


#endif /* ADC_CONFIG_H_ */
