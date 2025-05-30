﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgE_0008_Stage0_1_Begin1

#include "Basic.hpp"

#include "ProgE_0008_Stage0_1_Begin1_classes.hpp"
#include "ProgE_0008_Stage0_1_Begin1_parameters.hpp"


namespace SDK
{

// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.End Cam Shake
// (BlueprintCallable, BlueprintEvent)

void UProgE_0008_Stage0_1_Begin1_DirectorBP_C::End_Cam_Shake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgE_0008_Stage0-1_Begin1_DirectorBP_C", "End Cam Shake");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.ExecuteUbergraph_ProgE_0008_Stage0-1_Begin1_DirectorBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgE_0008_Stage0_1_Begin1_DirectorBP_C::ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgE_0008_Stage0-1_Begin1_DirectorBP_C", "ExecuteUbergraph_ProgE_0008_Stage0-1_Begin1_DirectorBP");

	Params::ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.PS_FireNecrotic_Wreckless_DynamicBinding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMovieSceneDynamicBindingResolveResultReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FMovieSceneDynamicBindingResolveResult UProgE_0008_Stage0_1_Begin1_DirectorBP_C::PS_FireNecrotic_Wreckless_DynamicBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgE_0008_Stage0-1_Begin1_DirectorBP_C", "PS_FireNecrotic_Wreckless_DynamicBinding");

	Params::ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.PS_FireNecrotic_Wreckless_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                         PS_FireNecrotic_Wreckless                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgE_0008_Stage0_1_Begin1_DirectorBP_C::PS_FireNecrotic_Wreckless_Event(class AEmitter* PS_FireNecrotic_Wreckless)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgE_0008_Stage0-1_Begin1_DirectorBP_C", "PS_FireNecrotic_Wreckless_Event");

	Params::ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event Parms{};

	Parms.PS_FireNecrotic_Wreckless = PS_FireNecrotic_Wreckless;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.Start Cam Shake
// (BlueprintCallable, BlueprintEvent)

void UProgE_0008_Stage0_1_Begin1_DirectorBP_C::Start_Cam_Shake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgE_0008_Stage0-1_Begin1_DirectorBP_C", "Start Cam Shake");

	UObject::ProcessEvent(Func, nullptr);
}

}

