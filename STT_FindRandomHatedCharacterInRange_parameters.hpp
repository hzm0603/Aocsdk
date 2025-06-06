﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_FindRandomHatedCharacterInRange

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"


namespace SDK::Params
{

// Function STT_FindRandomHatedCharacterInRange.STT_FindRandomHatedCharacterInRange_C.ExecuteUbergraph_STT_FindRandomHatedCharacterInRange
// 0x0048 (0x0048 - 0x0000)
struct STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x1];                                        // 0x0005(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStateTreeTransitionResult             K2Node_Event_Transition;                           // 0x0006(0x002E)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABaseCharacter*                         CallFunc_GetRandomHatedInRange_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRandomHatedInRange_Range_ImplicitCast; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange) == 0x000008, "Wrong alignment on STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange");
static_assert(sizeof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange) == 0x000048, "Wrong size on STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, EntryPoint) == 0x000000, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::EntryPoint' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, K2Node_Event_Transition) == 0x000006, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::K2Node_Event_Transition' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, CallFunc_IsValid_ReturnValue_1) == 0x000034, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, CallFunc_IsValid_ReturnValue_2) == 0x000035, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, CallFunc_GetRandomHatedInRange_ReturnValue) == 0x000038, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::CallFunc_GetRandomHatedInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange, CallFunc_GetRandomHatedInRange_Range_ImplicitCast) == 0x000040, "Member 'STT_FindRandomHatedCharacterInRange_C_ExecuteUbergraph_STT_FindRandomHatedCharacterInRange::CallFunc_GetRandomHatedInRange_Range_ImplicitCast' has a wrong offset!");

// Function STT_FindRandomHatedCharacterInRange.STT_FindRandomHatedCharacterInRange_C.ReceiveLatentEnterState
// 0x002E (0x002E - 0x0000)
struct STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState final
{
public:
	struct FStateTreeTransitionResult             Transition;                                        // 0x0000(0x002E)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState) == 0x000002, "Wrong alignment on STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState");
static_assert(sizeof(STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState) == 0x00002E, "Wrong size on STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState");
static_assert(offsetof(STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState, Transition) == 0x000000, "Member 'STT_FindRandomHatedCharacterInRange_C_ReceiveLatentEnterState::Transition' has a wrong offset!");

}

