﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CurrentWarSummary

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CurrentWarSummary.WBP_CurrentWarSummary_C
// 0x0008 (0x0310 - 0x0308)
class UWBP_CurrentWarSummary_C final : public UCurrentWarSummary
{
public:
	class UWBP_CurrentWarSummaryItem_C*           WBP_CurrentWarSummaryItem;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CurrentWarSummary_C">();
	}
	static class UWBP_CurrentWarSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CurrentWarSummary_C>();
	}
};
static_assert(alignof(UWBP_CurrentWarSummary_C) == 0x000008, "Wrong alignment on UWBP_CurrentWarSummary_C");
static_assert(sizeof(UWBP_CurrentWarSummary_C) == 0x000310, "Wrong size on UWBP_CurrentWarSummary_C");
static_assert(offsetof(UWBP_CurrentWarSummary_C, WBP_CurrentWarSummaryItem) == 0x000308, "Member 'UWBP_CurrentWarSummary_C::WBP_CurrentWarSummaryItem' has a wrong offset!");

}

