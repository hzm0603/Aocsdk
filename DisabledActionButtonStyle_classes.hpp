﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisabledActionButtonStyle

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DisabledActionButtonStyle.DisabledActionButtonStyle_C
// 0x0000 (0x0800 - 0x0800)
class UDisabledActionButtonStyle_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DisabledActionButtonStyle_C">();
	}
	static class UDisabledActionButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDisabledActionButtonStyle_C>();
	}
};
static_assert(alignof(UDisabledActionButtonStyle_C) == 0x000010, "Wrong alignment on UDisabledActionButtonStyle_C");
static_assert(sizeof(UDisabledActionButtonStyle_C) == 0x000800, "Wrong size on UDisabledActionButtonStyle_C");

}

