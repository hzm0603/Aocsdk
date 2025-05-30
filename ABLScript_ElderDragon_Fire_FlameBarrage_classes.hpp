﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABLScript_ElderDragon_Fire_FlameBarrage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ABLScript_ElderDragon_Fire_FlameBarrage.ABLScript_ElderDragon_Fire_FlameBarrage_C
// 0x0080 (0x10F0 - 0x1070)
class UABLScript_ElderDragon_Fire_FlameBarrage_C final : public UAoCNotifyBlueprint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Min_Target_Number;                                 // 0x1078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_Target_Number;                                 // 0x107C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Portion;                                           // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Range;                                             // 0x1088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Interval;                                          // 0x1090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AElderDragon_Fire_C*                    Agent;                                             // 0x1098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ABaseCharacter*>                 All_Targets;                                       // 0x10A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Current_Target_Number;                             // 0x10B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Target_Number;                                     // 0x10B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbilityHitId                          Hit_Id;                                            // 0x10B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x10D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEffectId                              Living_Bomb_Id;                                    // 0x10D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABLScript_ElderDragon_Fire_FlameBarrage(int32 EntryPoint);
	void HasLivingBombEffect(class ABaseCharacter* Target, bool* HasEffect);
	void NotifyBegin();
	void NotifyTick(float FrameDeltaTime);
	void PickTarget(class ABaseCharacter** New_Target);
	void RefreshTargetList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABLScript_ElderDragon_Fire_FlameBarrage_C">();
	}
	static class UABLScript_ElderDragon_Fire_FlameBarrage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABLScript_ElderDragon_Fire_FlameBarrage_C>();
	}
};
static_assert(alignof(UABLScript_ElderDragon_Fire_FlameBarrage_C) == 0x000008, "Wrong alignment on UABLScript_ElderDragon_Fire_FlameBarrage_C");
static_assert(sizeof(UABLScript_ElderDragon_Fire_FlameBarrage_C) == 0x0010F0, "Wrong size on UABLScript_ElderDragon_Fire_FlameBarrage_C");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, UberGraphFrame) == 0x001070, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Min_Target_Number) == 0x001078, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Min_Target_Number' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Max_Target_Number) == 0x00107C, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Max_Target_Number' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Portion) == 0x001080, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Portion' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Range) == 0x001088, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Range' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Interval) == 0x001090, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Interval' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Agent) == 0x001098, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Agent' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, All_Targets) == 0x0010A0, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::All_Targets' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Current_Target_Number) == 0x0010B0, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Current_Target_Number' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Target_Number) == 0x0010B4, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Target_Number' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Hit_Id) == 0x0010B8, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Hit_Id' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Timer) == 0x0010D0, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Timer' has a wrong offset!");
static_assert(offsetof(UABLScript_ElderDragon_Fire_FlameBarrage_C, Living_Bomb_Id) == 0x0010D8, "Member 'UABLScript_ElderDragon_Fire_FlameBarrage_C::Living_Bomb_Id' has a wrong offset!");

}

