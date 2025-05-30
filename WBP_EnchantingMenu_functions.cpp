﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EnchantingMenu

#include "Basic.hpp"

#include "WBP_EnchantingMenu_classes.hpp"
#include "WBP_EnchantingMenu_parameters.hpp"


namespace SDK
{

// Function WBP_EnchantingMenu.WBP_EnchantingMenu_C.GetOddBorderStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonBorderStyle> UWBP_EnchantingMenu_C::GetOddBorderStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnchantingMenu_C", "GetOddBorderStyle");

	Params::WBP_EnchantingMenu_C_GetOddBorderStyle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EnchantingMenu.WBP_EnchantingMenu_C.GetEvenBorderStyle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UCommonBorderStyle> UWBP_EnchantingMenu_C::GetEvenBorderStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnchantingMenu_C", "GetEvenBorderStyle");

	Params::WBP_EnchantingMenu_C_GetEvenBorderStyle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EnchantingMenu.WBP_EnchantingMenu_C.GetBorderContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPanelWidget* UWBP_EnchantingMenu_C::GetBorderContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnchantingMenu_C", "GetBorderContainer");

	Params::WBP_EnchantingMenu_C_GetBorderContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

