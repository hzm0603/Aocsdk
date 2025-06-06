﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipRepairEquipped

#include "Basic.hpp"

#include "WBP_TooltipRepairEquipped_classes.hpp"
#include "WBP_TooltipRepairEquipped_parameters.hpp"


namespace SDK
{

// Function WBP_TooltipRepairEquipped.WBP_TooltipRepairEquipped_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TooltipRepairEquipped_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TooltipRepairEquipped_C", "PreConstruct");

	Params::WBP_TooltipRepairEquipped_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TooltipRepairEquipped.WBP_TooltipRepairEquipped_C.ExecuteUbergraph_WBP_TooltipRepairEquipped
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TooltipRepairEquipped_C::ExecuteUbergraph_WBP_TooltipRepairEquipped(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TooltipRepairEquipped_C", "ExecuteUbergraph_WBP_TooltipRepairEquipped");

	Params::WBP_TooltipRepairEquipped_C_ExecuteUbergraph_WBP_TooltipRepairEquipped Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

