﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgE_0008_Stage0_1_Begin1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C
// 0x0008 (0x0060 - 0x0058)
class UProgE_0008_Stage0_1_Begin1_DirectorBP_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void End_Cam_Shake();
	void ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP(int32 EntryPoint);
	struct FMovieSceneDynamicBindingResolveResult PS_FireNecrotic_Wreckless_DynamicBinding();
	void PS_FireNecrotic_Wreckless_Event(class AEmitter* PS_FireNecrotic_Wreckless);
	void Start_Cam_Shake();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgE_0008_Stage0-1_Begin1_DirectorBP_C">();
	}
	static class UProgE_0008_Stage0_1_Begin1_DirectorBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgE_0008_Stage0_1_Begin1_DirectorBP_C>();
	}
};
static_assert(alignof(UProgE_0008_Stage0_1_Begin1_DirectorBP_C) == 0x000008, "Wrong alignment on UProgE_0008_Stage0_1_Begin1_DirectorBP_C");
static_assert(sizeof(UProgE_0008_Stage0_1_Begin1_DirectorBP_C) == 0x000060, "Wrong size on UProgE_0008_Stage0_1_Begin1_DirectorBP_C");
static_assert(offsetof(UProgE_0008_Stage0_1_Begin1_DirectorBP_C, UberGraphFrame) == 0x000058, "Member 'UProgE_0008_Stage0_1_Begin1_DirectorBP_C::UberGraphFrame' has a wrong offset!");

}

