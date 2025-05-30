﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_Bandit_Rogue_MoveToCascadeLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "STT_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_Bandit_Rogue_MoveToCascadeLocation.STT_Bandit_Rogue_MoveToCascadeLocation_C
// 0x0020 (0x0098 - 0x0078)
class USTT_Bandit_Rogue_MoveToCascadeLocation_C final : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter*                         Target;                                            // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Optimal_Distance;                                  // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCPawn_C*                             Agent;                                             // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_Bandit_Rogue_MoveToCascadeLocation(int32 EntryPoint);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_Bandit_Rogue_MoveToCascadeLocation_C">();
	}
	static class USTT_Bandit_Rogue_MoveToCascadeLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_Bandit_Rogue_MoveToCascadeLocation_C>();
	}
};
static_assert(alignof(USTT_Bandit_Rogue_MoveToCascadeLocation_C) == 0x000008, "Wrong alignment on USTT_Bandit_Rogue_MoveToCascadeLocation_C");
static_assert(sizeof(USTT_Bandit_Rogue_MoveToCascadeLocation_C) == 0x000098, "Wrong size on USTT_Bandit_Rogue_MoveToCascadeLocation_C");
static_assert(offsetof(USTT_Bandit_Rogue_MoveToCascadeLocation_C, UberGraphFrame) == 0x000078, "Member 'USTT_Bandit_Rogue_MoveToCascadeLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_Bandit_Rogue_MoveToCascadeLocation_C, Target) == 0x000080, "Member 'USTT_Bandit_Rogue_MoveToCascadeLocation_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_Bandit_Rogue_MoveToCascadeLocation_C, Optimal_Distance) == 0x000088, "Member 'USTT_Bandit_Rogue_MoveToCascadeLocation_C::Optimal_Distance' has a wrong offset!");
static_assert(offsetof(USTT_Bandit_Rogue_MoveToCascadeLocation_C, Agent) == 0x000090, "Member 'USTT_Bandit_Rogue_MoveToCascadeLocation_C::Agent' has a wrong offset!");

}

