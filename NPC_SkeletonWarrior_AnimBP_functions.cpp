﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_SkeletonWarrior_AnimBP

#include "Basic.hpp"

#include "NPC_SkeletonWarrior_AnimBP_classes.hpp"
#include "NPC_SkeletonWarrior_AnimBP_parameters.hpp"


namespace SDK
{

// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UNPC_SkeletonWarrior_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimGraph");

	Params::NPC_SkeletonWarrior_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_BlackLungExit
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_BlackLungExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_BlackLungExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_PickSpawnPose
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_PickSpawnPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_PickSpawnPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_ShieldBreak
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_ShieldBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_ShieldBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_ShieldOff
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_ShieldOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_ShieldOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_ShieldPickUp
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_ShieldPickUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_ShieldPickUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.AnimNotify_SpawnComplete
// (BlueprintCallable, BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::AnimNotify_SpawnComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "AnimNotify_SpawnComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_SkeletonWarrior_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "BlueprintUpdateAnimation");

	Params::NPC_SkeletonWarrior_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP_AnimGraphNode_TransitionResult_3B4C56D947797C58146F15B1044CE47F
// (BlueprintEvent)

void UNPC_SkeletonWarrior_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP_AnimGraphNode_TransitionResult_3B4C56D947797C58146F15B1044CE47F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP_AnimGraphNode_TransitionResult_3B4C56D947797C58146F15B1044CE47F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_SkeletonWarrior_AnimBP.NPC_SkeletonWarrior_AnimBP_C.ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_SkeletonWarrior_AnimBP_C::ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_SkeletonWarrior_AnimBP_C", "ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP");

	Params::NPC_SkeletonWarrior_AnimBP_C_ExecuteUbergraph_NPC_SkeletonWarrior_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

