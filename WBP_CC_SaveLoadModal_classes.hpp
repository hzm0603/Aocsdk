﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CC_SaveLoadModal

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CC_SaveLoadModal.WBP_CC_SaveLoadModal_C
// 0x0020 (0x0340 - 0x0320)
class UWBP_CC_SaveLoadModal_C final : public UCC_SaveLoadModal
{
public:
	class UCommonBorder*                          CurrentCharacterContainer;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CurrentCharacterInfo;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_Gradient_C*           ScrollWindow;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TextDropdown_C*                    SortByDropdown;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CC_SaveLoadModal_C">();
	}
	static class UWBP_CC_SaveLoadModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CC_SaveLoadModal_C>();
	}
};
static_assert(alignof(UWBP_CC_SaveLoadModal_C) == 0x000008, "Wrong alignment on UWBP_CC_SaveLoadModal_C");
static_assert(sizeof(UWBP_CC_SaveLoadModal_C) == 0x000340, "Wrong size on UWBP_CC_SaveLoadModal_C");
static_assert(offsetof(UWBP_CC_SaveLoadModal_C, CurrentCharacterContainer) == 0x000320, "Member 'UWBP_CC_SaveLoadModal_C::CurrentCharacterContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CC_SaveLoadModal_C, CurrentCharacterInfo) == 0x000328, "Member 'UWBP_CC_SaveLoadModal_C::CurrentCharacterInfo' has a wrong offset!");
static_assert(offsetof(UWBP_CC_SaveLoadModal_C, ScrollWindow) == 0x000330, "Member 'UWBP_CC_SaveLoadModal_C::ScrollWindow' has a wrong offset!");
static_assert(offsetof(UWBP_CC_SaveLoadModal_C, SortByDropdown) == 0x000338, "Member 'UWBP_CC_SaveLoadModal_C::SortByDropdown' has a wrong offset!");

}

