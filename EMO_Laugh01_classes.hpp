﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EMO_Laugh01

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EMO_Laugh01.EMO_Laugh01_C
// 0x0000 (0x0060 - 0x0060)
class UEMO_Laugh01_C final : public UEmote
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EMO_Laugh01_C">();
	}
	static class UEMO_Laugh01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEMO_Laugh01_C>();
	}
};
static_assert(alignof(UEMO_Laugh01_C) == 0x000008, "Wrong alignment on UEMO_Laugh01_C");
static_assert(sizeof(UEMO_Laugh01_C) == 0x000060, "Wrong size on UEMO_Laugh01_C");

}

