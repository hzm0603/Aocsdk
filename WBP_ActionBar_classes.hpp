﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ActionBar.WBP_ActionBar_C
// 0x0018 (0x0390 - 0x0378)
class UWBP_ActionBar_C final : public UActionBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BarOverlay;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ActionBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ActionBar_C">();
	}
	static class UWBP_ActionBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ActionBar_C>();
	}
};
static_assert(alignof(UWBP_ActionBar_C) == 0x000008, "Wrong alignment on UWBP_ActionBar_C");
static_assert(sizeof(UWBP_ActionBar_C) == 0x000390, "Wrong size on UWBP_ActionBar_C");
static_assert(offsetof(UWBP_ActionBar_C, UberGraphFrame) == 0x000378, "Member 'UWBP_ActionBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBar_C, BarOverlay) == 0x000380, "Member 'UWBP_ActionBar_C::BarOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_ActionBar_C, NamedSlot) == 0x000388, "Member 'UWBP_ActionBar_C::NamedSlot' has a wrong offset!");

}

