﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NotificationItem

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NotificationItem.WBP_NotificationItem_C
// 0x0000 (0x0410 - 0x0410)
class UWBP_NotificationItem_C final : public UNotificationItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NotificationItem_C">();
	}
	static class UWBP_NotificationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NotificationItem_C>();
	}
};
static_assert(alignof(UWBP_NotificationItem_C) == 0x000008, "Wrong alignment on UWBP_NotificationItem_C");
static_assert(sizeof(UWBP_NotificationItem_C) == 0x000410, "Wrong size on UWBP_NotificationItem_C");

}

