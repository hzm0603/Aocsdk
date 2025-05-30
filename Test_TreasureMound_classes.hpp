﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test_TreasureMound

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Test_TreasureMound.Test_TreasureMound_C
// 0x0010 (0x0540 - 0x0530)
class ATest_TreasureMound_C final : public AInteractableStateMachineBase
{
public:
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Test_TreasureMound_C">();
	}
	static class ATest_TreasureMound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATest_TreasureMound_C>();
	}
};
static_assert(alignof(ATest_TreasureMound_C) == 0x000010, "Wrong alignment on ATest_TreasureMound_C");
static_assert(sizeof(ATest_TreasureMound_C) == 0x000540, "Wrong size on ATest_TreasureMound_C");
static_assert(offsetof(ATest_TreasureMound_C, StaticMesh1) == 0x000530, "Member 'ATest_TreasureMound_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ATest_TreasureMound_C, StaticMesh) == 0x000538, "Member 'ATest_TreasureMound_C::StaticMesh' has a wrong offset!");

}

