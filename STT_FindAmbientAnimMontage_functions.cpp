﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_FindAmbientAnimMontage

#include "Basic.hpp"

#include "STT_FindAmbientAnimMontage_classes.hpp"
#include "STT_FindAmbientAnimMontage_parameters.hpp"


namespace SDK
{

// Function STT_FindAmbientAnimMontage.STT_FindAmbientAnimMontage_C.ExecuteUbergraph_STT_FindAmbientAnimMontage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_FindAmbientAnimMontage_C::ExecuteUbergraph_STT_FindAmbientAnimMontage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_FindAmbientAnimMontage_C", "ExecuteUbergraph_STT_FindAmbientAnimMontage");

	Params::STT_FindAmbientAnimMontage_C_ExecuteUbergraph_STT_FindAmbientAnimMontage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_FindAmbientAnimMontage.STT_FindAmbientAnimMontage_C.HasValidAmbientAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USTT_FindAmbientAnimMontage_C::HasValidAmbientAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_FindAmbientAnimMontage_C", "HasValidAmbientAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function STT_FindAmbientAnimMontage.STT_FindAmbientAnimMontage_C.ReceiveLatentEnterState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FStateTreeTransitionResult&Transition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void USTT_FindAmbientAnimMontage_C::ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_FindAmbientAnimMontage_C", "ReceiveLatentEnterState");

	Params::STT_FindAmbientAnimMontage_C_ReceiveLatentEnterState Parms{};

	Parms.Transition = std::move(Transition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function STT_FindAmbientAnimMontage.STT_FindAmbientAnimMontage_C.ReceiveLatentTick
// (Event, Public, BlueprintEvent)
// Parameters:
// const float                             DeltaTime                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USTT_FindAmbientAnimMontage_C::ReceiveLatentTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STT_FindAmbientAnimMontage_C", "ReceiveLatentTick");

	Params::STT_FindAmbientAnimMontage_C_ReceiveLatentTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

