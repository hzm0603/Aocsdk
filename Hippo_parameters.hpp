﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hippo

#include "Basic.hpp"


namespace SDK::Params
{

// Function Hippo.Hippo_C.ExecuteUbergraph_Hippo
// 0x0008 (0x0008 - 0x0000)
struct Hippo_C_ExecuteUbergraph_Hippo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Hippo_C_ExecuteUbergraph_Hippo) == 0x000004, "Wrong alignment on Hippo_C_ExecuteUbergraph_Hippo");
static_assert(sizeof(Hippo_C_ExecuteUbergraph_Hippo) == 0x000008, "Wrong size on Hippo_C_ExecuteUbergraph_Hippo");
static_assert(offsetof(Hippo_C_ExecuteUbergraph_Hippo, EntryPoint) == 0x000000, "Member 'Hippo_C_ExecuteUbergraph_Hippo::EntryPoint' has a wrong offset!");
static_assert(offsetof(Hippo_C_ExecuteUbergraph_Hippo, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Hippo_C_ExecuteUbergraph_Hippo::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function Hippo.Hippo_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Hippo_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Hippo_C_ReceiveTick) == 0x000004, "Wrong alignment on Hippo_C_ReceiveTick");
static_assert(sizeof(Hippo_C_ReceiveTick) == 0x000004, "Wrong size on Hippo_C_ReceiveTick");
static_assert(offsetof(Hippo_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Hippo_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

