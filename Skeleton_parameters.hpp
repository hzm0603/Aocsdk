﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skeleton

#include "Basic.hpp"


namespace SDK::Params
{

// Function Skeleton.Skeleton_C.ExecuteUbergraph_Skeleton
// 0x0008 (0x0008 - 0x0000)
struct Skeleton_C_ExecuteUbergraph_Skeleton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRunningOnServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Skeleton_C_ExecuteUbergraph_Skeleton) == 0x000004, "Wrong alignment on Skeleton_C_ExecuteUbergraph_Skeleton");
static_assert(sizeof(Skeleton_C_ExecuteUbergraph_Skeleton) == 0x000008, "Wrong size on Skeleton_C_ExecuteUbergraph_Skeleton");
static_assert(offsetof(Skeleton_C_ExecuteUbergraph_Skeleton, EntryPoint) == 0x000000, "Member 'Skeleton_C_ExecuteUbergraph_Skeleton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skeleton_C_ExecuteUbergraph_Skeleton, CallFunc_IsRunningOnServer_ReturnValue) == 0x000004, "Member 'Skeleton_C_ExecuteUbergraph_Skeleton::CallFunc_IsRunningOnServer_ReturnValue' has a wrong offset!");

}

