﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UpdateGuildRankModal

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UpdateGuildRankModal.WBP_UpdateGuildRankModal_C
// 0x0040 (0x03B8 - 0x0378)
class UWBP_UpdateGuildRankModal_C final : public UUpdateGuildRankModal
{
public:
	class UWBP_CommonCheckBoxRow_C*               CreateRankCheckbox;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               CreateRankCheckbox_1;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               EditHierarchyCheckbox;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               EditPermissionsCheckbox;                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               EditPermissionsCheckbox_1;                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               RemoveRankCheckbox;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonCheckBoxRow_C*               ViewGuildStorageCheckbox;                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UpdateGuildRankModal_C">();
	}
	static class UWBP_UpdateGuildRankModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UpdateGuildRankModal_C>();
	}
};
static_assert(alignof(UWBP_UpdateGuildRankModal_C) == 0x000008, "Wrong alignment on UWBP_UpdateGuildRankModal_C");
static_assert(sizeof(UWBP_UpdateGuildRankModal_C) == 0x0003B8, "Wrong size on UWBP_UpdateGuildRankModal_C");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, CreateRankCheckbox) == 0x000378, "Member 'UWBP_UpdateGuildRankModal_C::CreateRankCheckbox' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, CreateRankCheckbox_1) == 0x000380, "Member 'UWBP_UpdateGuildRankModal_C::CreateRankCheckbox_1' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, EditHierarchyCheckbox) == 0x000388, "Member 'UWBP_UpdateGuildRankModal_C::EditHierarchyCheckbox' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, EditPermissionsCheckbox) == 0x000390, "Member 'UWBP_UpdateGuildRankModal_C::EditPermissionsCheckbox' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, EditPermissionsCheckbox_1) == 0x000398, "Member 'UWBP_UpdateGuildRankModal_C::EditPermissionsCheckbox_1' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, Image_107) == 0x0003A0, "Member 'UWBP_UpdateGuildRankModal_C::Image_107' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, RemoveRankCheckbox) == 0x0003A8, "Member 'UWBP_UpdateGuildRankModal_C::RemoveRankCheckbox' has a wrong offset!");
static_assert(offsetof(UWBP_UpdateGuildRankModal_C, ViewGuildStorageCheckbox) == 0x0003B0, "Member 'UWBP_UpdateGuildRankModal_C::ViewGuildStorageCheckbox' has a wrong offset!");

}

