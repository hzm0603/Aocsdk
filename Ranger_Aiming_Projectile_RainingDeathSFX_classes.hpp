﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ranger_Aiming_Projectile_RainingDeathSFX

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ranger_Aiming_Projectile_RainingDeathSFX.Ranger_Aiming_Projectile_RainingDeathSFX_C
// 0x0008 (0x05A0 - 0x0598)
class ARanger_Aiming_Projectile_RainingDeathSFX_C final : public AAoCAbilityProjectile
{
public:
	class UStaticMeshComponent*                   Cube;                                              // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ranger_Aiming_Projectile_RainingDeathSFX_C">();
	}
	static class ARanger_Aiming_Projectile_RainingDeathSFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARanger_Aiming_Projectile_RainingDeathSFX_C>();
	}
};
static_assert(alignof(ARanger_Aiming_Projectile_RainingDeathSFX_C) == 0x000008, "Wrong alignment on ARanger_Aiming_Projectile_RainingDeathSFX_C");
static_assert(sizeof(ARanger_Aiming_Projectile_RainingDeathSFX_C) == 0x0005A0, "Wrong size on ARanger_Aiming_Projectile_RainingDeathSFX_C");
static_assert(offsetof(ARanger_Aiming_Projectile_RainingDeathSFX_C, Cube) == 0x000598, "Member 'ARanger_Aiming_Projectile_RainingDeathSFX_C::Cube' has a wrong offset!");

}

