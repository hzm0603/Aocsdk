﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_Villager_M

#include "Basic.hpp"

#include "Node_Villager_M_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Event_Villager_M.Event_Villager_M_C
// 0x0000 (0x1D90 - 0x1D90)
class AEvent_Villager_M_C final : public ANode_Villager_M_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Event_Villager_M_C">();
	}
	static class AEvent_Villager_M_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEvent_Villager_M_C>();
	}
};
static_assert(alignof(AEvent_Villager_M_C) == 0x000010, "Wrong alignment on AEvent_Villager_M_C");
static_assert(sizeof(AEvent_Villager_M_C) == 0x001D90, "Wrong size on AEvent_Villager_M_C");

}

