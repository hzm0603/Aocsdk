﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VFF_Plants

#include "Basic.hpp"

#include "BP_VFFoliage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VFF_Plants.BP_VFF_Plants_C
// 0x0000 (0x04A0 - 0x04A0)
class ABP_VFF_Plants_C : public ABP_VFFoliage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VFF_Plants_C">();
	}
	static class ABP_VFF_Plants_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VFF_Plants_C>();
	}
};
static_assert(alignof(ABP_VFF_Plants_C) == 0x000008, "Wrong alignment on ABP_VFF_Plants_C");
static_assert(sizeof(ABP_VFF_Plants_C) == 0x0004A0, "Wrong size on ABP_VFF_Plants_C");

}

