/*
 * delay.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */

#ifndef DELAY_H_
#define DELAY_H_

#include "delay_config.h"
#include "types.h"

#define VoidDelay_MS(Copy_u8NumMS)		{for (u32 i =((113.636363)*Copy_u8NumMS);i>0;i--){__asm__("NOP");}}

#endif /* DELAY_H_ */
