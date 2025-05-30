﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ObjectiveAccordion_Primary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ObjectiveAccordion_Primary.WBP_ObjectiveAccordion_Primary_C
// 0x0010 (0x03F8 - 0x03E8)
class UWBP_ObjectiveAccordion_Primary_C final : public UAccordion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	TSubclassOf<class UCommonButtonStyle> GetOddButtonStyle();
	TSubclassOf<class UCommonButtonStyle> GetEvenButtonStyle();
	class UPanelWidget* GetButtonContainer();
	class UWidget* GetBreadcrumbWidget();
	void ExecuteUbergraph_WBP_ObjectiveAccordion_Primary(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ObjectiveAccordion_Primary_C">();
	}
	static class UWBP_ObjectiveAccordion_Primary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ObjectiveAccordion_Primary_C>();
	}
};
static_assert(alignof(UWBP_ObjectiveAccordion_Primary_C) == 0x000008, "Wrong alignment on UWBP_ObjectiveAccordion_Primary_C");
static_assert(sizeof(UWBP_ObjectiveAccordion_Primary_C) == 0x0003F8, "Wrong size on UWBP_ObjectiveAccordion_Primary_C");
static_assert(offsetof(UWBP_ObjectiveAccordion_Primary_C, UberGraphFrame) == 0x0003E8, "Member 'UWBP_ObjectiveAccordion_Primary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ObjectiveAccordion_Primary_C, NamedSlot) == 0x0003F0, "Member 'UWBP_ObjectiveAccordion_Primary_C::NamedSlot' has a wrong offset!");

}

