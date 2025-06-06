﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElderDragon_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function ElderDragon_Base.ElderDragon_Base_C.ExecuteUbergraph_ElderDragon_Base
// 0x0010 (0x0010 - 0x0000)
struct ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_RotateHead;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Airborne;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Landed;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Fly__1;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Fly_;                           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base) == 0x000004, "Wrong alignment on ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base");
static_assert(sizeof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base) == 0x000010, "Wrong size on ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, EntryPoint) == 0x000000, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_CustomEvent_RotateHead) == 0x000004, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_CustomEvent_RotateHead' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_CustomEvent_Airborne) == 0x000005, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_CustomEvent_Airborne' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_CustomEvent_Landed) == 0x000006, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_CustomEvent_Landed' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_CustomEvent_Fly__1) == 0x00000C, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_CustomEvent_Fly__1' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base, K2Node_CustomEvent_Fly_) == 0x00000D, "Member 'ElderDragon_Base_C_ExecuteUbergraph_ElderDragon_Base::K2Node_CustomEvent_Fly_' has a wrong offset!");

// Function ElderDragon_Base.ElderDragon_Base_C.FinalizedLanding
// 0x0002 (0x0002 - 0x0000)
struct ElderDragon_Base_C_FinalizedLanding final
{
public:
	bool                                          Airborne;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Landed;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_FinalizedLanding) == 0x000001, "Wrong alignment on ElderDragon_Base_C_FinalizedLanding");
static_assert(sizeof(ElderDragon_Base_C_FinalizedLanding) == 0x000002, "Wrong size on ElderDragon_Base_C_FinalizedLanding");
static_assert(offsetof(ElderDragon_Base_C_FinalizedLanding, Airborne) == 0x000000, "Member 'ElderDragon_Base_C_FinalizedLanding::Airborne' has a wrong offset!");
static_assert(offsetof(ElderDragon_Base_C_FinalizedLanding, Landed) == 0x000001, "Member 'ElderDragon_Base_C_FinalizedLanding::Landed' has a wrong offset!");

// Function ElderDragon_Base.ElderDragon_Base_C.FlyingShift
// 0x0001 (0x0001 - 0x0000)
struct ElderDragon_Base_C_FlyingShift final
{
public:
	bool                                          Fly_;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_FlyingShift) == 0x000001, "Wrong alignment on ElderDragon_Base_C_FlyingShift");
static_assert(sizeof(ElderDragon_Base_C_FlyingShift) == 0x000001, "Wrong size on ElderDragon_Base_C_FlyingShift");
static_assert(offsetof(ElderDragon_Base_C_FlyingShift, Fly_) == 0x000000, "Member 'ElderDragon_Base_C_FlyingShift::Fly_' has a wrong offset!");

// Function ElderDragon_Base.ElderDragon_Base_C.FlyingShiftBypassTransition
// 0x0001 (0x0001 - 0x0000)
struct ElderDragon_Base_C_FlyingShiftBypassTransition final
{
public:
	bool                                          Fly_;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_FlyingShiftBypassTransition) == 0x000001, "Wrong alignment on ElderDragon_Base_C_FlyingShiftBypassTransition");
static_assert(sizeof(ElderDragon_Base_C_FlyingShiftBypassTransition) == 0x000001, "Wrong size on ElderDragon_Base_C_FlyingShiftBypassTransition");
static_assert(offsetof(ElderDragon_Base_C_FlyingShiftBypassTransition, Fly_) == 0x000000, "Member 'ElderDragon_Base_C_FlyingShiftBypassTransition::Fly_' has a wrong offset!");

// Function ElderDragon_Base.ElderDragon_Base_C.HeadRotationToggle
// 0x0001 (0x0001 - 0x0000)
struct ElderDragon_Base_C_HeadRotationToggle final
{
public:
	bool                                          RotateHead_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_HeadRotationToggle) == 0x000001, "Wrong alignment on ElderDragon_Base_C_HeadRotationToggle");
static_assert(sizeof(ElderDragon_Base_C_HeadRotationToggle) == 0x000001, "Wrong size on ElderDragon_Base_C_HeadRotationToggle");
static_assert(offsetof(ElderDragon_Base_C_HeadRotationToggle, RotateHead_0) == 0x000000, "Member 'ElderDragon_Base_C_HeadRotationToggle::RotateHead_0' has a wrong offset!");

// Function ElderDragon_Base.ElderDragon_Base_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct ElderDragon_Base_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Base_C_ReceiveTick) == 0x000004, "Wrong alignment on ElderDragon_Base_C_ReceiveTick");
static_assert(sizeof(ElderDragon_Base_C_ReceiveTick) == 0x000004, "Wrong size on ElderDragon_Base_C_ReceiveTick");
static_assert(offsetof(ElderDragon_Base_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'ElderDragon_Base_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

