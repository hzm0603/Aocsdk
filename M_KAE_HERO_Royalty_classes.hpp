﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_KAE_HERO_Royalty

#include "Basic.hpp"

#include "Cinematic_NPC_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass M_KAE_HERO_Royalty.M_KAE_HERO_Royalty_C
// 0x0020 (0x0430 - 0x0410)
class AM_KAE_HERO_Royalty_C final : public ACinematic_NPC_Master_C
{
public:
	class USkeletalMeshComponent*                 SK_KAE_M_Eyebrows_A_0;                             // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_CMN_2H_SWD_Titanbark_A_0;                       // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_KAE_M_CSM_Protector_Shoulders_A_0;              // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_NPC_PLT_M_Guard_Torso_A_10;                     // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_KAE_HERO_Royalty_C">();
	}
	static class AM_KAE_HERO_Royalty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AM_KAE_HERO_Royalty_C>();
	}
};
static_assert(alignof(AM_KAE_HERO_Royalty_C) == 0x000008, "Wrong alignment on AM_KAE_HERO_Royalty_C");
static_assert(sizeof(AM_KAE_HERO_Royalty_C) == 0x000430, "Wrong size on AM_KAE_HERO_Royalty_C");
static_assert(offsetof(AM_KAE_HERO_Royalty_C, SK_KAE_M_Eyebrows_A_0) == 0x000410, "Member 'AM_KAE_HERO_Royalty_C::SK_KAE_M_Eyebrows_A_0' has a wrong offset!");
static_assert(offsetof(AM_KAE_HERO_Royalty_C, SK_CMN_2H_SWD_Titanbark_A_0) == 0x000418, "Member 'AM_KAE_HERO_Royalty_C::SK_CMN_2H_SWD_Titanbark_A_0' has a wrong offset!");
static_assert(offsetof(AM_KAE_HERO_Royalty_C, SK_KAE_M_CSM_Protector_Shoulders_A_0) == 0x000420, "Member 'AM_KAE_HERO_Royalty_C::SK_KAE_M_CSM_Protector_Shoulders_A_0' has a wrong offset!");
static_assert(offsetof(AM_KAE_HERO_Royalty_C, SK_NPC_PLT_M_Guard_Torso_A_10) == 0x000428, "Member 'AM_KAE_HERO_Royalty_C::SK_NPC_PLT_M_Guard_Torso_A_10' has a wrong offset!");

}

