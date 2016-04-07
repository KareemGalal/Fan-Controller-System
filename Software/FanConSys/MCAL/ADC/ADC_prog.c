/*
 * ADC_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#include "..\..\Utilities\types.h"
#include	"ADC_interface.h"
#include	"ADC_config.h"
#include	"ADC_private.h"




/*Comment!: Initialization Function */

extern void ADC_voidInit(void){



	/*comment!: Set the Prescaler of the ADC */

	ADC_u8ADCSRA=  ((ADC_u8ADCSRA & 0xF8)|(ADC_u8PRESCALLER));

	/*comment!: Set theVref source of the ADC */

	ADC_u8ADMUX = ((ADC_u8ADMUX & 0x3F)|(ADC_u8VREFSRC));

	/*comment!: Set the Result Adjust of the ADC */

	AssignBit(ADC_u8ADMUX,ADC_u8ADLAR,ADC_u8RESULTADJUST);

	/*comment!: Set the Initial State of the ADC */

	AssignBit(ADC_u8ADCSRA,ADC_u8ADEN,ADC_u8INITSTATE);

	/*Comment!: SET The  Auto Triggering */
	AssignBit(ADC_u8ADCSRA,ADC_u8ADATE	, ADC_u8AUTOTRIG	);

	/*Comment!: SET The  Interrupt  */
	AssignBit(ADC_u8ADCSRA,ADC_u8ADIE	, ADC_u8INTERUPT	);
}

/*Comment!: Enable ADC */
extern void ADC_voidEnable(void){

	AssignBit(ADC_u8ADCSRA,ADC_u8ADEN,ADC_u8ENABLE);


}
/*Comment!: Disable ADC */
extern void ADC_voidDisable(void){

	AssignBit(ADC_u8ADCSRA,ADC_u8ADEN,ADC_u8DISABLE);

}



/*Comment!: Read Channel and Return its value*/
extern u16 ADC_u16ReadChannel(u8 Copy_u8ChannelNum)
{
	u16 Local_ReturnVal;
	/*Comment!:Select Channel to Read */
	ADC_u8ADMUX = ((ADC_u8ADMUX & 0xE0)|(Copy_u8ChannelNum));

	/*Comment!:Start Conversion*/
	SetBit( ADC_u8ADCSRA, ADC_u8ADSC);

	/*Comment!: Wait Until The Conversion is Finished*/
		while(GetBit(ADC_u8ADCSRA,ADC_u8ADSC));

		/*Comment!:Read The Result From ADC register*/
		 Local_ReturnVal=ADC_u8ADC;

		 /*Comment!:  clear the interrupt Flag bit */
		 clrBit(ADC_u8ADCSRA,ADC_u8ADIF);

		 /*Comment!:Return The Result*/
		 return  Local_ReturnVal;
}

/*Comment!: Read Channel and Filter it  Return its value*/
extern u16 ADC_u16ReadChannelFilter(u8 Copy_u8ChannelNum ,u8 Copy_u8FilterNum)
{
	u16 Local_u8RetunVar = 0;
	s8 Local_u8LooPCounter = 0;
	u64 Local_u64ChReadSum = 0;

	/*Comment!: Keep the Filter Times  Between "2"times and "10" times*/
	if (Copy_u8FilterNum>10)
	{
		Copy_u8FilterNum = 10;
	}
	if (Copy_u8FilterNum <2)
	{
		Copy_u8FilterNum = 2;
	}


	/*Comment!: read channel For FilterNum Times */
	for(Local_u8LooPCounter =Copy_u8FilterNum ; Copy_u8FilterNum >0;Copy_u8FilterNum --)
	{

		/*Comment!: Sum Of the  Reads */
		Local_u64ChReadSum += ADC_u16ReadChannel(Copy_u8ChannelNum);

	}

	/*Comment!: The Average of the Reads*/
	Local_u64ChReadSum = Local_u64ChReadSum/Copy_u8FilterNum;

	/*Comment!: Return The Average Value */
	Local_u8RetunVar=  Local_u64ChReadSum;

	return Local_u8RetunVar;

}


extern ADC_structGroup ADC_structReadGroup(u8 Copy_u8ChannelNum)
{
	u8 	Local_GrpLoopCounter=0;
	ADC_structGroup Group_Num;
	switch(Copy_u8ChannelNum )
	{
	case ADC_u8GROUP1:
	{
		for(Local_GrpLoopCounter=0;Local_GrpLoopCounter<4;Local_GrpLoopCounter++)
		{

			Group_Num.ChannelArr[Local_GrpLoopCounter]= ADC_u16ReadChannel(Local_GrpLoopCounter);

		}/*Comment!:End of The For Loop*/
	}/*Comment!:end of ADC_u8GROUP1 case*/

	break;

	case ADC_u8GROUP2:
	{
			for(Local_GrpLoopCounter=4;Local_GrpLoopCounter<8;Local_GrpLoopCounter++)
			{

				Group_Num.ChannelArr[Local_GrpLoopCounter]= ADC_u16ReadChannel(Local_GrpLoopCounter);

			}/*Comment!:End of The For Loop*/
		}/*Comment!:end of ADC_u8GROUP2 case*/

		break;

	default:
		break;
	}

	return  Group_Num;
}/*Comment!:End of  ADC_structReadGroup*/
