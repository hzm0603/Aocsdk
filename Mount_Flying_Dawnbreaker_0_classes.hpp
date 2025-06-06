﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mount_Flying_Dawnbreaker_0

#include "Basic.hpp"

#include "gryphonStates_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Mount_Flying_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mount_Flying_Dawnbreaker_0.Mount_Flying_Dawnbreaker_0_C
// 0x0060 (0x1670 - 0x1610)
class AMount_Flying_Dawnbreaker_0_C final : public AMount_Flying_Base_C
{
public:
	bool                                          bFadeOut_0;                                        // 0x1610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFadeIn_0;                                         // 0x1611(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1612[0x6];                                     // 0x1612(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PointB_0;                                          // 0x1618(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PointA_0;                                          // 0x1630(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                pointC_0;                                          // 0x1648(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EgryphonStates                                state_check_0;                                     // 0x1660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1661[0x7];                                     // 0x1661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                pp_internal_blur_ref_0;                            // 0x1668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mount_Flying_Dawnbreaker_0_C">();
	}
	static class AMount_Flying_Dawnbreaker_0_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMount_Flying_Dawnbreaker_0_C>();
	}
};
static_assert(alignof(AMount_Flying_Dawnbreaker_0_C) == 0x000010, "Wrong alignment on AMount_Flying_Dawnbreaker_0_C");
static_assert(sizeof(AMount_Flying_Dawnbreaker_0_C) == 0x001670, "Wrong size on AMount_Flying_Dawnbreaker_0_C");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, bFadeOut_0) == 0x001610, "Member 'AMount_Flying_Dawnbreaker_0_C::bFadeOut_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, bFadeIn_0) == 0x001611, "Member 'AMount_Flying_Dawnbreaker_0_C::bFadeIn_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, PointB_0) == 0x001618, "Member 'AMount_Flying_Dawnbreaker_0_C::PointB_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, PointA_0) == 0x001630, "Member 'AMount_Flying_Dawnbreaker_0_C::PointA_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, pointC_0) == 0x001648, "Member 'AMount_Flying_Dawnbreaker_0_C::pointC_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, state_check_0) == 0x001660, "Member 'AMount_Flying_Dawnbreaker_0_C::state_check_0' has a wrong offset!");
static_assert(offsetof(AMount_Flying_Dawnbreaker_0_C, pp_internal_blur_ref_0) == 0x001668, "Member 'AMount_Flying_Dawnbreaker_0_C::pp_internal_blur_ref_0' has a wrong offset!");

}

