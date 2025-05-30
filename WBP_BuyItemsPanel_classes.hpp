﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuyItemsPanel

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BuyItemsPanel.WBP_BuyItemsPanel_C
// 0x0190 (0x06E8 - 0x0558)
class UWBP_BuyItemsPanel_C final : public UMarketplaceBuyPanel
{
public:
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   CartContent;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderAccent;                                      // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBG;                                          // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBG_1;                                        // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_HeaderAccent_1;                                // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ItemTypeTabsBox;                                   // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   ScrollingItemList;                                 // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScrollWindow_NoFrameNoPadding_C*   ScrollingStorefrontList;                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    Text;                                              // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry;                         // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_1;                       // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_2;                       // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_3;                       // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_4;                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_5;                       // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStorefrontEntry_C*           WBP_PlayerStorefrontEntry_6;                       // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem;                            // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_1;                          // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_2;                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_3;                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_4;                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_5;                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_6;                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_7;                          // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_8;                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_9;                          // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_10;                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_11;                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_12;                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_13;                         // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_14;                         // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_15;                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_16;                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_17;                         // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_18;                         // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_19;                         // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_20;                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_21;                         // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_22;                         // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_23;                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_24;                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_25;                         // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_26;                         // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_27;                         // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_28;                         // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_29;                         // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_30;                         // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_31;                         // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_32;                         // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VendorStandardItem_C*              WBP_VendorStandardItem_33;                         // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BuyItemsPanel_C">();
	}
	static class UWBP_BuyItemsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BuyItemsPanel_C>();
	}
};
static_assert(alignof(UWBP_BuyItemsPanel_C) == 0x000008, "Wrong alignment on UWBP_BuyItemsPanel_C");
static_assert(sizeof(UWBP_BuyItemsPanel_C) == 0x0006E8, "Wrong size on UWBP_BuyItemsPanel_C");
static_assert(offsetof(UWBP_BuyItemsPanel_C, CartContent) == 0x000558, "Member 'UWBP_BuyItemsPanel_C::CartContent' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, HeaderAccent) == 0x000560, "Member 'UWBP_BuyItemsPanel_C::HeaderAccent' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, HeaderBG) == 0x000568, "Member 'UWBP_BuyItemsPanel_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, HeaderBG_1) == 0x000570, "Member 'UWBP_BuyItemsPanel_C::HeaderBG_1' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, IMG_HeaderAccent_1) == 0x000578, "Member 'UWBP_BuyItemsPanel_C::IMG_HeaderAccent_1' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, ItemTypeTabsBox) == 0x000580, "Member 'UWBP_BuyItemsPanel_C::ItemTypeTabsBox' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, ScrollingItemList) == 0x000588, "Member 'UWBP_BuyItemsPanel_C::ScrollingItemList' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, ScrollingStorefrontList) == 0x000590, "Member 'UWBP_BuyItemsPanel_C::ScrollingStorefrontList' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, Text) == 0x000598, "Member 'UWBP_BuyItemsPanel_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry) == 0x0005A0, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_1) == 0x0005A8, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_2) == 0x0005B0, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_3) == 0x0005B8, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_4) == 0x0005C0, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_4' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_5) == 0x0005C8, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_5' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_PlayerStorefrontEntry_6) == 0x0005D0, "Member 'UWBP_BuyItemsPanel_C::WBP_PlayerStorefrontEntry_6' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem) == 0x0005D8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_1) == 0x0005E0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_2) == 0x0005E8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_3) == 0x0005F0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_3' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_4) == 0x0005F8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_4' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_5) == 0x000600, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_5' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_6) == 0x000608, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_6' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_7) == 0x000610, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_7' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_8) == 0x000618, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_8' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_9) == 0x000620, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_9' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_10) == 0x000628, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_10' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_11) == 0x000630, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_11' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_12) == 0x000638, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_12' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_13) == 0x000640, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_13' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_14) == 0x000648, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_14' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_15) == 0x000650, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_15' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_16) == 0x000658, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_16' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_17) == 0x000660, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_17' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_18) == 0x000668, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_18' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_19) == 0x000670, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_19' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_20) == 0x000678, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_20' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_21) == 0x000680, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_21' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_22) == 0x000688, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_22' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_23) == 0x000690, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_23' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_24) == 0x000698, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_24' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_25) == 0x0006A0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_25' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_26) == 0x0006A8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_26' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_27) == 0x0006B0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_27' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_28) == 0x0006B8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_28' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_29) == 0x0006C0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_29' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_30) == 0x0006C8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_30' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_31) == 0x0006D0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_31' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_32) == 0x0006D8, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_32' has a wrong offset!");
static_assert(offsetof(UWBP_BuyItemsPanel_C, WBP_VendorStandardItem_33) == 0x0006E0, "Member 'UWBP_BuyItemsPanel_C::WBP_VendorStandardItem_33' has a wrong offset!");

}

