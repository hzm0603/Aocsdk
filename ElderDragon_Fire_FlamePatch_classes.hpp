﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElderDragon_Fire_FlamePatch

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ElderDragon_Fire_FlamePatch.ElderDragon_Fire_FlamePatch_C
// 0x0008 (0x0518 - 0x0510)
class AElderDragon_Fire_FlamePatch_C final : public AAoCAbilityLingeringEffect
{
public:
	class AElderDragon_Fire_FlameMinion_C*        AssociatedFlameMinion;                             // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ElderDragon_Fire_FlamePatch_C">();
	}
	static class AElderDragon_Fire_FlamePatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElderDragon_Fire_FlamePatch_C>();
	}
};
static_assert(alignof(AElderDragon_Fire_FlamePatch_C) == 0x000008, "Wrong alignment on AElderDragon_Fire_FlamePatch_C");
static_assert(sizeof(AElderDragon_Fire_FlamePatch_C) == 0x000518, "Wrong size on AElderDragon_Fire_FlamePatch_C");
static_assert(offsetof(AElderDragon_Fire_FlamePatch_C, AssociatedFlameMinion) == 0x000510, "Member 'AElderDragon_Fire_FlamePatch_C::AssociatedFlameMinion' has a wrong offset!");

}

