﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CC_DunirButton

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CC_DunirButton.CC_DunirButton_C
// 0x0000 (0x0800 - 0x0800)
class UCC_DunirButton_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CC_DunirButton_C">();
	}
	static class UCC_DunirButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCC_DunirButton_C>();
	}
};
static_assert(alignof(UCC_DunirButton_C) == 0x000010, "Wrong alignment on UCC_DunirButton_C");
static_assert(sizeof(UCC_DunirButton_C) == 0x000800, "Wrong size on UCC_DunirButton_C");

}

