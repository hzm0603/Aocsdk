﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Node_Citizen_Vendor

#include "Basic.hpp"

#include "Node_NPC_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Node_Citizen_Vendor.Node_Citizen_Vendor_C
// 0x0000 (0x1D90 - 0x1D90)
class ANode_Citizen_Vendor_C final : public ANode_NPC_Master_C
{
public:
	class UAoCNodePlotComponent*                  AoCNodePlot;                                       // 0x1D88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Node_Citizen_Vendor_C">();
	}
	static class ANode_Citizen_Vendor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANode_Citizen_Vendor_C>();
	}
};
static_assert(alignof(ANode_Citizen_Vendor_C) == 0x000010, "Wrong alignment on ANode_Citizen_Vendor_C");
static_assert(sizeof(ANode_Citizen_Vendor_C) == 0x001D90, "Wrong size on ANode_Citizen_Vendor_C");
static_assert(offsetof(ANode_Citizen_Vendor_C, AoCNodePlot) == 0x001D88, "Member 'ANode_Citizen_Vendor_C::AoCNodePlot' has a wrong offset!");

}

