/*
 * Volt_interface.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef VOLT_INTERFACE_H_
#define VOLT_INTERFACE_H_


/*Comment!:  the Volt  Channels */

#define VOLT_u8CHANNEL0			0
#define VOLT_u8CHANNEL1			1
#define VOLT_u8CHANNEL2			2
#define VOLT_u8CHANNEL3			3
#define VOLT_u8CHANNEL4			4
#define VOLT_u8CHANNEL5			5
#define VOLT_u8CHANNEL6			6
#define VOLT_u8CHANNEL7			7

/*Comment!:  Read Volt from the channel */
extern u16 VOLT_u16ReadVolt (u8 Copy_u8ChannelNum);

#endif /* VOLT_INTERFACE_H_ */
