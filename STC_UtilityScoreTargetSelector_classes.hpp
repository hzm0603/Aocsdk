﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_UtilityScoreTargetSelector

#include "Basic.hpp"

#include "EAIUtilityScoringScheme_structs.hpp"
#include "Engine_structs.hpp"
#include "DesignDataPlugin_structs.hpp"
#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STC_UtilityScoreTargetSelector.STC_UtilityScoreTargetSelector_C
// 0x0090 (0x00F8 - 0x0068)
class USTC_UtilityScoreTargetSelector_C final : public UStateTreeConditionBlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0068(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ANPCCharacter*                          Agent;                                             // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FAoCExpression                         Consideration_Context;                             // 0x0078(0x0050)(Edit, BlueprintVisible)
	TArray<struct FAoCExpression>                 Considerations;                                    // 0x00C8(0x0010)(Edit, BlueprintVisible)
	EAIUtilityScoringScheme                       Scoring_Scheme;                                    // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   BB_Storage;                                        // 0x00DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Clear_BB_Var_at_Failure;                           // 0x00E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E5[0x3];                                       // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABaseCharacter*>                 Potential_Targets;                                 // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_STC_UtilityScoreTargetSelector(int32 EntryPoint);

	void CalculateScore(TArray<double>& Values, EAIUtilityScoringScheme Scheme, double* Result) const;
	bool ReceiveTestCondition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STC_UtilityScoreTargetSelector_C">();
	}
	static class USTC_UtilityScoreTargetSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTC_UtilityScoreTargetSelector_C>();
	}
};
static_assert(alignof(USTC_UtilityScoreTargetSelector_C) == 0x000008, "Wrong alignment on USTC_UtilityScoreTargetSelector_C");
static_assert(sizeof(USTC_UtilityScoreTargetSelector_C) == 0x0000F8, "Wrong size on USTC_UtilityScoreTargetSelector_C");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, UberGraphFrame) == 0x000068, "Member 'USTC_UtilityScoreTargetSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Agent) == 0x000070, "Member 'USTC_UtilityScoreTargetSelector_C::Agent' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Consideration_Context) == 0x000078, "Member 'USTC_UtilityScoreTargetSelector_C::Consideration_Context' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Considerations) == 0x0000C8, "Member 'USTC_UtilityScoreTargetSelector_C::Considerations' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Scoring_Scheme) == 0x0000D8, "Member 'USTC_UtilityScoreTargetSelector_C::Scoring_Scheme' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, BB_Storage) == 0x0000DC, "Member 'USTC_UtilityScoreTargetSelector_C::BB_Storage' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Clear_BB_Var_at_Failure) == 0x0000E4, "Member 'USTC_UtilityScoreTargetSelector_C::Clear_BB_Var_at_Failure' has a wrong offset!");
static_assert(offsetof(USTC_UtilityScoreTargetSelector_C, Potential_Targets) == 0x0000E8, "Member 'USTC_UtilityScoreTargetSelector_C::Potential_Targets' has a wrong offset!");

}

