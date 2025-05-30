﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SkillTree

#include "Basic.hpp"

#include "WBP_SkillTree_classes.hpp"
#include "WBP_SkillTree_parameters.hpp"


namespace SDK
{

// Function WBP_SkillTree.WBP_SkillTree_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTree_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTree_C", "PreConstruct");

	Params::WBP_SkillTree_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTree.WBP_SkillTree_C.ExecuteUbergraph_WBP_SkillTree
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTree_C::ExecuteUbergraph_WBP_SkillTree(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTree_C", "ExecuteUbergraph_WBP_SkillTree");

	Params::WBP_SkillTree_C_ExecuteUbergraph_WBP_SkillTree Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

