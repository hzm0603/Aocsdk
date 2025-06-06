﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Zombie_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "NPC_Zombie_AnimBP_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass NPC_Zombie_AnimBP.NPC_Zombie_AnimBP_C
// 0x2280 (0x3ED0 - 0x1C50)
class UNPC_Zombie_AnimBP_C : public UAoCNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1C50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct NPC_Zombie_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;            // 0x1C58(0x0064)(HasGetValueTypeHash)
	uint8                                         Pad_1CBC[0x4];                                     // 0x1CBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x1CC0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x1CC8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1CD0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x1CF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x1D18(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x1D40(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1D88(0x0048)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_4;          // 0x1DD0(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1EE8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x1F30(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x1F50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x1F78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x1FA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x1FC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x1FF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x2018(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x2040(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x2068(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x2090(0x0028)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x20B8(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x21D0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x2218(0x0020)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x2238(0x0118)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x2350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x2378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x23A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x23C8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x23F0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x2438(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x2458(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x24A0(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x24C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_4;                      // 0x24E0(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x25A8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x25C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x25F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x2618(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x2640(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x2660(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x2688(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x26B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x26D8(0x0028)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x2700(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x2818(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x2860(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x28A8(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_2;                    // 0x28F0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x2938(0x0020)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x2958(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x2A70(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x2AB8(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x2AD8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x2AF8(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x2BC0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2BE0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x2C28(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x2C48(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x2D10(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x2D30(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2DA0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x2DC0(0x00C8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x2E88(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2EA8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x2F70(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2FF0(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3118(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3138(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x3158(0x0128)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x3280(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9;                              // 0x32A8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x32F0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x3318(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x3398(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x33C0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8;                              // 0x3408(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x3450(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7;                              // 0x3498(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6;                              // 0x34E0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x3528(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_5;                              // 0x3570(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x35B8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x3600(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x3648(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x3690(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x36D8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x3700(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x3728(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x3750(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x3798(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x37C0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x37E8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x3810(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x3838(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x3860(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x38A8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x3928(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x3950(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x3998(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x39C0(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x3A88(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x3AD0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x3B50(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x3B78(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x3C68(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x3C90(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x3D58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x3D80(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x3DA8(0x00F0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x3E98(0x0028)()
	bool                                          TransitionDone;                                    // 0x3EC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovingOrTransitionDone;                            // 0x3EC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IdleToTurnOrTransitionsDone;                       // 0x3EC2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovingAndTransitionDone;                           // 0x3EC3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_NPCNotAttacking();
	void AnimNotify_TransitionDone();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_NPC_Zombie_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_Zombie_AnimBP_C">();
	}
	static class UNPC_Zombie_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_Zombie_AnimBP_C>();
	}
};
static_assert(alignof(UNPC_Zombie_AnimBP_C) == 0x000010, "Wrong alignment on UNPC_Zombie_AnimBP_C");
static_assert(sizeof(UNPC_Zombie_AnimBP_C) == 0x003ED0, "Wrong size on UNPC_Zombie_AnimBP_C");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, UberGraphFrame) == 0x001C50, "Member 'UNPC_Zombie_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, __AnimBlueprintMutables) == 0x001C58, "Member 'UNPC_Zombie_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x001CC0, "Member 'UNPC_Zombie_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimBlueprintExtension_Base) == 0x001CC8, "Member 'UNPC_Zombie_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Root) == 0x001CD0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_21) == 0x001CF0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_20) == 0x001D18, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x001D40, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x001D88, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_4) == 0x001DD0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x001EE8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_14) == 0x001F30, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_19) == 0x001F50, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_18) == 0x001F78, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_17) == 0x001FA0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_16) == 0x001FC8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_15) == 0x001FF0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_14) == 0x002018, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_13) == 0x002040, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_12) == 0x002068, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_11) == 0x002090, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_3) == 0x0020B8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x0021D0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_13) == 0x002218, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_2) == 0x002238, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x002350, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x002378, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0023A0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0023C8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0023F0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_12) == 0x002438, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x002458, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_11) == 0x0024A0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_10) == 0x0024C0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateMachine_4) == 0x0024E0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateMachine_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_9) == 0x0025A8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x0025C8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x0025F0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x002618, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_8) == 0x002640, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x002660, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x002688, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0026B0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0026D8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x002700, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x002818, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x002860, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x0028A8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByInt_2) == 0x0028F0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByInt_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_7) == 0x002938, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x002958, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x002A70, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_6) == 0x002AB8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_5) == 0x002AD8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateMachine_3) == 0x002AF8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_4) == 0x002BC0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x002BE0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_3) == 0x002C28, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateMachine_2) == 0x002C48, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_2) == 0x002D10, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x002D30, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult_1) == 0x002DA0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x002DC0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateResult) == 0x002E88, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_StateMachine) == 0x002EA8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SaveCachedPose_3) == 0x002F70, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x002FF0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x003118, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x003138, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_ModifyBone) == 0x003158, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_17) == 0x003280, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_17' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_9) == 0x0032A8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_9' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_16) == 0x0032F0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SaveCachedPose_2) == 0x003318, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_15) == 0x003398, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x0033C0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_8) == 0x003408, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_8' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByInt_1) == 0x003450, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_7) == 0x003498, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_7' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_6) == 0x0034E0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_6' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x003528, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_5) == 0x003570, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_5' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x0035B8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_4) == 0x003600, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_3) == 0x003648, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_2) == 0x003690, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_14) == 0x0036D8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_13) == 0x003700, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_12) == 0x003728, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot_1) == 0x003750, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_11) == 0x003798, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_10) == 0x0037C0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_9) == 0x0037E8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_8) == 0x003810, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_7) == 0x003838, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x003860, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SaveCachedPose_1) == 0x0038A8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_6) == 0x003928, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x003950, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_5) == 0x003998, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TwoWayBlend_1) == 0x0039C0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_Slot) == 0x003A88, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x003AD0, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_4) == 0x003B50, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_LayeredBoneBlend_1) == 0x003B78, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_3) == 0x003C68, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_TwoWayBlend) == 0x003C90, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_2) == 0x003D58, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x003D80, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x003DA8, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x003E98, "Member 'UNPC_Zombie_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, TransitionDone) == 0x003EC0, "Member 'UNPC_Zombie_AnimBP_C::TransitionDone' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, MovingOrTransitionDone) == 0x003EC1, "Member 'UNPC_Zombie_AnimBP_C::MovingOrTransitionDone' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, IdleToTurnOrTransitionsDone) == 0x003EC2, "Member 'UNPC_Zombie_AnimBP_C::IdleToTurnOrTransitionsDone' has a wrong offset!");
static_assert(offsetof(UNPC_Zombie_AnimBP_C, MovingAndTransitionDone) == 0x003EC3, "Member 'UNPC_Zombie_AnimBP_C::MovingAndTransitionDone' has a wrong offset!");

}

