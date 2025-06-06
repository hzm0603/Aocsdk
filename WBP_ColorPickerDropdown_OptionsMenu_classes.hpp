﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ColorPickerDropdown_OptionsMenu

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ColorPickerDropdown_OptionsMenu.WBP_ColorPickerDropdown_OptionsMenu_C
// 0x0008 (0x03E0 - 0x03D8)
class UWBP_ColorPickerDropdown_OptionsMenu_C final : public UColorPickerDropdown
{
public:
	class UCommonBorder*                          AlternatingBG;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ColorPickerDropdown_OptionsMenu_C">();
	}
	static class UWBP_ColorPickerDropdown_OptionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ColorPickerDropdown_OptionsMenu_C>();
	}
};
static_assert(alignof(UWBP_ColorPickerDropdown_OptionsMenu_C) == 0x000008, "Wrong alignment on UWBP_ColorPickerDropdown_OptionsMenu_C");
static_assert(sizeof(UWBP_ColorPickerDropdown_OptionsMenu_C) == 0x0003E0, "Wrong size on UWBP_ColorPickerDropdown_OptionsMenu_C");
static_assert(offsetof(UWBP_ColorPickerDropdown_OptionsMenu_C, AlternatingBG) == 0x0003D8, "Member 'UWBP_ColorPickerDropdown_OptionsMenu_C::AlternatingBG' has a wrong offset!");

}

