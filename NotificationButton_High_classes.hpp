﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NotificationButton_High

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NotificationButton_High.NotificationButton_High_C
// 0x0000 (0x0800 - 0x0800)
class UNotificationButton_High_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotificationButton_High_C">();
	}
	static class UNotificationButton_High_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotificationButton_High_C>();
	}
};
static_assert(alignof(UNotificationButton_High_C) == 0x000010, "Wrong alignment on UNotificationButton_High_C");
static_assert(sizeof(UNotificationButton_High_C) == 0x000800, "Wrong size on UNotificationButton_High_C");

}

