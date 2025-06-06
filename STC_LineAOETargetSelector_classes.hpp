﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_LineAOETargetSelector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STC_LineAOETargetSelector.STC_LineAOETargetSelector_C
// 0x0038 (0x00A0 - 0x0068)
class USTC_LineAOETargetSelector_C final : public UStateTreeConditionBlueprintBase
{
public:
	class ANPCPawn_C*                             Agent;                                             // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Box;                                               // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offset;                                            // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SingleTargetMinScore;                              // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BB_Storage;                                        // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveTestCondition() const;
	void Score_Individual_Target(class ABaseCharacter* TargetToScore, const struct FVector& Direction, double* Score) const;
	void Score_Target(class ABaseCharacter* Target_To_Score, double* Score) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STC_LineAOETargetSelector_C">();
	}
	static class USTC_LineAOETargetSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTC_LineAOETargetSelector_C>();
	}
};
static_assert(alignof(USTC_LineAOETargetSelector_C) == 0x000008, "Wrong alignment on USTC_LineAOETargetSelector_C");
static_assert(sizeof(USTC_LineAOETargetSelector_C) == 0x0000A0, "Wrong size on USTC_LineAOETargetSelector_C");
static_assert(offsetof(USTC_LineAOETargetSelector_C, Agent) == 0x000068, "Member 'USTC_LineAOETargetSelector_C::Agent' has a wrong offset!");
static_assert(offsetof(USTC_LineAOETargetSelector_C, Box) == 0x000070, "Member 'USTC_LineAOETargetSelector_C::Box' has a wrong offset!");
static_assert(offsetof(USTC_LineAOETargetSelector_C, Offset) == 0x000088, "Member 'USTC_LineAOETargetSelector_C::Offset' has a wrong offset!");
static_assert(offsetof(USTC_LineAOETargetSelector_C, SingleTargetMinScore) == 0x000090, "Member 'USTC_LineAOETargetSelector_C::SingleTargetMinScore' has a wrong offset!");
static_assert(offsetof(USTC_LineAOETargetSelector_C, BB_Storage) == 0x000098, "Member 'USTC_LineAOETargetSelector_C::BB_Storage' has a wrong offset!");

}

