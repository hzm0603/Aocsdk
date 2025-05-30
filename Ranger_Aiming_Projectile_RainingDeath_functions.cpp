﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ranger_Aiming_Projectile_RainingDeath

#include "Basic.hpp"

#include "Ranger_Aiming_Projectile_RainingDeath_classes.hpp"
#include "Ranger_Aiming_Projectile_RainingDeath_parameters.hpp"


namespace SDK
{

// Function Ranger_Aiming_Projectile_RainingDeath.Ranger_Aiming_Projectile_RainingDeath_C.ExecuteUbergraph_Ranger_Aiming_Projectile_RainingDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARanger_Aiming_Projectile_RainingDeath_C::ExecuteUbergraph_Ranger_Aiming_Projectile_RainingDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ranger_Aiming_Projectile_RainingDeath_C", "ExecuteUbergraph_Ranger_Aiming_Projectile_RainingDeath");

	Params::Ranger_Aiming_Projectile_RainingDeath_C_ExecuteUbergraph_Ranger_Aiming_Projectile_RainingDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ranger_Aiming_Projectile_RainingDeath.Ranger_Aiming_Projectile_RainingDeath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARanger_Aiming_Projectile_RainingDeath_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ranger_Aiming_Projectile_RainingDeath_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ranger_Aiming_Projectile_RainingDeath.Ranger_Aiming_Projectile_RainingDeath_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARanger_Aiming_Projectile_RainingDeath_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ranger_Aiming_Projectile_RainingDeath_C", "ReceiveTick");

	Params::Ranger_Aiming_Projectile_RainingDeath_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

