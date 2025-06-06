﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STT_SetBBBool

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DesignDataPlugin_structs.hpp"
#include "STT_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass STT_SetBBBool.STT_SetBBBool_C
// 0x0070 (0x00E8 - 0x0078)
class USTT_SetBBBool_C final : public USTT_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter*                         Target;                                            // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                   Variable_Name;                                     // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAoCExpression                         Value_Expression;                                  // 0x0090(0x0050)(Edit, BlueprintVisible)
	bool                                          Value;                                             // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stored_Value;                                      // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_STT_SetBBBool(int32 EntryPoint);
	void ReceiveLatentEnterState(const struct FStateTreeTransitionResult& Transition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STT_SetBBBool_C">();
	}
	static class USTT_SetBBBool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTT_SetBBBool_C>();
	}
};
static_assert(alignof(USTT_SetBBBool_C) == 0x000008, "Wrong alignment on USTT_SetBBBool_C");
static_assert(sizeof(USTT_SetBBBool_C) == 0x0000E8, "Wrong size on USTT_SetBBBool_C");
static_assert(offsetof(USTT_SetBBBool_C, UberGraphFrame) == 0x000078, "Member 'USTT_SetBBBool_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USTT_SetBBBool_C, Target) == 0x000080, "Member 'USTT_SetBBBool_C::Target' has a wrong offset!");
static_assert(offsetof(USTT_SetBBBool_C, Variable_Name) == 0x000088, "Member 'USTT_SetBBBool_C::Variable_Name' has a wrong offset!");
static_assert(offsetof(USTT_SetBBBool_C, Value_Expression) == 0x000090, "Member 'USTT_SetBBBool_C::Value_Expression' has a wrong offset!");
static_assert(offsetof(USTT_SetBBBool_C, Value) == 0x0000E0, "Member 'USTT_SetBBBool_C::Value' has a wrong offset!");
static_assert(offsetof(USTT_SetBBBool_C, Stored_Value) == 0x0000E1, "Member 'USTT_SetBBBool_C::Stored_Value' has a wrong offset!");

}

