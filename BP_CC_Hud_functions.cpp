﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CC_Hud

#include "Basic.hpp"

#include "BP_CC_Hud_classes.hpp"
#include "BP_CC_Hud_parameters.hpp"


namespace SDK
{

// Function BP_CC_Hud.BP_CC_Hud_C.ExecuteUbergraph_BP_CC_Hud
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CC_Hud_C::ExecuteUbergraph_BP_CC_Hud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Hud_C", "ExecuteUbergraph_BP_CC_Hud");

	Params::BP_CC_Hud_C_ExecuteUbergraph_BP_CC_Hud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CC_Hud.BP_CC_Hud_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CC_Hud_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CC_Hud_C", "ReceiveTick");

	Params::BP_CC_Hud_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

