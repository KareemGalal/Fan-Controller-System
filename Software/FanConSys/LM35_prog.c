/*
 * LM35_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#include "types.h"
#include "LM35_interface.h"
#include "LM35_config.h"
#include "LM35_private.h"
#include "ADC_interface.h"



static u16 VOLT_u16ReadVolt (void)
{
		u16 Local_u16ADCValue = 0;
		u16 Local_u16VoltValue =0;
		Local_u16ADCValue =  ADC_u16ReadChannel(VOLT_u8SELECTCHANNEL);

		Local_u16VoltValue = ((((u32)(Local_u16ADCValue ) * (u16) VOLT_u8VREFVAl)/(u16)VOLT_u16RESOLUTION));


		return Local_u16VoltValue;
}



extern u8 Temp_u8GetVal(void)
{
	u16 Local_u16VoltVal;
	u8 Local_u8Tempval;
	Local_u16VoltVal = VOLT_u16ReadVolt();

	Local_u8Tempval = (Local_u16VoltVal / 10);

	return  Local_u8Tempval;
}


extern void Temp_Init(void){



}
