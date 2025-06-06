﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RockMonster_MetalStorm

#include "Basic.hpp"

#include "RockMonster_MetalStorm_classes.hpp"
#include "RockMonster_MetalStorm_parameters.hpp"


namespace SDK
{

// Function RockMonster_MetalStorm.RockMonster_MetalStorm_C.ExecuteUbergraph_RockMonster_MetalStorm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARockMonster_MetalStorm_C::ExecuteUbergraph_RockMonster_MetalStorm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockMonster_MetalStorm_C", "ExecuteUbergraph_RockMonster_MetalStorm");

	Params::RockMonster_MetalStorm_C_ExecuteUbergraph_RockMonster_MetalStorm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RockMonster_MetalStorm.RockMonster_MetalStorm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARockMonster_MetalStorm_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RockMonster_MetalStorm_C", "ReceiveTick");

	Params::RockMonster_MetalStorm_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

