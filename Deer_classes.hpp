﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deer

#include "Basic.hpp"

#include "NPCPawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Deer.Deer_C
// 0x0000 (0x1D90 - 0x1D90)
class ADeer_C final : public ANPCPawn_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Deer_C">();
	}
	static class ADeer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADeer_C>();
	}
};
static_assert(alignof(ADeer_C) == 0x000010, "Wrong alignment on ADeer_C");
static_assert(sizeof(ADeer_C) == 0x001D90, "Wrong size on ADeer_C");

}

