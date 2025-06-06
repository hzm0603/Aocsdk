﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamlineDeepDVCBlueprint

#include "Basic.hpp"

#include "StreamlineDeepDVCBlueprint_classes.hpp"
#include "StreamlineDeepDVCBlueprint_parameters.hpp"


namespace SDK
{

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStreamlineLibraryDeepDVC::GetDeepDVCIntensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "GetDeepDVCIntensity");

	Params::StreamlineLibraryDeepDVC_GetDeepDVCIntensity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDeepDVCMode                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineDeepDVCMode UStreamlineLibraryDeepDVC::GetDeepDVCMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "GetDeepDVCMode");

	Params::StreamlineLibraryDeepDVC_GetDeepDVCMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UStreamlineLibraryDeepDVC::GetDeepDVCSaturationBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "GetDeepDVCSaturationBoost");

	Params::StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDeepDVCMode                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineDeepDVCMode UStreamlineLibraryDeepDVC::GetDefaultDeepDVCMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "GetDefaultDeepDVCMode");

	Params::StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<EUStreamlineDeepDVCMode>         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<EUStreamlineDeepDVCMode> UStreamlineLibraryDeepDVC::GetSupportedDeepDVCModes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "GetSupportedDeepDVCModes");

	Params::StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineDeepDVCMode                 DeepDVCMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamlineLibraryDeepDVC::IsDeepDVCModeSupported(EUStreamlineDeepDVCMode DeepDVCMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "IsDeepDVCModeSupported");

	Params::StreamlineLibraryDeepDVC_IsDeepDVCModeSupported Parms{};

	Parms.DeepDVCMode = DeepDVCMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStreamlineLibraryDeepDVC::IsDeepDVCSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "IsDeepDVCSupported");

	Params::StreamlineLibraryDeepDVC_IsDeepDVCSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EUStreamlineFeatureSupport              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EUStreamlineFeatureSupport UStreamlineLibraryDeepDVC::QueryDeepDVCSupport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "QueryDeepDVCSupport");

	Params::StreamlineLibraryDeepDVC_QueryDeepDVCSupport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Intensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDeepDVC::SetDeepDVCIntensity(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "SetDeepDVCIntensity");

	Params::StreamlineLibraryDeepDVC_SetDeepDVCIntensity Parms{};

	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUStreamlineDeepDVCMode                 DeepDVCMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDeepDVC::SetDeepDVCMode(EUStreamlineDeepDVCMode DeepDVCMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "SetDeepDVCMode");

	Params::StreamlineLibraryDeepDVC_SetDeepDVCMode Parms{};

	Parms.DeepDVCMode = DeepDVCMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Intensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamlineLibraryDeepDVC::SetDeepDVCSaturationBoost(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StreamlineLibraryDeepDVC", "SetDeepDVCSaturationBoost");

	Params::StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost Parms{};

	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

