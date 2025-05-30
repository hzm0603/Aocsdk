﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnchantingMenu

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EnchantingMenu.WBP_EnchantingMenu_C
// 0x0030 (0x0808 - 0x07D8)
class UWBP_EnchantingMenu_C final : public UEnchantingMenu
{
public:
	class UVerticalBox*                           CurrencySection;                                   // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           Ret_OutputItemMask;                                // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnchantingDataItem_C*              WBP_EnchantingDataItem;                            // 0x07E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnchantingDataItem_C*              WBP_EnchantingDataItem_1;                          // 0x07F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnchantingDataItem_C*              WBP_EnchantingDataItem_2;                          // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnchantingDataItem_C*              WBP_EnchantingDataItem_3;                          // 0x0800(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	TSubclassOf<class UCommonBorderStyle> GetOddBorderStyle();
	TSubclassOf<class UCommonBorderStyle> GetEvenBorderStyle();
	class UPanelWidget* GetBorderContainer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnchantingMenu_C">();
	}
	static class UWBP_EnchantingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnchantingMenu_C>();
	}
};
static_assert(alignof(UWBP_EnchantingMenu_C) == 0x000008, "Wrong alignment on UWBP_EnchantingMenu_C");
static_assert(sizeof(UWBP_EnchantingMenu_C) == 0x000808, "Wrong size on UWBP_EnchantingMenu_C");
static_assert(offsetof(UWBP_EnchantingMenu_C, CurrencySection) == 0x0007D8, "Member 'UWBP_EnchantingMenu_C::CurrencySection' has a wrong offset!");
static_assert(offsetof(UWBP_EnchantingMenu_C, Ret_OutputItemMask) == 0x0007E0, "Member 'UWBP_EnchantingMenu_C::Ret_OutputItemMask' has a wrong offset!");
static_assert(offsetof(UWBP_EnchantingMenu_C, WBP_EnchantingDataItem) == 0x0007E8, "Member 'UWBP_EnchantingMenu_C::WBP_EnchantingDataItem' has a wrong offset!");
static_assert(offsetof(UWBP_EnchantingMenu_C, WBP_EnchantingDataItem_1) == 0x0007F0, "Member 'UWBP_EnchantingMenu_C::WBP_EnchantingDataItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_EnchantingMenu_C, WBP_EnchantingDataItem_2) == 0x0007F8, "Member 'UWBP_EnchantingMenu_C::WBP_EnchantingDataItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_EnchantingMenu_C, WBP_EnchantingDataItem_3) == 0x000800, "Member 'UWBP_EnchantingMenu_C::WBP_EnchantingDataItem_3' has a wrong offset!");

}

