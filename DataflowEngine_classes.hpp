﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DataflowEngine.DataflowBlueprintLibrary
// 0x0000 (0x0048 - 0x0048)
class UDataflowBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowBlueprintLibrary">();
	}
	static class UDataflowBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowBlueprintLibrary>();
	}
};
static_assert(alignof(UDataflowBlueprintLibrary) == 0x000008, "Wrong alignment on UDataflowBlueprintLibrary");
static_assert(sizeof(UDataflowBlueprintLibrary) == 0x000048, "Wrong size on UDataflowBlueprintLibrary");

// Class DataflowEngine.DataflowEdNode
// 0x0028 (0x00E0 - 0x00B8)
class UDataflowEdNode final : public UEdGraphNode
{
public:
	uint8                                         Pad_B8[0x20];                                      // 0x00B8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bRenderInAssetEditor;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowEdNode">();
	}
	static class UDataflowEdNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowEdNode>();
	}
};
static_assert(alignof(UDataflowEdNode) == 0x000008, "Wrong alignment on UDataflowEdNode");
static_assert(sizeof(UDataflowEdNode) == 0x0000E0, "Wrong size on UDataflowEdNode");
static_assert(offsetof(UDataflowEdNode, bRenderInAssetEditor) == 0x0000D8, "Member 'UDataflowEdNode::bRenderInAssetEditor' has a wrong offset!");

// Class DataflowEngine.Dataflow
// 0x0048 (0x00C8 - 0x0080)
class UDataflow final : public UEdGraph
{
public:
	uint8                                         Pad_80[0x28];                                      // 0x0080(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bActive;                                           // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        Targets;                                           // 0x00B0(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterial*                              Material;                                          // 0x00C0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Dataflow">();
	}
	static class UDataflow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflow>();
	}
};
static_assert(alignof(UDataflow) == 0x000008, "Wrong alignment on UDataflow");
static_assert(sizeof(UDataflow) == 0x0000C8, "Wrong size on UDataflow");
static_assert(offsetof(UDataflow, bActive) == 0x0000A8, "Member 'UDataflow::bActive' has a wrong offset!");
static_assert(offsetof(UDataflow, Targets) == 0x0000B0, "Member 'UDataflow::Targets' has a wrong offset!");
static_assert(offsetof(UDataflow, Material) == 0x0000C0, "Member 'UDataflow::Material' has a wrong offset!");

}

