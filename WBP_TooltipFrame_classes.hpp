﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TooltipFrame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TooltipFrame.WBP_TooltipFrame_C
// 0x0008 (0x0350 - 0x0348)
class UWBP_TooltipFrame_C final : public UTooltipFrame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_TooltipFrame(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TooltipFrame_C">();
	}
	static class UWBP_TooltipFrame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TooltipFrame_C>();
	}
};
static_assert(alignof(UWBP_TooltipFrame_C) == 0x000008, "Wrong alignment on UWBP_TooltipFrame_C");
static_assert(sizeof(UWBP_TooltipFrame_C) == 0x000350, "Wrong size on UWBP_TooltipFrame_C");
static_assert(offsetof(UWBP_TooltipFrame_C, UberGraphFrame) == 0x000348, "Member 'UWBP_TooltipFrame_C::UberGraphFrame' has a wrong offset!");

}

