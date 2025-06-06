﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PortraitCharacterSubject_Dialog

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PortraitCharacterSubject_Dialog.BP_PortraitCharacterSubject_Dialog_C
// 0x0018 (0x03A8 - 0x0390)
class ABP_PortraitCharacterSubject_Dialog_C final : public APortraitTextureRenderActor
{
public:
	class UMergeableSkeletalMeshComponent*        MergedMesh;                                        // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterAppearanceComponent*          CharacterAppearance;                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   LightRig;                                          // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PortraitCharacterSubject_Dialog_C">();
	}
	static class ABP_PortraitCharacterSubject_Dialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PortraitCharacterSubject_Dialog_C>();
	}
};
static_assert(alignof(ABP_PortraitCharacterSubject_Dialog_C) == 0x000008, "Wrong alignment on ABP_PortraitCharacterSubject_Dialog_C");
static_assert(sizeof(ABP_PortraitCharacterSubject_Dialog_C) == 0x0003A8, "Wrong size on ABP_PortraitCharacterSubject_Dialog_C");
static_assert(offsetof(ABP_PortraitCharacterSubject_Dialog_C, MergedMesh) == 0x000390, "Member 'ABP_PortraitCharacterSubject_Dialog_C::MergedMesh' has a wrong offset!");
static_assert(offsetof(ABP_PortraitCharacterSubject_Dialog_C, CharacterAppearance) == 0x000398, "Member 'ABP_PortraitCharacterSubject_Dialog_C::CharacterAppearance' has a wrong offset!");
static_assert(offsetof(ABP_PortraitCharacterSubject_Dialog_C, LightRig) == 0x0003A0, "Member 'ABP_PortraitCharacterSubject_Dialog_C::LightRig' has a wrong offset!");

}

