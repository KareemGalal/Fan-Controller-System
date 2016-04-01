/*
  * Volt.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#include "types.h"
#include "Volt_config.h"
#include "Volt_interface.h"
#include "ADC_interface.h"




extern u16 VOLT_u16ReadVolt (u8 Copy_u8ChannelNum)
{
		u16 Local_u16ADCValue = 0;
		u16 Local_u16VoltValue =0;
		Local_u16ADCValue =  ADC_u16ReadChannel(Copy_u8ChannelNum);

		Local_u16VoltValue = ((((u32)(Local_u16ADCValue ) * (u16) VOLT_u8VREFVAl)/(u16)VOLT_u16RESOLUTION));


		return Local_u16VoltValue;
}
