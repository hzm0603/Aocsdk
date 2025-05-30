﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TurnInBox

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TurnInBox.TurnInBox_C
// 0x0010 (0x0540 - 0x0530)
class ATurnInBox_C final : public AInteractableStateMachineBase
{
public:
	class UAoCNodePlotComponent*                  AoCNodePlot;                                       // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TurnInBox_C">();
	}
	static class ATurnInBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATurnInBox_C>();
	}
};
static_assert(alignof(ATurnInBox_C) == 0x000010, "Wrong alignment on ATurnInBox_C");
static_assert(sizeof(ATurnInBox_C) == 0x000540, "Wrong size on ATurnInBox_C");
static_assert(offsetof(ATurnInBox_C, AoCNodePlot) == 0x000530, "Member 'ATurnInBox_C::AoCNodePlot' has a wrong offset!");
static_assert(offsetof(ATurnInBox_C, StaticMesh) == 0x000538, "Member 'ATurnInBox_C::StaticMesh' has a wrong offset!");

}

