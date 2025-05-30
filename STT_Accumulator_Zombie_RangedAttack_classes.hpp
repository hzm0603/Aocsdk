﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_Accumulator_Zombie_RangedAttack

#include "Basic.hpp"

#include "STT_Accumulator_Timer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_Accumulator_Zombie_RangedAttack.STT_Accumulator_Zombie_RangedAttack_C
// 0x0020 (0x0118 - 0x00F8)
class USTT_Accumulator_Zombie_RangedAttack_C final : public USTT_Accumulator_Timer_C
{
public:
	class ABaseCharacter*                         Target;                                            // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        MinTooFarDis;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxTooFarDis;                                      // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxAdditionalAccumulation;                         // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Accumulate(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_Accumulator_Zombie_RangedAttack_C">();
	}
	static class USTT_Accumulator_Zombie_RangedAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_Accumulator_Zombie_RangedAttack_C>();
	}
};
static_assert(alignof(USTT_Accumulator_Zombie_RangedAttack_C) == 0x000008, "Wrong alignment on USTT_Accumulator_Zombie_RangedAttack_C");
static_assert(sizeof(USTT_Accumulator_Zombie_RangedAttack_C) == 0x000118, "Wrong size on USTT_Accumulator_Zombie_RangedAttack_C");
static_assert(offsetof(USTT_Accumulator_Zombie_RangedAttack_C, Target) == 0x0000F8, "Member 'USTT_Accumulator_Zombie_RangedAttack_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_Zombie_RangedAttack_C, MinTooFarDis) == 0x000100, "Member 'USTT_Accumulator_Zombie_RangedAttack_C::MinTooFarDis' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_Zombie_RangedAttack_C, MaxTooFarDis) == 0x000108, "Member 'USTT_Accumulator_Zombie_RangedAttack_C::MaxTooFarDis' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_Zombie_RangedAttack_C, MaxAdditionalAccumulation) == 0x000110, "Member 'USTT_Accumulator_Zombie_RangedAttack_C::MaxAdditionalAccumulation' has a wrong offset!");

}

