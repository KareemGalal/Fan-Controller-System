/*
 * ADC_interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_


/****************************************************************/
/***********************PUBLIC Definitions*****************/
/****************************************************************/

#define ADC_u8Channel0			0
#define ADC_u8Channel1			1
#define ADC_u8Channel2			2
#define ADC_u8Channel3			3
#define ADC_u8Channel4			4
#define ADC_u8Channel5			5
#define ADC_u8Channel6			6
#define ADC_u8Channel7			7


/*Comment!: The ADC Groups*/
#define ADC_u8GROUP1			1
#define ADC_u8GROUP2			2

/*Comment!:  Structure of Channels Groups Contain The Readings*/
typedef struct
{
	union {
		struct{
			u16 Channel1_Reads;
			u16 Channel2_Reads;
			u16	Channel3_Reads;
			u16	Channel4_Reads;
		};
		u16 ChannelArr[4];
	};

}ADC_structGroup;

/*Comment! :  The ADC Adjust Result  Options*/
#define ADC_u8LEFTADJST			1
#define ADC_u8RIGHTADJST		0

/*Comment!:  The ADC Initial State Options */
#define   ADC_u8ENABLE				1
#define   ADC_u8DISABLE				0

/*Comment!:  The ADC Auto Trigger Options */
#define ADC_u8TRIGENABLE				1
#define ADC_u8TRIGDISABLE				0

/*Comment!:  The ADC Interrupt Options */
#define ADC_u8INTENABLE				1
#define ADC_u8INTDISABLE				0

/****************************************************************/
/************************PUBLIC FUNCTIONS***************/
/****************************************************************/


/*Comment!: Initialization Function */
extern void ADC_voidInit(void);


/*Comment!: Read Channel and Return its value*/
extern u16 ADC_u16ReadChannel(u8 Copy_u8ChannelNum);

/*Comment!: Read Channel and Filter it  "N Times" Return its value*/
extern u16 ADC_u16ReadChannelFilter(u8 Copy_u8ChannelNum ,u8 Copy_u8FilterNum);

/*Comment!:Read Group of Channels */
extern ADC_structGroup ADC_structReadGroup(u8 Copy_u8GroupNum);

/*Comment!: Enable ADC */
extern void ADC_voidEnable(void);

/*Comment!: Disable ADC */
extern void ADC_voidDisable(void);


#endif /* ADC_INTERFACE_H_ */
