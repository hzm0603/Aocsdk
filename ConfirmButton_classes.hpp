﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmButton

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConfirmButton.ConfirmButton_C
// 0x0000 (0x0800 - 0x0800)
class UConfirmButton_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfirmButton_C">();
	}
	static class UConfirmButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfirmButton_C>();
	}
};
static_assert(alignof(UConfirmButton_C) == 0x000010, "Wrong alignment on UConfirmButton_C");
static_assert(sizeof(UConfirmButton_C) == 0x000800, "Wrong size on UConfirmButton_C");

}

