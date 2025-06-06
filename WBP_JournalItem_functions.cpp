﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JournalItem

#include "Basic.hpp"

#include "WBP_JournalItem_classes.hpp"
#include "WBP_JournalItem_parameters.hpp"


namespace SDK
{

// Function WBP_JournalItem.WBP_JournalItem_C.GetBreadcrumbWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_JournalItem_C::GetBreadcrumbWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JournalItem_C", "GetBreadcrumbWidget");

	Params::WBP_JournalItem_C_GetBreadcrumbWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

