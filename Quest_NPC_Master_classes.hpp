﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quest_NPC_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SpawnerAnimInfo_structs.hpp"
#include "HumanoidNPCMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Quest_NPC_Master.Quest_NPC_Master_C
// 0x0020 (0x1D90 - 0x1D70)
class AQuest_NPC_Master_C final : public AHumanoidNPCMaster_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Quest_NPC_Master_C;                 // 0x1D68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void(const struct FSpawnerAnimInfo& AnimInfo)> NPCAnimationsSet;        // 0x1D70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 NpcName;                                           // 0x1D80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Quest_NPC_Master(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Quest_NPC_Master_C">();
	}
	static class AQuest_NPC_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQuest_NPC_Master_C>();
	}
};
static_assert(alignof(AQuest_NPC_Master_C) == 0x000010, "Wrong alignment on AQuest_NPC_Master_C");
static_assert(sizeof(AQuest_NPC_Master_C) == 0x001D90, "Wrong size on AQuest_NPC_Master_C");
static_assert(offsetof(AQuest_NPC_Master_C, UberGraphFrame_Quest_NPC_Master_C) == 0x001D68, "Member 'AQuest_NPC_Master_C::UberGraphFrame_Quest_NPC_Master_C' has a wrong offset!");
static_assert(offsetof(AQuest_NPC_Master_C, NPCAnimationsSet) == 0x001D70, "Member 'AQuest_NPC_Master_C::NPCAnimationsSet' has a wrong offset!");
static_assert(offsetof(AQuest_NPC_Master_C, NpcName) == 0x001D80, "Member 'AQuest_NPC_Master_C::NpcName' has a wrong offset!");

}

