﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BotTeleportLocationWidget

#include "Basic.hpp"

#include "WBP_BotTeleportLocationWidget_classes.hpp"
#include "WBP_BotTeleportLocationWidget_parameters.hpp"


namespace SDK
{

// Function WBP_BotTeleportLocationWidget.WBP_BotTeleportLocationWidget_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FBotTeleportLocation&      InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BotTeleportLocationWidget_C::SetData(const struct FBotTeleportLocation& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BotTeleportLocationWidget_C", "SetData");

	Params::WBP_BotTeleportLocationWidget_C_SetData Parms{};

	Parms.InData = std::move(InData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BotTeleportLocationWidget.WBP_BotTeleportLocationWidget_C.ExecuteUbergraph_WBP_BotTeleportLocationWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BotTeleportLocationWidget_C::ExecuteUbergraph_WBP_BotTeleportLocationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BotTeleportLocationWidget_C", "ExecuteUbergraph_WBP_BotTeleportLocationWidget");

	Params::WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BotTeleportLocationWidget.WBP_BotTeleportLocationWidget_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_BotTeleportLocationWidget_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BotTeleportLocationWidget_C", "BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

