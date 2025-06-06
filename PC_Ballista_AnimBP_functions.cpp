﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_Ballista_AnimBP

#include "Basic.hpp"

#include "PC_Ballista_AnimBP_classes.hpp"
#include "PC_Ballista_AnimBP_parameters.hpp"


namespace SDK
{

// Function PC_Ballista_AnimBP.PC_Ballista_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UPC_Ballista_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_Ballista_AnimBP_C", "AnimGraph");

	Params::PC_Ballista_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function PC_Ballista_AnimBP.PC_Ballista_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPC_Ballista_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_Ballista_AnimBP_C", "BlueprintUpdateAnimation");

	Params::PC_Ballista_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PC_Ballista_AnimBP.PC_Ballista_AnimBP_C.ExecuteUbergraph_PC_Ballista_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPC_Ballista_AnimBP_C::ExecuteUbergraph_PC_Ballista_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PC_Ballista_AnimBP_C", "ExecuteUbergraph_PC_Ballista_AnimBP");

	Params::PC_Ballista_AnimBP_C_ExecuteUbergraph_PC_Ballista_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

