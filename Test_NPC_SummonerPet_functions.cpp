﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test_NPC_SummonerPet

#include "Basic.hpp"

#include "Test_NPC_SummonerPet_classes.hpp"
#include "Test_NPC_SummonerPet_parameters.hpp"


namespace SDK
{

// Function Test_NPC_SummonerPet.Test_NPC_SummonerPet_C.ExecuteUbergraph_Test_NPC_SummonerPet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATest_NPC_SummonerPet_C::ExecuteUbergraph_Test_NPC_SummonerPet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Test_NPC_SummonerPet_C", "ExecuteUbergraph_Test_NPC_SummonerPet");

	Params::Test_NPC_SummonerPet_C_ExecuteUbergraph_Test_NPC_SummonerPet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Test_NPC_SummonerPet.Test_NPC_SummonerPet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATest_NPC_SummonerPet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Test_NPC_SummonerPet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

