﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AoCGameInstanceBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function AoCGameInstanceBP.AoCGameInstanceBP_C.DestroySessionCaller
// 0x0008 (0x0008 - 0x0000)
struct AoCGameInstanceBP_C_DestroySessionCaller final
{
public:
	class AAoCPlayerController*                   PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AoCGameInstanceBP_C_DestroySessionCaller) == 0x000008, "Wrong alignment on AoCGameInstanceBP_C_DestroySessionCaller");
static_assert(sizeof(AoCGameInstanceBP_C_DestroySessionCaller) == 0x000008, "Wrong size on AoCGameInstanceBP_C_DestroySessionCaller");
static_assert(offsetof(AoCGameInstanceBP_C_DestroySessionCaller, PlayerController) == 0x000000, "Member 'AoCGameInstanceBP_C_DestroySessionCaller::PlayerController' has a wrong offset!");

// Function AoCGameInstanceBP.AoCGameInstanceBP_C.ExecuteUbergraph_AoCGameInstanceBP
// 0x0040 (0x0040 - 0x0000)
struct AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAoCPlayerController*                   K2Node_CustomEvent_PlayerController;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*           CallFunc_DestroySession_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             UniqueObjectNameForCooking_OutputDelegate;         // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             UniqueObjectNameForCooking_OutputDelegate_1;       // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP) == 0x000008, "Wrong alignment on AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP");
static_assert(sizeof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP) == 0x000040, "Wrong size on AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, EntryPoint) == 0x000000, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, K2Node_CustomEvent_PlayerController) == 0x000008, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, CallFunc_DestroySession_ReturnValue) == 0x000010, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::CallFunc_DestroySession_ReturnValue' has a wrong offset!");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, UniqueObjectNameForCooking_OutputDelegate) == 0x000018, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::UniqueObjectNameForCooking_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP, UniqueObjectNameForCooking_OutputDelegate_1) == 0x00002C, "Member 'AoCGameInstanceBP_C_ExecuteUbergraph_AoCGameInstanceBP::UniqueObjectNameForCooking_OutputDelegate_1' has a wrong offset!");

}

