﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_FindRandomHatedCharacterInRange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "STT_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_FindRandomHatedCharacterInRange.STT_FindRandomHatedCharacterInRange_C
// 0x0020 (0x0098 - 0x0078)
class USTT_FindRandomHatedCharacterInRange_C final : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ANPCCharacter*                          Agent;                                             // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Range;                                             // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         FoundHatedCharacter;                               // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_FindRandomHatedCharacterInRange(int32 EntryPoint);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_FindRandomHatedCharacterInRange_C">();
	}
	static class USTT_FindRandomHatedCharacterInRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_FindRandomHatedCharacterInRange_C>();
	}
};
static_assert(alignof(USTT_FindRandomHatedCharacterInRange_C) == 0x000008, "Wrong alignment on USTT_FindRandomHatedCharacterInRange_C");
static_assert(sizeof(USTT_FindRandomHatedCharacterInRange_C) == 0x000098, "Wrong size on USTT_FindRandomHatedCharacterInRange_C");
static_assert(offsetof(USTT_FindRandomHatedCharacterInRange_C, UberGraphFrame) == 0x000078, "Member 'USTT_FindRandomHatedCharacterInRange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_FindRandomHatedCharacterInRange_C, Agent) == 0x000080, "Member 'USTT_FindRandomHatedCharacterInRange_C::Agent' has a wrong offset!");
static_assert(offsetof(USTT_FindRandomHatedCharacterInRange_C, Range) == 0x000088, "Member 'USTT_FindRandomHatedCharacterInRange_C::Range' has a wrong offset!");
static_assert(offsetof(USTT_FindRandomHatedCharacterInRange_C, FoundHatedCharacter) == 0x000090, "Member 'USTT_FindRandomHatedCharacterInRange_C::FoundHatedCharacter' has a wrong offset!");

}

