﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VendorStandardItem

#include "Basic.hpp"

#include "WBP_VendorStandardItem_classes.hpp"
#include "WBP_VendorStandardItem_parameters.hpp"


namespace SDK
{

// Function WBP_VendorStandardItem.WBP_VendorStandardItem_C.GetBorder
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorder*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonBorder* UWBP_VendorStandardItem_C::GetBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VendorStandardItem_C", "GetBorder");

	Params::WBP_VendorStandardItem_C_GetBorder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

