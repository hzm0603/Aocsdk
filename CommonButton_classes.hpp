﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonButton

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonButton.CommonButton_C
// 0x0010 (0x16B0 - 0x16A0)
class UCommonButton_C : public UAoCCommonButtonBase
{
public:
	uint8                                         Pad_1698[0x8];                                     // 0x1698(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UNamedSlot*                             NamedSlot;                                         // 0x16A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonButton_C">();
	}
	static class UCommonButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButton_C>();
	}
};
static_assert(alignof(UCommonButton_C) == 0x000010, "Wrong alignment on UCommonButton_C");
static_assert(sizeof(UCommonButton_C) == 0x0016B0, "Wrong size on UCommonButton_C");
static_assert(offsetof(UCommonButton_C, NamedSlot) == 0x0016A0, "Member 'UCommonButton_C::NamedSlot' has a wrong offset!");

}

