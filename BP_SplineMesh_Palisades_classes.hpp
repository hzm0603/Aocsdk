﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMesh_Palisades

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_SplineMesh_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineMesh_Palisades.BP_SplineMesh_Palisades_C
// 0x0040 (0x05A0 - 0x0560)
class ABP_SplineMesh_Palisades_C final : public ABP_SplineMesh_C
{
public:
	class UStaticMesh*                            Interstitial_Mesh;                                 // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Interstitial_Mesh_Scale;                           // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_564[0x4];                                      // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Interstitial_Mesh_Rotation;                        // 0x0568(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<double>                                Interstitial_Mesh_Heights;                         // 0x0580(0x0010)(Edit, BlueprintVisible)
	class UHierarchicalInstancedStaticMeshComponent* Interstitial_Mesh_HISM_Component;               // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Meshes_To_Spline(class USplineComponent* Spline_Component, TArray<struct FSSplineMeshEntry>& In_Entries, const struct FSSplineMeshEntry& In_Override_Entry_Start, const struct FSSplineMeshEntry& In_Override_Entry_End, bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineMesh_Palisades_C">();
	}
	static class ABP_SplineMesh_Palisades_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineMesh_Palisades_C>();
	}
};
static_assert(alignof(ABP_SplineMesh_Palisades_C) == 0x000010, "Wrong alignment on ABP_SplineMesh_Palisades_C");
static_assert(sizeof(ABP_SplineMesh_Palisades_C) == 0x0005A0, "Wrong size on ABP_SplineMesh_Palisades_C");
static_assert(offsetof(ABP_SplineMesh_Palisades_C, Interstitial_Mesh) == 0x000558, "Member 'ABP_SplineMesh_Palisades_C::Interstitial_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_Palisades_C, Interstitial_Mesh_Scale) == 0x000560, "Member 'ABP_SplineMesh_Palisades_C::Interstitial_Mesh_Scale' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_Palisades_C, Interstitial_Mesh_Rotation) == 0x000568, "Member 'ABP_SplineMesh_Palisades_C::Interstitial_Mesh_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_Palisades_C, Interstitial_Mesh_Heights) == 0x000580, "Member 'ABP_SplineMesh_Palisades_C::Interstitial_Mesh_Heights' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_Palisades_C, Interstitial_Mesh_HISM_Component) == 0x000590, "Member 'ABP_SplineMesh_Palisades_C::Interstitial_Mesh_HISM_Component' has a wrong offset!");

}

