﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_ElderDragon_Fire_FlameBarrageChance

#include "Basic.hpp"

#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STC_ElderDragon_Fire_FlameBarrageChance.STC_ElderDragon_Fire_FlameBarrageChance_C
// 0x0018 (0x0080 - 0x0068)
class USTC_ElderDragon_Fire_FlameBarrageChance_C final : public UStateTreeConditionBlueprintBase
{
public:
	class AElderDragon_Fire_C*                    Agent;                                             // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        ConsiderationRadius;                               // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinNumber;                                         // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNumber;                                         // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveTestCondition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STC_ElderDragon_Fire_FlameBarrageChance_C">();
	}
	static class USTC_ElderDragon_Fire_FlameBarrageChance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTC_ElderDragon_Fire_FlameBarrageChance_C>();
	}
};
static_assert(alignof(USTC_ElderDragon_Fire_FlameBarrageChance_C) == 0x000008, "Wrong alignment on USTC_ElderDragon_Fire_FlameBarrageChance_C");
static_assert(sizeof(USTC_ElderDragon_Fire_FlameBarrageChance_C) == 0x000080, "Wrong size on USTC_ElderDragon_Fire_FlameBarrageChance_C");
static_assert(offsetof(USTC_ElderDragon_Fire_FlameBarrageChance_C, Agent) == 0x000068, "Member 'USTC_ElderDragon_Fire_FlameBarrageChance_C::Agent' has a wrong offset!");
static_assert(offsetof(USTC_ElderDragon_Fire_FlameBarrageChance_C, ConsiderationRadius) == 0x000070, "Member 'USTC_ElderDragon_Fire_FlameBarrageChance_C::ConsiderationRadius' has a wrong offset!");
static_assert(offsetof(USTC_ElderDragon_Fire_FlameBarrageChance_C, MinNumber) == 0x000078, "Member 'USTC_ElderDragon_Fire_FlameBarrageChance_C::MinNumber' has a wrong offset!");
static_assert(offsetof(USTC_ElderDragon_Fire_FlameBarrageChance_C, MaxNumber) == 0x00007C, "Member 'USTC_ElderDragon_Fire_FlameBarrageChance_C::MaxNumber' has a wrong offset!");

}

