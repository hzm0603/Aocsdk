﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SavedHudProfile

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SavedHudProfile.WBP_SavedHudProfile_C
// 0x0008 (0x0350 - 0x0348)
class UWBP_SavedHudProfile_C final : public USavedHudProfile
{
public:
	class UWBP_HudPreviewImage_C*                 WBP_HudPreviewImage;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SavedHudProfile_C">();
	}
	static class UWBP_SavedHudProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SavedHudProfile_C>();
	}
};
static_assert(alignof(UWBP_SavedHudProfile_C) == 0x000008, "Wrong alignment on UWBP_SavedHudProfile_C");
static_assert(sizeof(UWBP_SavedHudProfile_C) == 0x000350, "Wrong size on UWBP_SavedHudProfile_C");
static_assert(offsetof(UWBP_SavedHudProfile_C, WBP_HudPreviewImage) == 0x000348, "Member 'UWBP_SavedHudProfile_C::WBP_HudPreviewImage' has a wrong offset!");

}

