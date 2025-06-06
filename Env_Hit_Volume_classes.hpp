﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Env_Hit_Volume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameSystemsPlugin_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Env_Hit_Volume.Env_Hit_Volume_C
// 0x0050 (0x0398 - 0x0348)
class AEnv_Hit_Volume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAoCAbilityComponent*                   AoCAbility;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAoCStatsComponent*                     AoCStats;                                          // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FAbilityHitId                          HitId;                                             // 0x0370(0x0018)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                        TickInterval;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ClassFilter;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Env_Hit_Volume(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Env_Hit_Volume_C">();
	}
	static class AEnv_Hit_Volume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEnv_Hit_Volume_C>();
	}
};
static_assert(alignof(AEnv_Hit_Volume_C) == 0x000008, "Wrong alignment on AEnv_Hit_Volume_C");
static_assert(sizeof(AEnv_Hit_Volume_C) == 0x000398, "Wrong size on AEnv_Hit_Volume_C");
static_assert(offsetof(AEnv_Hit_Volume_C, UberGraphFrame) == 0x000348, "Member 'AEnv_Hit_Volume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, Box) == 0x000350, "Member 'AEnv_Hit_Volume_C::Box' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, AoCAbility) == 0x000358, "Member 'AEnv_Hit_Volume_C::AoCAbility' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, AoCStats) == 0x000360, "Member 'AEnv_Hit_Volume_C::AoCStats' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, DefaultSceneRoot) == 0x000368, "Member 'AEnv_Hit_Volume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, HitId) == 0x000370, "Member 'AEnv_Hit_Volume_C::HitId' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, TickInterval) == 0x000388, "Member 'AEnv_Hit_Volume_C::TickInterval' has a wrong offset!");
static_assert(offsetof(AEnv_Hit_Volume_C, ClassFilter) == 0x000390, "Member 'AEnv_Hit_Volume_C::ClassFilter' has a wrong offset!");

}

