﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chooser

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "Chooser_structs.hpp"


namespace SDK::Params
{

// Function Chooser.ChooserFunctionLibrary.AddChooserObjectInput
// 0x0058 (0x0058 - 0x0000)
struct ChooserFunctionLibrary_AddChooserObjectInput final
{
public:
	struct FChooserEvaluationContext              Context;                                           // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                Object;                                            // 0x0050(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_AddChooserObjectInput) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_AddChooserObjectInput");
static_assert(sizeof(ChooserFunctionLibrary_AddChooserObjectInput) == 0x000058, "Wrong size on ChooserFunctionLibrary_AddChooserObjectInput");
static_assert(offsetof(ChooserFunctionLibrary_AddChooserObjectInput, Context) == 0x000000, "Member 'ChooserFunctionLibrary_AddChooserObjectInput::Context' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_AddChooserObjectInput, Object) == 0x000050, "Member 'ChooserFunctionLibrary_AddChooserObjectInput::Object' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.AddChooserStructInput
// 0x0058 (0x0058 - 0x0000)
struct ChooserFunctionLibrary_AddChooserStructInput final
{
public:
	struct FChooserEvaluationContext              Context;                                           // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0050(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ChooserFunctionLibrary_AddChooserStructInput) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_AddChooserStructInput");
static_assert(sizeof(ChooserFunctionLibrary_AddChooserStructInput) == 0x000058, "Wrong size on ChooserFunctionLibrary_AddChooserStructInput");
static_assert(offsetof(ChooserFunctionLibrary_AddChooserStructInput, Context) == 0x000000, "Member 'ChooserFunctionLibrary_AddChooserStructInput::Context' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_AddChooserStructInput, Value) == 0x000050, "Member 'ChooserFunctionLibrary_AddChooserStructInput::Value' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.EvaluateChooser
// 0x0020 (0x0020 - 0x0000)
struct ChooserFunctionLibrary_EvaluateChooser final
{
public:
	const class UObject*                          ContextObject;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UChooserTable*                    ChooserTable;                                      // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                    ObjectClass;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateChooser) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateChooser");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateChooser) == 0x000020, "Wrong size on ChooserFunctionLibrary_EvaluateChooser");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ContextObject) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateChooser::ContextObject' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ChooserTable) == 0x000008, "Member 'ChooserFunctionLibrary_EvaluateChooser::ChooserTable' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ObjectClass) == 0x000010, "Member 'ChooserFunctionLibrary_EvaluateChooser::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooser, ReturnValue) == 0x000018, "Member 'ChooserFunctionLibrary_EvaluateChooser::ReturnValue' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
// 0x0028 (0x0028 - 0x0000)
struct ChooserFunctionLibrary_EvaluateChooserMulti final
{
public:
	const class UObject*                          ContextObject;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UChooserTable*                    ChooserTable;                                      // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                    ObjectClass;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateChooserMulti) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateChooserMulti");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateChooserMulti) == 0x000028, "Wrong size on ChooserFunctionLibrary_EvaluateChooserMulti");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ContextObject) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ContextObject' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ChooserTable) == 0x000008, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ChooserTable' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ObjectClass) == 0x000010, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateChooserMulti, ReturnValue) == 0x000018, "Member 'ChooserFunctionLibrary_EvaluateChooserMulti::ReturnValue' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
// 0x0078 (0x0078 - 0x0000)
struct ChooserFunctionLibrary_EvaluateObjectChooserBase final
{
public:
	struct FChooserEvaluationContext              Context;                                           // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       ObjectChooser;                                     // 0x0050(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                    ObjectClass;                                       // 0x0060(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bResultIsClass;                                    // 0x0068(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ReturnValue;                                       // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateObjectChooserBase) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateObjectChooserBase");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateObjectChooserBase) == 0x000078, "Wrong size on ChooserFunctionLibrary_EvaluateObjectChooserBase");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBase, Context) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBase::Context' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBase, ObjectChooser) == 0x000050, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBase::ObjectChooser' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBase, ObjectClass) == 0x000060, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBase::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBase, bResultIsClass) == 0x000068, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBase::bResultIsClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBase, ReturnValue) == 0x000070, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBase::ReturnValue' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
// 0x0080 (0x0080 - 0x0000)
struct ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti final
{
public:
	struct FChooserEvaluationContext              Context;                                           // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       ObjectChooser;                                     // 0x0050(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                    ObjectClass;                                       // 0x0060(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bResultIsClass;                                    // 0x0068(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        ReturnValue;                                       // 0x0070(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti");
static_assert(sizeof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti) == 0x000080, "Wrong size on ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, Context) == 0x000000, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti::Context' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, ObjectChooser) == 0x000050, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti::ObjectChooser' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, ObjectClass) == 0x000060, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti::ObjectClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, bResultIsClass) == 0x000068, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti::bResultIsClass' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti, ReturnValue) == 0x000070, "Member 'ChooserFunctionLibrary_EvaluateObjectChooserBaseMulti::ReturnValue' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.GetChooserStructOutput
// 0x0058 (0x0058 - 0x0000)
struct ChooserFunctionLibrary_GetChooserStructOutput final
{
public:
	struct FChooserEvaluationContext              Context;                                           // 0x0000(0x0050)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Index_0;                                           // 0x0050(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0054(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_GetChooserStructOutput) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_GetChooserStructOutput");
static_assert(sizeof(ChooserFunctionLibrary_GetChooserStructOutput) == 0x000058, "Wrong size on ChooserFunctionLibrary_GetChooserStructOutput");
static_assert(offsetof(ChooserFunctionLibrary_GetChooserStructOutput, Context) == 0x000000, "Member 'ChooserFunctionLibrary_GetChooserStructOutput::Context' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_GetChooserStructOutput, Index_0) == 0x000050, "Member 'ChooserFunctionLibrary_GetChooserStructOutput::Index_0' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_GetChooserStructOutput, Value) == 0x000054, "Member 'ChooserFunctionLibrary_GetChooserStructOutput::Value' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.MakeChooserEvaluationContext
// 0x0050 (0x0050 - 0x0000)
struct ChooserFunctionLibrary_MakeChooserEvaluationContext final
{
public:
	struct FChooserEvaluationContext              ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_MakeChooserEvaluationContext) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_MakeChooserEvaluationContext");
static_assert(sizeof(ChooserFunctionLibrary_MakeChooserEvaluationContext) == 0x000050, "Wrong size on ChooserFunctionLibrary_MakeChooserEvaluationContext");
static_assert(offsetof(ChooserFunctionLibrary_MakeChooserEvaluationContext, ReturnValue) == 0x000000, "Member 'ChooserFunctionLibrary_MakeChooserEvaluationContext::ReturnValue' has a wrong offset!");

// Function Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
// 0x0018 (0x0018 - 0x0000)
struct ChooserFunctionLibrary_MakeEvaluateChooser final
{
public:
	class UChooserTable*                          Chooser;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ChooserFunctionLibrary_MakeEvaluateChooser) == 0x000008, "Wrong alignment on ChooserFunctionLibrary_MakeEvaluateChooser");
static_assert(sizeof(ChooserFunctionLibrary_MakeEvaluateChooser) == 0x000018, "Wrong size on ChooserFunctionLibrary_MakeEvaluateChooser");
static_assert(offsetof(ChooserFunctionLibrary_MakeEvaluateChooser, Chooser) == 0x000000, "Member 'ChooserFunctionLibrary_MakeEvaluateChooser::Chooser' has a wrong offset!");
static_assert(offsetof(ChooserFunctionLibrary_MakeEvaluateChooser, ReturnValue) == 0x000008, "Member 'ChooserFunctionLibrary_MakeEvaluateChooser::ReturnValue' has a wrong offset!");

}

