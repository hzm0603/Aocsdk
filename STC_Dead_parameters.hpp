﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_Dead

#include "Basic.hpp"


namespace SDK::Params
{

// Function STC_Dead.STC_Dead_C.ReceiveTestCondition
// 0x0004 (0x0004 - 0x0000)
struct STC_Dead_C_ReceiveTestCondition final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STC_Dead_C_ReceiveTestCondition) == 0x000001, "Wrong alignment on STC_Dead_C_ReceiveTestCondition");
static_assert(sizeof(STC_Dead_C_ReceiveTestCondition) == 0x000004, "Wrong size on STC_Dead_C_ReceiveTestCondition");
static_assert(offsetof(STC_Dead_C_ReceiveTestCondition, ReturnValue) == 0x000000, "Member 'STC_Dead_C_ReceiveTestCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_Dead_C_ReceiveTestCondition, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'STC_Dead_C_ReceiveTestCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_Dead_C_ReceiveTestCondition, CallFunc_IsDead_ReturnValue) == 0x000002, "Member 'STC_Dead_C_ReceiveTestCondition::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_Dead_C_ReceiveTestCondition, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000003, "Member 'STC_Dead_C_ReceiveTestCondition::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

}

