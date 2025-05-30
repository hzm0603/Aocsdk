﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_SetBBInt

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function STT_SetBBInt.STT_SetBBInt_C.ExecuteUbergraph_STT_SetBBInt
// 0x0130 (0x0130 - 0x0000)
struct STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStateTreeTransitionResult             K2Node_Event_Transition;                           // 0x0004(0x002E)(ConstParm, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExprValue                             CallFunc_EvaluateExpression_ReturnValue;           // 0x0058(0x00C8)()
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_2;              // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt) == 0x000008, "Wrong alignment on STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt");
static_assert(sizeof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt) == 0x000130, "Wrong size on STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, EntryPoint) == 0x000000, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::EntryPoint' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, K2Node_Event_Transition) == 0x000004, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::K2Node_Event_Transition' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_GetBlackboard_ReturnValue) == 0x000038, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_MakeLiteralByte_ReturnValue) == 0x000040, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000044, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_GetBlackboard_ReturnValue_1) == 0x000048, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_Conv_IntToByte_ReturnValue) == 0x000050, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_EvaluateExpression_ReturnValue) == 0x000058, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_EvaluateExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_GetBlackboard_ReturnValue_2) == 0x000120, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_GetBlackboard_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000128, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt, CallFunc_IsValid_ReturnValue) == 0x000129, "Member 'STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function STT_SetBBInt.STT_SetBBInt_C.ReceiveLatentEnterState
// 0x002E (0x002E - 0x0000)
struct STT_SetBBInt_C_ReceiveLatentEnterState final
{
public:
	struct FStateTreeTransitionResult             Transition;                                        // 0x0000(0x002E)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(STT_SetBBInt_C_ReceiveLatentEnterState) == 0x000002, "Wrong alignment on STT_SetBBInt_C_ReceiveLatentEnterState");
static_assert(sizeof(STT_SetBBInt_C_ReceiveLatentEnterState) == 0x00002E, "Wrong size on STT_SetBBInt_C_ReceiveLatentEnterState");
static_assert(offsetof(STT_SetBBInt_C_ReceiveLatentEnterState, Transition) == 0x000000, "Member 'STT_SetBBInt_C_ReceiveLatentEnterState::Transition' has a wrong offset!");

}

