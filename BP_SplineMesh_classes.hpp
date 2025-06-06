﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineMesh

#include "Basic.hpp"

#include "SSplineMeshEntry_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ERoadBrushEditMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineMesh.BP_SplineMesh_C
// 0x0218 (0x0560 - 0x0348)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_SplineMesh_C : public AActor
{
public:
	class UObject*                                NodeLayoutToolManagerInterface;                    // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSSplineMeshEntry>              Entries;                                           // 0x0360(0x0010)(Edit, BlueprintVisible)
	bool                                          Randomize_Order;                                   // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Random_Stream_Seed;                                // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSSplineMeshEntry                      Override_Entry_Start;                              // 0x0380(0x00A0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FSSplineMeshEntry                      Override_Entry_End;                                // 0x0420(0x00A0)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	ERoadBrushEditMode                            EditingMode;                                       // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           Generated_Static_Mesh_Components;                  // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USplineMeshComponent*>           Generated_Spline_Mesh_Components;                  // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          Use_Surface_Normal;                                // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9[0x7];                                      // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Spline_Actor;                                      // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                         Rotation_From_Up;                                  // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offset_Distance;                                   // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Conform_Distance;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInstancedStaticMeshComponent*>  ISM_Array;                                         // 0x0508(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USplineComponent*                       Target_Spline;                                     // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      Debug_Text_Material;                               // 0x0520(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Split_At;                                          // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C[0x4];                                      // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SplineMesh_C*                       Other_Spline_Mesh;                                 // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Meshes_To_Spline(class USplineComponent* Spline_Component, TArray<struct FSSplineMeshEntry>& In_Entries, const struct FSSplineMeshEntry& In_Override_Entry_Start, const struct FSSplineMeshEntry& In_Override_Entry_End, bool* Success);
	void Bake();
	void Build_Spline_Mesh_Actor();
	void Clear_Previous_Meshes();
	void disable();
	void Enable();
	void Join();
	void Show_Indices();
	void Snap_Spline_to_Ground(class USplineComponent* Spline_Component);
	void Split();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineMesh_C">();
	}
	static class ABP_SplineMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineMesh_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_SplineMesh_C) == 0x000010, "Wrong alignment on ABP_SplineMesh_C");
static_assert(sizeof(ABP_SplineMesh_C) == 0x000560, "Wrong size on ABP_SplineMesh_C");
static_assert(offsetof(ABP_SplineMesh_C, NodeLayoutToolManagerInterface) == 0x000348, "Member 'ABP_SplineMesh_C::NodeLayoutToolManagerInterface' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Spline) == 0x000350, "Member 'ABP_SplineMesh_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, DefaultSceneRoot) == 0x000358, "Member 'ABP_SplineMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Entries) == 0x000360, "Member 'ABP_SplineMesh_C::Entries' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Randomize_Order) == 0x000370, "Member 'ABP_SplineMesh_C::Randomize_Order' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Random_Stream_Seed) == 0x000374, "Member 'ABP_SplineMesh_C::Random_Stream_Seed' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Override_Entry_Start) == 0x000380, "Member 'ABP_SplineMesh_C::Override_Entry_Start' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Override_Entry_End) == 0x000420, "Member 'ABP_SplineMesh_C::Override_Entry_End' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, EditingMode) == 0x0004C0, "Member 'ABP_SplineMesh_C::EditingMode' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Generated_Static_Mesh_Components) == 0x0004C8, "Member 'ABP_SplineMesh_C::Generated_Static_Mesh_Components' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Generated_Spline_Mesh_Components) == 0x0004D8, "Member 'ABP_SplineMesh_C::Generated_Spline_Mesh_Components' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Use_Surface_Normal) == 0x0004E8, "Member 'ABP_SplineMesh_C::Use_Surface_Normal' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Spline_Actor) == 0x0004F0, "Member 'ABP_SplineMesh_C::Spline_Actor' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Rotation_From_Up) == 0x0004F8, "Member 'ABP_SplineMesh_C::Rotation_From_Up' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Offset_Distance) == 0x0004FC, "Member 'ABP_SplineMesh_C::Offset_Distance' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Conform_Distance) == 0x000500, "Member 'ABP_SplineMesh_C::Conform_Distance' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, ISM_Array) == 0x000508, "Member 'ABP_SplineMesh_C::ISM_Array' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Target_Spline) == 0x000518, "Member 'ABP_SplineMesh_C::Target_Spline' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Debug_Text_Material) == 0x000520, "Member 'ABP_SplineMesh_C::Debug_Text_Material' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Split_At) == 0x000548, "Member 'ABP_SplineMesh_C::Split_At' has a wrong offset!");
static_assert(offsetof(ABP_SplineMesh_C, Other_Spline_Mesh) == 0x000550, "Member 'ABP_SplineMesh_C::Other_Spline_Mesh' has a wrong offset!");

}

