﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DropdownStyle

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DropdownStyle.DropdownStyle_C
// 0x0000 (0x0800 - 0x0800)
class UDropdownStyle_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DropdownStyle_C">();
	}
	static class UDropdownStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDropdownStyle_C>();
	}
};
static_assert(alignof(UDropdownStyle_C) == 0x000010, "Wrong alignment on UDropdownStyle_C");
static_assert(sizeof(UDropdownStyle_C) == 0x000800, "Wrong size on UDropdownStyle_C");

}

