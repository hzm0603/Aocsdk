﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipCrateUnpackingTimer

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TooltipCrateUnpackingTimer.WBP_TooltipCrateUnpackingTimer_C
// 0x0008 (0x0308 - 0x0300)
class UWBP_TooltipCrateUnpackingTimer_C final : public UTooltipUnpackTimerBlock
{
public:
	class UCommonBorder*                          SectionBG;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TooltipCrateUnpackingTimer_C">();
	}
	static class UWBP_TooltipCrateUnpackingTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TooltipCrateUnpackingTimer_C>();
	}
};
static_assert(alignof(UWBP_TooltipCrateUnpackingTimer_C) == 0x000008, "Wrong alignment on UWBP_TooltipCrateUnpackingTimer_C");
static_assert(sizeof(UWBP_TooltipCrateUnpackingTimer_C) == 0x000308, "Wrong size on UWBP_TooltipCrateUnpackingTimer_C");
static_assert(offsetof(UWBP_TooltipCrateUnpackingTimer_C, SectionBG) == 0x000300, "Member 'UWBP_TooltipCrateUnpackingTimer_C::SectionBG' has a wrong offset!");

}

