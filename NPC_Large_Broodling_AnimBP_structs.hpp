﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Large_Broodling_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct NPC_Large_Broodling_AnimBP.NPC_Large_Broodling_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x01D7 (0x01D8 - 0x0001)
struct NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_592;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_593;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_594;                               // 0x0018(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_595;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_596;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_597;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_598;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_599;                                // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_600;                                // 0x004C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_601;                                // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_602;                                 // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_603;                              // 0x0060(0x002C)(BlueprintVisible, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_604;                               // 0x0090(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_605;                                // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_606;                                 // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_607;                               // 0x00AC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_608;                               // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_609;                                // 0x00B4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_610;                                // 0x00B5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_611;                                // 0x00B6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7[0x1];                                       // 0x00B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_612;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_613;                                // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_614;                                // 0x00C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_615;                                 // 0x00D0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_616;                               // 0x00D8(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<float>                                 __ArrayProperty_617;                               // 0x00E8(0x0010)(BlueprintVisible, EditFixedSize)
	class UBlendProfile*                          __BlendProfile_618;                                // 0x00F8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_619;                                  // 0x0100(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_620;                                // 0x0108(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_621;                                // 0x0109(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_622;                                // 0x010A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B[0x5];                                      // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_623;                               // 0x0110(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_624;                              // 0x0120(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0140(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x01C0(0x0018)()
};
static_assert(alignof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0001D8, "Wrong size on NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_592) == 0x000004, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_592' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_593) == 0x00000C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_593' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_594) == 0x000018, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_594' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_595) == 0x000028, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_595' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_596) == 0x000030, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_596' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_597) == 0x000038, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_597' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_598) == 0x00003C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_598' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_599) == 0x000044, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_599' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_600) == 0x00004C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_600' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_601) == 0x000054, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_601' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_602) == 0x00005C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_602' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_603) == 0x000060, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_603' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_604) == 0x000090, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_604' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_605) == 0x0000A0, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_605' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_606) == 0x0000A8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_606' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_607) == 0x0000AC, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_607' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_608) == 0x0000B0, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_608' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_609) == 0x0000B4, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_609' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_610) == 0x0000B5, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_610' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_611) == 0x0000B6, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_611' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_612) == 0x0000B8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_612' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_613) == 0x0000C0, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_613' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_614) == 0x0000C8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_614' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_615) == 0x0000D0, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_615' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_616) == 0x0000D8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_616' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_617) == 0x0000E8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_617' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_618) == 0x0000F8, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_618' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_619) == 0x000100, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_619' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_620) == 0x000108, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_620' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_621) == 0x000109, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_621' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_622) == 0x00010A, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_622' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_623) == 0x000110, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_623' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_624) == 0x000120, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_624' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000140, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001C0, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct NPC_Large_Broodling_AnimBP.NPC_Large_Broodling_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x006B (0x006C - 0x0001)
struct NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_2;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_3;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_4;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_5;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_6;                                 // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_7;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_8;                                 // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_9;                                 // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_10;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_11;                                // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_12;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_13;                                  // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_14;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_15;                                // 0x0034(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_16;                                // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_17;                                // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_18;                                 // 0x0040(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_19;                                // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_20;                                // 0x0048(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_21;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_22;                                // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_23;                                // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_24;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __IntProperty_25;                                  // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_26;                                 // 0x0060(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __IntProperty_27;                                  // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_28;                                 // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x00006C, "Wrong size on NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000003, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_2) == 0x000004, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_2' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x000008, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x00000C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x00000D, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_6) == 0x000010, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_6' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_7) == 0x000014, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_7' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_8) == 0x000018, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_8' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x00001C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_10) == 0x000020, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_10' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_11) == 0x000024, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_11' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_12) == 0x000028, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_12' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __IntProperty_13) == 0x00002C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__IntProperty_13' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_14) == 0x000030, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_14' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_15) == 0x000034, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_15' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_16) == 0x000038, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_16' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_17) == 0x00003C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_17' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_18) == 0x000040, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_18' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_19) == 0x000044, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_19' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_20) == 0x000048, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_20' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_21) == 0x00004C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_21' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_22) == 0x000050, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_22' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_23) == 0x000054, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_23' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_24) == 0x000058, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_24' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __IntProperty_25) == 0x00005C, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__IntProperty_25' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_26) == 0x000060, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_26' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __IntProperty_27) == 0x000064, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__IntProperty_27' has a wrong offset!");
static_assert(offsetof(NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_28) == 0x000068, "Member 'NPC_Large_Broodling_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_28' has a wrong offset!");

}

