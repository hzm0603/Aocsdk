﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollWindow1

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ScrollWindow1.ScrollWindow1_C
// 0x0000 (0x0120 - 0x0120)
class UScrollWindow1_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScrollWindow1_C">();
	}
	static class UScrollWindow1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollWindow1_C>();
	}
};
static_assert(alignof(UScrollWindow1_C) == 0x000010, "Wrong alignment on UScrollWindow1_C");
static_assert(sizeof(UScrollWindow1_C) == 0x000120, "Wrong size on UScrollWindow1_C");

}

