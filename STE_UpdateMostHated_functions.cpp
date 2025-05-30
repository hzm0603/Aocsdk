﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STE_UpdateMostHated

#include "Basic.hpp"

#include "STE_UpdateMostHated_classes.hpp"
#include "STE_UpdateMostHated_parameters.hpp"


namespace SDK
{

// Function STE_UpdateMostHated.STE_UpdateMostHated_C.ExecuteUbergraph_STE_UpdateMostHated
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTE_UpdateMostHated_C::ExecuteUbergraph_STE_UpdateMostHated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STE_UpdateMostHated_C", "ExecuteUbergraph_STE_UpdateMostHated");

	Params::STE_UpdateMostHated_C_ExecuteUbergraph_STE_UpdateMostHated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STE_UpdateMostHated.STE_UpdateMostHated_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// const float                             DeltaTime                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTE_UpdateMostHated_C::ReceiveTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STE_UpdateMostHated_C", "ReceiveTick");

	Params::STE_UpdateMostHated_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STE_UpdateMostHated.STE_UpdateMostHated_C.ReceiveTreeStart
// (Event, Public, BlueprintEvent)

void USTE_UpdateMostHated_C::ReceiveTreeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STE_UpdateMostHated_C", "ReceiveTreeStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

