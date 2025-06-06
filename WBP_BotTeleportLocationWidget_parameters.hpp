﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BotTeleportLocationWidget

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function WBP_BotTeleportLocationWidget.WBP_BotTeleportLocationWidget_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct WBP_BotTeleportLocationWidget_C_SetData final
{
public:
	struct FBotTeleportLocation                   InData;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_BotTeleportLocationWidget_C_SetData) == 0x000008, "Wrong alignment on WBP_BotTeleportLocationWidget_C_SetData");
static_assert(sizeof(WBP_BotTeleportLocationWidget_C_SetData) == 0x000028, "Wrong size on WBP_BotTeleportLocationWidget_C_SetData");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_SetData, InData) == 0x000000, "Member 'WBP_BotTeleportLocationWidget_C_SetData::InData' has a wrong offset!");

// Function WBP_BotTeleportLocationWidget.WBP_BotTeleportLocationWidget_C.ExecuteUbergraph_WBP_BotTeleportLocationWidget
// 0x0088 (0x0088 - 0x0000)
struct WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0030(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAoCPlayerControllerBP_C*               K2Node_DynamicCast_AsAo_CPlayer_Controller_BP;     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBotTeleportLocation                   K2Node_CustomEvent_InData;                         // 0x0060(0x0028)()
};
static_assert(alignof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget) == 0x000008, "Wrong alignment on WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget");
static_assert(sizeof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget) == 0x000088, "Wrong size on WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, EntryPoint) == 0x000000, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, CallFunc_Conv_VectorToString_ReturnValue) == 0x000008, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000030, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, K2Node_DynamicCast_AsAo_CPlayer_Controller_BP) == 0x000050, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::K2Node_DynamicCast_AsAo_CPlayer_Controller_BP' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget, K2Node_CustomEvent_InData) == 0x000060, "Member 'WBP_BotTeleportLocationWidget_C_ExecuteUbergraph_WBP_BotTeleportLocationWidget::K2Node_CustomEvent_InData' has a wrong offset!");

}

