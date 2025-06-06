﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_Trebuchet_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PC_Trebuchet_AnimBP_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass PC_Trebuchet_AnimBP.PC_Trebuchet_AnimBP_C
// 0x1210 (0x2300 - 0x10F0)
class UPC_Trebuchet_AnimBP_C : public UAoCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct PC_Trebuchet_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;          // 0x10F8(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1108(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1110(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1118(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1138(0x00F0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x1228(0x00F0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1318(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1360(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1388(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x13B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x13D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1400(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x1428(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x1450(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1470(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x14B8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x14D8(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1500(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1520(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1540(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1608(0x0070)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x1678(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x16F8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1720(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1748(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1790(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1810(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1838(0x0028)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x1860(0x0280)()
	struct FAnimNode_HandIKRetargeting            AnimGraphNode_HandIKRetargeting;                   // 0x1AE0(0x0120)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x1C00(0x0280)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1E80(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1EA0(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1EC0(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1F08(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1F28(0x0080)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1FA8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1FC8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1FF0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2018(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2098(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x20C0(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x20E8(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2210(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2230(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x2250(0x0048)()
	double                                        Direction;                                         // 0x2298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x22A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Velocity;                                          // 0x22A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESiegeWeaponState                             CurrentState;                                      // 0x22B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22B1[0x7];                                     // 0x22B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Hand_Favoring;                                     // 0x22B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Hand_IKWeight;                                     // 0x22C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ik_hand_l_effector;                                // 0x22C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ik_hand_r_effector;                                // 0x22E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FireCommand;                                       // 0x22F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_Start();
	void AnimNotify_Stop();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_BlendListByBool_38FD0AE94FDC0627D02DF7904481AB61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_TransitionResult_0CE15D7F47C55F32FE51E7B7CD9AE054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_TransitionResult_4972B8FA4A40E468B172BDA8CCD228D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_TransitionResult_740CF7784ACA3AC17811D3AACCCE15CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_TransitionResult_7520A04244A9D4A920B78F831209346C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PC_Trebuchet_AnimBP_AnimGraphNode_TransitionResult_B4C1EB6844DC396661B44796EA13B96B();
	void ExecuteUbergraph_PC_Trebuchet_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_Trebuchet_AnimBP_C">();
	}
	static class UPC_Trebuchet_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPC_Trebuchet_AnimBP_C>();
	}
};
static_assert(alignof(UPC_Trebuchet_AnimBP_C) == 0x000010, "Wrong alignment on UPC_Trebuchet_AnimBP_C");
static_assert(sizeof(UPC_Trebuchet_AnimBP_C) == 0x002300, "Wrong size on UPC_Trebuchet_AnimBP_C");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, UberGraphFrame) == 0x0010F0, "Member 'UPC_Trebuchet_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, __AnimBlueprintMutables) == 0x0010F8, "Member 'UPC_Trebuchet_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001108, "Member 'UPC_Trebuchet_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimBlueprintExtension_Base) == 0x001110, "Member 'UPC_Trebuchet_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_Root) == 0x001118, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001138, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x001228, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x001318, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x001360, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x001388, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0013B0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0013D8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TransitionResult) == 0x001400, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x001428, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_StateResult_3) == 0x001450, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001470, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0014B8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x0014D8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001500, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_StateResult) == 0x001520, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_StateMachine) == 0x001540, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001608, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x001678, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x0016F8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x001720, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001748, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x001790, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x001810, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x001838, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x001860, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_HandIKRetargeting) == 0x001AE0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_HandIKRetargeting' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x001C00, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_LocalToComponentSpace_2) == 0x001E80, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x001EA0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001EC0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x001F08, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x001F28, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001FA8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x001FC8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x001FF0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x002018, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x002098, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0020C0, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0020E8, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x002210, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x002230, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x002250, "Member 'UPC_Trebuchet_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, Direction) == 0x002298, "Member 'UPC_Trebuchet_AnimBP_C::Direction' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, Speed) == 0x0022A0, "Member 'UPC_Trebuchet_AnimBP_C::Speed' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, Velocity) == 0x0022A8, "Member 'UPC_Trebuchet_AnimBP_C::Velocity' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, CurrentState) == 0x0022B0, "Member 'UPC_Trebuchet_AnimBP_C::CurrentState' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, Hand_Favoring) == 0x0022B8, "Member 'UPC_Trebuchet_AnimBP_C::Hand_Favoring' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, Hand_IKWeight) == 0x0022C0, "Member 'UPC_Trebuchet_AnimBP_C::Hand_IKWeight' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, ik_hand_l_effector) == 0x0022C8, "Member 'UPC_Trebuchet_AnimBP_C::ik_hand_l_effector' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, ik_hand_r_effector) == 0x0022E0, "Member 'UPC_Trebuchet_AnimBP_C::ik_hand_r_effector' has a wrong offset!");
static_assert(offsetof(UPC_Trebuchet_AnimBP_C, FireCommand) == 0x0022F8, "Member 'UPC_Trebuchet_AnimBP_C::FireCommand' has a wrong offset!");

}

