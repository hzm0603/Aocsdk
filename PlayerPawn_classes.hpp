﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn.PlayerPawn_C
// 0x0220 (0x3120 - 0x2F00)
class APlayerPawn_C final : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2F00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNameplateComponent*                    Nameplate;                                         // 0x2F08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapRegistrationComponentBP_C*          MapRegistrationComponentBP;                        // 0x2F10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow_AbilityZoom;                                 // 0x2F18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_4FBCB1214BA0CA801C4918BA98BD1CB2; // 0x2F20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_4FBCB1214BA0CA801C4918BA98BD1CB2; // 0x2F24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F25[0x3];                                     // 0x2F25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x2F28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         FOVZoom_NewTrack_0_C00923114234D47E3BF353977B564A03; // 0x2F30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FOVZoom__Direction_C00923114234D47E3BF353977B564A03; // 0x2F34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F35[0x3];                                     // 0x2F35(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FOVZoom;                                           // 0x2F38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         InternalBlur_NewTrack_0_63DBE07544F10E79CE1D418A3B9108AD; // 0x2F40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            InternalBlur__Direction_63DBE07544F10E79CE1D418A3B9108AD; // 0x2F44(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F45[0x3];                                     // 0x2F45(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     InternalBlur;                                      // 0x2F48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         DodgeCameraLagEnd_NewTrack_0_998EEA624B675203C1066D9972DC5A25; // 0x2F50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DodgeCameraLagEnd__Direction_998EEA624B675203C1066D9972DC5A25; // 0x2F54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F55[0x3];                                     // 0x2F55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DodgeCameraLagEnd;                                 // 0x2F58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         GapCloseCameraLagEnd_NewTrack_0_EE809A294297C94F15DE85BB4556598E; // 0x2F60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            GapCloseCameraLagEnd__Direction_EE809A294297C94F15DE85BB4556598E; // 0x2F64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F65[0x3];                                     // 0x2F65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     GapCloseCameraLagEnd;                              // 0x2F68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_4_NewTrack_0_A044A8D4403210D966316DB92D3F9710; // 0x2F70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_4__Direction_A044A8D4403210D966316DB92D3F9710; // 0x2F74(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F75[0x3];                                     // 0x2F75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_4;                                        // 0x2F78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Percent_7C7585A743652924969B9CAADCEA8654; // 0x2F80(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_7C7585A743652924969B9CAADCEA8654; // 0x2F84(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F85[0x3];                                     // 0x2F85(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x2F88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class ABaseCharacter* DamageCauser, double Damage)> OnDamageReceived; // 0x2F90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSwimming;                                        // 0x2FA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA1[0x7];                                     // 0x2FA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InitialCameraArmLength;                            // 0x2FA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitialCameraBoomLocation;                         // 0x2FB0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class ABaseCharacter* Attacker)> OnEvasion;                        // 0x2FC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class ABaseCharacter* Attacker)> OnCast;                           // 0x2FD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UObject* AbilityCast, class UObject* AbilityData, TArray<class ABaseCharacter*>& Targets)> OnCastAbility; // 0x2FE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class ABaseCharacter* Attacker)> OnBlock;                          // 0x2FF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDodgeLag;                                        // 0x3008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGapCloseLag;                                     // 0x3009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_300A[0x6];                                     // 0x300A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CachedDefaultFOV;                                  // 0x3010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              DodgeSound;                                        // 0x3018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnStartChanneling;                                 // 0x3020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnEndChanneling;                                   // 0x3030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnFire;                                            // 0x3040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(double Damage, bool bCrit, class ABaseCharacter* TargetCharacter, int32 WeaponId)> OnDealDamageServer; // 0x3050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UObject* CastingAbility, class UObject* AbilityData, TArray<class ABaseCharacter*>& Targets)> OnCastAbilityClient; // 0x3060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnExperienceEarned;                                // 0x3070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnResurrectionTimer;                               // 0x3080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UObject* Item, int32 Slot)> OnStackSizeChangedEvent;         // 0x3090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          doFaceTarget;                                      // 0x30A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30A1[0x7];                                     // 0x30A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FaceTargetTime;                                    // 0x30A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         Face_Target;                                       // 0x30B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   LavaDamageName;                                    // 0x30B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          doFaceLocation;                                    // 0x30C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C1[0x7];                                     // 0x30C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FaceTargetLocation;                                // 0x30C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          doFaceDefensiveTarget;                             // 0x30E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30E1[0x7];                                     // 0x30E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           FaceTargetTimer;                                   // 0x30E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FaceTargetIsCaravan;                               // 0x30F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F1[0x7];                                     // 0x30F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CachedSprintIntensity;                             // 0x30F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitGMTagRetry;                                    // 0x3100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3101[0x7];                                     // 0x3101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FVector& Location)> OnSetLastDeathLocation;           // 0x3108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CaravanQuestCompletedBP();
	void CaravanQuestFailedBP();
	void CreateAndShowDeathWidget();
	void DamageFlinchBP(TSubclassOf<class UDamageType> DamageType);
	void DialogueServerEvent(class ANPCPawn_C* NPC, const class FString& Tag);
	void DodgeCameraLagEnd__FinishedFunc();
	void DodgeCameraLagEnd__UpdateFunc();
	void EnableCursor();
	void ExecuteUbergraph_PlayerPawn(int32 EntryPoint);
	void FOVZoom__FinishedFunc();
	void FOVZoom__UpdateFunc();
	void GapCloseCameraLagEnd__FinishedFunc();
	void GapCloseCameraLagEnd__UpdateFunc();
	void GetCameraManager(class AAoCCameraManager** CameraManager);
	void GetDrivenSiegeWeapon(class USiegeWeaponComponent** SiegeWeaponComponent);
	void InternalBlur__FinishedFunc();
	void InternalBlur__UpdateFunc();
	void Left_Click_On_Hover();
	void Mouse_Mode_Changed();
	void OnBlendOut_1F40CC6D49EF4D93F75E2E94FCC7F325(class FName NotifyName);
	void OnCameraZoomClient(bool bZoomIn);
	void OnChannelingBP();
	void OnCompleted_1F40CC6D49EF4D93F75E2E94FCC7F325(class FName NotifyName);
	void OnDeathBP();
	void OnInterrupted_1F40CC6D49EF4D93F75E2E94FCC7F325(class FName NotifyName);
	void OnNotifyBegin_1F40CC6D49EF4D93F75E2E94FCC7F325(class FName NotifyName);
	void OnNotifyEnd_1F40CC6D49EF4D93F75E2E94FCC7F325(class FName NotifyName);
	void OnReviveBP(class ABaseCharacter* Target, float RevHealthPercent, float ReviveManaPercent, float ReviveStaminaPercent);
	void OnSetLastDeathLocationBP(const struct FVector& Location);
	void OnStopChannelingBP();
	void OnSuccessfulBlockServerBP(class ABaseCharacter* Attacker);
	void OnSuccessfulEvasionServerBP(class ABaseCharacter* Attacker);
	void OnToggleGMTagBP(bool bEnable);
	void OnUpdateQuestSidebar();
	void PCFlag_Clear(class FName FlagName, bool* Success);
	void PCFlag_Set(class FName FlagName, bool* Success);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceivePossessed(class AController* NewController);
	void Set_Targeting_Decal_Distance(double Distance);
	void SetTargetingMeshDistance(double Distance);
	void SprintLogic(double DeltaTime, bool SprintActive);
	void StartCameraLag(double CameraLagSpeed, bool Falling, bool Dodging);
	void StartCameraLagBP(float CameraLagSpeed);
	void StopCameraLag(bool WasFalling, bool Dodging, double PreviousCameraLagValue);
	void StopCameraLagBP(float OldCameraLagSpeed);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void ToggleGMTag();
	void UpdateQuestSidebar();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_C">();
	}
	static class APlayerPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_C>();
	}
};
static_assert(alignof(APlayerPawn_C) == 0x000010, "Wrong alignment on APlayerPawn_C");
static_assert(sizeof(APlayerPawn_C) == 0x003120, "Wrong size on APlayerPawn_C");
static_assert(offsetof(APlayerPawn_C, UberGraphFrame) == 0x002F00, "Member 'APlayerPawn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Nameplate) == 0x002F08, "Member 'APlayerPawn_C::Nameplate' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, MapRegistrationComponentBP) == 0x002F10, "Member 'APlayerPawn_C::MapRegistrationComponentBP' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Arrow_AbilityZoom) == 0x002F18, "Member 'APlayerPawn_C::Arrow_AbilityZoom' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_2_NewTrack_0_4FBCB1214BA0CA801C4918BA98BD1CB2) == 0x002F20, "Member 'APlayerPawn_C::Timeline_2_NewTrack_0_4FBCB1214BA0CA801C4918BA98BD1CB2' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_2__Direction_4FBCB1214BA0CA801C4918BA98BD1CB2) == 0x002F24, "Member 'APlayerPawn_C::Timeline_2__Direction_4FBCB1214BA0CA801C4918BA98BD1CB2' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_2) == 0x002F28, "Member 'APlayerPawn_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FOVZoom_NewTrack_0_C00923114234D47E3BF353977B564A03) == 0x002F30, "Member 'APlayerPawn_C::FOVZoom_NewTrack_0_C00923114234D47E3BF353977B564A03' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FOVZoom__Direction_C00923114234D47E3BF353977B564A03) == 0x002F34, "Member 'APlayerPawn_C::FOVZoom__Direction_C00923114234D47E3BF353977B564A03' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FOVZoom) == 0x002F38, "Member 'APlayerPawn_C::FOVZoom' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InternalBlur_NewTrack_0_63DBE07544F10E79CE1D418A3B9108AD) == 0x002F40, "Member 'APlayerPawn_C::InternalBlur_NewTrack_0_63DBE07544F10E79CE1D418A3B9108AD' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InternalBlur__Direction_63DBE07544F10E79CE1D418A3B9108AD) == 0x002F44, "Member 'APlayerPawn_C::InternalBlur__Direction_63DBE07544F10E79CE1D418A3B9108AD' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InternalBlur) == 0x002F48, "Member 'APlayerPawn_C::InternalBlur' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, DodgeCameraLagEnd_NewTrack_0_998EEA624B675203C1066D9972DC5A25) == 0x002F50, "Member 'APlayerPawn_C::DodgeCameraLagEnd_NewTrack_0_998EEA624B675203C1066D9972DC5A25' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, DodgeCameraLagEnd__Direction_998EEA624B675203C1066D9972DC5A25) == 0x002F54, "Member 'APlayerPawn_C::DodgeCameraLagEnd__Direction_998EEA624B675203C1066D9972DC5A25' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, DodgeCameraLagEnd) == 0x002F58, "Member 'APlayerPawn_C::DodgeCameraLagEnd' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, GapCloseCameraLagEnd_NewTrack_0_EE809A294297C94F15DE85BB4556598E) == 0x002F60, "Member 'APlayerPawn_C::GapCloseCameraLagEnd_NewTrack_0_EE809A294297C94F15DE85BB4556598E' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, GapCloseCameraLagEnd__Direction_EE809A294297C94F15DE85BB4556598E) == 0x002F64, "Member 'APlayerPawn_C::GapCloseCameraLagEnd__Direction_EE809A294297C94F15DE85BB4556598E' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, GapCloseCameraLagEnd) == 0x002F68, "Member 'APlayerPawn_C::GapCloseCameraLagEnd' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_4_NewTrack_0_A044A8D4403210D966316DB92D3F9710) == 0x002F70, "Member 'APlayerPawn_C::Timeline_4_NewTrack_0_A044A8D4403210D966316DB92D3F9710' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_4__Direction_A044A8D4403210D966316DB92D3F9710) == 0x002F74, "Member 'APlayerPawn_C::Timeline_4__Direction_A044A8D4403210D966316DB92D3F9710' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_4) == 0x002F78, "Member 'APlayerPawn_C::Timeline_4' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_0_Percent_7C7585A743652924969B9CAADCEA8654) == 0x002F80, "Member 'APlayerPawn_C::Timeline_0_Percent_7C7585A743652924969B9CAADCEA8654' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_0__Direction_7C7585A743652924969B9CAADCEA8654) == 0x002F84, "Member 'APlayerPawn_C::Timeline_0__Direction_7C7585A743652924969B9CAADCEA8654' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Timeline_0) == 0x002F88, "Member 'APlayerPawn_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnDamageReceived) == 0x002F90, "Member 'APlayerPawn_C::OnDamageReceived' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, IsSwimming) == 0x002FA0, "Member 'APlayerPawn_C::IsSwimming' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InitialCameraArmLength) == 0x002FA8, "Member 'APlayerPawn_C::InitialCameraArmLength' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InitialCameraBoomLocation) == 0x002FB0, "Member 'APlayerPawn_C::InitialCameraBoomLocation' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnEvasion) == 0x002FC8, "Member 'APlayerPawn_C::OnEvasion' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnCast) == 0x002FD8, "Member 'APlayerPawn_C::OnCast' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnCastAbility) == 0x002FE8, "Member 'APlayerPawn_C::OnCastAbility' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnBlock) == 0x002FF8, "Member 'APlayerPawn_C::OnBlock' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, IsDodgeLag) == 0x003008, "Member 'APlayerPawn_C::IsDodgeLag' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, IsGapCloseLag) == 0x003009, "Member 'APlayerPawn_C::IsGapCloseLag' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, CachedDefaultFOV) == 0x003010, "Member 'APlayerPawn_C::CachedDefaultFOV' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, DodgeSound) == 0x003018, "Member 'APlayerPawn_C::DodgeSound' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnStartChanneling) == 0x003020, "Member 'APlayerPawn_C::OnStartChanneling' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnEndChanneling) == 0x003030, "Member 'APlayerPawn_C::OnEndChanneling' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnFire) == 0x003040, "Member 'APlayerPawn_C::OnFire' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnDealDamageServer) == 0x003050, "Member 'APlayerPawn_C::OnDealDamageServer' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnCastAbilityClient) == 0x003060, "Member 'APlayerPawn_C::OnCastAbilityClient' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnExperienceEarned) == 0x003070, "Member 'APlayerPawn_C::OnExperienceEarned' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnResurrectionTimer) == 0x003080, "Member 'APlayerPawn_C::OnResurrectionTimer' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnStackSizeChangedEvent) == 0x003090, "Member 'APlayerPawn_C::OnStackSizeChangedEvent' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, doFaceTarget) == 0x0030A0, "Member 'APlayerPawn_C::doFaceTarget' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FaceTargetTime) == 0x0030A8, "Member 'APlayerPawn_C::FaceTargetTime' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, Face_Target) == 0x0030B0, "Member 'APlayerPawn_C::Face_Target' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, LavaDamageName) == 0x0030B8, "Member 'APlayerPawn_C::LavaDamageName' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, doFaceLocation) == 0x0030C0, "Member 'APlayerPawn_C::doFaceLocation' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FaceTargetLocation) == 0x0030C8, "Member 'APlayerPawn_C::FaceTargetLocation' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, doFaceDefensiveTarget) == 0x0030E0, "Member 'APlayerPawn_C::doFaceDefensiveTarget' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FaceTargetTimer) == 0x0030E8, "Member 'APlayerPawn_C::FaceTargetTimer' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, FaceTargetIsCaravan) == 0x0030F0, "Member 'APlayerPawn_C::FaceTargetIsCaravan' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, CachedSprintIntensity) == 0x0030F8, "Member 'APlayerPawn_C::CachedSprintIntensity' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, InitGMTagRetry) == 0x003100, "Member 'APlayerPawn_C::InitGMTagRetry' has a wrong offset!");
static_assert(offsetof(APlayerPawn_C, OnSetLastDeathLocation) == 0x003108, "Member 'APlayerPawn_C::OnSetLastDeathLocation' has a wrong offset!");

}

