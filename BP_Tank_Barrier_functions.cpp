﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tank_Barrier

#include "Basic.hpp"

#include "BP_Tank_Barrier_classes.hpp"
#include "BP_Tank_Barrier_parameters.hpp"


namespace SDK
{

// Function BP_Tank_Barrier.BP_Tank_Barrier_C.ExecuteUbergraph_BP_Tank_Barrier
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tank_Barrier_C::ExecuteUbergraph_BP_Tank_Barrier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Barrier_C", "ExecuteUbergraph_BP_Tank_Barrier");

	Params::BP_Tank_Barrier_C_ExecuteUbergraph_BP_Tank_Barrier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tank_Barrier.BP_Tank_Barrier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tank_Barrier_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Barrier_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Tank_Barrier.BP_Tank_Barrier_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tank_Barrier_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Barrier_C", "ReceiveEndPlay");

	Params::BP_Tank_Barrier_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Tank_Barrier.BP_Tank_Barrier_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Tank_Barrier_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Tank_Barrier_C", "ReceiveTick");

	Params::BP_Tank_Barrier_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

