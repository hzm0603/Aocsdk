﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommodityTooltip

#include "Basic.hpp"

#include "WBP_CommodityTooltip_classes.hpp"
#include "WBP_CommodityTooltip_parameters.hpp"


namespace SDK
{

// Function WBP_CommodityTooltip.WBP_CommodityTooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommodityTooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommodityTooltip_C", "PreConstruct");

	Params::WBP_CommodityTooltip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommodityTooltip.WBP_CommodityTooltip_C.GetBorder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorder*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonBorder* UWBP_CommodityTooltip_C::GetBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommodityTooltip_C", "GetBorder");

	Params::WBP_CommodityTooltip_C_GetBorder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CommodityTooltip.WBP_CommodityTooltip_C.ExecuteUbergraph_WBP_CommodityTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommodityTooltip_C::ExecuteUbergraph_WBP_CommodityTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommodityTooltip_C", "ExecuteUbergraph_WBP_CommodityTooltip");

	Params::WBP_CommodityTooltip_C_ExecuteUbergraph_WBP_CommodityTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

