﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCTest_ArcaneMissile_Projectile

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPCTest_ArcaneMissile_Projectile.NPCTest_ArcaneMissile_Projectile_C
// 0x0000 (0x0598 - 0x0598)
class ANPCTest_ArcaneMissile_Projectile_C final : public AAoCAbilityProjectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCTest_ArcaneMissile_Projectile_C">();
	}
	static class ANPCTest_ArcaneMissile_Projectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPCTest_ArcaneMissile_Projectile_C>();
	}
};
static_assert(alignof(ANPCTest_ArcaneMissile_Projectile_C) == 0x000008, "Wrong alignment on ANPCTest_ArcaneMissile_Projectile_C");
static_assert(sizeof(ANPCTest_ArcaneMissile_Projectile_C) == 0x000598, "Wrong size on ANPCTest_ArcaneMissile_Projectile_C");

}

