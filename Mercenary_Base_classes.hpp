﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mercenary_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "HumanoidMonsterMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mercenary_Base.Mercenary_Base_C
// 0x0020 (0x1D80 - 0x1D60)
class AMercenary_Base_C : public AHumanoidMonsterMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Mercenary_Base_C;                   // 0x1D60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               OriginalRotation;                                  // 0x1D68(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Mercenary_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mercenary_Base_C">();
	}
	static class AMercenary_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMercenary_Base_C>();
	}
};
static_assert(alignof(AMercenary_Base_C) == 0x000010, "Wrong alignment on AMercenary_Base_C");
static_assert(sizeof(AMercenary_Base_C) == 0x001D80, "Wrong size on AMercenary_Base_C");
static_assert(offsetof(AMercenary_Base_C, UberGraphFrame_Mercenary_Base_C) == 0x001D60, "Member 'AMercenary_Base_C::UberGraphFrame_Mercenary_Base_C' has a wrong offset!");
static_assert(offsetof(AMercenary_Base_C, OriginalRotation) == 0x001D68, "Member 'AMercenary_Base_C::OriginalRotation' has a wrong offset!");

}

