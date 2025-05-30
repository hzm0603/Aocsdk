﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bard_EnsureStoryLimit

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bard_EnsureStoryLimit.Bard_EnsureStoryLimit_C
// 0x0050 (0x0098 - 0x0048)
class UBard_EnsureStoryLimit_C final : public UAoCCombatScript
{
public:
	TSet<struct FEffectId>                        StoryEffects;                                      // 0x0048(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	int32 RunScript(const struct FScriptActorInfo& Target, const struct FScriptActorInfo& Instigator, const struct FScriptActorInfo& Source, const struct FVector& AttackOrigin, const struct FScriptTriggerInfo& TriggerInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bard_EnsureStoryLimit_C">();
	}
	static class UBard_EnsureStoryLimit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBard_EnsureStoryLimit_C>();
	}
};
static_assert(alignof(UBard_EnsureStoryLimit_C) == 0x000008, "Wrong alignment on UBard_EnsureStoryLimit_C");
static_assert(sizeof(UBard_EnsureStoryLimit_C) == 0x000098, "Wrong size on UBard_EnsureStoryLimit_C");
static_assert(offsetof(UBard_EnsureStoryLimit_C, StoryEffects) == 0x000048, "Member 'UBard_EnsureStoryLimit_C::StoryEffects' has a wrong offset!");

}

