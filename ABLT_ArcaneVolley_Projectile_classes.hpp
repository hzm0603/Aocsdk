﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABLT_ArcaneVolley_Projectile

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ABLT_ArcaneVolley_Projectile.ABLT_ArcaneVolley_Projectile_C
// 0x0008 (0x05A0 - 0x0598)
class AABLT_ArcaneVolley_Projectile_C final : public AAoCAbilityProjectile
{
public:
	class UAudioComponent*                        Audio;                                             // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABLT_ArcaneVolley_Projectile_C">();
	}
	static class AABLT_ArcaneVolley_Projectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AABLT_ArcaneVolley_Projectile_C>();
	}
};
static_assert(alignof(AABLT_ArcaneVolley_Projectile_C) == 0x000008, "Wrong alignment on AABLT_ArcaneVolley_Projectile_C");
static_assert(sizeof(AABLT_ArcaneVolley_Projectile_C) == 0x0005A0, "Wrong size on AABLT_ArcaneVolley_Projectile_C");
static_assert(offsetof(AABLT_ArcaneVolley_Projectile_C, Audio) == 0x000598, "Member 'AABLT_ArcaneVolley_Projectile_C::Audio' has a wrong offset!");

}

