﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SkillSocketTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillSocketTooltip.WBP_SkillSocketTooltip_C
// 0x0008 (0x0328 - 0x0320)
class UWBP_SkillSocketTooltip_C final : public USkillSocketTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_SkillSocketTooltip(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillSocketTooltip_C">();
	}
	static class UWBP_SkillSocketTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillSocketTooltip_C>();
	}
};
static_assert(alignof(UWBP_SkillSocketTooltip_C) == 0x000008, "Wrong alignment on UWBP_SkillSocketTooltip_C");
static_assert(sizeof(UWBP_SkillSocketTooltip_C) == 0x000328, "Wrong size on UWBP_SkillSocketTooltip_C");
static_assert(offsetof(UWBP_SkillSocketTooltip_C, UberGraphFrame) == 0x000320, "Member 'UWBP_SkillSocketTooltip_C::UberGraphFrame' has a wrong offset!");

}

