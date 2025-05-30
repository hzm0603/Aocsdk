﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mount_Grounded_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mount_Grounded_Base.Mount_Grounded_Base_C
// 0x0060 (0x1630 - 0x15D0)
class AMount_Grounded_Base_C : public ABaseCharacter
{
public:
	uint8                                         Pad_15C8[0x8];                                     // 0x15C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNameplateComponent*                    Nameplate;                                         // 0x15D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                 InteractableComponent;                             // 0x15E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMountComponent_C*                      GroundMountComponent;                              // 0x15E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x15F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x15F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Target_Camera_Arm_Length;                          // 0x1600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InitialCameraArmLength;                            // 0x1608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialCameraBoomLocation;                         // 0x1610(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TurnRateVal;                                       // 0x1628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Mount_Grounded_Base(int32 EntryPoint);
	void GetAttachedCaravan();
	void GetMountSpringArmRotation();
	void QuestCompletedCaravan();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mount_Grounded_Base_C">();
	}
	static class AMount_Grounded_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMount_Grounded_Base_C>();
	}
};
static_assert(alignof(AMount_Grounded_Base_C) == 0x000010, "Wrong alignment on AMount_Grounded_Base_C");
static_assert(sizeof(AMount_Grounded_Base_C) == 0x001630, "Wrong size on AMount_Grounded_Base_C");
static_assert(offsetof(AMount_Grounded_Base_C, UberGraphFrame) == 0x0015D0, "Member 'AMount_Grounded_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, Nameplate) == 0x0015D8, "Member 'AMount_Grounded_Base_C::Nameplate' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, InteractableComponent) == 0x0015E0, "Member 'AMount_Grounded_Base_C::InteractableComponent' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, GroundMountComponent) == 0x0015E8, "Member 'AMount_Grounded_Base_C::GroundMountComponent' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, Camera) == 0x0015F0, "Member 'AMount_Grounded_Base_C::Camera' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, SpringArm) == 0x0015F8, "Member 'AMount_Grounded_Base_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, Target_Camera_Arm_Length) == 0x001600, "Member 'AMount_Grounded_Base_C::Target_Camera_Arm_Length' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, InitialCameraArmLength) == 0x001608, "Member 'AMount_Grounded_Base_C::InitialCameraArmLength' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, InitialCameraBoomLocation) == 0x001610, "Member 'AMount_Grounded_Base_C::InitialCameraBoomLocation' has a wrong offset!");
static_assert(offsetof(AMount_Grounded_Base_C, TurnRateVal) == 0x001628, "Member 'AMount_Grounded_Base_C::TurnRateVal' has a wrong offset!");

}

