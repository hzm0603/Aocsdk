﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CSB_Bandit_Bear_Handler

#include "Basic.hpp"

#include "CSB_Bandit_Raider_StateTree_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CSB_Bandit_Bear_Handler.CSB_Bandit_Bear_Handler_C
// 0x0000 (0x1D70 - 0x1D70)
class ACSB_Bandit_Bear_Handler_C final : public ACSB_Bandit_Raider_StateTree_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CSB_Bandit_Bear_Handler_C">();
	}
	static class ACSB_Bandit_Bear_Handler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACSB_Bandit_Bear_Handler_C>();
	}
};
static_assert(alignof(ACSB_Bandit_Bear_Handler_C) == 0x000010, "Wrong alignment on ACSB_Bandit_Bear_Handler_C");
static_assert(sizeof(ACSB_Bandit_Bear_Handler_C) == 0x001D70, "Wrong size on ACSB_Bandit_Bear_Handler_C");

}

