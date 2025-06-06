﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STC_ElderDragon_Fire_CircleAOETargetSelector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function STC_ElderDragon_Fire_CircleAOETargetSelector.STC_ElderDragon_Fire_CircleAOETargetSelector_C.Score Target
// 0x00F8 (0x00F8 - 0x0000)
struct STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target final
{
public:
	class ABaseCharacter*                         Target_To_Score;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Score;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AccumulatedScore;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Score_Individual_Target_Score;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FHateEntry>         CallFunc_GetHatedCharacters_ReturnValue;           // 0x0068(0x0050)()
	TArray<struct FHateEntry>                     CallFunc_Map_Values_Values;                        // 0x00B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHateEntry                             CallFunc_Array_Get_Item;                           // 0x00CC(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Score_Individual_Target_Score_1;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target) == 0x000008, "Wrong alignment on STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target");
static_assert(sizeof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target) == 0x0000F8, "Wrong size on STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, Target_To_Score) == 0x000000, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::Target_To_Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, Score) == 0x000008, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, AccumulatedScore) == 0x000010, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::AccumulatedScore' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, Temp_int_Array_Index_Variable) == 0x000030, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Score_Individual_Target_Score) == 0x000038, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Score_Individual_Target_Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000050, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_GetHatedCharacters_ReturnValue) == 0x000068, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_GetHatedCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Map_Values_Values) == 0x0000B8, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Array_Get_Item) == 0x0000CC, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Score_Individual_Target_Score_1) == 0x0000E8, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Score_Individual_Target_Score_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000F0, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Target::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function STC_ElderDragon_Fire_CircleAOETargetSelector.STC_ElderDragon_Fire_CircleAOETargetSelector_C.Score Individual Target
// 0x00A8 (0x00A8 - 0x0000)
struct STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target final
{
public:
	class ABaseCharacter*                         TargetToScore;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactLocation;                                    // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Score;                                             // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue_1;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target) == 0x000008, "Wrong alignment on STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target");
static_assert(sizeof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target) == 0x0000A8, "Wrong size on STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, TargetToScore) == 0x000000, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::TargetToScore' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, ImpactLocation) == 0x000008, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::ImpactLocation' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, Score) == 0x000020, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Vector_Distance_ReturnValue) == 0x000058, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000060, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Lerp_ReturnValue) == 0x000078, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000080, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Vector_Distance_ReturnValue_1) == 0x000098, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Vector_Distance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000A1, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target, CallFunc_BooleanOR_ReturnValue) == 0x0000A2, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_Score_Individual_Target::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function STC_ElderDragon_Fire_CircleAOETargetSelector.STC_ElderDragon_Fire_CircleAOETargetSelector_C.ReceiveTestCondition
// 0x00C8 (0x00C8 - 0x0000)
struct STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABaseCharacter*                         Best_Target;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Best_Score;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, struct FHateEntry>         CallFunc_GetHatedCharacters_ReturnValue;           // 0x0038(0x0050)()
	TArray<struct FHateEntry>                     CallFunc_Map_Values_Values;                        // 0x0088(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHateEntry                             CallFunc_Array_Get_Item;                           // 0x009C(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Score_Target_Score;                       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition) == 0x000008, "Wrong alignment on STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition");
static_assert(sizeof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition) == 0x0000C8, "Wrong size on STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, ReturnValue) == 0x000000, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, Best_Target) == 0x000008, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::Best_Target' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, Best_Score) == 0x000010, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::Best_Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, Temp_int_Array_Index_Variable) == 0x000018, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_GetBlackboard_ReturnValue) == 0x000028, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_GetHatedCharacters_ReturnValue) == 0x000038, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_GetHatedCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Map_Values_Values) == 0x000088, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Array_Get_Item) == 0x00009C, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Score_Target_Score) == 0x0000B8, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Score_Target_Score' has a wrong offset!");
static_assert(offsetof(STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'STC_ElderDragon_Fire_CircleAOETargetSelector_C_ReceiveTestCondition::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

}

