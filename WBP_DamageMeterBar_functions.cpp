﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DamageMeterBar

#include "Basic.hpp"

#include "WBP_DamageMeterBar_classes.hpp"
#include "WBP_DamageMeterBar_parameters.hpp"


namespace SDK
{

// Function WBP_DamageMeterBar.WBP_DamageMeterBar_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_DamageMeterBar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DamageMeterBar_C", "OnMouseButtonDown");

	Params::WBP_DamageMeterBar_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_DamageMeterBar.WBP_DamageMeterBar_C.ExecuteUbergraph_WBP_DamageMeterBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DamageMeterBar_C::ExecuteUbergraph_WBP_DamageMeterBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DamageMeterBar_C", "ExecuteUbergraph_WBP_DamageMeterBar");

	Params::WBP_DamageMeterBar_C_ExecuteUbergraph_WBP_DamageMeterBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DamageMeterBar.WBP_DamageMeterBar_C.BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DamageMeterBar_C::BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DamageMeterBar_C", "BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DamageMeterBar.WBP_DamageMeterBar_C.BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DamageMeterBar_C::BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DamageMeterBar_C", "BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DamageMeterBar.WBP_DamageMeterBar_C.BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DamageMeterBar_C::BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DamageMeterBar_C", "BndEvt__DesignDamageMeter_Bar_BarButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

