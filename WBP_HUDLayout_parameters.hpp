﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDLayout

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_HUDLayout.WBP_HUDLayout_C.ExecuteUbergraph_WBP_HUDLayout
// 0x000C (0x000C - 0x0000)
struct WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bVisible;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout) == 0x000004, "Wrong alignment on WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout");
static_assert(sizeof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout) == 0x00000C, "Wrong size on WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, EntryPoint) == 0x000000, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, K2Node_CustomEvent_bVisible) == 0x000004, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, Temp_bool_Variable) == 0x000005, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, Temp_byte_Variable) == 0x000006, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout, K2Node_Select_Default) == 0x000008, "Member 'WBP_HUDLayout_C_ExecuteUbergraph_WBP_HUDLayout::K2Node_Select_Default' has a wrong offset!");

// Function WBP_HUDLayout.WBP_HUDLayout_C.Set InputViewer Visibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_HUDLayout_C_Set_InputViewer_Visibility final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HUDLayout_C_Set_InputViewer_Visibility) == 0x000001, "Wrong alignment on WBP_HUDLayout_C_Set_InputViewer_Visibility");
static_assert(sizeof(WBP_HUDLayout_C_Set_InputViewer_Visibility) == 0x000001, "Wrong size on WBP_HUDLayout_C_Set_InputViewer_Visibility");
static_assert(offsetof(WBP_HUDLayout_C_Set_InputViewer_Visibility, bVisible) == 0x000000, "Member 'WBP_HUDLayout_C_Set_InputViewer_Visibility::bVisible' has a wrong offset!");

// Function WBP_HUDLayout.WBP_HUDLayout_C.OnPaint
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_HUDLayout_C_OnPaint final
{
public:
	struct FPaintContext                          Context;                                           // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_HUDLayout_C_OnPaint) == 0x000008, "Wrong alignment on WBP_HUDLayout_C_OnPaint");
static_assert(sizeof(WBP_HUDLayout_C_OnPaint) == 0x0000B0, "Wrong size on WBP_HUDLayout_C_OnPaint");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, Context) == 0x000000, "Member 'WBP_HUDLayout_C_OnPaint::Context' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_BreakVector2D_X) == 0x000030, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_BreakVector2D_X_1) == 0x000050, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_BreakVector2D_Y_1) == 0x000058, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_1) == 0x000060, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_2) == 0x000070, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_3) == 0x000080, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, CallFunc_MakeVector2D_ReturnValue_4) == 0x000090, "Member 'WBP_HUDLayout_C_OnPaint::CallFunc_MakeVector2D_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_HUDLayout_C_OnPaint, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_HUDLayout_C_OnPaint::K2Node_MakeArray_Array' has a wrong offset!");

}

