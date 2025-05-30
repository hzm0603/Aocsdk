﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crab01_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Crab01_AnimBP.Crab01_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Crab01_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Crab01_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Crab01_AnimBP_C_AnimGraph");
static_assert(sizeof(Crab01_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Crab01_AnimBP_C_AnimGraph");
static_assert(offsetof(Crab01_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Crab01_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Crab01_AnimBP.Crab01_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Crab01_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Crab01_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Crab01_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Crab01_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Crab01_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Crab01_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Crab01_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function Crab01_AnimBP.Crab01_AnimBP_C.ExecuteUbergraph_Crab01_AnimBP
// 0x0008 (0x0008 - 0x0000)
struct Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP) == 0x000004, "Wrong alignment on Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP");
static_assert(sizeof(Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP) == 0x000008, "Wrong size on Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP");
static_assert(offsetof(Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP, EntryPoint) == 0x000000, "Member 'Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'Crab01_AnimBP_C_ExecuteUbergraph_Crab01_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");

}

