﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDEditorOptionsMenu

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUDEditorOptionsMenu.WBP_HUDEditorOptionsMenu_C
// 0x0008 (0x0428 - 0x0420)
class UWBP_HUDEditorOptionsMenu_C final : public UHUDEditorOptions
{
public:
	class UCommonBorder*                          LabelBorder;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUDEditorOptionsMenu_C">();
	}
	static class UWBP_HUDEditorOptionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUDEditorOptionsMenu_C>();
	}
};
static_assert(alignof(UWBP_HUDEditorOptionsMenu_C) == 0x000008, "Wrong alignment on UWBP_HUDEditorOptionsMenu_C");
static_assert(sizeof(UWBP_HUDEditorOptionsMenu_C) == 0x000428, "Wrong size on UWBP_HUDEditorOptionsMenu_C");
static_assert(offsetof(UWBP_HUDEditorOptionsMenu_C, LabelBorder) == 0x000420, "Member 'UWBP_HUDEditorOptionsMenu_C::LabelBorder' has a wrong offset!");

}

