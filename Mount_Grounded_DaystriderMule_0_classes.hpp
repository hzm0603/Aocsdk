﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mount_Grounded_DaystriderMule_0

#include "Basic.hpp"

#include "Mount_Grounded_Base_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mount_Grounded_DaystriderMule_0.Mount_Grounded_DaystriderMule_0_C
// 0x0020 (0x16B0 - 0x1690)
class AMount_Grounded_DaystriderMule_0_C : public AMount_Grounded_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Mount_Grounded_DaystriderMule_0_C;  // 0x1690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*    AIPerceptionStimuliSource_0;                       // 0x1698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera_0;                                          // 0x16A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm_0;                                       // 0x16A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Mount_Grounded_DaystriderMule_0(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mount_Grounded_DaystriderMule_0_C">();
	}
	static class AMount_Grounded_DaystriderMule_0_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMount_Grounded_DaystriderMule_0_C>();
	}
};
static_assert(alignof(AMount_Grounded_DaystriderMule_0_C) == 0x000010, "Wrong alignment on AMount_Grounded_DaystriderMule_0_C");
static_assert(sizeof(AMount_Grounded_DaystriderMule_0_C) == 0x0016B0, "Wrong size on AMount_Grounded_DaystriderMule_0_C");
static_assert(offsetof(AMount_Grounded_DaystriderMule_0_C, UberGraphFrame_Mount_Grounded_DaystriderMule_0_C) == 0x001690, "Member 'AMount_Grounded_DaystriderMule_0_C::UberGraphFrame_Mount_Grounded_DaystriderMule_0_C' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_DaystriderMule_0_C, AIPerceptionStimuliSource_0) == 0x001698, "Member 'AMount_Grounded_DaystriderMule_0_C::AIPerceptionStimuliSource_0' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_DaystriderMule_0_C, Camera_0) == 0x0016A0, "Member 'AMount_Grounded_DaystriderMule_0_C::Camera_0' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_DaystriderMule_0_C, SpringArm_0) == 0x0016A8, "Member 'AMount_Grounded_DaystriderMule_0_C::SpringArm_0' has a wrong offset!");

}

