﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SwatchButtonStyle

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SwatchButtonStyle.SwatchButtonStyle_C
// 0x0000 (0x0800 - 0x0800)
class USwatchButtonStyle_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SwatchButtonStyle_C">();
	}
	static class USwatchButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USwatchButtonStyle_C>();
	}
};
static_assert(alignof(USwatchButtonStyle_C) == 0x000010, "Wrong alignment on USwatchButtonStyle_C");
static_assert(sizeof(USwatchButtonStyle_C) == 0x000800, "Wrong size on USwatchButtonStyle_C");

}

