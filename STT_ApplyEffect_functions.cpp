﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_ApplyEffect

#include "Basic.hpp"

#include "STT_ApplyEffect_classes.hpp"
#include "STT_ApplyEffect_parameters.hpp"


namespace SDK
{

// Function STT_ApplyEffect.STT_ApplyEffect_C.ExecuteUbergraph_STT_ApplyEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_ApplyEffect_C::ExecuteUbergraph_STT_ApplyEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_ApplyEffect_C", "ExecuteUbergraph_STT_ApplyEffect");

	Params::STT_ApplyEffect_C_ExecuteUbergraph_STT_ApplyEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_ApplyEffect.STT_ApplyEffect_C.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&Transition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void USTT_ApplyEffect_C::ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_ApplyEffect_C", "ReceiveLatentEnterState");

	Params::STT_ApplyEffect_C_ReceiveLatentEnterState Parms{};

	Parms.Transition = std::move(Transition);

	UObject::ProcessEvent(Func, &Parms);
}

}

