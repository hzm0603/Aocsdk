﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_Turn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TurnAngleAnimationMap_structs.hpp"
#include "DesignDataPlugin_structs.hpp"
#include "StateTreeModule_structs.hpp"
#include "STT_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_Turn.STT_Turn_C
// 0x00C8 (0x0140 - 0x0078)
class USTT_Turn_C final : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAoCExpression                         Target_Expression;                                 // 0x0080(0x0050)(Edit, BlueprintVisible)
	class ABaseCharacter*                         Target;                                            // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTurnAngleAnimationMap>         AngleMontageMap;                                   // 0x00D8(0x0010)(Edit, BlueprintVisible)
	double                                        TurnSpeedScale;                                    // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinTurnSpeed;                                      // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCPawn_C*                             Agent;                                             // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        AngleToTurn;                                       // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          SequenceToPlayer;                                  // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TurnLeft;                                          // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AngleTurned;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AngleTurnOnTick;                                   // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         StoredTarget;                                      // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_Turn(int32 EntryPoint);
	void GetTurnDirectionAndAngle();
	void ReceiveExitState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentTick(const float DeltaTime);
	void ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_Turn_C">();
	}
	static class USTT_Turn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_Turn_C>();
	}
};
static_assert(alignof(USTT_Turn_C) == 0x000008, "Wrong alignment on USTT_Turn_C");
static_assert(sizeof(USTT_Turn_C) == 0x000140, "Wrong size on USTT_Turn_C");
static_assert(offsetof(USTT_Turn_C, UberGraphFrame) == 0x000078, "Member 'USTT_Turn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, Target_Expression) == 0x000080, "Member 'USTT_Turn_C::Target_Expression' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, Target) == 0x0000D0, "Member 'USTT_Turn_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, AngleMontageMap) == 0x0000D8, "Member 'USTT_Turn_C::AngleMontageMap' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, TurnSpeedScale) == 0x0000E8, "Member 'USTT_Turn_C::TurnSpeedScale' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, MinTurnSpeed) == 0x0000F0, "Member 'USTT_Turn_C::MinTurnSpeed' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, Timer) == 0x0000F8, "Member 'USTT_Turn_C::Timer' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, Agent) == 0x000100, "Member 'USTT_Turn_C::Agent' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, AngleToTurn) == 0x000108, "Member 'USTT_Turn_C::AngleToTurn' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, SequenceToPlayer) == 0x000110, "Member 'USTT_Turn_C::SequenceToPlayer' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, TurnLeft) == 0x000118, "Member 'USTT_Turn_C::TurnLeft' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, AngleTurned) == 0x000120, "Member 'USTT_Turn_C::AngleTurned' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, AngleTurnOnTick) == 0x000128, "Member 'USTT_Turn_C::AngleTurnOnTick' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, StoredTarget) == 0x000130, "Member 'USTT_Turn_C::StoredTarget' has a wrong offset!");
static_assert(offsetof(USTT_Turn_C, Length) == 0x000138, "Member 'USTT_Turn_C::Length' has a wrong offset!");

}

