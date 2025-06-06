﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayDebugger

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Enum GameplayDebugger.EGameplayDebuggerOverrideMode
// NumValues: 0x0004
enum class EGameplayDebuggerOverrideMode : uint8
{
	Enable                                   = 0,
	Disable                                  = 1,
	UseDefault                               = 2,
	EGameplayDebuggerOverrideMode_MAX        = 3,
};

// Enum GameplayDebugger.EGameplayDebuggerShape
// NumValues: 0x000D
enum class EGameplayDebuggerShape : uint8
{
	Invalid                                  = 0,
	Point                                    = 1,
	Segment                                  = 2,
	Box                                      = 3,
	Cone                                     = 4,
	Cylinder                                 = 5,
	Circle                                   = 6,
	Rectangle                                = 7,
	Capsule                                  = 8,
	Polygon                                  = 9,
	Polyline                                 = 10,
	Arrow                                    = 11,
	EGameplayDebuggerShape_MAX               = 12,
};

// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackHeader
// 0x0010 (0x0010 - 0x0000)
struct FGameplayDebuggerDataPackHeader final
{
public:
	int16                                         DataVersion;                                       // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         SyncCounter;                                       // 0x0002(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DataSize;                                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DataOffset;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsCompressed : 1;                                 // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayDebuggerDataPackHeader) == 0x000004, "Wrong alignment on FGameplayDebuggerDataPackHeader");
static_assert(sizeof(FGameplayDebuggerDataPackHeader) == 0x000010, "Wrong size on FGameplayDebuggerDataPackHeader");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataVersion) == 0x000000, "Member 'FGameplayDebuggerDataPackHeader::DataVersion' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, SyncCounter) == 0x000002, "Member 'FGameplayDebuggerDataPackHeader::SyncCounter' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataSize) == 0x000004, "Member 'FGameplayDebuggerDataPackHeader::DataSize' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackHeader, DataOffset) == 0x000008, "Member 'FGameplayDebuggerDataPackHeader::DataOffset' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
// 0x0030 (0x0030 - 0x0000)
struct FGameplayDebuggerDataPackRPCParams final
{
public:
	class FName                                   CategoryName;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DataPackIdx;                                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayDebuggerDataPackHeader        Header;                                            // 0x000C(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 Data;                                              // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayDebuggerDataPackRPCParams) == 0x000008, "Wrong alignment on FGameplayDebuggerDataPackRPCParams");
static_assert(sizeof(FGameplayDebuggerDataPackRPCParams) == 0x000030, "Wrong size on FGameplayDebuggerDataPackRPCParams");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, CategoryName) == 0x000000, "Member 'FGameplayDebuggerDataPackRPCParams::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, DataPackIdx) == 0x000008, "Member 'FGameplayDebuggerDataPackRPCParams::DataPackIdx' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Header) == 0x00000C, "Member 'FGameplayDebuggerDataPackRPCParams::Header' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDataPackRPCParams, Data) == 0x000020, "Member 'FGameplayDebuggerDataPackRPCParams::Data' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerShape
// 0x0028 (0x0028 - 0x0000)
struct FGameplayDebuggerShape final
{
public:
	TArray<struct FVector>                        ShapeData;                                         // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 Color;                                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayDebuggerShape                        Type;                                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayDebuggerShape) == 0x000008, "Wrong alignment on FGameplayDebuggerShape");
static_assert(sizeof(FGameplayDebuggerShape) == 0x000028, "Wrong size on FGameplayDebuggerShape");
static_assert(offsetof(FGameplayDebuggerShape, ShapeData) == 0x000000, "Member 'FGameplayDebuggerShape::ShapeData' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Description) == 0x000010, "Member 'FGameplayDebuggerShape::Description' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Color) == 0x000020, "Member 'FGameplayDebuggerShape::Color' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerShape, Type) == 0x000024, "Member 'FGameplayDebuggerShape::Type' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
// 0x0040 (0x0040 - 0x0000)
struct FGameplayDebuggerCategoryData final
{
public:
	class FName                                   CategoryName;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         TextLines;                                         // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerShape>         Shapes;                                            // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;                                        // 0x0028(0x0010)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	bool                                          bIsEnabled;                                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayDebuggerCategoryData) == 0x000008, "Wrong alignment on FGameplayDebuggerCategoryData");
static_assert(sizeof(FGameplayDebuggerCategoryData) == 0x000040, "Wrong size on FGameplayDebuggerCategoryData");
static_assert(offsetof(FGameplayDebuggerCategoryData, CategoryName) == 0x000000, "Member 'FGameplayDebuggerCategoryData::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, TextLines) == 0x000008, "Member 'FGameplayDebuggerCategoryData::TextLines' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, Shapes) == 0x000018, "Member 'FGameplayDebuggerCategoryData::Shapes' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, DataPacks) == 0x000028, "Member 'FGameplayDebuggerCategoryData::DataPacks' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryData, bIsEnabled) == 0x000038, "Member 'FGameplayDebuggerCategoryData::bIsEnabled' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
// 0x0018 (0x0018 - 0x0000)
struct FGameplayDebuggerNetPack final
{
public:
	class AGameplayDebuggerCategoryReplicator*    Owner;                                             // 0x0000(0x0008)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerCategoryData>  SavedData;                                         // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayDebuggerNetPack) == 0x000008, "Wrong alignment on FGameplayDebuggerNetPack");
static_assert(sizeof(FGameplayDebuggerNetPack) == 0x000018, "Wrong size on FGameplayDebuggerNetPack");
static_assert(offsetof(FGameplayDebuggerNetPack, Owner) == 0x000000, "Member 'FGameplayDebuggerNetPack::Owner' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerNetPack, SavedData) == 0x000008, "Member 'FGameplayDebuggerNetPack::SavedData' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
// 0x0014 (0x0014 - 0x0000)
struct FGameplayDebuggerDebugActor final
{
public:
	TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ActorName;                                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         SyncCounter;                                       // 0x0010(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayDebuggerDebugActor) == 0x000004, "Wrong alignment on FGameplayDebuggerDebugActor");
static_assert(sizeof(FGameplayDebuggerDebugActor) == 0x000014, "Wrong size on FGameplayDebuggerDebugActor");
static_assert(offsetof(FGameplayDebuggerDebugActor, Actor) == 0x000000, "Member 'FGameplayDebuggerDebugActor::Actor' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDebugActor, ActorName) == 0x000008, "Member 'FGameplayDebuggerDebugActor::ActorName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerDebugActor, SyncCounter) == 0x000010, "Member 'FGameplayDebuggerDebugActor::SyncCounter' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
// 0x0010 (0x0010 - 0x0000)
struct FGameplayDebuggerVisLogSync final
{
public:
	class FString                                 DeviceIDs;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayDebuggerVisLogSync) == 0x000008, "Wrong alignment on FGameplayDebuggerVisLogSync");
static_assert(sizeof(FGameplayDebuggerVisLogSync) == 0x000010, "Wrong size on FGameplayDebuggerVisLogSync");
static_assert(offsetof(FGameplayDebuggerVisLogSync, DeviceIDs) == 0x000000, "Member 'FGameplayDebuggerVisLogSync::DeviceIDs' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
// 0x0030 (0x0030 - 0x0000)
struct FGameplayDebuggerInputConfig final
{
public:
	class FString                                 ConfigName;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   Key;                                               // 0x0010(0x0018)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bModShift : 1;                                     // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bModCtrl : 1;                                      // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bModAlt : 1;                                       // 0x0028(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bModCmd : 1;                                       // 0x0028(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayDebuggerInputConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerInputConfig");
static_assert(sizeof(FGameplayDebuggerInputConfig) == 0x000030, "Wrong size on FGameplayDebuggerInputConfig");
static_assert(offsetof(FGameplayDebuggerInputConfig, ConfigName) == 0x000000, "Member 'FGameplayDebuggerInputConfig::ConfigName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerInputConfig, Key) == 0x000010, "Member 'FGameplayDebuggerInputConfig::Key' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
// 0x0030 (0x0030 - 0x0000)
struct FGameplayDebuggerCategoryConfig final
{
public:
	class FString                                 CategoryName;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SlotIdx;                                           // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayDebuggerOverrideMode                 ActiveInGame;                                      // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayDebuggerOverrideMode                 ActiveInSimulate;                                  // 0x0015(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayDebuggerOverrideMode                 Hidden;                                            // 0x0016(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bOverrideSlotIdx : 1;                              // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayDebuggerInputConfig>   InputHandlers;                                     // 0x0020(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayDebuggerCategoryConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerCategoryConfig");
static_assert(sizeof(FGameplayDebuggerCategoryConfig) == 0x000030, "Wrong size on FGameplayDebuggerCategoryConfig");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, CategoryName) == 0x000000, "Member 'FGameplayDebuggerCategoryConfig::CategoryName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, SlotIdx) == 0x000010, "Member 'FGameplayDebuggerCategoryConfig::SlotIdx' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInGame) == 0x000014, "Member 'FGameplayDebuggerCategoryConfig::ActiveInGame' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, ActiveInSimulate) == 0x000015, "Member 'FGameplayDebuggerCategoryConfig::ActiveInSimulate' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, Hidden) == 0x000016, "Member 'FGameplayDebuggerCategoryConfig::Hidden' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerCategoryConfig, InputHandlers) == 0x000020, "Member 'FGameplayDebuggerCategoryConfig::InputHandlers' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
// 0x0028 (0x0028 - 0x0000)
struct FGameplayDebuggerExtensionConfig final
{
public:
	class FString                                 ExtensionName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayDebuggerOverrideMode                 UseExtension;                                      // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayDebuggerInputConfig>   InputHandlers;                                     // 0x0018(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayDebuggerExtensionConfig) == 0x000008, "Wrong alignment on FGameplayDebuggerExtensionConfig");
static_assert(sizeof(FGameplayDebuggerExtensionConfig) == 0x000028, "Wrong size on FGameplayDebuggerExtensionConfig");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, ExtensionName) == 0x000000, "Member 'FGameplayDebuggerExtensionConfig::ExtensionName' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, UseExtension) == 0x000010, "Member 'FGameplayDebuggerExtensionConfig::UseExtension' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerExtensionConfig, InputHandlers) == 0x000018, "Member 'FGameplayDebuggerExtensionConfig::InputHandlers' has a wrong offset!");

// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
// 0x0018 (0x0018 - 0x0000)
struct FGameplayDebuggerPlayerData final
{
public:
	class UGameplayDebuggerLocalController*       Controller;                                        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputComponent*                        InputComponent;                                    // 0x0008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayDebuggerCategoryReplicator*    Replicator;                                        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayDebuggerPlayerData) == 0x000008, "Wrong alignment on FGameplayDebuggerPlayerData");
static_assert(sizeof(FGameplayDebuggerPlayerData) == 0x000018, "Wrong size on FGameplayDebuggerPlayerData");
static_assert(offsetof(FGameplayDebuggerPlayerData, Controller) == 0x000000, "Member 'FGameplayDebuggerPlayerData::Controller' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerPlayerData, InputComponent) == 0x000008, "Member 'FGameplayDebuggerPlayerData::InputComponent' has a wrong offset!");
static_assert(offsetof(FGameplayDebuggerPlayerData, Replicator) == 0x000010, "Member 'FGameplayDebuggerPlayerData::Replicator' has a wrong offset!");

}

