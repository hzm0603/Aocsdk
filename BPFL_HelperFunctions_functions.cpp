﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HelperFunctions

#include "Basic.hpp"

#include "BPFL_HelperFunctions_classes.hpp"
#include "BPFL_HelperFunctions_parameters.hpp"


namespace SDK
{

// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.ColorTempToRGB
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Temp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    Return_Color                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::ColorTempToRGB(double Temp, class UObject* __WorldContext, struct FLinearColor* Return_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "ColorTempToRGB");

	Params::BPFL_HelperFunctions_C_ColorTempToRGB Parms{};

	Parms.Temp = Temp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_Color != nullptr)
		*Return_Color = std::move(Parms.Return_Color);
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.Get Biome From Location
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EBiomeType*                             Biome                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::Get_Biome_From_Location(const struct FVector2D& Location, class UObject* __WorldContext, EBiomeType* Biome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "Get Biome From Location");

	Params::BPFL_HelperFunctions_C_Get_Biome_From_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Biome != nullptr)
		*Biome = Parms.Biome;
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.Get Zone From Location
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EZone*                                  Zone                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::Get_Zone_From_Location(const struct FVector2D& Location, class UObject* __WorldContext, EZone* Zone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "Get Zone From Location");

	Params::BPFL_HelperFunctions_C_Get_Zone_From_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Zone != nullptr)
		*Zone = Parms.Zone;
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.GetIntrepidSkyInstance
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AIntrepidSkyBase**                IntrepidSky                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::GetIntrepidSkyInstance(class UObject* __WorldContext, class AIntrepidSkyBase** IntrepidSky)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "GetIntrepidSkyInstance");

	Params::BPFL_HelperFunctions_C_GetIntrepidSkyInstance Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IntrepidSky != nullptr)
		*IntrepidSky = Parms.IntrepidSky;
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.GetVerraGlobalSkyInstance
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AIntrepidSkyBase**                VerraGlobalSky                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::GetVerraGlobalSkyInstance(class UObject* __WorldContext, class AIntrepidSkyBase** VerraGlobalSky)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "GetVerraGlobalSkyInstance");

	Params::BPFL_HelperFunctions_C_GetVerraGlobalSkyInstance Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (VerraGlobalSky != nullptr)
		*VerraGlobalSky = Parms.VerraGlobalSky;
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.IsLocalPlayer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   Local_Player                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::IsLocalPlayer(class AActor* Actor, class UObject* __WorldContext, bool* Local_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HelperFunctions_C", "IsLocalPlayer");

	Params::BPFL_HelperFunctions_C_IsLocalPlayer Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Local_Player != nullptr)
		*Local_Player = Parms.Local_Player;
}


// Function BPFL_HelperFunctions.BPFL_HelperFunctions_C.Get Biomes From Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EBiomeType*                             Red_Category_Name                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8*                                  Red_Category_Amount                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomeType*                             Green_Category_Name                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8*                                  Green_Category_Amount                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomeType*                             Blue_Category_Name                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8*                                  Blue_Category_Amount                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomeType*                             Alpha_Category_Name                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8*                                  Alpha_Category_Amount                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HelperFunctions_C::Get_Biomes_From_Location(const struct FVector2D& Location, class UObject* __WorldContext, EBiomeType* Red_Category_Name, uint8* Red_Category_Amount, EBiomeType* Green_Category_Name, uint8* Green_Category_Amount, EBiomeType* Blue_Category_Name, uint8* Blue_Category_Amount, EBiomeType* Alpha_Category_Name, uint8* Alpha_Category_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPFL_HelperFunctions_C", "Get Biomes From Location");

	Params::BPFL_HelperFunctions_C_Get_Biomes_From_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Red_Category_Name != nullptr)
		*Red_Category_Name = Parms.Red_Category_Name;

	if (Red_Category_Amount != nullptr)
		*Red_Category_Amount = Parms.Red_Category_Amount;

	if (Green_Category_Name != nullptr)
		*Green_Category_Name = Parms.Green_Category_Name;

	if (Green_Category_Amount != nullptr)
		*Green_Category_Amount = Parms.Green_Category_Amount;

	if (Blue_Category_Name != nullptr)
		*Blue_Category_Name = Parms.Blue_Category_Name;

	if (Blue_Category_Amount != nullptr)
		*Blue_Category_Amount = Parms.Blue_Category_Amount;

	if (Alpha_Category_Name != nullptr)
		*Alpha_Category_Name = Parms.Alpha_Category_Name;

	if (Alpha_Category_Amount != nullptr)
		*Alpha_Category_Amount = Parms.Alpha_Category_Amount;
}

}

