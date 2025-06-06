﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuildingDetails

#include "Basic.hpp"

#include "WBP_BuildingDetails_classes.hpp"
#include "WBP_BuildingDetails_parameters.hpp"


namespace SDK
{

// Function WBP_BuildingDetails.WBP_BuildingDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildingDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BuildingDetails_C", "PreConstruct");

	Params::WBP_BuildingDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BuildingDetails.WBP_BuildingDetails_C.GetOddBorderStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonBorderStyle> UWBP_BuildingDetails_C::GetOddBorderStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BuildingDetails_C", "GetOddBorderStyle");

	Params::WBP_BuildingDetails_C_GetOddBorderStyle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_BuildingDetails.WBP_BuildingDetails_C.GetEvenBorderStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonBorderStyle> UWBP_BuildingDetails_C::GetEvenBorderStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BuildingDetails_C", "GetEvenBorderStyle");

	Params::WBP_BuildingDetails_C_GetEvenBorderStyle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_BuildingDetails.WBP_BuildingDetails_C.GetBorderContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPanelWidget* UWBP_BuildingDetails_C::GetBorderContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BuildingDetails_C", "GetBorderContainer");

	Params::WBP_BuildingDetails_C_GetBorderContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_BuildingDetails.WBP_BuildingDetails_C.ExecuteUbergraph_WBP_BuildingDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BuildingDetails_C::ExecuteUbergraph_WBP_BuildingDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BuildingDetails_C", "ExecuteUbergraph_WBP_BuildingDetails");

	Params::WBP_BuildingDetails_C_ExecuteUbergraph_WBP_BuildingDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

