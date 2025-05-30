﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_Distance

#include "Basic.hpp"

#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STC_Distance.STC_Distance_C
// 0x0020 (0x0088 - 0x0068)
class USTC_Distance_C final : public UStateTreeConditionBlueprintBase
{
public:
	class ANPCCharacter*                          Agent;                                             // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Inverse;                                           // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveTestCondition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STC_Distance_C">();
	}
	static class USTC_Distance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTC_Distance_C>();
	}
};
static_assert(alignof(USTC_Distance_C) == 0x000008, "Wrong alignment on USTC_Distance_C");
static_assert(sizeof(USTC_Distance_C) == 0x000088, "Wrong size on USTC_Distance_C");
static_assert(offsetof(USTC_Distance_C, Agent) == 0x000068, "Member 'USTC_Distance_C::Agent' has a wrong offset!");
static_assert(offsetof(USTC_Distance_C, Target) == 0x000070, "Member 'USTC_Distance_C::Target' has a wrong offset!");
static_assert(offsetof(USTC_Distance_C, Distance) == 0x000078, "Member 'USTC_Distance_C::Distance' has a wrong offset!");
static_assert(offsetof(USTC_Distance_C, Inverse) == 0x000080, "Member 'USTC_Distance_C::Inverse' has a wrong offset!");

}

