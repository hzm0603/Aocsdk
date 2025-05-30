﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElderDragon_Fire_RainofFire_FireBallDrop

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ElderDragon_Fire_RainofFire_FireBallDrop.ElderDragon_Fire_RainofFire_FireBallDrop_C.ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop
// 0x0520 (0x0520 - 0x0000)
struct ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLingeringEffectRecord                 CallFunc_GetLingeringEffectRecordById_ReturnValue; // 0x0010(0x03B8)(ConstParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x03C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCharacterLevel_ReturnValue;            // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0400(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0420(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0450(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0468(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0480(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAoCAbilityLingeringEffect*             CallFunc_SpawnLingeringZoneAtLocation_ReturnValue; // 0x04E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANPCCharacter*                          CallFunc_SpawnNPC_ReturnValue;                     // 0x04E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AElderDragon_Fire_FlamePatch_C*         K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Patch; // 0x04F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F9[0x7];                                      // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AElderDragon_Fire_FlameMinion_C*        K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Minion; // 0x0500(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509[0x7];                                      // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0510(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0518(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop) == 0x000010, "Wrong alignment on ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop");
static_assert(sizeof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop) == 0x000520, "Wrong size on ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, EntryPoint) == 0x000000, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_IsDead_ReturnValue) == 0x000004, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_GetLingeringEffectRecordById_ReturnValue) == 0x000010, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_GetLingeringEffectRecordById_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0003C8, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_GetCharacterLevel_ReturnValue) == 0x0003E0, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_GetCharacterLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0003E8, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000400, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_MakeLiteralName_ReturnValue) == 0x000418, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000420, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_BreakVector_X) == 0x000438, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_BreakVector_Y) == 0x000440, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_BreakVector_Z) == 0x000448, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_MakeVector_ReturnValue) == 0x000450, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_MakeRotFromX_ReturnValue) == 0x000468, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_MakeTransform_ReturnValue) == 0x000480, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_SpawnLingeringZoneAtLocation_ReturnValue) == 0x0004E0, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_SpawnLingeringZoneAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_SpawnNPC_ReturnValue) == 0x0004E8, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_SpawnNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Patch) == 0x0004F0, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Patch' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, K2Node_DynamicCast_bSuccess) == 0x0004F8, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Minion) == 0x000500, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::K2Node_DynamicCast_AsElder_Dragon_Fire_Flame_Minion' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, K2Node_DynamicCast_bSuccess_1) == 0x000508, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_GetBlackboard_ReturnValue) == 0x000510, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop, CallFunc_Array_Add_ReturnValue) == 0x000518, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ExecuteUbergraph_ElderDragon_Fire_RainofFire_FireBallDrop::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ElderDragon_Fire_RainofFire_FireBallDrop.ElderDragon_Fire_RainofFire_FireBallDrop_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick) == 0x000004, "Wrong alignment on ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick");
static_assert(sizeof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick) == 0x000004, "Wrong size on ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick");
static_assert(offsetof(ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'ElderDragon_Fire_RainofFire_FireBallDrop_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

