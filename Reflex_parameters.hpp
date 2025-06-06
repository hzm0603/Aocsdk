﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reflex

#include "Basic.hpp"

#include "Reflex_structs.hpp"


namespace SDK::Params
{

// Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
// 0x0001 (0x0001 - 0x0000)
struct ReflexBlueprintLibrary_GetFlashIndicatorEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetFlashIndicatorEnabled");
static_assert(sizeof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetFlashIndicatorEnabled");
static_assert(offsetof(ReflexBlueprintLibrary_GetFlashIndicatorEnabled, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetFlashIndicatorEnabled::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
// 0x0004 (0x0004 - 0x0000)
struct ReflexBlueprintLibrary_GetGameLatencyInMs final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetGameLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetGameLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetGameLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetGameLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetGameLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetGameLatencyInMs::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
// 0x0004 (0x0004 - 0x0000)
struct ReflexBlueprintLibrary_GetGameToRenderLatencyInMs final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetGameToRenderLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetGameToRenderLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetGameToRenderLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetGameToRenderLatencyInMs::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
// 0x0001 (0x0001 - 0x0000)
struct ReflexBlueprintLibrary_GetReflexAvailable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetReflexAvailable) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetReflexAvailable");
static_assert(sizeof(ReflexBlueprintLibrary_GetReflexAvailable) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetReflexAvailable");
static_assert(offsetof(ReflexBlueprintLibrary_GetReflexAvailable, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetReflexAvailable::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.GetReflexMode
// 0x0001 (0x0001 - 0x0000)
struct ReflexBlueprintLibrary_GetReflexMode final
{
public:
	EReflexMode                                   ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetReflexMode) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_GetReflexMode");
static_assert(sizeof(ReflexBlueprintLibrary_GetReflexMode) == 0x000001, "Wrong size on ReflexBlueprintLibrary_GetReflexMode");
static_assert(offsetof(ReflexBlueprintLibrary_GetReflexMode, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetReflexMode::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
// 0x0004 (0x0004 - 0x0000)
struct ReflexBlueprintLibrary_GetRenderLatencyInMs final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_GetRenderLatencyInMs) == 0x000004, "Wrong alignment on ReflexBlueprintLibrary_GetRenderLatencyInMs");
static_assert(sizeof(ReflexBlueprintLibrary_GetRenderLatencyInMs) == 0x000004, "Wrong size on ReflexBlueprintLibrary_GetRenderLatencyInMs");
static_assert(offsetof(ReflexBlueprintLibrary_GetRenderLatencyInMs, ReturnValue) == 0x000000, "Member 'ReflexBlueprintLibrary_GetRenderLatencyInMs::ReturnValue' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
// 0x0001 (0x0001 - 0x0000)
struct ReflexBlueprintLibrary_SetFlashIndicatorEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_SetFlashIndicatorEnabled");
static_assert(sizeof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled) == 0x000001, "Wrong size on ReflexBlueprintLibrary_SetFlashIndicatorEnabled");
static_assert(offsetof(ReflexBlueprintLibrary_SetFlashIndicatorEnabled, bEnabled) == 0x000000, "Member 'ReflexBlueprintLibrary_SetFlashIndicatorEnabled::bEnabled' has a wrong offset!");

// Function Reflex.ReflexBlueprintLibrary.SetReflexMode
// 0x0001 (0x0001 - 0x0000)
struct ReflexBlueprintLibrary_SetReflexMode final
{
public:
	EReflexMode                                   Mode;                                              // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ReflexBlueprintLibrary_SetReflexMode) == 0x000001, "Wrong alignment on ReflexBlueprintLibrary_SetReflexMode");
static_assert(sizeof(ReflexBlueprintLibrary_SetReflexMode) == 0x000001, "Wrong size on ReflexBlueprintLibrary_SetReflexMode");
static_assert(offsetof(ReflexBlueprintLibrary_SetReflexMode, Mode) == 0x000000, "Member 'ReflexBlueprintLibrary_SetReflexMode::Mode' has a wrong offset!");

}

