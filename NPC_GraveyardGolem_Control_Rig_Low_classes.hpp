﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_GraveyardGolem_Control_Rig_Low

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "ControlRig_classes.hpp"
#include "AnimationCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RigVM_structs.hpp"
#include "RigVM_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// RigVMBlueprintGeneratedClass NPC_GraveyardGolem_Control_Rig_Low.NPC_GraveyardGolem_Control_Rig_Low_C
// 0x0008 (0x0638 - 0x0630)
class UNPC_GraveyardGolem_Control_Rig_Low_C final : public UControlRig
{
public:
	bool                                          Dead;                                              // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_GraveyardGolem_Control_Rig_Low_C">();
	}
	static class UNPC_GraveyardGolem_Control_Rig_Low_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_GraveyardGolem_Control_Rig_Low_C>();
	}
};
static_assert(alignof(UNPC_GraveyardGolem_Control_Rig_Low_C) == 0x000008, "Wrong alignment on UNPC_GraveyardGolem_Control_Rig_Low_C");
static_assert(sizeof(UNPC_GraveyardGolem_Control_Rig_Low_C) == 0x000638, "Wrong size on UNPC_GraveyardGolem_Control_Rig_Low_C");
static_assert(offsetof(UNPC_GraveyardGolem_Control_Rig_Low_C, Dead) == 0x000630, "Member 'UNPC_GraveyardGolem_Control_Rig_Low_C::Dead' has a wrong offset!");

// RigVMMemoryStorageGeneratorClass NPC_GraveyardGolem_Control_Rig_Low.RigVMMemory_Literal
// 0x0308 (0x0350 - 0x0048)
class NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal final : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                         RigVMModel___pelvis_trace_down_Node__Const;        // 0x0048(0x000C)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RigVMModel___pelvis_trace_down_Ray_Cast_Start__Const; // 0x0058(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        RigVMModel___pelvis_trace_down_Ray_Cast_End__Const; // 0x0060(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_L__Const; // 0x0070(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_target__Const; // 0x0090(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r__Const; // 0x00B0(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r_target__Const; // 0x00D0(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__Const; // 0x00F0(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ERigVMTransformSpace                          Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Space__Const; // 0x0108(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_bInitial__Const; // 0x0109(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x6];                                      // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        pelvis_trace_down___pelvis_trace_down_Add_1_B__Const; // 0x0110(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__Const; // 0x0118(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__Const; // 0x0130(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Color__Const; // 0x0148(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Thickness__Const; // 0x0158(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_WorldOffset__Const; // 0x0160(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_bEnabled__Const; // 0x01C0(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_AimItem_Target                Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__Const; // 0x01C8(0x0048)(Edit, EditConst, NonTransactional, NoDestructor)
	ETraceTypeQuery                               Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_TraceChannel__Const; // 0x0210(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_Radius__Const; // 0x0214(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target                Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Secondary__Const; // 0x0218(0x0048)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                         Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Weight__Const; // 0x0260(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0xC];                                      // 0x0264(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_AimBone_DebugSettings         Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_DebugSettings__Const; // 0x0270(0x0070)(Edit, EditConst, NonTransactional, NoDestructor)
	EEulerRotationOrder                           RigVMModel___RigVMFunction_MathQuaternionToEuler_1_RotationOrder__Const; // 0x02E0(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_2_1_ItemToModify__Const; // 0x02E8(0x0010)(Edit, EditConst, NonTransactional)
	struct FVector                                RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__Const; // 0x02F8(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___DISPATCH_RigVMDispatch_If_False__Const; // 0x0310(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___SpringInterpQuaternionV2_Strength__Const; // 0x0314(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___SpringInterpQuaternionV2_CriticalDamping__Const; // 0x0318(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          RigVMModel___SpringInterpQuaternionV2_bUseCurrentInput__Const; // 0x031C(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  RigVMModel___SpringInterpQuaternionV2_Current__Const; // 0x0320(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___ModifyTransforms_2_1_Weight__Const;   // 0x0340(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EControlRigModifyBoneMode                     RigVMModel___ModifyTransforms_2_1_Mode__Const;     // 0x0344(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorageGeneratorClass NPC_GraveyardGolem_Control_Rig_Low.RigVMMemory_Literal", true>();
	}
	static class NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal* GetDefaultObj()
	{
		return GetDefaultObjImpl<NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal>();
	}
};
static_assert(alignof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal) == 0x000010, "Wrong alignment on NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal");
static_assert(sizeof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal) == 0x000350, "Wrong size on NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___pelvis_trace_down_Node__Const) == 0x000048, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___pelvis_trace_down_Node__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___pelvis_trace_down_Ray_Cast_Start__Const) == 0x000058, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___pelvis_trace_down_Ray_Cast_Start__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___pelvis_trace_down_Ray_Cast_End__Const) == 0x000060, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___pelvis_trace_down_Ray_Cast_End__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_L__Const) == 0x000070, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_L__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_target__Const) == 0x000090, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_target__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r__Const) == 0x0000B0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r_target__Const) == 0x0000D0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::LocalVariableDefault__Pelvis_Trace_Down_foot_normal_hit_r_target__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__Const) == 0x0000F0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Space__Const) == 0x000108, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Space__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_bInitial__Const) == 0x000109, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_bInitial__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, pelvis_trace_down___pelvis_trace_down_Add_1_B__Const) == 0x000110, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::pelvis_trace_down___pelvis_trace_down_Add_1_B__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__Const) == 0x000118, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__Const) == 0x000130, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Color__Const) == 0x000148, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Color__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Thickness__Const) == 0x000158, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_Thickness__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_WorldOffset__Const) == 0x000160, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_WorldOffset__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_bEnabled__Const) == 0x0001C0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_RigVMFunction_DebugLineNoSpace_bEnabled__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__Const) == 0x0001C8, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_TraceChannel__Const) == 0x000210, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_TraceChannel__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_Radius__Const) == 0x000214, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_Radius__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Secondary__Const) == 0x000218, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Secondary__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Weight__Const) == 0x000260, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Weight__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_DebugSettings__Const) == 0x000270, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_DebugSettings__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___RigVMFunction_MathQuaternionToEuler_1_RotationOrder__Const) == 0x0002E0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___RigVMFunction_MathQuaternionToEuler_1_RotationOrder__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___ModifyTransforms_2_1_ItemToModify__Const) == 0x0002E8, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___ModifyTransforms_2_1_ItemToModify__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__Const) == 0x0002F8, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___DISPATCH_RigVMDispatch_If_False__Const) == 0x000310, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___DISPATCH_RigVMDispatch_If_False__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___SpringInterpQuaternionV2_Strength__Const) == 0x000314, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___SpringInterpQuaternionV2_Strength__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___SpringInterpQuaternionV2_CriticalDamping__Const) == 0x000318, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___SpringInterpQuaternionV2_CriticalDamping__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___SpringInterpQuaternionV2_bUseCurrentInput__Const) == 0x00031C, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___SpringInterpQuaternionV2_bUseCurrentInput__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___SpringInterpQuaternionV2_Current__Const) == 0x000320, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___SpringInterpQuaternionV2_Current__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___ModifyTransforms_2_1_Weight__Const) == 0x000340, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___ModifyTransforms_2_1_Weight__Const' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal, RigVMModel___ModifyTransforms_2_1_Mode__Const) == 0x000344, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Literal::RigVMModel___ModifyTransforms_2_1_Mode__Const' has a wrong offset!");

// RigVMMemoryStorageGeneratorClass NPC_GraveyardGolem_Control_Rig_Low.RigVMMemory_Work
// 0x0338 (0x0380 - 0x0048)
class NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work final : public URigVMMemoryStorage
{
public:
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  RigVMModel___Pelvis_Trace_Down_Hit_Normal;         // 0x0050(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Add_Result;  // 0x0070(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        pelvis_trace_down___pelvis_trace_down_Add_1_Result; // 0x0088(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Transform; // 0x0090(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>              Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_CachedIndex; // 0x00F0(0x0010)(Edit, EditConst, NonTransactional)
	double                                        pelvis_trace_down___pelvis_trace_down_Add_1_A;     // 0x0100(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__IO;   // 0x0108(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__IO;   // 0x0120(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_Result; // 0x0138(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        pelvis_trace_down___pelvis_trace_down_Add_1_1_Result; // 0x0150(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_A__IO; // 0x0158(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__IO; // 0x0170(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Result; // 0x0190(0x0060)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitNormal; // 0x01F0(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_bHit; // 0x0208(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitLocation; // 0x0210(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target                Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__IO; // 0x0228(0x0048)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>              Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_PrimaryCachedSpace; // 0x0270(0x0010)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>              Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_SecondaryCachedSpace; // 0x0280(0x0010)(Edit, EditConst, NonTransactional)
	TArray<bool>                                  Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_bIsInitialized; // 0x0290(0x0010)(Edit, EditConst, NonTransactional)
	struct FVector                                RigVMModel___RigVMFunction_MathQuaternionToEuler_1_Result; // 0x02A0(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  RigVMModel___SpringInterpQuaternionV2_Result;      // 0x02C0(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result; // 0x02E0(0x0020)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RigVMModel___DISPATCH_RigVMDispatch_If_Result;     // 0x0300(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          RigVMModel___DISPATCH_RigVMDispatch_If_Condition;  // 0x0304(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RigVMModel___DISPATCH_RigVMDispatch_If_True;       // 0x0308(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x0310(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RigVMModel___SpringInterpQuaternionV2_AngularVelocity; // 0x0328(0x0018)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                          RigVMModel___SpringInterpQuaternionV2_SimulatedResult; // 0x0340(0x0010)(Edit, EditConst, NonTransactional)
	TArray<struct FQuaternionSpringState>         RigVMModel___SpringInterpQuaternionV2_SpringState; // 0x0350(0x0010)(Edit, EditConst, NonTransactional)
	TArray<struct FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_2_1_ItemToModify__IO; // 0x0360(0x0010)(Edit, EditConst, NonTransactional)
	TArray<struct FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_2_1_WorkData;    // 0x0370(0x0010)(Edit, EditConst, NonTransactional)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorageGeneratorClass NPC_GraveyardGolem_Control_Rig_Low.RigVMMemory_Work", true>();
	}
	static class NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work* GetDefaultObj()
	{
		return GetDefaultObjImpl<NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work>();
	}
};
static_assert(alignof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work) == 0x000010, "Wrong alignment on NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work");
static_assert(sizeof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work) == 0x000380, "Wrong size on NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___Pelvis_Trace_Down_Hit_Normal) == 0x000050, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___Pelvis_Trace_Down_Hit_Normal' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Add_Result) == 0x000070, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Add_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, pelvis_trace_down___pelvis_trace_down_Add_1_Result) == 0x000088, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::pelvis_trace_down___pelvis_trace_down_Add_1_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Transform) == 0x000090, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_Transform' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_CachedIndex) == 0x0000F0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_GetTransform_CachedIndex' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, pelvis_trace_down___pelvis_trace_down_Add_1_A) == 0x000100, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::pelvis_trace_down___pelvis_trace_down_Add_1_A' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__IO) == 0x000108, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Add_A__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__IO) == 0x000120, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Add_B__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_Result) == 0x000138, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, pelvis_trace_down___pelvis_trace_down_Add_1_1_Result) == 0x000150, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::pelvis_trace_down___pelvis_trace_down_Add_1_1_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_A__IO) == 0x000158, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_A__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__IO) == 0x000170, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_Subtract_B__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Result) == 0x000190, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitNormal) == 0x0001F0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitNormal' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_bHit) == 0x000208, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_bHit' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitLocation) == 0x000210, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_SphereTraceByTraceChannel_HitLocation' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__IO) == 0x000228, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_Primary__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_PrimaryCachedSpace) == 0x000270, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_PrimaryCachedSpace' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_SecondaryCachedSpace) == 0x000280, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_SecondaryCachedSpace' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_bIsInitialized) == 0x000290, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::Pelvis_Trace_Down___Pelvis_Trace_Down_AimBoneMath_bIsInitialized' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___RigVMFunction_MathQuaternionToEuler_1_Result) == 0x0002A0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___RigVMFunction_MathQuaternionToEuler_1_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___SpringInterpQuaternionV2_Result) == 0x0002C0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___SpringInterpQuaternionV2_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result) == 0x0002E0, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___DISPATCH_RigVMDispatch_If_Result) == 0x000300, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___DISPATCH_RigVMDispatch_If_Result' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___DISPATCH_RigVMDispatch_If_Condition) == 0x000304, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___DISPATCH_RigVMDispatch_If_Condition' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___DISPATCH_RigVMDispatch_If_True) == 0x000308, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___DISPATCH_RigVMDispatch_If_True' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO) == 0x000310, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___SpringInterpQuaternionV2_AngularVelocity) == 0x000328, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___SpringInterpQuaternionV2_AngularVelocity' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___SpringInterpQuaternionV2_SimulatedResult) == 0x000340, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___SpringInterpQuaternionV2_SimulatedResult' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___SpringInterpQuaternionV2_SpringState) == 0x000350, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___SpringInterpQuaternionV2_SpringState' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___ModifyTransforms_2_1_ItemToModify__IO) == 0x000360, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___ModifyTransforms_2_1_ItemToModify__IO' has a wrong offset!");
static_assert(offsetof(NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work, RigVMModel___ModifyTransforms_2_1_WorkData) == 0x000370, "Member 'NPC_GraveyardGolem_Control_Rig_Low::URigVMMemory_Work::RigVMModel___ModifyTransforms_2_1_WorkData' has a wrong offset!");

}

