﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CountdownToast

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CountdownToast.WBP_CountdownToast_C
// 0x0020 (0x04C0 - 0x04A0)
class UWBP_CountdownToast_C final : public UCountdownToast
{
public:
	class UImage*                                 AccentLine_1;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AccentLine_Top;                                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Flare;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CountdownToast_C">();
	}
	static class UWBP_CountdownToast_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CountdownToast_C>();
	}
};
static_assert(alignof(UWBP_CountdownToast_C) == 0x000008, "Wrong alignment on UWBP_CountdownToast_C");
static_assert(sizeof(UWBP_CountdownToast_C) == 0x0004C0, "Wrong size on UWBP_CountdownToast_C");
static_assert(offsetof(UWBP_CountdownToast_C, AccentLine_1) == 0x0004A0, "Member 'UWBP_CountdownToast_C::AccentLine_1' has a wrong offset!");
static_assert(offsetof(UWBP_CountdownToast_C, AccentLine_Top) == 0x0004A8, "Member 'UWBP_CountdownToast_C::AccentLine_Top' has a wrong offset!");
static_assert(offsetof(UWBP_CountdownToast_C, BG) == 0x0004B0, "Member 'UWBP_CountdownToast_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_CountdownToast_C, BG_Flare) == 0x0004B8, "Member 'UWBP_CountdownToast_C::BG_Flare' has a wrong offset!");

}

