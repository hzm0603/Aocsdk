﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RightClickMenuItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function RightClickMenuItem.RightClickMenuItem_C.GetBorder
// 0x0008 (0x0008 - 0x0000)
struct RightClickMenuItem_C_GetBorder final
{
public:
	class UCommonBorder*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RightClickMenuItem_C_GetBorder) == 0x000008, "Wrong alignment on RightClickMenuItem_C_GetBorder");
static_assert(sizeof(RightClickMenuItem_C_GetBorder) == 0x000008, "Wrong size on RightClickMenuItem_C_GetBorder");
static_assert(offsetof(RightClickMenuItem_C_GetBorder, ReturnValue) == 0x000000, "Member 'RightClickMenuItem_C_GetBorder::ReturnValue' has a wrong offset!");

}

