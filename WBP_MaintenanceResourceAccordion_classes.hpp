﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MaintenanceResourceAccordion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MaintenanceResourceAccordion.WBP_MaintenanceResourceAccordion_C
// 0x0018 (0x04D0 - 0x04B8)
class UWBP_MaintenanceResourceAccordion_C final : public UMaintenanceResourceAccordion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                             NamedSlot;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnreadNotifier;                                    // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	TSubclassOf<class UCommonButtonStyle> GetOddButtonStyle();
	TSubclassOf<class UCommonButtonStyle> GetEvenButtonStyle();
	class UPanelWidget* GetButtonContainer();
	class UWidget* GetBreadcrumbWidget();
	void ExecuteUbergraph_WBP_MaintenanceResourceAccordion(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MaintenanceResourceAccordion_C">();
	}
	static class UWBP_MaintenanceResourceAccordion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MaintenanceResourceAccordion_C>();
	}
};
static_assert(alignof(UWBP_MaintenanceResourceAccordion_C) == 0x000008, "Wrong alignment on UWBP_MaintenanceResourceAccordion_C");
static_assert(sizeof(UWBP_MaintenanceResourceAccordion_C) == 0x0004D0, "Wrong size on UWBP_MaintenanceResourceAccordion_C");
static_assert(offsetof(UWBP_MaintenanceResourceAccordion_C, UberGraphFrame) == 0x0004B8, "Member 'UWBP_MaintenanceResourceAccordion_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MaintenanceResourceAccordion_C, NamedSlot) == 0x0004C0, "Member 'UWBP_MaintenanceResourceAccordion_C::NamedSlot' has a wrong offset!");
static_assert(offsetof(UWBP_MaintenanceResourceAccordion_C, UnreadNotifier) == 0x0004C8, "Member 'UWBP_MaintenanceResourceAccordion_C::UnreadNotifier' has a wrong offset!");

}

