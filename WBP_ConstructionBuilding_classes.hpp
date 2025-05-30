﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConstructionBuilding

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ConstructionBuilding.WBP_ConstructionBuilding_C
// 0x0018 (0x0320 - 0x0308)
class UWBP_ConstructionBuilding_C final : public UConstructionBuilding
{
public:
	class UAoCCommonTextBlock*                    CollectingTextBlock;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          HeaderBG;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          HeaderBG2;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ConstructionBuilding_C">();
	}
	static class UWBP_ConstructionBuilding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ConstructionBuilding_C>();
	}
};
static_assert(alignof(UWBP_ConstructionBuilding_C) == 0x000008, "Wrong alignment on UWBP_ConstructionBuilding_C");
static_assert(sizeof(UWBP_ConstructionBuilding_C) == 0x000320, "Wrong size on UWBP_ConstructionBuilding_C");
static_assert(offsetof(UWBP_ConstructionBuilding_C, CollectingTextBlock) == 0x000308, "Member 'UWBP_ConstructionBuilding_C::CollectingTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ConstructionBuilding_C, HeaderBG) == 0x000310, "Member 'UWBP_ConstructionBuilding_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UWBP_ConstructionBuilding_C, HeaderBG2) == 0x000318, "Member 'UWBP_ConstructionBuilding_C::HeaderBG2' has a wrong offset!");

}

