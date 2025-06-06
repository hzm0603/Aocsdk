﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Wolf_AnimBP

#include "Basic.hpp"

#include "NPC_Wolf_AnimBP_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass NPC_Wolf_AnimBP.NPC_Wolf_AnimBP_C
// 0x2610 (0x4260 - 0x1C50)
#pragma pack(push, 0x1)
class alignas(0x10) UNPC_Wolf_AnimBP_C : public UAoCNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct NPC_Wolf_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;              // 0x1C58(0x0074)(HasGetValueTypeHash)
	uint8                                         Pad_1CCC[0x4];                                     // 0x1CCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1CD0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1CD8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1CE0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1D00(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x1D20(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1D48(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x1D70(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1DB8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x1E00(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x1E48(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x1E68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1E90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1EB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x1EE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x1F08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x1F30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x1F58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x1F80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x1FA8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x1FD0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x2018(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x2060(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x20A8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x20C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x20F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x2118(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x2140(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x2168(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x21B0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x21D0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x2218(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x2238(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_4;                      // 0x2258(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x2320(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x2340(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x2368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x23B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x23E0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x2408(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x2450(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x2470(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x24B8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x24D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2520(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x2568(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x25B0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x25F8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2640(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_2;                    // 0x2688(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x26D0(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x26F0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x2710(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x27D8(0x0020)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x27F8(0x0118)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x2910(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2980(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x29A0(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2A68(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x2A88(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x2B50(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2BD0(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2CF8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2D18(0x0128)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_22;                    // 0x2E40(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x2E68(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_21;                    // 0x2F58(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x2F80(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_20;                    // 0x3070(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_19;                    // 0x3098(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_18;                    // 0x30C0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x30E8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x3130(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x3178(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x3290(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x33A8(0x0118)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x34C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x34E0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_11;                             // 0x35A8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x35F0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x3618(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x3698(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x3718(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_10;                             // 0x3760(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x37A8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9;                              // 0x37F0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8;                              // 0x3838(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x3880(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7;                              // 0x38C8(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x3910(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6;                              // 0x3958(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x39A0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x39E8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x3A30(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x3A58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x3A80(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x3AA8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x3AF0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x3B18(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x3B40(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x3B68(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x3B90(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3BB8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x3C00(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x3C48(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x3C90(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x3CB8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x3CE0(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x3DD0(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x3DF8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3EC0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x3F40(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x3F68(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x3F90(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3FB8(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x40A8(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x40D0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x4198(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x41C0(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x41E8(0x0048)()
	bool                                          InCombat;                                          // 0x4230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttacking;                                       // 0x4231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4232[0x6];                                     // 0x4232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TurnRate;                                          // 0x4238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastZRotation;                                     // 0x4240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentZRotation;                                  // 0x4248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SpeedRight;                                        // 0x4250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_IsAttacking();
	void AnimNotify_NotAttacking();
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_NPC_Wolf_AnimBP(int32 EntryPoint);
	void ProjectAngleTo360(double Angle, double* Three60Angle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Wolf_AnimBP_C">();
	}
	static class UNPC_Wolf_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_Wolf_AnimBP_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UNPC_Wolf_AnimBP_C) == 0x000010, "Wrong alignment on UNPC_Wolf_AnimBP_C");
static_assert(sizeof(UNPC_Wolf_AnimBP_C) == 0x004260, "Wrong size on UNPC_Wolf_AnimBP_C");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, UberGraphFrame) == 0x001C50, "Member 'UNPC_Wolf_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, __AnimBlueprintMutables) == 0x001C58, "Member 'UNPC_Wolf_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001CD0, "Member 'UNPC_Wolf_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimBlueprintExtension_Base) == 0x001CD8, "Member 'UNPC_Wolf_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Root) == 0x001CE0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x001D00, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_19) == 0x001D20, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_18) == 0x001D48, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_13) == 0x001D70, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x001DB8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x001E00, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_13) == 0x001E48, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_17) == 0x001E68, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x001E90, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x001EB8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x001EE0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x001F08, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x001F30, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x001F58, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x001F80, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x001FA8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x001FD0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x002018, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x002060, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_12) == 0x0020A8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0020C8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0020F0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x002118, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x002140, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x002168, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_11) == 0x0021B0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x0021D0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_10) == 0x002218, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_9) == 0x002238, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateMachine_4) == 0x002258, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateMachine_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_8) == 0x002320, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x002340, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002368, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002390, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0023B8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0023E0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x002408, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_7) == 0x002450, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x002470, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_6) == 0x0024B8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x0024D8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x002520, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x002568, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0025B0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0025F8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002640, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByInt_2) == 0x002688, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByInt_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0026D0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0026F0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateMachine_3) == 0x002710, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0027D8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_3) == 0x0027F8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x002910, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_2) == 0x002980, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x0029A0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult_1) == 0x002A68, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x002A88, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x002B50, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x002BD0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x002CF8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_ModifyBone) == 0x002D18, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_22) == 0x002E40, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_22' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_LayeredBoneBlend_3) == 0x002E68, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_21) == 0x002F58, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_21' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_LayeredBoneBlend_2) == 0x002F80, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_20) == 0x003070, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_20' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_19) == 0x003098, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_19' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_18) == 0x0030C0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_18' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x0030E8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x003130, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_2) == 0x003178, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x003290, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0033A8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateResult) == 0x0034C0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_StateMachine) == 0x0034E0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_11) == 0x0035A8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_11' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_17) == 0x0035F0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_17' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x003618, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x003698, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x003718, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_10) == 0x003760, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_10' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByInt_1) == 0x0037A8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_9) == 0x0037F0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_9' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_8) == 0x003838, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_8' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x003880, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_7) == 0x0038C8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_7' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x003910, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_6) == 0x003958, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_5) == 0x0039A0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_4) == 0x0039E8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_16) == 0x003A30, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_15) == 0x003A58, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_14) == 0x003A80, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_3) == 0x003AA8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x003AF0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x003B18, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x003B40, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x003B68, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x003B90, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x003BB8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_2) == 0x003C00, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot_1) == 0x003C48, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x003C90, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x003CB8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x003CE0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x003DD0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TwoWayBlend_1) == 0x003DF8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x003EC0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x003F40, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x003F68, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x003F90, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x003FB8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x0040A8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x0040D0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x004198, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0041C0, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, AnimGraphNode_Slot) == 0x0041E8, "Member 'UNPC_Wolf_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, InCombat) == 0x004230, "Member 'UNPC_Wolf_AnimBP_C::InCombat' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, IsAttacking) == 0x004231, "Member 'UNPC_Wolf_AnimBP_C::IsAttacking' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, TurnRate) == 0x004238, "Member 'UNPC_Wolf_AnimBP_C::TurnRate' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, LastZRotation) == 0x004240, "Member 'UNPC_Wolf_AnimBP_C::LastZRotation' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, CurrentZRotation) == 0x004248, "Member 'UNPC_Wolf_AnimBP_C::CurrentZRotation' has a wrong offset!");
static_assert(offsetof(UNPC_Wolf_AnimBP_C, SpeedRight) == 0x004250, "Member 'UNPC_Wolf_AnimBP_C::SpeedRight' has a wrong offset!");

}

