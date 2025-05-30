﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemIcon

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemIcon.WBP_ItemIcon_C
// 0x0008 (0x05B8 - 0x05B0)
class UWBP_ItemIcon_C final : public UItemIcon
{
public:
	class UImage*                                 UnreadNotifier;                                    // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* GetBreadcrumbWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemIcon_C">();
	}
	static class UWBP_ItemIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemIcon_C>();
	}
};
static_assert(alignof(UWBP_ItemIcon_C) == 0x000008, "Wrong alignment on UWBP_ItemIcon_C");
static_assert(sizeof(UWBP_ItemIcon_C) == 0x0005B8, "Wrong size on UWBP_ItemIcon_C");
static_assert(offsetof(UWBP_ItemIcon_C, UnreadNotifier) == 0x0005B0, "Member 'UWBP_ItemIcon_C::UnreadNotifier' has a wrong offset!");

}

