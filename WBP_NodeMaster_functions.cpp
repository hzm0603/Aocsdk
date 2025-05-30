﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NodeMaster

#include "Basic.hpp"

#include "WBP_NodeMaster_classes.hpp"
#include "WBP_NodeMaster_parameters.hpp"


namespace SDK
{

// Function WBP_NodeMaster.WBP_NodeMaster_C.ExecuteUbergraph_WBP_NodeMaster
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NodeMaster_C::ExecuteUbergraph_WBP_NodeMaster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NodeMaster_C", "ExecuteUbergraph_WBP_NodeMaster");

	Params::WBP_NodeMaster_C_ExecuteUbergraph_WBP_NodeMaster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

