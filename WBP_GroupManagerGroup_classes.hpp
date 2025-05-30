﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GroupManagerGroup

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GroupManagerGroup.WBP_GroupManagerGroup_C
// 0x0000 (0x0350 - 0x0350)
class UWBP_GroupManagerGroup_C final : public UGroupManagerGroup
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GroupManagerGroup_C">();
	}
	static class UWBP_GroupManagerGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GroupManagerGroup_C>();
	}
};
static_assert(alignof(UWBP_GroupManagerGroup_C) == 0x000008, "Wrong alignment on UWBP_GroupManagerGroup_C");
static_assert(sizeof(UWBP_GroupManagerGroup_C) == 0x000350, "Wrong size on UWBP_GroupManagerGroup_C");

}

