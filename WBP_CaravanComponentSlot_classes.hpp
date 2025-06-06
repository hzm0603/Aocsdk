﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CaravanComponentSlot

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CaravanComponentSlot.WBP_CaravanComponentSlot_C
// 0x0008 (0x0370 - 0x0368)
class UWBP_CaravanComponentSlot_C final : public UCaravanComponentSlotWidget
{
public:
	class UImage*                                 HighlightImage;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CaravanComponentSlot_C">();
	}
	static class UWBP_CaravanComponentSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CaravanComponentSlot_C>();
	}
};
static_assert(alignof(UWBP_CaravanComponentSlot_C) == 0x000008, "Wrong alignment on UWBP_CaravanComponentSlot_C");
static_assert(sizeof(UWBP_CaravanComponentSlot_C) == 0x000370, "Wrong size on UWBP_CaravanComponentSlot_C");
static_assert(offsetof(UWBP_CaravanComponentSlot_C, HighlightImage) == 0x000368, "Member 'UWBP_CaravanComponentSlot_C::HighlightImage' has a wrong offset!");

}

