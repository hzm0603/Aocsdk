﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CC_SaveLoadItem

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CC_SaveLoadItem.WBP_CC_SaveLoadItem_C
// 0x0008 (0x0578 - 0x0570)
class UWBP_CC_SaveLoadItem_C final : public UCC_SaveLoadItem
{
public:
	class UIntrepidCommonBorder*                  SaveDeleteItemBG;                                  // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UCommonBorder* GetBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CC_SaveLoadItem_C">();
	}
	static class UWBP_CC_SaveLoadItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CC_SaveLoadItem_C>();
	}
};
static_assert(alignof(UWBP_CC_SaveLoadItem_C) == 0x000008, "Wrong alignment on UWBP_CC_SaveLoadItem_C");
static_assert(sizeof(UWBP_CC_SaveLoadItem_C) == 0x000578, "Wrong size on UWBP_CC_SaveLoadItem_C");
static_assert(offsetof(UWBP_CC_SaveLoadItem_C, SaveDeleteItemBG) == 0x000570, "Member 'UWBP_CC_SaveLoadItem_C::SaveDeleteItemBG' has a wrong offset!");

}

