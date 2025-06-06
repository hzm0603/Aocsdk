﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipRepairIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TooltipRepairIcon.WBP_TooltipRepairIcon_C
// 0x0038 (0x0328 - 0x02F0)
class UWBP_TooltipRepairIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    ItemTypeTextBlock;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    TB_EquippedHeaderText;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TooltipBorder;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TooltipContentBox;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TooltipHeaderAccent_1;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_TooltipRepairIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TooltipRepairIcon_C">();
	}
	static class UWBP_TooltipRepairIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TooltipRepairIcon_C>();
	}
};
static_assert(alignof(UWBP_TooltipRepairIcon_C) == 0x000008, "Wrong alignment on UWBP_TooltipRepairIcon_C");
static_assert(sizeof(UWBP_TooltipRepairIcon_C) == 0x000328, "Wrong size on UWBP_TooltipRepairIcon_C");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_TooltipRepairIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, BackgroundImage) == 0x0002F8, "Member 'UWBP_TooltipRepairIcon_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, ItemTypeTextBlock) == 0x000300, "Member 'UWBP_TooltipRepairIcon_C::ItemTypeTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, TB_EquippedHeaderText) == 0x000308, "Member 'UWBP_TooltipRepairIcon_C::TB_EquippedHeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, TooltipBorder) == 0x000310, "Member 'UWBP_TooltipRepairIcon_C::TooltipBorder' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, TooltipContentBox) == 0x000318, "Member 'UWBP_TooltipRepairIcon_C::TooltipContentBox' has a wrong offset!");
static_assert(offsetof(UWBP_TooltipRepairIcon_C, TooltipHeaderAccent_1) == 0x000320, "Member 'UWBP_TooltipRepairIcon_C::TooltipHeaderAccent_1' has a wrong offset!");

}

