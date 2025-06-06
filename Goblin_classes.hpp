﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Goblin

#include "Basic.hpp"

#include "NPCPawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Goblin.Goblin_C
// 0x0000 (0x1B50 - 0x1B50)
class AGoblin_C : public ANPCPawn_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Goblin_C">();
	}
	static class AGoblin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGoblin_C>();
	}
};
static_assert(alignof(AGoblin_C) == 0x000010, "Wrong alignment on AGoblin_C");
static_assert(sizeof(AGoblin_C) == 0x001B50, "Wrong size on AGoblin_C");

}

