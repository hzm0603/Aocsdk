﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BorderedItemBG3

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BorderedItemBG3.BorderedItemBG3_C
// 0x0000 (0x0120 - 0x0120)
class UBorderedItemBG3_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BorderedItemBG3_C">();
	}
	static class UBorderedItemBG3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorderedItemBG3_C>();
	}
};
static_assert(alignof(UBorderedItemBG3_C) == 0x000010, "Wrong alignment on UBorderedItemBG3_C");
static_assert(sizeof(UBorderedItemBG3_C) == 0x000120, "Wrong size on UBorderedItemBG3_C");

}

