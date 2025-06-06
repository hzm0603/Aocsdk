﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABLT_ArcaneVolley_Projectile_Grow

#include "Basic.hpp"

#include "ABLT_ArcaneVolley_Projectile_Grow_classes.hpp"
#include "ABLT_ArcaneVolley_Projectile_Grow_parameters.hpp"


namespace SDK
{

// Function ABLT_ArcaneVolley_Projectile_Grow.ABLT_ArcaneVolley_Projectile_Grow_C.ExecuteUbergraph_ABLT_ArcaneVolley_Projectile_Grow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AABLT_ArcaneVolley_Projectile_Grow_C::ExecuteUbergraph_ABLT_ArcaneVolley_Projectile_Grow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABLT_ArcaneVolley_Projectile_Grow_C", "ExecuteUbergraph_ABLT_ArcaneVolley_Projectile_Grow");

	Params::ABLT_ArcaneVolley_Projectile_Grow_C_ExecuteUbergraph_ABLT_ArcaneVolley_Projectile_Grow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABLT_ArcaneVolley_Projectile_Grow.ABLT_ArcaneVolley_Projectile_Grow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AABLT_ArcaneVolley_Projectile_Grow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABLT_ArcaneVolley_Projectile_Grow_C", "ReceiveTick");

	Params::ABLT_ArcaneVolley_Projectile_Grow_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

