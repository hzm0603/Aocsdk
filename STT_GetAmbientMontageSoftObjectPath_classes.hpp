﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_GetAmbientMontageSoftObjectPath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "StateTreeModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_GetAmbientMontageSoftObjectPath.STT_GetAmbientMontageSoftObjectPath_C
// 0x0040 (0x00B0 - 0x0070)
class USTT_GetAmbientMontageSoftObjectPath_C final : public UStateTreeTaskBlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter*                         Target;                                            // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                   InteractionTypeName;                               // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        MontageSoftObjectPath;                             // 0x0088(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CanSucceed;                                        // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanFail;                                           // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_GetAmbientMontageSoftObjectPath(int32 EntryPoint);
	void KeyNameContainsMatch(TArray<class FName>& NameArray, class FName* SelectedName);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_GetAmbientMontageSoftObjectPath_C">();
	}
	static class USTT_GetAmbientMontageSoftObjectPath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_GetAmbientMontageSoftObjectPath_C>();
	}
};
static_assert(alignof(USTT_GetAmbientMontageSoftObjectPath_C) == 0x000008, "Wrong alignment on USTT_GetAmbientMontageSoftObjectPath_C");
static_assert(sizeof(USTT_GetAmbientMontageSoftObjectPath_C) == 0x0000B0, "Wrong size on USTT_GetAmbientMontageSoftObjectPath_C");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, UberGraphFrame) == 0x000070, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, Target) == 0x000078, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, InteractionTypeName) == 0x000080, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::InteractionTypeName' has a wrong offset!");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, MontageSoftObjectPath) == 0x000088, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::MontageSoftObjectPath' has a wrong offset!");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, CanSucceed) == 0x0000A8, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::CanSucceed' has a wrong offset!");
static_assert(offsetof(USTT_GetAmbientMontageSoftObjectPath_C, CanFail) == 0x0000A9, "Member 'USTT_GetAmbientMontageSoftObjectPath_C::CanFail' has a wrong offset!");

}

