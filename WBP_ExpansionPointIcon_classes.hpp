﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ExpansionPointIcon

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ExpansionPointIcon.WBP_ExpansionPointIcon_C
// 0x0008 (0x0340 - 0x0338)
class UWBP_ExpansionPointIcon_C final : public UExpansionPointIcon
{
public:
	class UImage*                                 RarityFrame;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpansionPointIcon_C">();
	}
	static class UWBP_ExpansionPointIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpansionPointIcon_C>();
	}
};
static_assert(alignof(UWBP_ExpansionPointIcon_C) == 0x000008, "Wrong alignment on UWBP_ExpansionPointIcon_C");
static_assert(sizeof(UWBP_ExpansionPointIcon_C) == 0x000340, "Wrong size on UWBP_ExpansionPointIcon_C");
static_assert(offsetof(UWBP_ExpansionPointIcon_C, RarityFrame) == 0x000338, "Member 'UWBP_ExpansionPointIcon_C::RarityFrame' has a wrong offset!");

}

