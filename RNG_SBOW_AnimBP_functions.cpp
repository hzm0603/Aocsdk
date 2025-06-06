﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RNG_SBOW_AnimBP

#include "Basic.hpp"

#include "RNG_SBOW_AnimBP_classes.hpp"
#include "RNG_SBOW_AnimBP_parameters.hpp"


namespace SDK
{

// Function RNG_SBOW_AnimBP.RNG_SBOW_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void URNG_SBOW_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RNG_SBOW_AnimBP_C", "AnimGraph");

	Params::RNG_SBOW_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function RNG_SBOW_AnimBP.RNG_SBOW_AnimBP_C.ExecuteUbergraph_RNG_SBOW_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URNG_SBOW_AnimBP_C::ExecuteUbergraph_RNG_SBOW_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RNG_SBOW_AnimBP_C", "ExecuteUbergraph_RNG_SBOW_AnimBP");

	Params::RNG_SBOW_AnimBP_C_ExecuteUbergraph_RNG_SBOW_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

