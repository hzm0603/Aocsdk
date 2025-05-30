﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Raven

#include "Basic.hpp"

#include "Raven_classes.hpp"
#include "Raven_parameters.hpp"


namespace SDK
{

// Function Raven.Raven_C.ExecuteUbergraph_Raven
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARaven_C::ExecuteUbergraph_Raven(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Raven_C", "ExecuteUbergraph_Raven");

	Params::Raven_C_ExecuteUbergraph_Raven Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Raven.Raven_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARaven_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Raven_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

