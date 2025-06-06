﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomizeBuyOrderMenu

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CustomizeBuyOrderMenu.WBP_CustomizeBuyOrderMenu_C
// 0x0078 (0x04F8 - 0x0480)
class UWBP_CustomizeBuyOrderMenu_C final : public UCustomizeBuyOrderMenu
{
public:
	class UCommonButton_C*                        DecreaseButton;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        DecreaseButton_1;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        DecreaseButton_2;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        DecreaseButton_3;                                  // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_NodeCurrencyIcon;                              // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        IncreaseButton;                                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        IncreaseButton_1;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        IncreaseButton_2;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        IncreaseButton_3;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemSubaccordion_C*                Material1Selector;                                 // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemSubaccordion_C*                Material2Selector;                                 // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox;                                     // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox_1;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox_2;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SliderSizeBox_3;                                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CustomizeBuyOrderMenu_C">();
	}
	static class UWBP_CustomizeBuyOrderMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CustomizeBuyOrderMenu_C>();
	}
};
static_assert(alignof(UWBP_CustomizeBuyOrderMenu_C) == 0x000008, "Wrong alignment on UWBP_CustomizeBuyOrderMenu_C");
static_assert(sizeof(UWBP_CustomizeBuyOrderMenu_C) == 0x0004F8, "Wrong size on UWBP_CustomizeBuyOrderMenu_C");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, DecreaseButton) == 0x000480, "Member 'UWBP_CustomizeBuyOrderMenu_C::DecreaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, DecreaseButton_1) == 0x000488, "Member 'UWBP_CustomizeBuyOrderMenu_C::DecreaseButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, DecreaseButton_2) == 0x000490, "Member 'UWBP_CustomizeBuyOrderMenu_C::DecreaseButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, DecreaseButton_3) == 0x000498, "Member 'UWBP_CustomizeBuyOrderMenu_C::DecreaseButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, IMG_NodeCurrencyIcon) == 0x0004A0, "Member 'UWBP_CustomizeBuyOrderMenu_C::IMG_NodeCurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, IncreaseButton) == 0x0004A8, "Member 'UWBP_CustomizeBuyOrderMenu_C::IncreaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, IncreaseButton_1) == 0x0004B0, "Member 'UWBP_CustomizeBuyOrderMenu_C::IncreaseButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, IncreaseButton_2) == 0x0004B8, "Member 'UWBP_CustomizeBuyOrderMenu_C::IncreaseButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, IncreaseButton_3) == 0x0004C0, "Member 'UWBP_CustomizeBuyOrderMenu_C::IncreaseButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, Material1Selector) == 0x0004C8, "Member 'UWBP_CustomizeBuyOrderMenu_C::Material1Selector' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, Material2Selector) == 0x0004D0, "Member 'UWBP_CustomizeBuyOrderMenu_C::Material2Selector' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, SliderSizeBox) == 0x0004D8, "Member 'UWBP_CustomizeBuyOrderMenu_C::SliderSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, SliderSizeBox_1) == 0x0004E0, "Member 'UWBP_CustomizeBuyOrderMenu_C::SliderSizeBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, SliderSizeBox_2) == 0x0004E8, "Member 'UWBP_CustomizeBuyOrderMenu_C::SliderSizeBox_2' has a wrong offset!");
static_assert(offsetof(UWBP_CustomizeBuyOrderMenu_C, SliderSizeBox_3) == 0x0004F0, "Member 'UWBP_CustomizeBuyOrderMenu_C::SliderSizeBox_3' has a wrong offset!");

}

