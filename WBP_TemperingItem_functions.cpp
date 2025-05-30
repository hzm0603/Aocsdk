﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TemperingItem

#include "Basic.hpp"

#include "WBP_TemperingItem_classes.hpp"
#include "WBP_TemperingItem_parameters.hpp"


namespace SDK
{

// Function WBP_TemperingItem.WBP_TemperingItem_C.GetBorder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorder*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonBorder* UWBP_TemperingItem_C::GetBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TemperingItem_C", "GetBorder");

	Params::WBP_TemperingItem_C_GetBorder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

