﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_ElderDragon_Fire_AirBreathStrategy

#include "Basic.hpp"

#include "STC_ElderDragon_Fire_AirBreathStrategy_classes.hpp"
#include "STC_ElderDragon_Fire_AirBreathStrategy_parameters.hpp"


namespace SDK
{

// Function STC_ElderDragon_Fire_AirBreathStrategy.STC_ElderDragon_Fire_AirBreathStrategy_C.ReceiveTestCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USTC_ElderDragon_Fire_AirBreathStrategy_C::ReceiveTestCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("STC_ElderDragon_Fire_AirBreathStrategy_C", "ReceiveTestCondition");

	Params::STC_ElderDragon_Fire_AirBreathStrategy_C_ReceiveTestCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

