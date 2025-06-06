﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DropdownPanel

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DropdownPanel.WBP_DropdownPanel_C
// 0x0008 (0x0308 - 0x0300)
class UWBP_DropdownPanel_C final : public UDropdownPanel
{
public:
	class UAoCCommonTextBlock*                    ContainerErrorTextBlock;                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DropdownPanel_C">();
	}
	static class UWBP_DropdownPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DropdownPanel_C>();
	}
};
static_assert(alignof(UWBP_DropdownPanel_C) == 0x000008, "Wrong alignment on UWBP_DropdownPanel_C");
static_assert(sizeof(UWBP_DropdownPanel_C) == 0x000308, "Wrong size on UWBP_DropdownPanel_C");
static_assert(offsetof(UWBP_DropdownPanel_C, ContainerErrorTextBlock) == 0x000300, "Member 'UWBP_DropdownPanel_C::ContainerErrorTextBlock' has a wrong offset!");

}

