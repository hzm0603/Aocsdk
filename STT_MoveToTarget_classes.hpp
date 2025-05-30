﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_MoveToTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DesignDataPlugin_structs.hpp"
#include "EAIMovementOrientation_structs.hpp"
#include "STT_Base_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_MoveToTarget.STT_MoveToTarget_C
// 0x00F0 (0x0168 - 0x0078)
class USTT_MoveToTarget_C final : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ANPCCharacter*                          Agent;                                             // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FAoCExpression                         Target_Expression;                                 // 0x0088(0x0050)(Edit, BlueprintVisible)
	class AActor*                                 Target;                                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FAoCExpression                         Speed_Multiplier;                                  // 0x00E0(0x0050)(Edit, BlueprintVisible)
	EAIMovementOrientation                        OrientationScheme;                                 // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ArrivalDistance;                                   // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Consider_Pawn_Radius;                              // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stop_At_Arrival;                                   // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_142[0x6];                                      // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StationaryRotationRate;                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed_Multiplier_Value;                            // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OriginalSpeed;                                     // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Stored_Target;                                     // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_MoveToTarget(int32 EntryPoint);
	void ReceiveExitState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentTick(const float DeltaTime);
	void RotateToTarget(const struct FVector& TargetVec, class AActor* Source, double YawDelta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_MoveToTarget_C">();
	}
	static class USTT_MoveToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_MoveToTarget_C>();
	}
};
static_assert(alignof(USTT_MoveToTarget_C) == 0x000008, "Wrong alignment on USTT_MoveToTarget_C");
static_assert(sizeof(USTT_MoveToTarget_C) == 0x000168, "Wrong size on USTT_MoveToTarget_C");
static_assert(offsetof(USTT_MoveToTarget_C, UberGraphFrame) == 0x000078, "Member 'USTT_MoveToTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Agent) == 0x000080, "Member 'USTT_MoveToTarget_C::Agent' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Target_Expression) == 0x000088, "Member 'USTT_MoveToTarget_C::Target_Expression' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Target) == 0x0000D8, "Member 'USTT_MoveToTarget_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Speed_Multiplier) == 0x0000E0, "Member 'USTT_MoveToTarget_C::Speed_Multiplier' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, OrientationScheme) == 0x000130, "Member 'USTT_MoveToTarget_C::OrientationScheme' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, ArrivalDistance) == 0x000138, "Member 'USTT_MoveToTarget_C::ArrivalDistance' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Consider_Pawn_Radius) == 0x000140, "Member 'USTT_MoveToTarget_C::Consider_Pawn_Radius' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Stop_At_Arrival) == 0x000141, "Member 'USTT_MoveToTarget_C::Stop_At_Arrival' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, StationaryRotationRate) == 0x000148, "Member 'USTT_MoveToTarget_C::StationaryRotationRate' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Speed_Multiplier_Value) == 0x000150, "Member 'USTT_MoveToTarget_C::Speed_Multiplier_Value' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, OriginalSpeed) == 0x000158, "Member 'USTT_MoveToTarget_C::OriginalSpeed' has a wrong offset!");
static_assert(offsetof(USTT_MoveToTarget_C, Stored_Target) == 0x000160, "Member 'USTT_MoveToTarget_C::Stored_Target' has a wrong offset!");

}

