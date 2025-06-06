﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleAnimInstance

#include "Basic.hpp"

#include "SimpleAnimInstance_classes.hpp"
#include "SimpleAnimInstance_parameters.hpp"


namespace SDK
{

// Function SimpleAnimInstance.SimpleAnimInstance_C.ExecuteUbergraph_SimpleAnimInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleAnimInstance_C::ExecuteUbergraph_SimpleAnimInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAnimInstance_C", "ExecuteUbergraph_SimpleAnimInstance");

	Params::SimpleAnimInstance_C_ExecuteUbergraph_SimpleAnimInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleAnimInstance.SimpleAnimInstance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void USimpleAnimInstance_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAnimInstance_C", "AnimGraph");

	Params::SimpleAnimInstance_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

