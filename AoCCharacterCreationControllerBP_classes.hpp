﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AoCCharacterCreationControllerBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AoCCharacterCreationControllerBP.AoCCharacterCreationControllerBP_C
// 0x0068 (0x21F0 - 0x2188)
class AAoCCharacterCreationControllerBP_C final : public AAoCCharacterCreationController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2188(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetInteractionComponent*            WidgetInteraction;                                 // 0x2190(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACharacterForCreation_C*                CharacterCreationPawn;                             // 0x2198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_C*                          CharacterPawn;                                     // 0x21A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UCharacterAppearanceComponent*          CharacterAppearanceComponent;                      // 0x21A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   Label_CloseButton;                                 // 0x21B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Label_OkayButton;                                  // 0x21C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCharacterSelection*                    Widget_CharacterSelect;                            // 0x21E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_OKPrompt_C*                        Widget_ErrorAlert;                                 // 0x21E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void CharacterSelected(const struct FCharacterInformation& CharacterInfo, bool FromCreate);
	void ExecuteUbergraph_AoCCharacterCreationControllerBP(int32 EntryPoint);
	void InitializeCharacterSelectBP();
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_7(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_UniqueObjectNameForCooking_9(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_2(const struct FKey& Key);
	void InpActEvt_RightMouseButton_UniqueObjectNameForCooking_4(const struct FKey& Key);
	void InpActEvt_ToggleFPS_UniqueObjectNameForCooking_11(const struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AoCCharacterCreationControllerBP_C">();
	}
	static class AAoCCharacterCreationControllerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAoCCharacterCreationControllerBP_C>();
	}
};
static_assert(alignof(AAoCCharacterCreationControllerBP_C) == 0x000008, "Wrong alignment on AAoCCharacterCreationControllerBP_C");
static_assert(sizeof(AAoCCharacterCreationControllerBP_C) == 0x0021F0, "Wrong size on AAoCCharacterCreationControllerBP_C");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, UberGraphFrame) == 0x002188, "Member 'AAoCCharacterCreationControllerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, WidgetInteraction) == 0x002190, "Member 'AAoCCharacterCreationControllerBP_C::WidgetInteraction' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, CharacterCreationPawn) == 0x002198, "Member 'AAoCCharacterCreationControllerBP_C::CharacterCreationPawn' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, CharacterPawn) == 0x0021A0, "Member 'AAoCCharacterCreationControllerBP_C::CharacterPawn' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, CharacterAppearanceComponent) == 0x0021A8, "Member 'AAoCCharacterCreationControllerBP_C::CharacterAppearanceComponent' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, Label_CloseButton) == 0x0021B0, "Member 'AAoCCharacterCreationControllerBP_C::Label_CloseButton' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, Label_OkayButton) == 0x0021C8, "Member 'AAoCCharacterCreationControllerBP_C::Label_OkayButton' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, Widget_CharacterSelect) == 0x0021E0, "Member 'AAoCCharacterCreationControllerBP_C::Widget_CharacterSelect' has a wrong offset!");
static_assert(offsetof(AAoCCharacterCreationControllerBP_C, Widget_ErrorAlert) == 0x0021E8, "Member 'AAoCCharacterCreationControllerBP_C::Widget_ErrorAlert' has a wrong offset!");

}

