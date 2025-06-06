﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_GraveyardGolem_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NPC_GraveyardGolem_AnimBP.NPC_GraveyardGolem_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct NPC_GraveyardGolem_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(NPC_GraveyardGolem_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on NPC_GraveyardGolem_AnimBP_C_AnimGraph");
static_assert(sizeof(NPC_GraveyardGolem_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on NPC_GraveyardGolem_AnimBP_C_AnimGraph");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'NPC_GraveyardGolem_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function NPC_GraveyardGolem_AnimBP.NPC_GraveyardGolem_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'NPC_GraveyardGolem_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function NPC_GraveyardGolem_AnimBP.NPC_GraveyardGolem_AnimBP_C.ExecuteUbergraph_NPC_GraveyardGolem_AnimBP
// 0x0010 (0x0010 - 0x0000)
struct NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_2;                 // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP) == 0x000004, "Wrong alignment on NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP");
static_assert(sizeof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP) == 0x000010, "Wrong size on NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, EntryPoint) == 0x000000, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, K2Node_Event_DeltaTimeX) == 0x000008, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, K2Node_SwitchInteger_CmpSuccess) == 0x00000C, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, K2Node_SwitchInteger_CmpSuccess_1) == 0x00000D, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP, K2Node_SwitchInteger_CmpSuccess_2) == 0x00000E, "Member 'NPC_GraveyardGolem_AnimBP_C_ExecuteUbergraph_NPC_GraveyardGolem_AnimBP::K2Node_SwitchInteger_CmpSuccess_2' has a wrong offset!");

}

