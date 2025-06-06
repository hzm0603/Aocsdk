﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spirit_Wolf_Dire

#include "Basic.hpp"

#include "Spirit_Wolf_Dire_classes.hpp"
#include "Spirit_Wolf_Dire_parameters.hpp"


namespace SDK
{

// Function Spirit_Wolf_Dire.Spirit_Wolf_Dire_C.ExecuteUbergraph_Spirit_Wolf_Dire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpirit_Wolf_Dire_C::ExecuteUbergraph_Spirit_Wolf_Dire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spirit_Wolf_Dire_C", "ExecuteUbergraph_Spirit_Wolf_Dire");

	Params::Spirit_Wolf_Dire_C_ExecuteUbergraph_Spirit_Wolf_Dire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Spirit_Wolf_Dire.Spirit_Wolf_Dire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpirit_Wolf_Dire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spirit_Wolf_Dire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spirit_Wolf_Dire.Spirit_Wolf_Dire_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpirit_Wolf_Dire_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spirit_Wolf_Dire_C", "ReceiveTick");

	Params::Spirit_Wolf_Dire_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

