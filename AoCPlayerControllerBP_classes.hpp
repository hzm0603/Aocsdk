﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AoCPlayerControllerBP

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AoCPlayerControllerBP.AoCPlayerControllerBP_C
// 0x01F0 (0x3830 - 0x3640)
class AAoCPlayerControllerBP_C final : public AAoCPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x3640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_1_old_NewTrack_0_24AC6927467B3BD4B88319AA2261EE27; // 0x3648(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1_old__Direction_24AC6927467B3BD4B88319AA2261EE27; // 0x364C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364D[0x3];                                     // 0x364D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1_old;                                    // 0x3650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugAuthority;                                    // 0x3658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3659[0x3];                                     // 0x3659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentAuthority;                                  // 0x365C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempAuthority;                                     // 0x3660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3664[0x4];                                     // 0x3664(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InteractOverlapCheckTimer;                         // 0x3668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x3670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             Vendor_Data_Table;                                 // 0x3678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnActionCameraChange;                              // 0x3680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class FName Slot_ID, bool KeyUo, bool IsMount)> Use_Actionbar_Slot; // 0x3690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class FName Slot_ID, bool New_Highlighted, bool IsMount)> Set_Actionbar_Highlight; // 0x36A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           LocationTimer;                                     // 0x36B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableABIndex;                                     // 0x36B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMovingX;                                         // 0x36B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMovingY;                                         // 0x36BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36BB[0x5];                                     // 0x36BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMapRegistrationComponentBP_C*>  InitialMapRegs_0;                                  // 0x36C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class AActor*>            ClientConstructionActorRefs;                       // 0x36D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(int32 Up)>      InputAxisDiverted;                                 // 0x3720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsActionMode, double ForwardAxis, double RightAxis)> OnMoveStart; // 0x3730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              UpdateQuestSidebar;                                // 0x3740(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              UpdateActiveTarget;                                // 0x3750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              ToggleCompassVisibility;                           // 0x3760(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UObject* HotbarObject)> OnAbilityUpdated;                    // 0x3770(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsMount)>  ClearHotbar;                                       // 0x3780(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              UpdateNodeActorBuildingResources;                  // 0x3790(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FTradeItems& TradeItems)> UpdateTargetTradeItems;     // 0x37A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(TArray<int32>& SlotIndexes)> UpdateVendorSaleItems;                // 0x37B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(EItemLocation Loc)> PlayerItemsUpdated;                            // 0x37C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              UpdateSkills;                                      // 0x37D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(const struct FKey& Key)> OnAnyKey;                                 // 0x37E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(int32 NewLevel, bool IsAdventureLevel, bool LevelUp)> OnLevelChanged_0; // 0x37F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnExperienceEarned;                                // 0x3800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FriendlyModifier_OLD;                              // 0x3810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3811[0x7];                                     // 0x3811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 NPC;                                               // 0x3818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ShadowArenaPrototype;                              // 0x3820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Timeline_1_old__UpdateFunc();
	void Timeline_1_old__FinishedFunc();
	void TeleportStartedBP();
	void TargetMember(const struct FAoCPartyMember& Member);
	void TalkToNPCClientCallback(class ANPCPawn_C* NPC_ToTalkTo, class ABaseCharacter* BaseChar);
	void StopTalkToNPClientCallback(class ANPCPawn_C* NPC_Talking_With, class ABaseCharacter* BaseChar);
	void SpawnPFXAtLocation(double Activation_Delay, class UParticleSystem* ParticleToSpawn, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool AutoDestroy, bool AutoActivate);
	void SpawnDecalAtLocation(class UMaterialInterface* Decal_Material, const struct FVector& Decal_Size, const struct FVector& Location, const struct FRotator& Rotation, double Life_Span, bool FadeIn_, bool FadeOut_, double FadeInDelay, double FadeInDuration, double FadeOutDelay, double FadeOutDuration, bool isMeteorStorm);
	void SpawnActorAtLocation(bool AttachToCharacter, class ABaseCharacter* OwningCharacter, class FName Attach_Socket, const struct FVector& Spawn_Location, const struct FRotator& Spawn_Rotation, const struct FVector& Spawn_Scale, class UClass* ClassToSpawn);
	void Show_New_Bot_UI();
	void Set_Hide_All_Characters_In_World(bool bHide, TArray<class AActor*>& IgnoreActors, TArray<class ABaseCharacter*>* OutCharacters);
	void OpenFastTravelWidget(class ANPCPawn_C* FastTravelNPC);
	void OnUpdatePlayerItemsBP(EItemLocation Loc_0);
	void Old_Bot_UI();
	void LogRegisteredEmail(const class FString& Email);
	void InpActEvt_ToggleFPS_UniqueObjectNameForCooking_5(const struct FKey& Key);
	void InpActEvt_PageUp_UniqueObjectNameForCooking_15(const struct FKey& Key);
	void InpActEvt_Ctrl_Alt_Shift_P_UniqueObjectNameForCooking_3(const struct FKey& Key);
	void InpActEvt_Ctrl_Alt_Shift_N_UniqueObjectNameForCooking_4(const struct FKey& Key);
	void InpActEvt_Ctrl_Alt_Shift_M_UniqueObjectNameForCooking_6(const struct FKey& Key);
	void InpActEvt_Comma_UniqueObjectNameForCooking_12(const struct FKey& Key);
	void InitializeHUDModeForInGame();
	void HandleLocationTimer();
	void GetInputDirection(struct FVector* InputDir);
	void ExecuteUbergraph_AoCPlayerControllerBP(int32 EntryPoint);
	void DisplaySiegeVictoryScreenBP(ESiegeTeamType VictorTeamType);
	void DebugAuthorityOutput();
	void Client_HideAllCharactersInWorld(bool bHide, const TArray<class AActor*>& IgnoreActors);
	void CLIENT_Select_Target_from_SERVER(class AActor* Target, bool Friendly_);
	void Check_Action_Mode_Old(class UObject* Object);
	void CallOnMoveStartDelegateBP(const bool bIsActionMode, const float& ForwardAxis, const float& RightAxis);
	void BotUpdateUiBP();
	void BotShowUiBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AoCPlayerControllerBP_C">();
	}
	static class AAoCPlayerControllerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAoCPlayerControllerBP_C>();
	}
};
static_assert(alignof(AAoCPlayerControllerBP_C) == 0x000010, "Wrong alignment on AAoCPlayerControllerBP_C");
static_assert(sizeof(AAoCPlayerControllerBP_C) == 0x003830, "Wrong size on AAoCPlayerControllerBP_C");
static_assert(offsetof(AAoCPlayerControllerBP_C, UberGraphFrame) == 0x003640, "Member 'AAoCPlayerControllerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Timeline_1_old_NewTrack_0_24AC6927467B3BD4B88319AA2261EE27) == 0x003648, "Member 'AAoCPlayerControllerBP_C::Timeline_1_old_NewTrack_0_24AC6927467B3BD4B88319AA2261EE27' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Timeline_1_old__Direction_24AC6927467B3BD4B88319AA2261EE27) == 0x00364C, "Member 'AAoCPlayerControllerBP_C::Timeline_1_old__Direction_24AC6927467B3BD4B88319AA2261EE27' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Timeline_1_old) == 0x003650, "Member 'AAoCPlayerControllerBP_C::Timeline_1_old' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, DebugAuthority) == 0x003658, "Member 'AAoCPlayerControllerBP_C::DebugAuthority' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, CurrentAuthority) == 0x00365C, "Member 'AAoCPlayerControllerBP_C::CurrentAuthority' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, TempAuthority) == 0x003660, "Member 'AAoCPlayerControllerBP_C::TempAuthority' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, InteractOverlapCheckTimer) == 0x003668, "Member 'AAoCPlayerControllerBP_C::InteractOverlapCheckTimer' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Decal) == 0x003670, "Member 'AAoCPlayerControllerBP_C::Decal' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Vendor_Data_Table) == 0x003678, "Member 'AAoCPlayerControllerBP_C::Vendor_Data_Table' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnActionCameraChange) == 0x003680, "Member 'AAoCPlayerControllerBP_C::OnActionCameraChange' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Use_Actionbar_Slot) == 0x003690, "Member 'AAoCPlayerControllerBP_C::Use_Actionbar_Slot' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, Set_Actionbar_Highlight) == 0x0036A0, "Member 'AAoCPlayerControllerBP_C::Set_Actionbar_Highlight' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, LocationTimer) == 0x0036B0, "Member 'AAoCPlayerControllerBP_C::LocationTimer' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, EnableABIndex) == 0x0036B8, "Member 'AAoCPlayerControllerBP_C::EnableABIndex' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, IsMovingX) == 0x0036B9, "Member 'AAoCPlayerControllerBP_C::IsMovingX' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, IsMovingY) == 0x0036BA, "Member 'AAoCPlayerControllerBP_C::IsMovingY' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, InitialMapRegs_0) == 0x0036C0, "Member 'AAoCPlayerControllerBP_C::InitialMapRegs_0' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, ClientConstructionActorRefs) == 0x0036D0, "Member 'AAoCPlayerControllerBP_C::ClientConstructionActorRefs' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, InputAxisDiverted) == 0x003720, "Member 'AAoCPlayerControllerBP_C::InputAxisDiverted' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnMoveStart) == 0x003730, "Member 'AAoCPlayerControllerBP_C::OnMoveStart' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateQuestSidebar) == 0x003740, "Member 'AAoCPlayerControllerBP_C::UpdateQuestSidebar' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateActiveTarget) == 0x003750, "Member 'AAoCPlayerControllerBP_C::UpdateActiveTarget' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, ToggleCompassVisibility) == 0x003760, "Member 'AAoCPlayerControllerBP_C::ToggleCompassVisibility' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnAbilityUpdated) == 0x003770, "Member 'AAoCPlayerControllerBP_C::OnAbilityUpdated' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, ClearHotbar) == 0x003780, "Member 'AAoCPlayerControllerBP_C::ClearHotbar' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateNodeActorBuildingResources) == 0x003790, "Member 'AAoCPlayerControllerBP_C::UpdateNodeActorBuildingResources' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateTargetTradeItems) == 0x0037A0, "Member 'AAoCPlayerControllerBP_C::UpdateTargetTradeItems' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateVendorSaleItems) == 0x0037B0, "Member 'AAoCPlayerControllerBP_C::UpdateVendorSaleItems' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, PlayerItemsUpdated) == 0x0037C0, "Member 'AAoCPlayerControllerBP_C::PlayerItemsUpdated' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, UpdateSkills) == 0x0037D0, "Member 'AAoCPlayerControllerBP_C::UpdateSkills' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnAnyKey) == 0x0037E0, "Member 'AAoCPlayerControllerBP_C::OnAnyKey' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnLevelChanged_0) == 0x0037F0, "Member 'AAoCPlayerControllerBP_C::OnLevelChanged_0' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, OnExperienceEarned) == 0x003800, "Member 'AAoCPlayerControllerBP_C::OnExperienceEarned' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, FriendlyModifier_OLD) == 0x003810, "Member 'AAoCPlayerControllerBP_C::FriendlyModifier_OLD' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, NPC) == 0x003818, "Member 'AAoCPlayerControllerBP_C::NPC' has a wrong offset!");
static_assert(offsetof(AAoCPlayerControllerBP_C, ShadowArenaPrototype) == 0x003820, "Member 'AAoCPlayerControllerBP_C::ShadowArenaPrototype' has a wrong offset!");

}

