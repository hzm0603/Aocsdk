﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryAccessoryFilter

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InventoryAccessoryFilter.InventoryAccessoryFilter_C
// 0x0000 (0x0800 - 0x0800)
class UInventoryAccessoryFilter_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryAccessoryFilter_C">();
	}
	static class UInventoryAccessoryFilter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryAccessoryFilter_C>();
	}
};
static_assert(alignof(UInventoryAccessoryFilter_C) == 0x000010, "Wrong alignment on UInventoryAccessoryFilter_C");
static_assert(sizeof(UInventoryAccessoryFilter_C) == 0x000800, "Wrong size on UInventoryAccessoryFilter_C");

}

