﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BogBrute

#include "Basic.hpp"

#include "BogBrute_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BogBrute.BogBrute_C
// 0x0000 (0x1D50 - 0x1D50)
class ABogBrute_C final : public ABogBrute_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BogBrute_C">();
	}
	static class ABogBrute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABogBrute_C>();
	}
};
static_assert(alignof(ABogBrute_C) == 0x000010, "Wrong alignment on ABogBrute_C");
static_assert(sizeof(ABogBrute_C) == 0x001D50, "Wrong size on ABogBrute_C");

}

