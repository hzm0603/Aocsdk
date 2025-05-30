﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipRepairEquipped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TooltipRepairEquipped.WBP_TooltipRepairEquipped_C
// 0x0038 (0x0340 - 0x0308)
class UWBP_TooltipRepairEquipped_C final : public URepairEquippedTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    ItemTypeTextBlock;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TooltipBorder;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIntrepidVerticalBox*                   TooltipContentBox;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TooltipHeaderAccent_1;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    UnaffordableText;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_TooltipRepairEquipped(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TooltipRepairEquipped_C">();
	}
	static class UWBP_TooltipRepairEquipped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TooltipRepairEquipped_C>();
	}
};
static_assert(alignof(UWBP_TooltipRepairEquipped_C) == 0x000008, "Wrong alignment on UWBP_TooltipRepairEquipped_C");
static_assert(sizeof(UWBP_TooltipRepairEquipped_C) == 0x000340, "Wrong size on UWBP_TooltipRepairEquipped_C");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, UberGraphFrame) == 0x000308, "Member 'UWBP_TooltipRepairEquipped_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, BackgroundImage) == 0x000310, "Member 'UWBP_TooltipRepairEquipped_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, ItemTypeTextBlock) == 0x000318, "Member 'UWBP_TooltipRepairEquipped_C::ItemTypeTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, TooltipBorder) == 0x000320, "Member 'UWBP_TooltipRepairEquipped_C::TooltipBorder' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, TooltipContentBox) == 0x000328, "Member 'UWBP_TooltipRepairEquipped_C::TooltipContentBox' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, TooltipHeaderAccent_1) == 0x000330, "Member 'UWBP_TooltipRepairEquipped_C::TooltipHeaderAccent_1' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairEquipped_C, UnaffordableText) == 0x000338, "Member 'UWBP_TooltipRepairEquipped_C::UnaffordableText' has a wrong offset!");

}

