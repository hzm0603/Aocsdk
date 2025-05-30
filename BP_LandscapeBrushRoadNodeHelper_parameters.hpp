﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LandscapeBrushRoadNodeHelper

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.Build Road
// 0x0018 (0x0018 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_Build_Road final
{
public:
	bool                                          CallFunc_IsWithEditor_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_Build_Road) == 0x000008, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_Build_Road");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_Build_Road) == 0x000018, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_Build_Road");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Build_Road, CallFunc_IsWithEditor_ReturnValue) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Build_Road::CallFunc_IsWithEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Build_Road, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Build_Road::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Build_Road, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Build_Road::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.Capture Minimap
// 0x0018 (0x0018 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap final
{
public:
	bool                                          Is_Capturing;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Height_Offset;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Width_Scale;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap) == 0x000008, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap) == 0x000018, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap, Is_Capturing) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap::Is_Capturing' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap, Height_Offset) == 0x000008, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap::Height_Offset' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap, Width_Scale) == 0x000010, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Capture_Minimap::Width_Scale' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper
// 0x0108 (0x0108 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadedRoadBaseAppearance              K2Node_Event_LoadedRoadBaseAppearance;             // 0x0008(0x0078)(ConstParm)
	bool                                          K2Node_Event_Is_Capturing;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_Height_Offset;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_Width_Scale;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsRoadActive;                        // 0x0098(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLoadedRoadAppearance                  K2Node_Event_LoadedRoadAppearance;                 // 0x00A0(0x0068)(ConstParm)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper) == 0x000008, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper) == 0x000108, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, EntryPoint) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_LoadedRoadBaseAppearance) == 0x000008, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_LoadedRoadBaseAppearance' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_Is_Capturing) == 0x000080, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_Is_Capturing' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_Height_Offset) == 0x000088, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_Height_Offset' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_Width_Scale) == 0x000090, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_Width_Scale' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_bIsRoadActive) == 0x000098, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_bIsRoadActive' has a wrong offset!");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper, K2Node_Event_LoadedRoadAppearance) == 0x0000A0, "Member 'BP_LandscapeBrushRoadNodeHelper_C_ExecuteUbergraph_BP_LandscapeBrushRoadNodeHelper::K2Node_Event_LoadedRoadAppearance' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.OnRoadActiveStateUpdatedBP
// 0x0001 (0x0001 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP final
{
public:
	bool                                          bIsRoadActive;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP) == 0x000001, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP) == 0x000001, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP, bIsRoadActive) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_OnRoadActiveStateUpdatedBP::bIsRoadActive' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.OnRoadAppearanceUpdatedBP
// 0x0068 (0x0068 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP final
{
public:
	struct FLoadedRoadAppearance                  LoadedRoadAppearance;                              // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP) == 0x000008, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP) == 0x000068, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP, LoadedRoadAppearance) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_OnRoadAppearanceUpdatedBP::LoadedRoadAppearance' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.OnRoadBaseAppearanceUpdatedBP
// 0x0078 (0x0078 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP final
{
public:
	struct FLoadedRoadBaseAppearance              LoadedRoadBaseAppearance;                          // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP) == 0x000008, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP) == 0x000078, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP, LoadedRoadBaseAppearance) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_OnRoadBaseAppearanceUpdatedBP::LoadedRoadBaseAppearance' has a wrong offset!");

// Function BP_LandscapeBrushRoadNodeHelper.BP_LandscapeBrushRoadNodeHelper_C.Set Road Levels
// 0x0004 (0x0004 - 0x0000)
struct BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels final
{
public:
	int32                                         Road_Level;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels) == 0x000004, "Wrong alignment on BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels");
static_assert(sizeof(BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels) == 0x000004, "Wrong size on BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels");
static_assert(offsetof(BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels, Road_Level) == 0x000000, "Member 'BP_LandscapeBrushRoadNodeHelper_C_Set_Road_Levels::Road_Level' has a wrong offset!");

}

