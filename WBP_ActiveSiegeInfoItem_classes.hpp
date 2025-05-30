﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActiveSiegeInfoItem

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ActiveSiegeInfoItem.WBP_ActiveSiegeInfoItem_C
// 0x0008 (0x0408 - 0x0400)
class UWBP_ActiveSiegeInfoItem_C final : public UActiveSiegeInfoItem
{
public:
	class UImage*                                 WarSiegeIcon;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ActiveSiegeInfoItem_C">();
	}
	static class UWBP_ActiveSiegeInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ActiveSiegeInfoItem_C>();
	}
};
static_assert(alignof(UWBP_ActiveSiegeInfoItem_C) == 0x000008, "Wrong alignment on UWBP_ActiveSiegeInfoItem_C");
static_assert(sizeof(UWBP_ActiveSiegeInfoItem_C) == 0x000408, "Wrong size on UWBP_ActiveSiegeInfoItem_C");
static_assert(offsetof(UWBP_ActiveSiegeInfoItem_C, WarSiegeIcon) == 0x000400, "Member 'UWBP_ActiveSiegeInfoItem_C::WarSiegeIcon' has a wrong offset!");

}

