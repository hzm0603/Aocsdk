﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CSB_Forsaken_Blades_Archer

#include "Basic.hpp"

#include "Bandit_Archer1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CSB_Forsaken_Blades_Archer.CSB_Forsaken_Blades_Archer_C
// 0x0000 (0x1D70 - 0x1D70)
class ACSB_Forsaken_Blades_Archer_C final : public ABandit_Archer1_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CSB_Forsaken_Blades_Archer_C">();
	}
	static class ACSB_Forsaken_Blades_Archer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACSB_Forsaken_Blades_Archer_C>();
	}
};
static_assert(alignof(ACSB_Forsaken_Blades_Archer_C) == 0x000010, "Wrong alignment on ACSB_Forsaken_Blades_Archer_C");
static_assert(sizeof(ACSB_Forsaken_Blades_Archer_C) == 0x001D70, "Wrong size on ACSB_Forsaken_Blades_Archer_C");

}

