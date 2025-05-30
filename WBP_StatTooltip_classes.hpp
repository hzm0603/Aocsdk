﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StatTooltip

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StatTooltip.WBP_StatTooltip_C
// 0x0018 (0x0318 - 0x0300)
class UWBP_StatTooltip_C final : public UStatTooltip
{
public:
	class UImage*                                 HeaderAccent;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBG;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ToolTipBG;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatTooltip_C">();
	}
	static class UWBP_StatTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatTooltip_C>();
	}
};
static_assert(alignof(UWBP_StatTooltip_C) == 0x000008, "Wrong alignment on UWBP_StatTooltip_C");
static_assert(sizeof(UWBP_StatTooltip_C) == 0x000318, "Wrong size on UWBP_StatTooltip_C");
static_assert(offsetof(UWBP_StatTooltip_C, HeaderAccent) == 0x000300, "Member 'UWBP_StatTooltip_C::HeaderAccent' has a wrong offset!");
static_assert(offsetof(UWBP_StatTooltip_C, HeaderBG) == 0x000308, "Member 'UWBP_StatTooltip_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UWBP_StatTooltip_C, ToolTipBG) == 0x000310, "Member 'UWBP_StatTooltip_C::ToolTipBG' has a wrong offset!");

}

