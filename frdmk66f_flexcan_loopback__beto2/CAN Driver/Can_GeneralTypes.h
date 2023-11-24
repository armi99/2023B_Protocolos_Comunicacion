/*
 * Can_GeneralTypes.h
 *
 *  Created on: 23 nov. 2023
 *      Author: Milton
 */

#ifndef CAN_GENERALTYPES_H_
#define CAN_GENERALTYPES_H_
#include "stdint.h"
#include "ComStack_Types.h"

//AGMI partially satisfies [SWS_CAN_00222]
typedef uint32_t Can_IdType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef enum _Can_ControllerStateType
{
	CAN_CS_UNINIT = 0x00U,
	CAN_CS_STARTED = 0x01U,
	CAN_CS_STOPPED = 0x02U,
	CAN_CS_SLEEP = 0x03
}Can_ControllerStateType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef enum _Can_ErrorStateType
{
	CAN_ERRORSTATE_ACTIVE = 0x00U,
	CAN_ERRORSTATE_PASSIVE,
	CAN_ERRORSTATE_BUSOFF
}Can_ErrorStateType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef uint16_t Can_HwHandleType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef struct _Can_HwType
{
	Can_IdType CanId;
	uint8_t ControllerId;
	Can_HwHandleType Hoh;
}Can_HwType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef struct _Can_PduType
{
	Can_IdType id;
	uint8_t length;
	uint8_t* sdu;
	PduIdType swPduHandle;
}Can_PduType;

#endif /* CAN_GENERALTYPES_H_ */
