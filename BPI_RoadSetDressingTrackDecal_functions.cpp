﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RoadSetDressingTrackDecal

#include "Basic.hpp"

#include "BPI_RoadSetDressingTrackDecal_classes.hpp"
#include "BPI_RoadSetDressingTrackDecal_parameters.hpp"


namespace SDK
{

// Function BPI_RoadSetDressingTrackDecal.BPI_RoadSetDressingTrackDecal_C.Get Decal Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UMaterialInterface>>*Decals                                                 (Parm, OutParm)

void IBPI_RoadSetDressingTrackDecal_C::Get_Decal_Data(TArray<TSoftObjectPtr<class UMaterialInterface>>* Decals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_RoadSetDressingTrackDecal_C", "Get Decal Data");

	Params::BPI_RoadSetDressingTrackDecal_C_Get_Decal_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Decals != nullptr)
		*Decals = std::move(Parms.Decals);
}

}

