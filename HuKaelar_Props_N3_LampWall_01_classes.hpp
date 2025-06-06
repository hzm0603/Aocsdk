﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HuKaelar_Props_N3_LampWall_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HuKaelar_Props_N3_LampWall_01.HuKaelar_Props_N3_LampWall_01_C
// 0x0030 (0x0378 - 0x0348)
class AHuKaelar_Props_N3_LampWall_01_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIntrepidAkComponent*                   IntrepidAK;                                        // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Thin_Torch_01;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HuKaelar_Props_N3_LampWall_01;                     // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HuKaelar_Props_N3_LampWall_01(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HuKaelar_Props_N3_LampWall_01_C">();
	}
	static class AHuKaelar_Props_N3_LampWall_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHuKaelar_Props_N3_LampWall_01_C>();
	}
};
static_assert(alignof(AHuKaelar_Props_N3_LampWall_01_C) == 0x000008, "Wrong alignment on AHuKaelar_Props_N3_LampWall_01_C");
static_assert(sizeof(AHuKaelar_Props_N3_LampWall_01_C) == 0x000378, "Wrong size on AHuKaelar_Props_N3_LampWall_01_C");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, UberGraphFrame) == 0x000348, "Member 'AHuKaelar_Props_N3_LampWall_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, IntrepidAK) == 0x000350, "Member 'AHuKaelar_Props_N3_LampWall_01_C::IntrepidAK' has a wrong offset!");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, FX_Thin_Torch_01) == 0x000358, "Member 'AHuKaelar_Props_N3_LampWall_01_C::FX_Thin_Torch_01' has a wrong offset!");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, HuKaelar_Props_N3_LampWall_01) == 0x000360, "Member 'AHuKaelar_Props_N3_LampWall_01_C::HuKaelar_Props_N3_LampWall_01' has a wrong offset!");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, PointLight) == 0x000368, "Member 'AHuKaelar_Props_N3_LampWall_01_C::PointLight' has a wrong offset!");
static_assert(offsetof(AHuKaelar_Props_N3_LampWall_01_C, DefaultSceneRoot) == 0x000370, "Member 'AHuKaelar_Props_N3_LampWall_01_C::DefaultSceneRoot' has a wrong offset!");

}

