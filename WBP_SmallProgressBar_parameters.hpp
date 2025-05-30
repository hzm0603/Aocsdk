﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SmallProgressBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_SmallProgressBar.WBP_SmallProgressBar_C.ExecuteUbergraph_WBP_SmallProgressBar
// 0x0038 (0x0038 - 0x0000)
struct WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                UniqueObjectNameForCooking_Margin;                 // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         UniqueObjectNameForCooking_Top_ImplicitCast;       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar) == 0x000008, "Wrong alignment on WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar");
static_assert(sizeof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar) == 0x000038, "Wrong size on WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, EntryPoint) == 0x000000, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, UniqueObjectNameForCooking_Margin) == 0x000014, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::UniqueObjectNameForCooking_Margin' has a wrong offset!");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000028, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar, UniqueObjectNameForCooking_Top_ImplicitCast) == 0x000030, "Member 'WBP_SmallProgressBar_C_ExecuteUbergraph_WBP_SmallProgressBar::UniqueObjectNameForCooking_Top_ImplicitCast' has a wrong offset!");

// Function WBP_SmallProgressBar.WBP_SmallProgressBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SmallProgressBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SmallProgressBar_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SmallProgressBar_C_PreConstruct");
static_assert(sizeof(WBP_SmallProgressBar_C_PreConstruct) == 0x000001, "Wrong size on WBP_SmallProgressBar_C_PreConstruct");
static_assert(offsetof(WBP_SmallProgressBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SmallProgressBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

