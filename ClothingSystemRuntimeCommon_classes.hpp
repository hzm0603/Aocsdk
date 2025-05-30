﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeCommon

#include "Basic.hpp"

#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (0x0048 - 0x0048)
class UClothConfigCommon : public UClothConfigBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigCommon">();
	}
	static class UClothConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigCommon>();
	}
};
static_assert(alignof(UClothConfigCommon) == 0x000008, "Wrong alignment on UClothConfigCommon");
static_assert(sizeof(UClothConfigCommon) == 0x000048, "Wrong size on UClothConfigCommon");

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (0x0048 - 0x0048)
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothSharedConfigCommon">();
	}
	static class UClothSharedConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothSharedConfigCommon>();
	}
};
static_assert(alignof(UClothSharedConfigCommon) == 0x000008, "Wrong alignment on UClothSharedConfigCommon");
static_assert(sizeof(UClothSharedConfigCommon) == 0x000048, "Wrong size on UClothSharedConfigCommon");

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0048 - 0x0048)
class UClothingAssetCustomData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCustomData">();
	}
	static class UClothingAssetCustomData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCustomData>();
	}
};
static_assert(alignof(UClothingAssetCustomData) == 0x000008, "Wrong alignment on UClothingAssetCustomData");
static_assert(sizeof(UClothingAssetCustomData) == 0x000048, "Wrong size on UClothingAssetCustomData");

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x00A8 (0x0110 - 0x0068)
class UClothingAssetCommon final : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0068(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UClothConfigBase*>    ClothConfigs;                                      // 0x0070(0x0050)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>            LODData;                                           // 0x00C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 LodMap;                                            // 0x00D0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           UsedBoneNames;                                     // 0x00E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 UsedBoneIndices;                                   // 0x00F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ReferenceBoneIndex;                                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClothingAssetCustomData*               CustomData;                                        // 0x0108(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCommon">();
	}
	static class UClothingAssetCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCommon>();
	}
};
static_assert(alignof(UClothingAssetCommon) == 0x000008, "Wrong alignment on UClothingAssetCommon");
static_assert(sizeof(UClothingAssetCommon) == 0x000110, "Wrong size on UClothingAssetCommon");
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x000068, "Member 'UClothingAssetCommon::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x000070, "Member 'UClothingAssetCommon::ClothConfigs' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x0000C0, "Member 'UClothingAssetCommon::LODData' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x0000D0, "Member 'UClothingAssetCommon::LodMap' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x0000E0, "Member 'UClothingAssetCommon::UsedBoneNames' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x0000F0, "Member 'UClothingAssetCommon::UsedBoneIndices' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ReferenceBoneIndex) == 0x000100, "Member 'UClothingAssetCommon::ReferenceBoneIndex' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x000108, "Member 'UClothingAssetCommon::CustomData' has a wrong offset!");

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0140 (0x0188 - 0x0048)
class UClothLODDataCommon_Legacy final : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*      PhysicalMeshData;                                  // 0x0048(0x0008)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                 ClothPhysicalMeshData;                             // 0x0050(0x00D8)(NativeAccessSpecifierPublic)
	struct FClothCollisionData                    CollisionData;                                     // 0x0128(0x0040)(NativeAccessSpecifierPublic)
	uint8                                         Pad_168[0x20];                                     // 0x0168(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothLODDataCommon_Legacy">();
	}
	static class UClothLODDataCommon_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothLODDataCommon_Legacy>();
	}
};
static_assert(alignof(UClothLODDataCommon_Legacy) == 0x000008, "Wrong alignment on UClothLODDataCommon_Legacy");
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x000188, "Wrong size on UClothLODDataCommon_Legacy");
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x000048, "Member 'UClothLODDataCommon_Legacy::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x000050, "Member 'UClothLODDataCommon_Legacy::ClothPhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x000128, "Member 'UClothLODDataCommon_Legacy::CollisionData' has a wrong offset!");

}

