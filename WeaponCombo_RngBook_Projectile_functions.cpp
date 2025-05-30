﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponCombo_RngBook_Projectile

#include "Basic.hpp"

#include "WeaponCombo_RngBook_Projectile_classes.hpp"
#include "WeaponCombo_RngBook_Projectile_parameters.hpp"


namespace SDK
{

// Function WeaponCombo_RngBook_Projectile.WeaponCombo_RngBook_Projectile_C.DeactivateParticleSystems
// (Event, Public, BlueprintEvent)

void AWeaponCombo_RngBook_Projectile_C::DeactivateParticleSystems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCombo_RngBook_Projectile_C", "DeactivateParticleSystems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCombo_RngBook_Projectile.WeaponCombo_RngBook_Projectile_C.ExecuteUbergraph_WeaponCombo_RngBook_Projectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponCombo_RngBook_Projectile_C::ExecuteUbergraph_WeaponCombo_RngBook_Projectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCombo_RngBook_Projectile_C", "ExecuteUbergraph_WeaponCombo_RngBook_Projectile");

	Params::WeaponCombo_RngBook_Projectile_C_ExecuteUbergraph_WeaponCombo_RngBook_Projectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCombo_RngBook_Projectile.WeaponCombo_RngBook_Projectile_C.ProjectileHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWeaponCombo_RngBook_Projectile_C::ProjectileHit(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCombo_RngBook_Projectile_C", "ProjectileHit");

	Params::WeaponCombo_RngBook_Projectile_C_ProjectileHit Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCombo_RngBook_Projectile.WeaponCombo_RngBook_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponCombo_RngBook_Projectile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCombo_RngBook_Projectile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

