﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommissionRewardSummaryTooltip

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommissionRewardSummaryTooltip.WBP_CommissionRewardSummaryTooltip_C
// 0x0010 (0x03C8 - 0x03B8)
class UWBP_CommissionRewardSummaryTooltip_C final : public URewardSummary
{
public:
	class UImage*                                 ToolTipBG;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 xpIcon;                                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommissionRewardSummaryTooltip_C">();
	}
	static class UWBP_CommissionRewardSummaryTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommissionRewardSummaryTooltip_C>();
	}
};
static_assert(alignof(UWBP_CommissionRewardSummaryTooltip_C) == 0x000008, "Wrong alignment on UWBP_CommissionRewardSummaryTooltip_C");
static_assert(sizeof(UWBP_CommissionRewardSummaryTooltip_C) == 0x0003C8, "Wrong size on UWBP_CommissionRewardSummaryTooltip_C");
static_assert(offsetof(UWBP_CommissionRewardSummaryTooltip_C, ToolTipBG) == 0x0003B8, "Member 'UWBP_CommissionRewardSummaryTooltip_C::ToolTipBG' has a wrong offset!");
static_assert(offsetof(UWBP_CommissionRewardSummaryTooltip_C, xpIcon) == 0x0003C0, "Member 'UWBP_CommissionRewardSummaryTooltip_C::xpIcon' has a wrong offset!");

}

