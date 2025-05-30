﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SkillSocketTooltipChoice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillSocketTooltipChoice.WBP_SkillSocketTooltipChoice_C
// 0x0008 (0x0328 - 0x0320)
class UWBP_SkillSocketTooltipChoice_C final : public USkillSocketTooltipChoice
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_SkillSocketTooltipChoice(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillSocketTooltipChoice_C">();
	}
	static class UWBP_SkillSocketTooltipChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillSocketTooltipChoice_C>();
	}
};
static_assert(alignof(UWBP_SkillSocketTooltipChoice_C) == 0x000008, "Wrong alignment on UWBP_SkillSocketTooltipChoice_C");
static_assert(sizeof(UWBP_SkillSocketTooltipChoice_C) == 0x000328, "Wrong size on UWBP_SkillSocketTooltipChoice_C");
static_assert(offsetof(UWBP_SkillSocketTooltipChoice_C, UberGraphFrame) == 0x000320, "Member 'UWBP_SkillSocketTooltipChoice_C::UberGraphFrame' has a wrong offset!");

}

