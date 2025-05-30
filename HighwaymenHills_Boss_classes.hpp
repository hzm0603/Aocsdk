﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HighwaymenHills_Boss

#include "Basic.hpp"

#include "Bandit_Melee_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HighwaymenHills_Boss.HighwaymenHills_Boss_C
// 0x0010 (0x1D80 - 0x1D70)
class AHighwaymenHills_Boss_C final : public ABandit_Melee_Base_C
{
public:
	class USkeletalMeshComponent*                 WeaponL;                                           // 0x1D70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 WeaponR;                                           // 0x1D78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HighwaymenHills_Boss_C">();
	}
	static class AHighwaymenHills_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHighwaymenHills_Boss_C>();
	}
};
static_assert(alignof(AHighwaymenHills_Boss_C) == 0x000010, "Wrong alignment on AHighwaymenHills_Boss_C");
static_assert(sizeof(AHighwaymenHills_Boss_C) == 0x001D80, "Wrong size on AHighwaymenHills_Boss_C");
static_assert(offsetof(AHighwaymenHills_Boss_C, WeaponL) == 0x001D70, "Member 'AHighwaymenHills_Boss_C::WeaponL' has a wrong offset!");
static_assert(offsetof(AHighwaymenHills_Boss_C, WeaponR) == 0x001D78, "Member 'AHighwaymenHills_Boss_C::WeaponR' has a wrong offset!");

}

