﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollBarButton

#include "Basic.hpp"

#include "BaseAudioButtonStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ScrollBarButton.ScrollBarButton_C
// 0x0000 (0x0800 - 0x0800)
class UScrollBarButton_C final : public UBaseAudioButtonStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScrollBarButton_C">();
	}
	static class UScrollBarButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollBarButton_C>();
	}
};
static_assert(alignof(UScrollBarButton_C) == 0x000010, "Wrong alignment on UScrollBarButton_C");
static_assert(sizeof(UScrollBarButton_C) == 0x000800, "Wrong size on UScrollBarButton_C");

}

