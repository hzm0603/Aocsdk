﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Horse_Base

#include "Basic.hpp"

#include "NPCPawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Horse_Base.Horse_Base_C
// 0x0020 (0x1DB0 - 0x1D90)
class AHorse_Base_C : public ANPCPawn_C
{
public:
	TArray<class UMaterialInstance*>              HorseTextureArray;                                 // 0x1D90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstance*>              HorseHairArray;                                    // 0x1DA0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Horse_Base_C">();
	}
	static class AHorse_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHorse_Base_C>();
	}
};
static_assert(alignof(AHorse_Base_C) == 0x000010, "Wrong alignment on AHorse_Base_C");
static_assert(sizeof(AHorse_Base_C) == 0x001DB0, "Wrong size on AHorse_Base_C");
static_assert(offsetof(AHorse_Base_C, HorseTextureArray) == 0x001D90, "Member 'AHorse_Base_C::HorseTextureArray' has a wrong offset!");
static_assert(offsetof(AHorse_Base_C, HorseHairArray) == 0x001DA0, "Member 'AHorse_Base_C::HorseHairArray' has a wrong offset!");

}

