﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShakeNotify

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ShakeNotify.BP_ShakeNotify_C.GetActor
// 0x0010 (0x0010 - 0x0000)
struct BP_ShakeNotify_C_GetActor final
{
public:
	class UObject*                                MeleeBandit;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                       Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShakeNotify_C_GetActor) == 0x000008, "Wrong alignment on BP_ShakeNotify_C_GetActor");
static_assert(sizeof(BP_ShakeNotify_C_GetActor) == 0x000010, "Wrong size on BP_ShakeNotify_C_GetActor");
static_assert(offsetof(BP_ShakeNotify_C_GetActor, MeleeBandit) == 0x000000, "Member 'BP_ShakeNotify_C_GetActor::MeleeBandit' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_GetActor, Player) == 0x000008, "Member 'BP_ShakeNotify_C_GetActor::Player' has a wrong offset!");

// Function BP_ShakeNotify.BP_ShakeNotify_C.Received_Notify
// 0x0068 (0x0068 - 0x0000)
struct BP_ShakeNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                ActorType;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShakeNotify_C_Received_Notify) == 0x000008, "Wrong alignment on BP_ShakeNotify_C_Received_Notify");
static_assert(sizeof(BP_ShakeNotify_C_Received_Notify) == 0x000068, "Wrong size on BP_ShakeNotify_C_Received_Notify");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_ShakeNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, Animation) == 0x000008, "Member 'BP_ShakeNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_ShakeNotify_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, ReturnValue) == 0x000040, "Member 'BP_ShakeNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, ActorType) == 0x000048, "Member 'BP_ShakeNotify_C_Received_Notify::ActorType' has a wrong offset!");
static_assert(offsetof(BP_ShakeNotify_C_Received_Notify, CallFunc_GetSocketLocation_ReturnValue) == 0x000050, "Member 'BP_ShakeNotify_C_Received_Notify::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

}

