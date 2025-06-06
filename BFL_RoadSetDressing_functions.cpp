﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_RoadSetDressing

#include "Basic.hpp"

#include "BFL_RoadSetDressing_classes.hpp"
#include "BFL_RoadSetDressing_parameters.hpp"


namespace SDK
{

// Function BFL_RoadSetDressing.BFL_RoadSetDressing_C.Retrieve Set Dressing Data
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           In_Actor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_RoadSetDressingData>*  Set_Dressing_Data                                      (Parm, OutParm)
// bool*                                   Is_Intersection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_RoadSetDressing_C::Retrieve_Set_Dressing_Data(class AActor* In_Actor, class UObject* __WorldContext, TArray<struct FS_RoadSetDressingData>* Set_Dressing_Data, bool* Is_Intersection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_RoadSetDressing_C", "Retrieve Set Dressing Data");

	Params::BFL_RoadSetDressing_C_Retrieve_Set_Dressing_Data Parms{};

	Parms.In_Actor = In_Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Set_Dressing_Data != nullptr)
		*Set_Dressing_Data = std::move(Parms.Set_Dressing_Data);

	if (Is_Intersection != nullptr)
		*Is_Intersection = Parms.Is_Intersection;
}

}

