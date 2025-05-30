﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PurchaseStorageButton

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PurchaseStorageButton.WBP_PurchaseStorageButton_C
// 0x0020 (0x1710 - 0x16F0)
class UWBP_PurchaseStorageButton_C final : public UPurchaseStorageButton
{
public:
	class UAoCCommonTextBlock*                    ContainerLabelTextBlock;                           // 0x16F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityFrame;                                       // 0x16F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageSlotIcon;                                   // 0x1700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PurchaseStorageButton_C">();
	}
	static class UWBP_PurchaseStorageButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PurchaseStorageButton_C>();
	}
};
static_assert(alignof(UWBP_PurchaseStorageButton_C) == 0x000010, "Wrong alignment on UWBP_PurchaseStorageButton_C");
static_assert(sizeof(UWBP_PurchaseStorageButton_C) == 0x001710, "Wrong size on UWBP_PurchaseStorageButton_C");
static_assert(offsetof(UWBP_PurchaseStorageButton_C, ContainerLabelTextBlock) == 0x0016F0, "Member 'UWBP_PurchaseStorageButton_C::ContainerLabelTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_PurchaseStorageButton_C, RarityFrame) == 0x0016F8, "Member 'UWBP_PurchaseStorageButton_C::RarityFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PurchaseStorageButton_C, StorageSlotIcon) == 0x001700, "Member 'UWBP_PurchaseStorageButton_C::StorageSlotIcon' has a wrong offset!");

}

