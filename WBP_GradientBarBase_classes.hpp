﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GradientBarBase

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GradientBarBase.WBP_GradientBarBase_C
// 0x0000 (0x0330 - 0x0330)
class UWBP_GradientBarBase_C : public UGradientBar
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GradientBarBase_C">();
	}
	static class UWBP_GradientBarBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GradientBarBase_C>();
	}
};
static_assert(alignof(UWBP_GradientBarBase_C) == 0x000008, "Wrong alignment on UWBP_GradientBarBase_C");
static_assert(sizeof(UWBP_GradientBarBase_C) == 0x000330, "Wrong size on UWBP_GradientBarBase_C");

}

