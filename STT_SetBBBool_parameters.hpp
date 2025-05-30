﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_SetBBBool

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function STT_SetBBBool.STT_SetBBBool_C.ExecuteUbergraph_STT_SetBBBool
// 0x0130 (0x0130 - 0x0000)
struct STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStateTreeTransitionResult             K2Node_Event_Transition;                           // 0x0004(0x002E)(ConstParm, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FExprValue                             CallFunc_EvaluateExpression_SourceTarget_ReturnValue; // 0x0038(0x00C8)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_2;              // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool) == 0x000008, "Wrong alignment on STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool");
static_assert(sizeof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool) == 0x000130, "Wrong size on STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, EntryPoint) == 0x000000, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::EntryPoint' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, K2Node_Event_Transition) == 0x000004, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::K2Node_Event_Transition' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_MakeLiteralByte_ReturnValue) == 0x000032, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_EvaluateExpression_SourceTarget_ReturnValue) == 0x000038, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_EvaluateExpression_SourceTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_Conv_IntToByte_ReturnValue) == 0x000100, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_GetBlackboard_ReturnValue) == 0x000108, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000110, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_GetBlackboard_ReturnValue_1) == 0x000118, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_GetBlackboard_ReturnValue_2) == 0x000120, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_GetBlackboard_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'STT_SetBBBool_C_ExecuteUbergraph_STT_SetBBBool::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function STT_SetBBBool.STT_SetBBBool_C.ReceiveLatentEnterState
// 0x002E (0x002E - 0x0000)
struct STT_SetBBBool_C_ReceiveLatentEnterState final
{
public:
	struct FStateTreeTransitionResult             Transition;                                        // 0x0000(0x002E)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(STT_SetBBBool_C_ReceiveLatentEnterState) == 0x000002, "Wrong alignment on STT_SetBBBool_C_ReceiveLatentEnterState");
static_assert(sizeof(STT_SetBBBool_C_ReceiveLatentEnterState) == 0x00002E, "Wrong size on STT_SetBBBool_C_ReceiveLatentEnterState");
static_assert(offsetof(STT_SetBBBool_C_ReceiveLatentEnterState, Transition) == 0x000000, "Member 'STT_SetBBBool_C_ReceiveLatentEnterState::Transition' has a wrong offset!");

}

