﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_SetBBInt

#include "Basic.hpp"

#include "STT_SetBBInt_classes.hpp"
#include "STT_SetBBInt_parameters.hpp"


namespace SDK
{

// Function STT_SetBBInt.STT_SetBBInt_C.ExecuteUbergraph_STT_SetBBInt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_SetBBInt_C::ExecuteUbergraph_STT_SetBBInt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_SetBBInt_C", "ExecuteUbergraph_STT_SetBBInt");

	Params::STT_SetBBInt_C_ExecuteUbergraph_STT_SetBBInt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_SetBBInt.STT_SetBBInt_C.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&Transition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void USTT_SetBBInt_C::ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_SetBBInt_C", "ReceiveLatentEnterState");

	Params::STT_SetBBInt_C_ReceiveLatentEnterState Parms{};

	Parms.Transition = std::move(Transition);

	UObject::ProcessEvent(Func, &Parms);
}

}

