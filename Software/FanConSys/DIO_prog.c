/*
 * DIO_prog.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: CRIZMA-PC&LAPTOP
 */
#include	"types.h"
#include 	"DIO_interface.h"
#include	"DIO_private.h"
#include	"DIO_config.h"

/*Comment!: Array contain the Ports Addresses*/
static u8* const  DIO_u8ArrPtrToPORTReg[DIO_u8PortsNum] = {DIO_u8PORTA ,DIO_u8PORTB ,DIO_u8PORTC,DIO_u8PORTD};
/*Comment!: Array contain the Ports Addresses*/
static u8* const  DIO_u8ArrPtrToPINReg[DIO_u8PortsNum] = {DIO_u8PINA ,DIO_u8PINB,DIO_u8PINC,DIO_u8PIND};
/*Comment!: Array contain the Ports Addresses*/
static u8* const  DIO_u8ArrPtrToDDRReg[DIO_u8PortsNum] = {DIO_u8DDRA ,DIO_u8DDRB ,DIO_u8DDRC,DIO_u8DDRD};

/*Comment!: Initialization Function */
extern void DIO_voidInit(void){

	/*Comment!:  Initialize PORTs Directions */
	*DIO_u8DDRA = DIO_u8PORTADir;
	*DIO_u8DDRB = DIO_u8PORTBDir;
	*DIO_u8DDRC = DIO_u8PORTCDir;
	*DIO_u8DDRD = DIO_u8PORTDDir;

	/*Comment!:  Initialize PORTs Values */
	*DIO_u8PORTA |= (DIO_u8PORTADir)&(DIO_u8PORTAVal);
	*DIO_u8PORTB |= (DIO_u8PORTBDir)&(DIO_u8PORTAVal);
	*DIO_u8PORTC |= (DIO_u8PORTCDir)&(DIO_u8PORTAVal);
	*DIO_u8PORTD |= (DIO_u8PORTDDir)&(DIO_u8PORTAVal);
}

/*Comment!: Read Pin Value */
extern u8 DIO_u8ReadPinVal(u8 Copy_u8PinIdx,u8* Copy_u8PtrToVal){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	if ((Copy_u8PinIdx >= DIO_u8PIN0) && (Copy_u8PinIdx <= DIO_u8PIN31)){

		local_u8DivResult = Copy_u8PinIdx / DIO_u8PortPinsNum;
		local_u8ModResult = Copy_u8PinIdx % DIO_u8PortPinsNum;

		*Copy_u8PtrToVal= (( *DIO_u8ArrPtrToPINReg[local_u8DivResult] & (1 << local_u8ModResult)) >> local_u8ModResult);
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}


	return	local_u8ReturnVar;
}


/*Comment!: Write Pin Value */
extern u8 DIO_u8WritePinVal(u8 Copy_u8PinIdx, u8 Copy_u8PinVal){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;


	if ((Copy_u8PinIdx >= DIO_u8PIN0) && (Copy_u8PinIdx <= DIO_u8PIN31)){

		local_u8DivResult = Copy_u8PinIdx / DIO_u8PortPinsNum;
		local_u8ModResult = Copy_u8PinIdx % DIO_u8PortPinsNum;

		*DIO_u8ArrPtrToPORTReg[local_u8DivResult] = ((*DIO_u8ArrPtrToPORTReg[local_u8DivResult]&(~(1 << local_u8ModResult)))|(Copy_u8PinVal << local_u8ModResult));
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}

	return	local_u8ReturnVar;
}

/*Comment!: Read Port Value */
extern u8 DIO_u8ReadPortVal(u8 Copy_u8PortIdx,u8* Copy_u8PtrToVal){

	u8 local_u8ReturnVar = u8OK;

	if ((Copy_u8PortIdx >= DIO_u8PortA) && (Copy_u8PortIdx <=DIO_u8PortD)){

		*Copy_u8PtrToVal= *DIO_u8ArrPtrToPINReg[Copy_u8PortIdx];
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}


	return	local_u8ReturnVar;
}

/*Comment!: Write Port Value */
extern u8 DIO_u8WritePortVal(u8 Copy_u8PortIdx,u8 Copy_u8PortVal){

	u8 local_u8ReturnVar = u8OK;

	if ((Copy_u8PortIdx >= DIO_u8PortA) && (Copy_u8PortIdx <=DIO_u8PortD)){

			 *DIO_u8ArrPtrToPORTReg[Copy_u8PortIdx] = Copy_u8PortVal;
		}
		else{
			local_u8ReturnVar = u8ERROR;
		}

	return	local_u8ReturnVar;
}

/*Comment!: Write Pin Direction */
extern u8 DIO_u8WritePinDir(u8 Copy_u8PinIdx,u8 Copy_u8PinToDir){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	if ((Copy_u8PinIdx >= DIO_u8PIN0) && (Copy_u8PinIdx <= DIO_u8PIN31)){

		local_u8DivResult = Copy_u8PinIdx / DIO_u8PortPinsNum;
		local_u8ModResult = Copy_u8PinIdx % DIO_u8PortPinsNum;

		*DIO_u8ArrPtrToDDRReg[local_u8DivResult] = ((*DIO_u8ArrPtrToDDRReg[local_u8DivResult]&(~(1 << local_u8ModResult)))|(Copy_u8PinToDir << local_u8ModResult));
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}


	return	local_u8ReturnVar;

}

/*Comment!: Write Port Direction */
extern u8 DIO_u8WritePortDir(u8 Copy_u8PortIdx,u8 Copy_u8PortToDir){

	u8 local_u8ReturnVar = u8OK;

	if ((Copy_u8PortIdx >= DIO_u8PortA) && (Copy_u8PortIdx <=DIO_u8PortD)){

		 *DIO_u8ArrPtrToDDRReg[Copy_u8PortIdx] = Copy_u8PortToDir;
	}
	else{

		local_u8ReturnVar = u8ERROR;
	}

	return	local_u8ReturnVar;

}

/*Comment!: Read Pin Direction */
extern u8 DIO_u8readPinDir(u8 Copy_u8PinIdx,u8* Copy_u8PtrToDir){

	u8 local_u8ReturnVar = u8OK;
	u8 local_u8DivResult = 0;
	u8 local_u8ModResult = 0;

	if ((Copy_u8PinIdx >= DIO_u8PIN0) && (Copy_u8PinIdx <= DIO_u8PIN31)){

		local_u8DivResult = Copy_u8PinIdx / DIO_u8PortPinsNum;
		local_u8ModResult = Copy_u8PinIdx % DIO_u8PortPinsNum;

		*Copy_u8PtrToDir= (( *DIO_u8ArrPtrToDDRReg[local_u8DivResult] & (1 << local_u8ModResult)) >> local_u8ModResult);
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}


	return	local_u8ReturnVar;
}

/*Comment!: Read Port Direction */
extern u8 DIO_u8readPortDir(u8 Copy_u8PortIdx,u8* Copy_u8PtrToDir){

	u8 local_u8ReturnVar = u8OK;


	if ((Copy_u8PortIdx >= DIO_u8PortA) && (Copy_u8PortIdx <=DIO_u8PortD)){

		*Copy_u8PtrToDir = *DIO_u8ArrPtrToDDRReg[Copy_u8PortIdx];
	}
	else{
		local_u8ReturnVar = u8ERROR;
	}



		return	local_u8ReturnVar;
}


