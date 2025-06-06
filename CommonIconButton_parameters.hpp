﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonIconButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonIconButton.CommonIconButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonIconButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconButton_C_PreConstruct) == 0x000001, "Wrong alignment on CommonIconButton_C_PreConstruct");
static_assert(sizeof(CommonIconButton_C_PreConstruct) == 0x000001, "Wrong size on CommonIconButton_C_PreConstruct");
static_assert(offsetof(CommonIconButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonIconButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonIconButton.CommonIconButton_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct CommonIconButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommonIconButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on CommonIconButton_C_OnMouseLeave");
static_assert(sizeof(CommonIconButton_C_OnMouseLeave) == 0x000078, "Wrong size on CommonIconButton_C_OnMouseLeave");
static_assert(offsetof(CommonIconButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'CommonIconButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function CommonIconButton.CommonIconButton_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct CommonIconButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommonIconButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on CommonIconButton_C_OnMouseEnter");
static_assert(sizeof(CommonIconButton_C_OnMouseEnter) == 0x0000B0, "Wrong size on CommonIconButton_C_OnMouseEnter");
static_assert(offsetof(CommonIconButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'CommonIconButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'CommonIconButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function CommonIconButton.CommonIconButton_C.ExecuteUbergraph_CommonIconButton
// 0x0138 (0x0138 - 0x0000)
struct CommonIconButton_C_ExecuteUbergraph_CommonIconButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0008(0x0078)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0078)(ConstParm)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton) == 0x000008, "Wrong alignment on CommonIconButton_C_ExecuteUbergraph_CommonIconButton");
static_assert(sizeof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton) == 0x000138, "Wrong size on CommonIconButton_C_ExecuteUbergraph_CommonIconButton");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, EntryPoint) == 0x000000, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, K2Node_Event_MouseEvent_1) == 0x000008, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, K2Node_Event_MyGeometry) == 0x000080, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, K2Node_Event_IsDesignTime) == 0x000130, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonIconButton_C_ExecuteUbergraph_CommonIconButton, CallFunc_IsValid_ReturnValue_1) == 0x000131, "Member 'CommonIconButton_C_ExecuteUbergraph_CommonIconButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

