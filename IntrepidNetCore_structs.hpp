﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IntrepidNetCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum IntrepidNetCore.EIntrepidNetCommunicatorMessageType
// NumValues: 0x0005
enum class EIntrepidNetCommunicatorMessageType : uint8
{
	Connection                               = 0,
	Disconnection                            = 1,
	Error                                    = 2,
	PacketRecvd                              = 3,
	EIntrepidNetCommunicatorMessageType_MAX  = 4,
};

// Enum IntrepidNetCore.ESubdivisionAxis
// NumValues: 0x0004
enum class ESubdivisionAxis : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	ESubdivisionAxis_MAX                     = 3,
};

// ScriptStruct IntrepidNetCore.PartitionTreeSubdivision
// 0x0008 (0x0008 - 0x0000)
struct FPartitionTreeSubdivision final
{
public:
	ESubdivisionAxis                              Axis;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartitionTreeSubdivision) == 0x000004, "Wrong alignment on FPartitionTreeSubdivision");
static_assert(sizeof(FPartitionTreeSubdivision) == 0x000008, "Wrong size on FPartitionTreeSubdivision");
static_assert(offsetof(FPartitionTreeSubdivision, Axis) == 0x000000, "Member 'FPartitionTreeSubdivision::Axis' has a wrong offset!");
static_assert(offsetof(FPartitionTreeSubdivision, Value) == 0x000004, "Member 'FPartitionTreeSubdivision::Value' has a wrong offset!");

// ScriptStruct IntrepidNetCore.IntrepidNetCoreConfig
// 0x0070 (0x0070 - 0x0000)
struct FIntrepidNetCoreConfig final
{
public:
	class FString                                 WorldName;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WorldOrigin;                                       // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WorldSize;                                         // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GridNodesX;                                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GridNodesY;                                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        PlayerStartLocations;                              // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bIsVariableDensity;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPartitionTreeSubdivision>      PartitionTree;                                     // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FIntrepidNetCoreConfig) == 0x000008, "Wrong alignment on FIntrepidNetCoreConfig");
static_assert(sizeof(FIntrepidNetCoreConfig) == 0x000070, "Wrong size on FIntrepidNetCoreConfig");
static_assert(offsetof(FIntrepidNetCoreConfig, WorldName) == 0x000000, "Member 'FIntrepidNetCoreConfig::WorldName' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, WorldOrigin) == 0x000010, "Member 'FIntrepidNetCoreConfig::WorldOrigin' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, WorldSize) == 0x000028, "Member 'FIntrepidNetCoreConfig::WorldSize' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, GridNodesX) == 0x000040, "Member 'FIntrepidNetCoreConfig::GridNodesX' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, GridNodesY) == 0x000044, "Member 'FIntrepidNetCoreConfig::GridNodesY' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, PlayerStartLocations) == 0x000048, "Member 'FIntrepidNetCoreConfig::PlayerStartLocations' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, bIsVariableDensity) == 0x000058, "Member 'FIntrepidNetCoreConfig::bIsVariableDensity' has a wrong offset!");
static_assert(offsetof(FIntrepidNetCoreConfig, PartitionTree) == 0x000060, "Member 'FIntrepidNetCoreConfig::PartitionTree' has a wrong offset!");

// ScriptStruct IntrepidNetCore.IntrepidNetDebugServerGridCell
// 0x0048 (0x0048 - 0x0000)
struct FIntrepidNetDebugServerGridCell final
{
public:
	int32                                         ServerID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBox                                   AuthorityBoundsBox;                                // 0x0008(0x0038)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         CellID;                                            // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FIntrepidNetDebugServerGridCell) == 0x000008, "Wrong alignment on FIntrepidNetDebugServerGridCell");
static_assert(sizeof(FIntrepidNetDebugServerGridCell) == 0x000048, "Wrong size on FIntrepidNetDebugServerGridCell");
static_assert(offsetof(FIntrepidNetDebugServerGridCell, ServerID) == 0x000000, "Member 'FIntrepidNetDebugServerGridCell::ServerID' has a wrong offset!");
static_assert(offsetof(FIntrepidNetDebugServerGridCell, AuthorityBoundsBox) == 0x000008, "Member 'FIntrepidNetDebugServerGridCell::AuthorityBoundsBox' has a wrong offset!");
static_assert(offsetof(FIntrepidNetDebugServerGridCell, CellID) == 0x000040, "Member 'FIntrepidNetDebugServerGridCell::CellID' has a wrong offset!");

// ScriptStruct IntrepidNetCore.IntrepidNetDebugSPMServerData
// 0x0058 (0x0058 - 0x0000)
struct FIntrepidNetDebugSPMServerData final
{
public:
	struct FIntrepidNetDebugServerGridCell        DebugCell;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 Neighbors;                                         // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FIntrepidNetDebugSPMServerData) == 0x000008, "Wrong alignment on FIntrepidNetDebugSPMServerData");
static_assert(sizeof(FIntrepidNetDebugSPMServerData) == 0x000058, "Wrong size on FIntrepidNetDebugSPMServerData");
static_assert(offsetof(FIntrepidNetDebugSPMServerData, DebugCell) == 0x000000, "Member 'FIntrepidNetDebugSPMServerData::DebugCell' has a wrong offset!");
static_assert(offsetof(FIntrepidNetDebugSPMServerData, Neighbors) == 0x000048, "Member 'FIntrepidNetDebugSPMServerData::Neighbors' has a wrong offset!");

// ScriptStruct IntrepidNetCore.IntrepidNetDebugServerData
// 0x0060 (0x0060 - 0x0000)
struct FIntrepidNetDebugServerData final
{
public:
	struct FIntrepidNetDebugSPMServerData         SPMData;                                           // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         MarkForDelete;                                     // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FIntrepidNetDebugServerData) == 0x000008, "Wrong alignment on FIntrepidNetDebugServerData");
static_assert(sizeof(FIntrepidNetDebugServerData) == 0x000060, "Wrong size on FIntrepidNetDebugServerData");
static_assert(offsetof(FIntrepidNetDebugServerData, SPMData) == 0x000000, "Member 'FIntrepidNetDebugServerData::SPMData' has a wrong offset!");
static_assert(offsetof(FIntrepidNetDebugServerData, MarkForDelete) == 0x000058, "Member 'FIntrepidNetDebugServerData::MarkForDelete' has a wrong offset!");

// ScriptStruct IntrepidNetCore.IntrepidNetCoreServiceConfig
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FIntrepidNetCoreServiceConfig final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FIntrepidNetCoreServiceConfig) == 0x000004, "Wrong alignment on FIntrepidNetCoreServiceConfig");
static_assert(sizeof(FIntrepidNetCoreServiceConfig) == 0x000008, "Wrong size on FIntrepidNetCoreServiceConfig");

}

