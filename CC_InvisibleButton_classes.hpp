﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CC_InvisibleButton

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CC_InvisibleButton.CC_InvisibleButton_C
// 0x0000 (0x0800 - 0x0800)
class UCC_InvisibleButton_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CC_InvisibleButton_C">();
	}
	static class UCC_InvisibleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCC_InvisibleButton_C>();
	}
};
static_assert(alignof(UCC_InvisibleButton_C) == 0x000010, "Wrong alignment on UCC_InvisibleButton_C");
static_assert(sizeof(UCC_InvisibleButton_C) == 0x000800, "Wrong size on UCC_InvisibleButton_C");

}

