﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Elderdragon_Fire_FlameMinion_AnimBP

#include "Basic.hpp"

#include "Elderdragon_Fire_FlameMinion_AnimBP_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Elderdragon_Fire_FlameMinion_AnimBP.Elderdragon_Fire_FlameMinion_AnimBP_C
// 0x1790 (0x33E0 - 0x1C50)
class UElderdragon_Fire_FlameMinion_AnimBP_C final : public UAoCNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Elderdragon_Fire_FlameMinion_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1C58(0x0020)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1C78(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1C80(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1C88(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x1CA8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1CD0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1CF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1D20(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1D48(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1D68(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1DB0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1DF8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1E40(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1E88(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1ED0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1F18(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1F60(0x0118)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x2078(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2098(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x20C0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x2108(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2128(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2170(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x21B8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2200(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x2220(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x22E8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x2308(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x23D0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x23F0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x24B8(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2538(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2660(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2680(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x26A0(0x0128)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x27C8(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x2810(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_11;                             // 0x2858(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_10;                             // 0x28A0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x28E8(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x2930(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9;                              // 0x2978(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8;                              // 0x29C0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7;                              // 0x2A08(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x2A50(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x2A78(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6;                              // 0x2AA0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x2AE8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x2B10(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x2B38(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x2B60(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2B88(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x2BD0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x2C18(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x2C60(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x2C88(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x2CB0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x2CF8(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x2D78(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2DC0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x2E08(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2E30(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x2EB0(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x2FA0(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x2FC8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x3090(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x30B8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x30E0(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3108(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x31F8(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x3220(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x32E8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x3310(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x3338(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3360(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x3388(0x0048)()
	bool                                          Spawned;                                           // 0x33D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UnderAbsorption;                                   // 0x33D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbsorptionDeath;                                   // 0x33D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_Spawned();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Elderdragon_Fire_FlameMinion_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Elderdragon_Fire_FlameMinion_AnimBP_C">();
	}
	static class UElderdragon_Fire_FlameMinion_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UElderdragon_Fire_FlameMinion_AnimBP_C>();
	}
};
static_assert(alignof(UElderdragon_Fire_FlameMinion_AnimBP_C) == 0x000010, "Wrong alignment on UElderdragon_Fire_FlameMinion_AnimBP_C");
static_assert(sizeof(UElderdragon_Fire_FlameMinion_AnimBP_C) == 0x0033E0, "Wrong size on UElderdragon_Fire_FlameMinion_AnimBP_C");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, UberGraphFrame) == 0x001C50, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, __AnimBlueprintMutables) == 0x001C58, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001C78, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimBlueprintExtension_Base) == 0x001C80, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Root) == 0x001C88, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x001CA8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x001CD0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x001CF8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x001D20, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult_5) == 0x001D48, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x001D68, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001DB0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001DF8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x001E40, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x001E88, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x001ED0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001F18, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x001F60, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult_4) == 0x002078, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TransitionResult) == 0x002098, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0020C0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult_3) == 0x002108, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x002128, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002170, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0021B8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult_2) == 0x002200, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x002220, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult_1) == 0x0022E8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x002308, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateResult) == 0x0023D0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_StateMachine) == 0x0023F0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x0024B8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x002538, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x002660, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x002680, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0026A0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x0027C8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByInt_1) == 0x002810, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_11) == 0x002858, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_11' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_10) == 0x0028A0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_10' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x0028E8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x002930, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_9) == 0x002978, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_9' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_8) == 0x0029C0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_8' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_7) == 0x002A08, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_7' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_17) == 0x002A50, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_17' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_16) == 0x002A78, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_6) == 0x002AA0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_6' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_15) == 0x002AE8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_14) == 0x002B10, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x002B38, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x002B60, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x002B88, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_5) == 0x002BD0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_4) == 0x002C18, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x002C60, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x002C88, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_3) == 0x002CB0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x002CF8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_2) == 0x002D78, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot_1) == 0x002DC0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x002E08, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x002E30, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x002EB0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x002FA0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TwoWayBlend_1) == 0x002FC8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x003090, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x0030B8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x0030E0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x003108, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x0031F8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x003220, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x0032E8, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x003310, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x003338, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x003360, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AnimGraphNode_Slot) == 0x003388, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, Spawned) == 0x0033D0, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::Spawned' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, UnderAbsorption) == 0x0033D1, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::UnderAbsorption' has a wrong offset!");
static_assert(offsetof(UElderdragon_Fire_FlameMinion_AnimBP_C, AbsorptionDeath) == 0x0033D2, "Member 'UElderdragon_Fire_FlameMinion_AnimBP_C::AbsorptionDeath' has a wrong offset!");

}

