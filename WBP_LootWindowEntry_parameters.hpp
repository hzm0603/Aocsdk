﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LootWindowEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_LootWindowEntry.WBP_LootWindowEntry_C.GetButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_LootWindowEntry_C_GetButton final
{
public:
	class UAoCCommonButtonBase*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LootWindowEntry_C_GetButton) == 0x000008, "Wrong alignment on WBP_LootWindowEntry_C_GetButton");
static_assert(sizeof(WBP_LootWindowEntry_C_GetButton) == 0x000008, "Wrong size on WBP_LootWindowEntry_C_GetButton");
static_assert(offsetof(WBP_LootWindowEntry_C_GetButton, ReturnValue) == 0x000000, "Member 'WBP_LootWindowEntry_C_GetButton::ReturnValue' has a wrong offset!");

// Function WBP_LootWindowEntry.WBP_LootWindowEntry_C.GetBorder
// 0x0008 (0x0008 - 0x0000)
struct WBP_LootWindowEntry_C_GetBorder final
{
public:
	class UCommonBorder*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LootWindowEntry_C_GetBorder) == 0x000008, "Wrong alignment on WBP_LootWindowEntry_C_GetBorder");
static_assert(sizeof(WBP_LootWindowEntry_C_GetBorder) == 0x000008, "Wrong size on WBP_LootWindowEntry_C_GetBorder");
static_assert(offsetof(WBP_LootWindowEntry_C_GetBorder, ReturnValue) == 0x000000, "Member 'WBP_LootWindowEntry_C_GetBorder::ReturnValue' has a wrong offset!");

}

