/*
 * LM35_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */
#include "Volt_interface.h"








extern u8 Temp_u8GetVal(void)
{
	u16 Local_u16VoltVal;
	u8 Local_u8Tempval;
	Local_u16VoltVal = VOLT_u16ReadVolt(VOLT_u8CHANNEL0);

	Local_u8Tempval = (Local_u16VoltVal / 10);

	return  Local_u8Tempval;
}


extern void Temp_Init(void){



}
