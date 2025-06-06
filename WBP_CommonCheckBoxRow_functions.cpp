﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonCheckBoxRow

#include "Basic.hpp"

#include "WBP_CommonCheckBoxRow_classes.hpp"
#include "WBP_CommonCheckBoxRow_parameters.hpp"


namespace SDK
{

// Function WBP_CommonCheckBoxRow.WBP_CommonCheckBoxRow_C.GetBorder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorder*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonBorder* UWBP_CommonCheckBoxRow_C::GetBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonCheckBoxRow_C", "GetBorder");

	Params::WBP_CommonCheckBoxRow_C_GetBorder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

