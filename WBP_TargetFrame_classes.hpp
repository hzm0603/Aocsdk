﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TargetFrame

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TargetFrame.WBP_TargetFrame_C
// 0x0018 (0x0348 - 0x0330)
class UWBP_TargetFrame_C final : public UTargetFrame
{
public:
	class UInvalidationBox*                       InvBox;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AlliedTarget_C*                    WBP_AlliedTarget;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OffensiveTarget_C*                 WBP_OffensiveTarget;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TargetFrame_C">();
	}
	static class UWBP_TargetFrame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TargetFrame_C>();
	}
};
static_assert(alignof(UWBP_TargetFrame_C) == 0x000008, "Wrong alignment on UWBP_TargetFrame_C");
static_assert(sizeof(UWBP_TargetFrame_C) == 0x000348, "Wrong size on UWBP_TargetFrame_C");
static_assert(offsetof(UWBP_TargetFrame_C, InvBox) == 0x000330, "Member 'UWBP_TargetFrame_C::InvBox' has a wrong offset!");
static_assert(offsetof(UWBP_TargetFrame_C, WBP_AlliedTarget) == 0x000338, "Member 'UWBP_TargetFrame_C::WBP_AlliedTarget' has a wrong offset!");
static_assert(offsetof(UWBP_TargetFrame_C, WBP_OffensiveTarget) == 0x000340, "Member 'UWBP_TargetFrame_C::WBP_OffensiveTarget' has a wrong offset!");

}

