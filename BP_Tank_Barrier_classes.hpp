﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tank_Barrier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tank_Barrier.BP_Tank_Barrier_C
// 0x0030 (0x0540 - 0x0510)
class ABP_Tank_Barrier_C final : public AAoCAbilityLingeringEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        InitialZ;                                          // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetZ;                                           // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TravelTime;                                        // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Tank_Barrier(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tank_Barrier_C">();
	}
	static class ABP_Tank_Barrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tank_Barrier_C>();
	}
};
static_assert(alignof(ABP_Tank_Barrier_C) == 0x000008, "Wrong alignment on ABP_Tank_Barrier_C");
static_assert(sizeof(ABP_Tank_Barrier_C) == 0x000540, "Wrong size on ABP_Tank_Barrier_C");
static_assert(offsetof(ABP_Tank_Barrier_C, UberGraphFrame) == 0x000510, "Member 'ABP_Tank_Barrier_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Tank_Barrier_C, Cube) == 0x000518, "Member 'ABP_Tank_Barrier_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_Tank_Barrier_C, InitialZ) == 0x000520, "Member 'ABP_Tank_Barrier_C::InitialZ' has a wrong offset!");
static_assert(offsetof(ABP_Tank_Barrier_C, TargetZ) == 0x000528, "Member 'ABP_Tank_Barrier_C::TargetZ' has a wrong offset!");
static_assert(offsetof(ABP_Tank_Barrier_C, TravelTime) == 0x000530, "Member 'ABP_Tank_Barrier_C::TravelTime' has a wrong offset!");
static_assert(offsetof(ABP_Tank_Barrier_C, Speed) == 0x000538, "Member 'ABP_Tank_Barrier_C::Speed' has a wrong offset!");

}

