﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ObjectiveTracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ObjectiveTracker.WBP_ObjectiveTracker_C
// 0x0018 (0x0458 - 0x0440)
class UWBP_ObjectiveTracker_C final : public UObjectiveTracker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IMG_Separator;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_NoFrameNoPaddingNoVignettes_C* ScrollWindow;                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ObjectiveTracker(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ObjectiveTracker_C">();
	}
	static class UWBP_ObjectiveTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ObjectiveTracker_C>();
	}
};
static_assert(alignof(UWBP_ObjectiveTracker_C) == 0x000008, "Wrong alignment on UWBP_ObjectiveTracker_C");
static_assert(sizeof(UWBP_ObjectiveTracker_C) == 0x000458, "Wrong size on UWBP_ObjectiveTracker_C");
static_assert(offsetof(UWBP_ObjectiveTracker_C, UberGraphFrame) == 0x000440, "Member 'UWBP_ObjectiveTracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ObjectiveTracker_C, IMG_Separator) == 0x000448, "Member 'UWBP_ObjectiveTracker_C::IMG_Separator' has a wrong offset!");
static_assert(offsetof(UWBP_ObjectiveTracker_C, ScrollWindow) == 0x000450, "Member 'UWBP_ObjectiveTracker_C::ScrollWindow' has a wrong offset!");

}

