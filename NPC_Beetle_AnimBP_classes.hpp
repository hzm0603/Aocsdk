﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Beetle_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "NPC_Beetle_AnimBP_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass NPC_Beetle_AnimBP.NPC_Beetle_AnimBP_C
// 0x2450 (0x40A0 - 0x1C50)
class UNPC_Beetle_AnimBP_C : public UAoCNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct NPC_Beetle_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;            // 0x1C58(0x00A8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1D00(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1D08(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1D10(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1D30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1D58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x1D80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x1DA8(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1DD0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1DF0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x1E38(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_4;          // 0x1E80(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1F98(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x1FE0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x2000(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x2028(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x2050(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x2078(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x20A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x20C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x20F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x2118(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x2140(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x2168(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x21B0(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x21F8(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x2310(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x2358(0x0020)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x2378(0x0118)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x2490(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x24B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x24E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2508(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x2530(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x2578(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x2598(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x25E0(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x2600(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x2620(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x26E8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x2708(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x2750(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x2798(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x27E0(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_3;                    // 0x2828(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x2870(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x28B8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2900(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2948(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_2;                    // 0x2990(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x29D8(0x0118)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x2AF0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2B38(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x2B58(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x2BA0(0x0070)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x2C10(0x0118)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x2D28(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2D98(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x2DB8(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2E80(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2EA0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x2F68(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2FE8(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3110(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3130(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3150(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_11;                             // 0x3278(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_10;                             // 0x32C0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_19;                    // 0x3308(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x3330(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_18;                    // 0x33B0(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9;                              // 0x33D8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x3420(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x3448(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x34C8(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8;                              // 0x34F0(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x3538(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x35B8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7;                              // 0x3600(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x3648(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6;                              // 0x3690(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x36D8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x3720(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x3768(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x37B0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x37F8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x3840(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x3888(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x38D0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x38F8(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x3920(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x3968(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x3990(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x39B8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x39E0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x3A08(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x3A30(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x3A78(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x3AF8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3B20(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x3B68(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x3B90(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x3BB8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3BE0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x3C60(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x3C88(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x3D78(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x3DA0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x3E68(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x3E90(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3EB8(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3FA8(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x3FD0(0x00C8)()

public:
	void ExecuteUbergraph_NPC_Beetle_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_NPCNotAttacking();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Beetle_AnimBP_C">();
	}
	static class UNPC_Beetle_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_Beetle_AnimBP_C>();
	}
};
static_assert(alignof(UNPC_Beetle_AnimBP_C) == 0x000010, "Wrong alignment on UNPC_Beetle_AnimBP_C");
static_assert(sizeof(UNPC_Beetle_AnimBP_C) == 0x0040A0, "Wrong size on UNPC_Beetle_AnimBP_C");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, UberGraphFrame) == 0x001C50, "Member 'UNPC_Beetle_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, __AnimBlueprintMutables) == 0x001C58, "Member 'UNPC_Beetle_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001D00, "Member 'UNPC_Beetle_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimBlueprintExtension_Base) == 0x001D08, "Member 'UNPC_Beetle_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Root) == 0x001D10, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x001D30, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x001D58, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x001D80, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x001DA8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_9) == 0x001DD0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x001DF0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x001E38, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_4) == 0x001E80, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001F98, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_8) == 0x001FE0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x002000, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x002028, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x002050, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x002078, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0020A0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0020C8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x0020F0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x002118, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x002140, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x002168, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x0021B0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_3) == 0x0021F8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x002310, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_7) == 0x002358, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_2) == 0x002378, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002490, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0024B8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0024E0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TransitionResult) == 0x002508, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x002530, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_6) == 0x002578, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x002598, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0025E0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_4) == 0x002600, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x002620, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0026E8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x002708, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x002750, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x002798, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x0027E0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByInt_3) == 0x002828, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByInt_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x002870, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0028B8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x002900, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002948, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByInt_2) == 0x002990, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByInt_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x0029D8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x002AF0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_2) == 0x002B38, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x002B58, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x002BA0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x002C10, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x002D28, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult_1) == 0x002D98, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x002DB8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateResult) == 0x002E80, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_StateMachine) == 0x002EA0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose_5) == 0x002F68, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x002FE8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x003110, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x003130, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_ModifyBone) == 0x003150, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_11) == 0x003278, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_11' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_10) == 0x0032C0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_10' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_19) == 0x003308, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_19' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose_4) == 0x003330, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_18) == 0x0033B0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_18' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_9) == 0x0033D8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_9' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_17) == 0x003420, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_17' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x003448, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_16) == 0x0034C8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_8) == 0x0034F0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_8' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x003538, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0035B8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_7) == 0x003600, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByInt_1) == 0x003648, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_6) == 0x003690, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_5) == 0x0036D8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x003720, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_4) == 0x003768, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x0037B0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_3) == 0x0037F8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_2) == 0x003840, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot_1) == 0x003888, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_15) == 0x0038D0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_14) == 0x0038F8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_Slot) == 0x003920, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x003968, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x003990, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x0039B8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x0039E0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x003A08, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x003A30, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x003A78, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x003AF8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x003B20, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x003B68, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x003B90, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x003BB8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x003BE0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x003C60, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x003C88, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x003D78, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TwoWayBlend_1) == 0x003DA0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x003E68, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x003E90, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x003EB8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x003FA8, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Beetle_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x003FD0, "Member 'UNPC_Beetle_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");

}

