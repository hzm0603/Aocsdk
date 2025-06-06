﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ConstructionMaterialButton

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ConstructionMaterialButton.WBP_ConstructionMaterialButton_C
// 0x0010 (0x16D0 - 0x16C0)
class UWBP_ConstructionMaterialButton_C final : public UConstructionMaterialButton
{
public:
	class UCommonBorder*                          B_Material;                                        // 0x16C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ConstructionMaterialButton_C">();
	}
	static class UWBP_ConstructionMaterialButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ConstructionMaterialButton_C>();
	}
};
static_assert(alignof(UWBP_ConstructionMaterialButton_C) == 0x000010, "Wrong alignment on UWBP_ConstructionMaterialButton_C");
static_assert(sizeof(UWBP_ConstructionMaterialButton_C) == 0x0016D0, "Wrong size on UWBP_ConstructionMaterialButton_C");
static_assert(offsetof(UWBP_ConstructionMaterialButton_C, B_Material) == 0x0016C0, "Member 'UWBP_ConstructionMaterialButton_C::B_Material' has a wrong offset!");

}

