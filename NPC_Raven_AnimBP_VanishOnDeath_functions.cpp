﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Raven_AnimBP_VanishOnDeath

#include "Basic.hpp"

#include "NPC_Raven_AnimBP_VanishOnDeath_classes.hpp"
#include "NPC_Raven_AnimBP_VanishOnDeath_parameters.hpp"


namespace SDK
{

// Function NPC_Raven_AnimBP_VanishOnDeath.NPC_Raven_AnimBP_VanishOnDeath_C.AnimNotify_TurnoffMesh
// (BlueprintCallable, BlueprintEvent)

void UNPC_Raven_AnimBP_VanishOnDeath_C::AnimNotify_TurnoffMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Raven_AnimBP_VanishOnDeath_C", "AnimNotify_TurnoffMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Raven_AnimBP_VanishOnDeath.NPC_Raven_AnimBP_VanishOnDeath_C.ExecuteUbergraph_NPC_Raven_AnimBP_VanishOnDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Raven_AnimBP_VanishOnDeath_C::ExecuteUbergraph_NPC_Raven_AnimBP_VanishOnDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Raven_AnimBP_VanishOnDeath_C", "ExecuteUbergraph_NPC_Raven_AnimBP_VanishOnDeath");

	Params::NPC_Raven_AnimBP_VanishOnDeath_C_ExecuteUbergraph_NPC_Raven_AnimBP_VanishOnDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

