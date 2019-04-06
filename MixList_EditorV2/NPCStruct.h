#pragma once


#include <stdio.h>
#include <tchar.h>

typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;

typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef struct
{
	uint16_t Index;

	struct
	{
		uint8_t Index;
		uint8_t Value;
	} Effect[3];

#define EF1 Effect[0].Index
#define EFV1 Effect[0].Value
#define EF2 Effect[1].Index
#define EFV2 Effect[1].Value
#define EF3 Effect[2].Index
#define EFV3 Effect[2].Value
}st_Item;

typedef struct
{
	int32_t face; //  0 - 3

	int32_t MapX; // 4 - 7
	int32_t MapY; //  8 - 11

	st_Item ItemShow;  //12 - 19

	int32_t Unknow_20; // 20 - 23
	int16_t Unknow_24; // 24 - 25
	int16_t Type; // 26 - 27// 2 = composiçaõ de soul, 1 = padrão
	struct
	{
		int32_t isNotItemList; // type
		int32_t ItemID; // index do req
	} reqItem[8];

	int32_t Gold;
	int8_t Blaaaa[0xA00];
} pNPCComp;

typedef struct
{
	int32_t Strdef; // 0x40D84 - 0 - 3
	int32_t Amount; // 0x40D88 - 4 - 7
	st_Item item; // 0x40D8C - 8 - 15
	int32_t Unused; // 0x40D94 - 16 - 19
	int32_t Unused_02; // 0x40D98 - 20 - 23

	struct
	{
		int32_t MinID;
		int32_t MaxID;
	} Interval[3]; // 40D9C - 40DB0 (24 - 44)

	int8_t Unk[16];
} pNPCReq;

typedef struct
{
	pNPCComp npcs[100];
	pNPCReq Req[100];
} npcCompleto;

/* extern npcCompleto MixData; */