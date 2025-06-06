﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PartyLayoutWidget

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PartyLayoutWidget.WBP_PartyLayoutWidget_C
// 0x0048 (0x03B8 - 0x0370)
class UWBP_PartyLayoutWidget_C final : public UPartyLayout
{
public:
	class UImage*                                 BG;                                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_1;                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_2;                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_3;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_4;                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_5;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberWidget_C*               PartyMemberWidget_UIKit_6;                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             RaidBox;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PartyLayoutWidget_C">();
	}
	static class UWBP_PartyLayoutWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PartyLayoutWidget_C>();
	}
};
static_assert(alignof(UWBP_PartyLayoutWidget_C) == 0x000008, "Wrong alignment on UWBP_PartyLayoutWidget_C");
static_assert(sizeof(UWBP_PartyLayoutWidget_C) == 0x0003B8, "Wrong size on UWBP_PartyLayoutWidget_C");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, BG) == 0x000370, "Member 'UWBP_PartyLayoutWidget_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit) == 0x000378, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_1) == 0x000380, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_1' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_2) == 0x000388, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_2' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_3) == 0x000390, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_3' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_4) == 0x000398, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_4' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_5) == 0x0003A0, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_5' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, PartyMemberWidget_UIKit_6) == 0x0003A8, "Member 'UWBP_PartyLayoutWidget_C::PartyMemberWidget_UIKit_6' has a wrong offset!");
static_assert(offsetof(UWBP_PartyLayoutWidget_C, RaidBox) == 0x0003B0, "Member 'UWBP_PartyLayoutWidget_C::RaidBox' has a wrong offset!");

}

