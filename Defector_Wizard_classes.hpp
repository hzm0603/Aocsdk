﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Defector_Wizard

#include "Basic.hpp"

#include "Node_War_Guard_Wizard_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Defector_Wizard.Defector_Wizard_C
// 0x0000 (0x1D70 - 0x1D70)
class ADefector_Wizard_C final : public ANode_War_Guard_Wizard_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Defector_Wizard_C">();
	}
	static class ADefector_Wizard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefector_Wizard_C>();
	}
};
static_assert(alignof(ADefector_Wizard_C) == 0x000010, "Wrong alignment on ADefector_Wizard_C");
static_assert(sizeof(ADefector_Wizard_C) == 0x001D70, "Wrong size on ADefector_Wizard_C");

}

