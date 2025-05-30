﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_FindPairedInteractNPC

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "StateTreeModule_structs.hpp"


namespace SDK::Params
{

// Function STT_FindPairedInteractNPC.STT_FindPairedInteractNPC_C.ReceiveLatentEnterState
// 0x002E (0x002E - 0x0000)
struct STT_FindPairedInteractNPC_C_ReceiveLatentEnterState final
{
public:
	struct FStateTreeTransitionResult             Transition;                                        // 0x0000(0x002E)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(STT_FindPairedInteractNPC_C_ReceiveLatentEnterState) == 0x000002, "Wrong alignment on STT_FindPairedInteractNPC_C_ReceiveLatentEnterState");
static_assert(sizeof(STT_FindPairedInteractNPC_C_ReceiveLatentEnterState) == 0x00002E, "Wrong size on STT_FindPairedInteractNPC_C_ReceiveLatentEnterState");
static_assert(offsetof(STT_FindPairedInteractNPC_C_ReceiveLatentEnterState, Transition) == 0x000000, "Member 'STT_FindPairedInteractNPC_C_ReceiveLatentEnterState::Transition' has a wrong offset!");

// Function STT_FindPairedInteractNPC.STT_FindPairedInteractNPC_C.FindInteractableCharacterWithTag
// 0x00D8 (0x00D8 - 0x0000)
struct STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag final
{
public:
	float                                         TempDist;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ClosestDistance;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         ClosestCharacter;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class ABaseCharacter*>                 PotentialCharacters;                               // 0x0018(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UAIIntelligenceComponent*               IntComponent;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIIntelligenceComponent*               CallFunc_GetIntelligenceComponent_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCCharacter*                          K2Node_DynamicCast_AsNPCCharacter;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item_1;                         // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABaseCharacter*                         CallFunc_GetBaseCharacterFromGuid_ReturnValue;     // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANPCCharacter*                          K2Node_DynamicCast_AsNPCCharacter_1;               // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x2];                                       // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsHated_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_ClosestDistance_ImplicitCast;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag) == 0x000008, "Wrong alignment on STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag");
static_assert(sizeof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag) == 0x0000D8, "Wrong size on STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, TempDist) == 0x000000, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::TempDist' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, ClosestDistance) == 0x000008, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::ClosestDistance' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, ClosestCharacter) == 0x000010, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::ClosestCharacter' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, PotentialCharacters) == 0x000018, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::PotentialCharacters' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, IntComponent) == 0x000028, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::IntComponent' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, Temp_int_Array_Index_Variable) == 0x000030, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_GetOuterObject_ReturnValue) == 0x000048, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_GetIntelligenceComponent_ReturnValue) == 0x000050, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_GetIntelligenceComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Get_Item) == 0x000058, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, Temp_int_Loop_Counter_Variable_1) == 0x000064, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, K2Node_DynamicCast_AsNPCCharacter) == 0x000068, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::K2Node_DynamicCast_AsNPCCharacter' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00008D, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00008E, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_BooleanOR_ReturnValue) == 0x00008F, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_GetDistanceTo_ReturnValue) == 0x000090, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_GetBaseCharacterFromGuid_ReturnValue) == 0x000098, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_GetBaseCharacterFromGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, K2Node_DynamicCast_AsNPCCharacter_1) == 0x0000A0, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::K2Node_DynamicCast_AsNPCCharacter_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0000A9, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Add_ReturnValue) == 0x0000AC, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Map_Keys_Keys) == 0x0000B0, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_IsHated_ReturnValue) == 0x0000C0, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_IsHated_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Array_Contains_ReturnValue) == 0x0000C1, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Not_PreBool_ReturnValue) == 0x0000C2, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_BooleanAND_ReturnValue) == 0x0000C3, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, K2Node_VariableSet_ClosestDistance_ImplicitCast) == 0x0000C8, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::K2Node_VariableSet_ClosestDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'STT_FindPairedInteractNPC_C_FindInteractableCharacterWithTag::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function STT_FindPairedInteractNPC.STT_FindPairedInteractNPC_C.ExecuteUbergraph_STT_FindPairedInteractNPC
// 0x0034 (0x0034 - 0x0000)
struct STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x1];                                        // 0x0005(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStateTreeTransitionResult             K2Node_Event_Transition;                           // 0x0006(0x002E)(ConstParm, NoDestructor)
};
static_assert(alignof(STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC) == 0x000004, "Wrong alignment on STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC");
static_assert(sizeof(STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC) == 0x000034, "Wrong size on STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC");
static_assert(offsetof(STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC, EntryPoint) == 0x000000, "Member 'STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC, K2Node_Event_Transition) == 0x000006, "Member 'STT_FindPairedInteractNPC_C_ExecuteUbergraph_STT_FindPairedInteractNPC::K2Node_Event_Transition' has a wrong offset!");

}

