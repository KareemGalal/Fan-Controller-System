
#include "types.h"
#include "ADC_interface.h"
#include "Volt_interface.h"
#include "DIO_interface.h"

#include "LCD_interface.h"
#include "LM35_interface.h"
#include "stdlib.h"
#include "string.h"

#define Speed1 			1
#define Speed2 			2
#define Speed3 			3

u8 APP_u8TempToDisp [5];
u8 Temp[5]="Temp";
u8 Speed[5]= "Speed";



static void App_voidLCD_DiplayTemp(u16 Copy_u16OutPutTemp , u8 Copy_u8FanSpeed)
{
	itoa( Copy_u16OutPutTemp ,APP_u8TempToDisp ,10);

	LCD_u8GoTOXY(LCD_u8LINE1,0);
	LCD_voidWriteString(Temp);

	LCD_u8GoTOXY(LCD_u8LINE2,0);
	LCD_voidWriteString(APP_u8TempToDisp);
	LCD_u8WriteData(' ');
	LCD_u8WriteData(' ');
	LCD_u8WriteData('C');

	LCD_u8GoTOXY(LCD_u8LINE1,8);
	LCD_voidWriteString(Speed);
	LCD_u8GoTOXY(LCD_u8LINE2,8);
	LCD_u8WriteData(0x30 +Copy_u8FanSpeed);

}

extern void Application_voidInit(void){
	DIO_voidInit();
	ADC_voidInit();
	LCD_voidInit();

}

extern void FanControlSys(void)
{
	u8 Local_u8temp;
	u8 Local_u8FanSpeed;

	Local_u8temp = Temp_u8GetVal();

	if (Local_u8temp >=15 && Local_u8temp< 20)
	{
		Local_u8FanSpeed = Speed1;
	}
	else if (Local_u8temp >=20 && Local_u8temp< 25)
		{
			Local_u8FanSpeed = Speed2;
		}

	else if (Local_u8temp >=25 && Local_u8temp <30 )
	{
		Local_u8FanSpeed = Speed3;
	}
	else {

	}

	App_voidLCD_DiplayTemp( Local_u8temp , Local_u8FanSpeed);

}
