﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChatOptionsMenu

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChatOptionsMenu.WBP_ChatOptionsMenu_C
// 0x0048 (0x0500 - 0x04B8)
class UWBP_ChatOptionsMenu_C final : public UChatOptionsMenu
{
public:
	class UCommonBorder*                          B_AlternatingBG;                                   // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        DecreaseButton;                                    // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        IncreaseButton;                                    // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LabelTextBlock;                                    // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                          Slider;                                            // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderGlow;                                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox;                                     // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    ValueTextBlock;                                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          ValueTextBlockEditable;                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChatOptionsMenu_C">();
	}
	static class UWBP_ChatOptionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChatOptionsMenu_C>();
	}
};
static_assert(alignof(UWBP_ChatOptionsMenu_C) == 0x000008, "Wrong alignment on UWBP_ChatOptionsMenu_C");
static_assert(sizeof(UWBP_ChatOptionsMenu_C) == 0x000500, "Wrong size on UWBP_ChatOptionsMenu_C");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, B_AlternatingBG) == 0x0004B8, "Member 'UWBP_ChatOptionsMenu_C::B_AlternatingBG' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, DecreaseButton) == 0x0004C0, "Member 'UWBP_ChatOptionsMenu_C::DecreaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, IncreaseButton) == 0x0004C8, "Member 'UWBP_ChatOptionsMenu_C::IncreaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, LabelTextBlock) == 0x0004D0, "Member 'UWBP_ChatOptionsMenu_C::LabelTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, Slider) == 0x0004D8, "Member 'UWBP_ChatOptionsMenu_C::Slider' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, SliderGlow) == 0x0004E0, "Member 'UWBP_ChatOptionsMenu_C::SliderGlow' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, SliderSizeBox) == 0x0004E8, "Member 'UWBP_ChatOptionsMenu_C::SliderSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, ValueTextBlock) == 0x0004F0, "Member 'UWBP_ChatOptionsMenu_C::ValueTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ChatOptionsMenu_C, ValueTextBlockEditable) == 0x0004F8, "Member 'UWBP_ChatOptionsMenu_C::ValueTextBlockEditable' has a wrong offset!");

}

