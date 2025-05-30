﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GroupLootWindowEntry

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GroupLootWindowEntry.WBP_GroupLootWindowEntry_C
// 0x0020 (0x03F8 - 0x03D8)
class UWBP_GroupLootWindowEntry_C final : public UGroupLootWindowEntry
{
public:
	class UIntrepidCommonBorder*                  AlternatingBG;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NeedGreedContainer;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RollButtonsBox;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimerProgressBarFrame;                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GroupLootWindowEntry_C">();
	}
	static class UWBP_GroupLootWindowEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GroupLootWindowEntry_C>();
	}
};
static_assert(alignof(UWBP_GroupLootWindowEntry_C) == 0x000008, "Wrong alignment on UWBP_GroupLootWindowEntry_C");
static_assert(sizeof(UWBP_GroupLootWindowEntry_C) == 0x0003F8, "Wrong size on UWBP_GroupLootWindowEntry_C");
static_assert(offsetof(UWBP_GroupLootWindowEntry_C, AlternatingBG) == 0x0003D8, "Member 'UWBP_GroupLootWindowEntry_C::AlternatingBG' has a wrong offset!");
static_assert(offsetof(UWBP_GroupLootWindowEntry_C, NeedGreedContainer) == 0x0003E0, "Member 'UWBP_GroupLootWindowEntry_C::NeedGreedContainer' has a wrong offset!");
static_assert(offsetof(UWBP_GroupLootWindowEntry_C, RollButtonsBox) == 0x0003E8, "Member 'UWBP_GroupLootWindowEntry_C::RollButtonsBox' has a wrong offset!");
static_assert(offsetof(UWBP_GroupLootWindowEntry_C, TimerProgressBarFrame) == 0x0003F0, "Member 'UWBP_GroupLootWindowEntry_C::TimerProgressBarFrame' has a wrong offset!");

}

