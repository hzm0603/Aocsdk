﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonTextAccordion

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonTextAccordion.WBP_CommonTextAccordion_C
// 0x0010 (0x1770 - 0x1760)
class UWBP_CommonTextAccordion_C final : public UCommonTextButtonBase
{
public:
	class UWBP_ItemIcon_C*                        ItemIcon;                                          // 0x1760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonTextAccordion_C">();
	}
	static class UWBP_CommonTextAccordion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonTextAccordion_C>();
	}
};
static_assert(alignof(UWBP_CommonTextAccordion_C) == 0x000010, "Wrong alignment on UWBP_CommonTextAccordion_C");
static_assert(sizeof(UWBP_CommonTextAccordion_C) == 0x001770, "Wrong size on UWBP_CommonTextAccordion_C");
static_assert(offsetof(UWBP_CommonTextAccordion_C, ItemIcon) == 0x001760, "Member 'UWBP_CommonTextAccordion_C::ItemIcon' has a wrong offset!");

}

