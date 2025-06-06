﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABLScript_MagmaGolem_TurnOffSolidificationMat

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABLScript_MagmaGolem_TurnOffSolidificationMat.ABLScript_MagmaGolem_TurnOffSolidificationMat_C.RunScript
// 0x0078 (0x0078 - 0x0000)
struct ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript final
{
public:
	struct FScriptActorInfo                       Target;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FScriptActorInfo                       Instigator;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FScriptActorInfo                       Source;                                            // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	struct FVector                                AttackOrigin;                                      // 0x0030(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptTriggerInfo                     TriggerInfo;                                       // 0x0048(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         ReturnValue;                                       // 0x0060(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMagmaGolem_Bellowsmasher_C*            K2Node_DynamicCast_AsMagma_Golem_Bellowsmasher;    // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript) == 0x000008, "Wrong alignment on ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript");
static_assert(sizeof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript) == 0x000078, "Wrong size on ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, Target) == 0x000000, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::Target' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, Instigator) == 0x000010, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::Instigator' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, Source) == 0x000020, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::Source' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, AttackOrigin) == 0x000030, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::AttackOrigin' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, TriggerInfo) == 0x000048, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::TriggerInfo' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, ReturnValue) == 0x000060, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, K2Node_DynamicCast_AsMagma_Golem_Bellowsmasher) == 0x000068, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::K2Node_DynamicCast_AsMagma_Golem_Bellowsmasher' has a wrong offset!");
static_assert(offsetof(ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'ABLScript_MagmaGolem_TurnOffSolidificationMat_C_RunScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

