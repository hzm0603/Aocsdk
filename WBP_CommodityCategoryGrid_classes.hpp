﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommodityCategoryGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommodityCategoryGrid.WBP_CommodityCategoryGrid_C
// 0x0028 (0x0388 - 0x0360)
class UWBP_CommodityCategoryGrid_C final : public UCommodityCategoryGrid
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAoCCommonTextBlock*                    CategoryHeaderText;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0370(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CommodityCategoryGrid(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommodityCategoryGrid_C">();
	}
	static class UWBP_CommodityCategoryGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommodityCategoryGrid_C>();
	}
};
static_assert(alignof(UWBP_CommodityCategoryGrid_C) == 0x000008, "Wrong alignment on UWBP_CommodityCategoryGrid_C");
static_assert(sizeof(UWBP_CommodityCategoryGrid_C) == 0x000388, "Wrong size on UWBP_CommodityCategoryGrid_C");
static_assert(offsetof(UWBP_CommodityCategoryGrid_C, UberGraphFrame) == 0x000360, "Member 'UWBP_CommodityCategoryGrid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommodityCategoryGrid_C, CategoryHeaderText) == 0x000368, "Member 'UWBP_CommodityCategoryGrid_C::CategoryHeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_CommodityCategoryGrid_C, Title) == 0x000370, "Member 'UWBP_CommodityCategoryGrid_C::Title' has a wrong offset!");

}

