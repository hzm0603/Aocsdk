﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuListItemStyle

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MenuListItemStyle.MenuListItemStyle_C
// 0x0000 (0x0800 - 0x0800)
class UMenuListItemStyle_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuListItemStyle_C">();
	}
	static class UMenuListItemStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuListItemStyle_C>();
	}
};
static_assert(alignof(UMenuListItemStyle_C) == 0x000010, "Wrong alignment on UMenuListItemStyle_C");
static_assert(sizeof(UMenuListItemStyle_C) == 0x000800, "Wrong size on UMenuListItemStyle_C");

}

