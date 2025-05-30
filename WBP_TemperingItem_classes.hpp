﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TemperingItem

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TemperingItem.WBP_TemperingItem_C
// 0x0008 (0x0340 - 0x0338)
class UWBP_TemperingItem_C final : public UTemperingListItem
{
public:
	class UIntrepidCommonBorder*                  AlternatingBG;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TemperingItem_C">();
	}
	static class UWBP_TemperingItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TemperingItem_C>();
	}
};
static_assert(alignof(UWBP_TemperingItem_C) == 0x000008, "Wrong alignment on UWBP_TemperingItem_C");
static_assert(sizeof(UWBP_TemperingItem_C) == 0x000340, "Wrong size on UWBP_TemperingItem_C");
static_assert(offsetof(UWBP_TemperingItem_C, AlternatingBG) == 0x000338, "Member 'UWBP_TemperingItem_C::AlternatingBG' has a wrong offset!");

}

