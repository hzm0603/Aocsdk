﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_Wait

#include "Basic.hpp"

#include "STT_Wait_classes.hpp"
#include "STT_Wait_parameters.hpp"


namespace SDK
{

// Function STT_Wait.STT_Wait_C.ExecuteUbergraph_STT_Wait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_Wait_C::ExecuteUbergraph_STT_Wait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_Wait_C", "ExecuteUbergraph_STT_Wait");

	Params::STT_Wait_C_ExecuteUbergraph_STT_Wait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_Wait.STT_Wait_C.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&Transition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void USTT_Wait_C::ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_Wait_C", "ReceiveLatentEnterState");

	Params::STT_Wait_C_ReceiveLatentEnterState Parms{};

	Parms.Transition = std::move(Transition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_Wait.STT_Wait_C.ReceiveLatentTick
// (Event, Public, BlueprintEvent)
// Parameters:
// const float                             DeltaTime                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_Wait_C::ReceiveLatentTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_Wait_C", "ReceiveLatentTick");

	Params::STT_Wait_C_ReceiveLatentTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

