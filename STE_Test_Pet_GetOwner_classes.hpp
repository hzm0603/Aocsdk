﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STE_Test_Pet_GetOwner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STE_Test_Pet_GetOwner.STE_Test_Pet_GetOwner_C
// 0x0020 (0x0088 - 0x0068)
class USTE_Test_Pet_GetOwner_C final : public UStateTreeEvaluatorBlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0068(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATest_NPC_SummonerPet_C*                Agent;                                             // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         PetOwner;                                          // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        PlayerRadius;                                      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STE_Test_Pet_GetOwner(int32 EntryPoint);
	void ReceiveTreeStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STE_Test_Pet_GetOwner_C">();
	}
	static class USTE_Test_Pet_GetOwner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTE_Test_Pet_GetOwner_C>();
	}
};
static_assert(alignof(USTE_Test_Pet_GetOwner_C) == 0x000008, "Wrong alignment on USTE_Test_Pet_GetOwner_C");
static_assert(sizeof(USTE_Test_Pet_GetOwner_C) == 0x000088, "Wrong size on USTE_Test_Pet_GetOwner_C");
static_assert(offsetof(USTE_Test_Pet_GetOwner_C, UberGraphFrame) == 0x000068, "Member 'USTE_Test_Pet_GetOwner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTE_Test_Pet_GetOwner_C, Agent) == 0x000070, "Member 'USTE_Test_Pet_GetOwner_C::Agent' has a wrong offset!");
static_assert(offsetof(USTE_Test_Pet_GetOwner_C, PetOwner) == 0x000078, "Member 'USTE_Test_Pet_GetOwner_C::PetOwner' has a wrong offset!");
static_assert(offsetof(USTE_Test_Pet_GetOwner_C, PlayerRadius) == 0x000080, "Member 'USTE_Test_Pet_GetOwner_C::PlayerRadius' has a wrong offset!");

}

