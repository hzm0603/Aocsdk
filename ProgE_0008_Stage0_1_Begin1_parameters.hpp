﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgE_0008_Stage0_1_Begin1

#include "Basic.hpp"

#include "MovieScene_structs.hpp"


namespace SDK::Params
{

// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.ExecuteUbergraph_ProgE_0008_Stage0-1_Begin1_DirectorBP
// 0x0058 (0x0058 - 0x0000)
struct ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AEmitter*                               K2Node_CustomEvent_PS_FireNecrotic_Wreckless;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_C*                          K2Node_DynamicCast_AsPlayer_Pawn;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_C*                          K2Node_DynamicCast_AsPlayer_Pawn_1;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AAoCCameraManager*                      CallFunc_GetCameraManager_CameraManager;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAoCCameraManager*                      CallFunc_GetCameraManager_CameraManager_1;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP) == 0x000008, "Wrong alignment on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP");
static_assert(sizeof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP) == 0x000058, "Wrong size on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, EntryPoint) == 0x000000, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, K2Node_CustomEvent_PS_FireNecrotic_Wreckless) == 0x000008, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::K2Node_CustomEvent_PS_FireNecrotic_Wreckless' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_GetPlayerPawn_ReturnValue) == 0x000010, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000018, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, K2Node_DynamicCast_AsPlayer_Pawn) == 0x000020, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::K2Node_DynamicCast_AsPlayer_Pawn' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, K2Node_DynamicCast_AsPlayer_Pawn_1) == 0x000030, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::K2Node_DynamicCast_AsPlayer_Pawn_1' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_IsValid_ReturnValue_1) == 0x00003A, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_GetCameraManager_CameraManager) == 0x000040, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_GetCameraManager_CameraManager' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_GetCameraManager_CameraManager_1) == 0x000048, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_GetCameraManager_CameraManager_1' has a wrong offset!");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP, CallFunc_StartCameraShake_ReturnValue) == 0x000050, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_ExecuteUbergraph_ProgE_0008_Stage0_1_Begin1_DirectorBP::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");

// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.PS_FireNecrotic_Wreckless_DynamicBinding
// 0x0010 (0x0010 - 0x0000)
struct ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding final
{
public:
	struct FMovieSceneDynamicBindingResolveResult ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor)
};
static_assert(alignof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding) == 0x000008, "Wrong alignment on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding");
static_assert(sizeof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding) == 0x000010, "Wrong size on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding, ReturnValue) == 0x000000, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_DynamicBinding::ReturnValue' has a wrong offset!");

// Function ProgE_0008_Stage0-1_Begin1.ProgE_0008_Stage0-1_Begin1_DirectorBP_C.PS_FireNecrotic_Wreckless_Event
// 0x0008 (0x0008 - 0x0000)
struct ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event final
{
public:
	class AEmitter*                               PS_FireNecrotic_Wreckless;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event) == 0x000008, "Wrong alignment on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event");
static_assert(sizeof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event) == 0x000008, "Wrong size on ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event");
static_assert(offsetof(ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event, PS_FireNecrotic_Wreckless) == 0x000000, "Member 'ProgE_0008_Stage0_1_Begin1_DirectorBP_C_PS_FireNecrotic_Wreckless_Event::PS_FireNecrotic_Wreckless' has a wrong offset!");

}

