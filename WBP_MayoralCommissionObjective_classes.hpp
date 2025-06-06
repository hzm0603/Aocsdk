﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MayoralCommissionObjective

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MayoralCommissionObjective.WBP_MayoralCommissionObjective_C
// 0x0010 (0x0390 - 0x0380)
class UWBP_MayoralCommissionObjective_C final : public UMayoralCommissionObjective
{
public:
	class UIntrepidCommonBorder*                  AlternatingBorder;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExperienceBarFrame;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MayoralCommissionObjective_C">();
	}
	static class UWBP_MayoralCommissionObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MayoralCommissionObjective_C>();
	}
};
static_assert(alignof(UWBP_MayoralCommissionObjective_C) == 0x000008, "Wrong alignment on UWBP_MayoralCommissionObjective_C");
static_assert(sizeof(UWBP_MayoralCommissionObjective_C) == 0x000390, "Wrong size on UWBP_MayoralCommissionObjective_C");
static_assert(offsetof(UWBP_MayoralCommissionObjective_C, AlternatingBorder) == 0x000380, "Member 'UWBP_MayoralCommissionObjective_C::AlternatingBorder' has a wrong offset!");
static_assert(offsetof(UWBP_MayoralCommissionObjective_C, ExperienceBarFrame) == 0x000388, "Member 'UWBP_MayoralCommissionObjective_C::ExperienceBarFrame' has a wrong offset!");

}

