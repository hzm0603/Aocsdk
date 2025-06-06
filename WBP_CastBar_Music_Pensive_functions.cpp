﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CastBar_Music_Pensive

#include "Basic.hpp"

#include "WBP_CastBar_Music_Pensive_classes.hpp"
#include "WBP_CastBar_Music_Pensive_parameters.hpp"


namespace SDK
{

// Function WBP_CastBar_Music_Pensive.WBP_CastBar_Music_Pensive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CastBar_Music_Pensive_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CastBar_Music_Pensive_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CastBar_Music_Pensive.WBP_CastBar_Music_Pensive_C.ExecuteUbergraph_WBP_CastBar_Music_Pensive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CastBar_Music_Pensive_C::ExecuteUbergraph_WBP_CastBar_Music_Pensive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CastBar_Music_Pensive_C", "ExecuteUbergraph_WBP_CastBar_Music_Pensive");

	Params::WBP_CastBar_Music_Pensive_C_ExecuteUbergraph_WBP_CastBar_Music_Pensive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CastBar_Music_Pensive.WBP_CastBar_Music_Pensive_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CastBar_Music_Pensive_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CastBar_Music_Pensive_C", "Tick");

	Params::WBP_CastBar_Music_Pensive_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

