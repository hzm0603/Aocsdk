﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootCorpseInteractBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AoCInteractableBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootCorpseInteractBP.LootCorpseInteractBP_C
// 0x0010 (0x04B0 - 0x04A0)
class ALootCorpseInteractBP_C final : public AAoCInteractableBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemStorageComponentBP_C*              ItemStorageComponentBP;                            // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LootCorpseInteractBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootCorpseInteractBP_C">();
	}
	static class ALootCorpseInteractBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootCorpseInteractBP_C>();
	}
};
static_assert(alignof(ALootCorpseInteractBP_C) == 0x000008, "Wrong alignment on ALootCorpseInteractBP_C");
static_assert(sizeof(ALootCorpseInteractBP_C) == 0x0004B0, "Wrong size on ALootCorpseInteractBP_C");
static_assert(offsetof(ALootCorpseInteractBP_C, UberGraphFrame) == 0x0004A0, "Member 'ALootCorpseInteractBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALootCorpseInteractBP_C, ItemStorageComponentBP) == 0x0004A8, "Member 'ALootCorpseInteractBP_C::ItemStorageComponentBP' has a wrong offset!");

}

