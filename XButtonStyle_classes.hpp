﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XButtonStyle

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass XButtonStyle.XButtonStyle_C
// 0x0000 (0x0800 - 0x0800)
class UXButtonStyle_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XButtonStyle_C">();
	}
	static class UXButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXButtonStyle_C>();
	}
};
static_assert(alignof(UXButtonStyle_C) == 0x000010, "Wrong alignment on UXButtonStyle_C");
static_assert(sizeof(UXButtonStyle_C) == 0x000800, "Wrong size on UXButtonStyle_C");

}

