﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PinkeningSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PinkeningSwitcher.BP_PinkeningSwitcher_C
// 0x0018 (0x0360 - 0x0348)
class ABP_PinkeningSwitcher_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable;                                           // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PinkeningSwitcher(int32 EntryPoint);
	void CheckPinken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PinkeningSwitcher_C">();
	}
	static class ABP_PinkeningSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PinkeningSwitcher_C>();
	}
};
static_assert(alignof(ABP_PinkeningSwitcher_C) == 0x000008, "Wrong alignment on ABP_PinkeningSwitcher_C");
static_assert(sizeof(ABP_PinkeningSwitcher_C) == 0x000360, "Wrong size on ABP_PinkeningSwitcher_C");
static_assert(offsetof(ABP_PinkeningSwitcher_C, UberGraphFrame) == 0x000348, "Member 'ABP_PinkeningSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PinkeningSwitcher_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_PinkeningSwitcher_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PinkeningSwitcher_C, Disable) == 0x000358, "Member 'ABP_PinkeningSwitcher_C::Disable' has a wrong offset!");

}

