/*
 * ComStack_Types.h
 *
 *  Created on: 23 nov. 2023
 *      Author: Milton
 */

#ifndef COMSTACK_TYPES_H_
#define COMSTACK_TYPES_H_

#include "Std_Types.h"

//AGMI partially satisfies [SWS_CAN_00222]
typedef uint8_t IcomConfigIdType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef enum _IcomSwitch_ErrorType
{
	ICOM_SWITCH_E_OK = 0x00U,
	ICOM_SWITCH_E_FAILED = 0x01U
}IcomSwitch_ErrorType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef uint8_t PduIdType;

typedef uint8_t PduLengthType;
//AGMI partially satisfies [SWS_CAN_00222]
typedef struct _PduInfoType
{
	uint8_t* MetaDataPtr;
	uint8_t* SduDataPtr;
	PduLengthType SdeLength;
}PduInfoType;

#endif /* COMSTACK_TYPES_H_ */
