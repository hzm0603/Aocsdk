﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NotificationButton_Highest

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NotificationButton_Highest.NotificationButton_Highest_C
// 0x0000 (0x0800 - 0x0800)
class UNotificationButton_Highest_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotificationButton_Highest_C">();
	}
	static class UNotificationButton_Highest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotificationButton_Highest_C>();
	}
};
static_assert(alignof(UNotificationButton_Highest_C) == 0x000010, "Wrong alignment on UNotificationButton_Highest_C");
static_assert(sizeof(UNotificationButton_Highest_C) == 0x000800, "Wrong size on UNotificationButton_Highest_C");

}

