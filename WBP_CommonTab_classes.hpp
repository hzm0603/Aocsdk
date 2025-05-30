﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonTab

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonTab.WBP_CommonTab_C
// 0x0010 (0x1780 - 0x1770)
class UWBP_CommonTab_C final : public UCommonTab
{
public:
	class UImage*                                 UnreadNotifier;                                    // 0x1770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* GetBreadcrumbWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonTab_C">();
	}
	static class UWBP_CommonTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonTab_C>();
	}
};
static_assert(alignof(UWBP_CommonTab_C) == 0x000010, "Wrong alignment on UWBP_CommonTab_C");
static_assert(sizeof(UWBP_CommonTab_C) == 0x001780, "Wrong size on UWBP_CommonTab_C");
static_assert(offsetof(UWBP_CommonTab_C, UnreadNotifier) == 0x001770, "Member 'UWBP_CommonTab_C::UnreadNotifier' has a wrong offset!");

}

