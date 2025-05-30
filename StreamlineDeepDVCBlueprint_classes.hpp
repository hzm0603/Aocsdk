﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamlineDeepDVCBlueprint

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "StreamlineBlueprint_structs.hpp"
#include "StreamlineDeepDVCBlueprint_structs.hpp"


namespace SDK
{

// Class StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC
// 0x0000 (0x0048 - 0x0048)
class UStreamlineLibraryDeepDVC final : public UBlueprintFunctionLibrary
{
public:
	static float GetDeepDVCIntensity();
	static EUStreamlineDeepDVCMode GetDeepDVCMode();
	static float GetDeepDVCSaturationBoost();
	static EUStreamlineDeepDVCMode GetDefaultDeepDVCMode();
	static TArray<EUStreamlineDeepDVCMode> GetSupportedDeepDVCModes();
	static bool IsDeepDVCModeSupported(EUStreamlineDeepDVCMode DeepDVCMode);
	static bool IsDeepDVCSupported();
	static EUStreamlineFeatureSupport QueryDeepDVCSupport();
	static void SetDeepDVCIntensity(float Intensity);
	static void SetDeepDVCMode(EUStreamlineDeepDVCMode DeepDVCMode);
	static void SetDeepDVCSaturationBoost(float Intensity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamlineLibraryDeepDVC">();
	}
	static class UStreamlineLibraryDeepDVC* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamlineLibraryDeepDVC>();
	}
};
static_assert(alignof(UStreamlineLibraryDeepDVC) == 0x000008, "Wrong alignment on UStreamlineLibraryDeepDVC");
static_assert(sizeof(UStreamlineLibraryDeepDVC) == 0x000048, "Wrong size on UStreamlineLibraryDeepDVC");

}

