﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RVTDecal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RVTDecal.BP_RVTDecal_C
// 0x0048 (0x0390 - 0x0348)
class ABP_RVTDecal_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Decal;                                             // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HideGrassDecal;                                    // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        DecalScale;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               DecalMask;                                         // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         DecalZSortingPriority;                             // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     DecalMaterial;                                     // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RVTDecal_C">();
	}
	static class ABP_RVTDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RVTDecal_C>();
	}
};
static_assert(alignof(ABP_RVTDecal_C) == 0x000008, "Wrong alignment on ABP_RVTDecal_C");
static_assert(sizeof(ABP_RVTDecal_C) == 0x000390, "Wrong size on ABP_RVTDecal_C");
static_assert(offsetof(ABP_RVTDecal_C, Decal) == 0x000348, "Member 'ABP_RVTDecal_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, Billboard) == 0x000350, "Member 'ABP_RVTDecal_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, Arrow) == 0x000358, "Member 'ABP_RVTDecal_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, HideGrassDecal) == 0x000360, "Member 'ABP_RVTDecal_C::HideGrassDecal' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, DefaultSceneRoot) == 0x000368, "Member 'ABP_RVTDecal_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, DecalScale) == 0x000370, "Member 'ABP_RVTDecal_C::DecalScale' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, DecalMask) == 0x000378, "Member 'ABP_RVTDecal_C::DecalMask' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, DecalZSortingPriority) == 0x000380, "Member 'ABP_RVTDecal_C::DecalZSortingPriority' has a wrong offset!");
static_assert(offsetof(ABP_RVTDecal_C, DecalMaterial) == 0x000388, "Member 'ABP_RVTDecal_C::DecalMaterial' has a wrong offset!");

}

