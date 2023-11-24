/*
 * Std_Types.h
 *
 *  Created on: 23 nov. 2023
 *      Author: Milton
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "stdint.h"

//AGMI partially satisfies [SWS_CAN_00222]
typedef uint8_t Std_ReturnType;

//AGMI partially satisfies [SWS_CAN_00222]
typedef struct _Std_VersionInfoType
{
	uint16_t moduleID;
	uint8_t sw_major_version;
	uint8_t sw_minor_version;
	uint8_t sw_patch_version;
	uint16_t vendorID;
}Std_VersionInfoType;


enum
{
	E_OK = 0x00U,
	E_NOT_OK = 0x01U
};

enum
{
	STD_ACTIVE = 0x01U,
	STD_IDLE = 0x00U
};

enum
{
	STD_HIGH = 0x01U,
	STD_LOW = 0x00U
};

enum
{
	STD_ON = 0x01U,
	STD_OFF = 0x00U
};

#endif /* STD_TYPES_H_ */
