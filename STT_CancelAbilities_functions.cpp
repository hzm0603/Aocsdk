﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_CancelAbilities

#include "Basic.hpp"

#include "STT_CancelAbilities_classes.hpp"
#include "STT_CancelAbilities_parameters.hpp"


namespace SDK
{

// Function STT_CancelAbilities.STT_CancelAbilities_C.ExecuteUbergraph_STT_CancelAbilities
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_CancelAbilities_C::ExecuteUbergraph_STT_CancelAbilities(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_CancelAbilities_C", "ExecuteUbergraph_STT_CancelAbilities");

	Params::STT_CancelAbilities_C_ExecuteUbergraph_STT_CancelAbilities Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_CancelAbilities.STT_CancelAbilities_C.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&Transition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void USTT_CancelAbilities_C::ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_CancelAbilities_C", "ReceiveLatentEnterState");

	Params::STT_CancelAbilities_C_ReceiveLatentEnterState Parms{};

	Parms.Transition = std::move(Transition);

	UObject::ProcessEvent(Func, &Parms);
}

}

