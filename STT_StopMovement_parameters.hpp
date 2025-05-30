﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_StopMovement

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"


namespace SDK::Params
{

// Function STT_StopMovement.STT_StopMovement_C.ExecuteUbergraph_STT_StopMovement
// 0x0060 (0x0060 - 0x0000)
struct STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStateTreeTransitionResult             K2Node_Event_Transition;                           // 0x0004(0x002E)(ConstParm, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANPCPawn_C*                             K2Node_DynamicCast_AsNPCPawn;                      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement) == 0x000008, "Wrong alignment on STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement");
static_assert(sizeof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement) == 0x000060, "Wrong size on STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, EntryPoint) == 0x000000, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::EntryPoint' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, K2Node_Event_Transition) == 0x000004, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::K2Node_Event_Transition' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, CallFunc_GetAIController_ReturnValue) == 0x000038, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, CallFunc_GetOuterObject_ReturnValue) == 0x000048, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, K2Node_DynamicCast_AsNPCPawn) == 0x000050, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::K2Node_DynamicCast_AsNPCPawn' has a wrong offset!");
static_assert(offsetof(STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'STT_StopMovement_C_ExecuteUbergraph_STT_StopMovement::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function STT_StopMovement.STT_StopMovement_C.ReceiveLatentEnterState
// 0x002E (0x002E - 0x0000)
struct STT_StopMovement_C_ReceiveLatentEnterState final
{
public:
	struct FStateTreeTransitionResult             Transition;                                        // 0x0000(0x002E)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(STT_StopMovement_C_ReceiveLatentEnterState) == 0x000002, "Wrong alignment on STT_StopMovement_C_ReceiveLatentEnterState");
static_assert(sizeof(STT_StopMovement_C_ReceiveLatentEnterState) == 0x00002E, "Wrong size on STT_StopMovement_C_ReceiveLatentEnterState");
static_assert(offsetof(STT_StopMovement_C_ReceiveLatentEnterState, Transition) == 0x000000, "Member 'STT_StopMovement_C_ReceiveLatentEnterState::Transition' has a wrong offset!");

}

