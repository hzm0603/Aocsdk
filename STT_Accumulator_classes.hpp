﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_Accumulator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DesignDataPlugin_structs.hpp"
#include "STT_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_Accumulator.STT_Accumulator_C
// 0x0090 (0x0108 - 0x0078)
class USTT_Accumulator_C : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CurrentValue;                                      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetValue;                                       // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCPawn_C*                             Agent;                                             // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                   Identifier;                                        // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAoCExpression                         Target_Value_Expr;                                 // 0x00A0(0x0050)(Edit, BlueprintVisible)
	int32                                         InitialCharge;                                     // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Charge;                                            // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCharge;                                         // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ChargeBBVarStorage;                                // 0x00FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Accumulate(double DeltaTime);
	void ChargeAccumulator(class FName Identifier_0, int32 Number, bool ResetAccumulator, bool ReRoll);
	void ExecuteUbergraph_STT_Accumulator(int32 EntryPoint);
	void ReceiveExitState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);
	void ReceiveLatentTick(const float DeltaTime);
	void SetAccumulatorTarget(double TargetValue_0, bool Permanent);
	void SetTargetValue();
	void StoreChargeToBBVar();
	void UpdateCharge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_Accumulator_C">();
	}
	static class USTT_Accumulator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_Accumulator_C>();
	}
};
static_assert(alignof(USTT_Accumulator_C) == 0x000008, "Wrong alignment on USTT_Accumulator_C");
static_assert(sizeof(USTT_Accumulator_C) == 0x000108, "Wrong size on USTT_Accumulator_C");
static_assert(offsetof(USTT_Accumulator_C, UberGraphFrame) == 0x000078, "Member 'USTT_Accumulator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, CurrentValue) == 0x000080, "Member 'USTT_Accumulator_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, TargetValue) == 0x000088, "Member 'USTT_Accumulator_C::TargetValue' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, Agent) == 0x000090, "Member 'USTT_Accumulator_C::Agent' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, Identifier) == 0x000098, "Member 'USTT_Accumulator_C::Identifier' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, Target_Value_Expr) == 0x0000A0, "Member 'USTT_Accumulator_C::Target_Value_Expr' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, InitialCharge) == 0x0000F0, "Member 'USTT_Accumulator_C::InitialCharge' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, Charge) == 0x0000F4, "Member 'USTT_Accumulator_C::Charge' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, MaxCharge) == 0x0000F8, "Member 'USTT_Accumulator_C::MaxCharge' has a wrong offset!");
static_assert(offsetof(USTT_Accumulator_C, ChargeBBVarStorage) == 0x0000FC, "Member 'USTT_Accumulator_C::ChargeBBVarStorage' has a wrong offset!");

}

