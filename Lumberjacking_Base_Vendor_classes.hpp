﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lumberjacking_Base_Vendor

#include "Basic.hpp"

#include "Node_NPC_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lumberjacking_Base_Vendor.Lumberjacking_Base_Vendor_C
// 0x0000 (0x1D90 - 0x1D90)
class ALumberjacking_Base_Vendor_C final : public ANode_NPC_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lumberjacking_Base_Vendor_C">();
	}
	static class ALumberjacking_Base_Vendor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALumberjacking_Base_Vendor_C>();
	}
};
static_assert(alignof(ALumberjacking_Base_Vendor_C) == 0x000010, "Wrong alignment on ALumberjacking_Base_Vendor_C");
static_assert(sizeof(ALumberjacking_Base_Vendor_C) == 0x001D90, "Wrong size on ALumberjacking_Base_Vendor_C");

}

