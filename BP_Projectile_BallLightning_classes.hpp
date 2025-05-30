﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_BallLightning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Projectile_BallLightning.BP_Projectile_BallLightning_C
// 0x0020 (0x05B8 - 0x0598)
class ABP_Projectile_BallLightning_C final : public AAoCAbilityProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Scale;                                             // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Projectile_BallLightning(int32 EntryPoint);
	void ProjectileHit(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Projectile_BallLightning_C">();
	}
	static class ABP_Projectile_BallLightning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Projectile_BallLightning_C>();
	}
};
static_assert(alignof(ABP_Projectile_BallLightning_C) == 0x000008, "Wrong alignment on ABP_Projectile_BallLightning_C");
static_assert(sizeof(ABP_Projectile_BallLightning_C) == 0x0005B8, "Wrong size on ABP_Projectile_BallLightning_C");
static_assert(offsetof(ABP_Projectile_BallLightning_C, UberGraphFrame) == 0x000598, "Member 'ABP_Projectile_BallLightning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_BallLightning_C, Scale) == 0x0005A0, "Member 'ABP_Projectile_BallLightning_C::Scale' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_BallLightning_C, Speed) == 0x0005A8, "Member 'ABP_Projectile_BallLightning_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_BallLightning_C, Count) == 0x0005B0, "Member 'ABP_Projectile_BallLightning_C::Count' has a wrong offset!");

}

