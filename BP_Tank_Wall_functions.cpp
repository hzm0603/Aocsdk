﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tank_Wall

#include "Basic.hpp"

#include "BP_Tank_Wall_classes.hpp"
#include "BP_Tank_Wall_parameters.hpp"


namespace SDK
{

// Function BP_Tank_Wall.BP_Tank_Wall_C.ExecuteUbergraph_BP_Tank_Wall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tank_Wall_C::ExecuteUbergraph_BP_Tank_Wall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Wall_C", "ExecuteUbergraph_BP_Tank_Wall");

	Params::BP_Tank_Wall_C_ExecuteUbergraph_BP_Tank_Wall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tank_Wall.BP_Tank_Wall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tank_Wall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Wall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

