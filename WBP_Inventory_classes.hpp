﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Inventory.WBP_Inventory_C
// 0x0020 (0x03B0 - 0x0390)
class UWBP_Inventory_C final : public UInventory
{
public:
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   ItemsScrollWindow;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   MaterialsScrollWindow;                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   QuestItemsScrollWindow;                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ResizableBox;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Inventory_C">();
	}
	static class UWBP_Inventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Inventory_C>();
	}
};
static_assert(alignof(UWBP_Inventory_C) == 0x000008, "Wrong alignment on UWBP_Inventory_C");
static_assert(sizeof(UWBP_Inventory_C) == 0x0003B0, "Wrong size on UWBP_Inventory_C");
static_assert(offsetof(UWBP_Inventory_C, ItemsScrollWindow) == 0x000390, "Member 'UWBP_Inventory_C::ItemsScrollWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_C, MaterialsScrollWindow) == 0x000398, "Member 'UWBP_Inventory_C::MaterialsScrollWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_C, QuestItemsScrollWindow) == 0x0003A0, "Member 'UWBP_Inventory_C::QuestItemsScrollWindow' has a wrong offset!");
static_assert(offsetof(UWBP_Inventory_C, ResizableBox) == 0x0003A8, "Member 'UWBP_Inventory_C::ResizableBox' has a wrong offset!");

}

