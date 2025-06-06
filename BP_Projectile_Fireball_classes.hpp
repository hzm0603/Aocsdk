﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Fireball

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Projectile_Fireball.BP_Projectile_Fireball_C
// 0x0020 (0x05B8 - 0x0598)
class ABP_Projectile_Fireball_C final : public AAoCAbilityProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Trail;                                             // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Rock;                                              // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Projectile_Fireball(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Projectile_Fireball_C">();
	}
	static class ABP_Projectile_Fireball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Projectile_Fireball_C>();
	}
};
static_assert(alignof(ABP_Projectile_Fireball_C) == 0x000008, "Wrong alignment on ABP_Projectile_Fireball_C");
static_assert(sizeof(ABP_Projectile_Fireball_C) == 0x0005B8, "Wrong size on ABP_Projectile_Fireball_C");
static_assert(offsetof(ABP_Projectile_Fireball_C, UberGraphFrame) == 0x000598, "Member 'ABP_Projectile_Fireball_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_Fireball_C, Trail) == 0x0005A0, "Member 'ABP_Projectile_Fireball_C::Trail' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_Fireball_C, Rock) == 0x0005A8, "Member 'ABP_Projectile_Fireball_C::Rock' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_Fireball_C, Scale) == 0x0005B0, "Member 'ABP_Projectile_Fireball_C::Scale' has a wrong offset!");

}

