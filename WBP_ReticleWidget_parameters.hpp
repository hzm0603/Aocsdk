﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReticleWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ReticleWidget.WBP_ReticleWidget_C.UpdateTargetReticle
// 0x0148 (0x0148 - 0x0000)
struct WBP_ReticleWidget_C_UpdateTargetReticle final
{
public:
	bool                                          CallFunc_IsSoftLockVisualEnabled_ReturnValue;      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAoCPlayerController*                   K2Node_DynamicCast_AsAo_CPlayer_Controller;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter*                         CallFunc_GetSoftLockTarget_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_2;     // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_3;     // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReticleWidget_C_UpdateTargetReticle) == 0x000008, "Wrong alignment on WBP_ReticleWidget_C_UpdateTargetReticle");
static_assert(sizeof(WBP_ReticleWidget_C_UpdateTargetReticle) == 0x000148, "Wrong size on WBP_ReticleWidget_C_UpdateTargetReticle");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_IsSoftLockVisualEnabled_ReturnValue) == 0x000000, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_IsSoftLockVisualEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, K2Node_DynamicCast_AsAo_CPlayer_Controller) == 0x000010, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::K2Node_DynamicCast_AsAo_CPlayer_Controller' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetViewportScale_ReturnValue) == 0x00001C, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetSoftLockTarget_ReturnValue) == 0x000020, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetSoftLockTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetSocketLocation_ReturnValue) == 0x000050, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetViewportSize_ReturnValue) == 0x000068, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_SelectVector_ReturnValue) == 0x000078, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000090, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Multiply_Vector2DFloat_ReturnValue_1) == 0x0000B8, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Multiply_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000C8, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x0000D0, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x0000E0, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Multiply_Vector2DFloat_ReturnValue_2) == 0x0000E8, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Multiply_Vector2DFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0000F8, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000108, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_GetSize_ReturnValue) == 0x000110, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Multiply_Vector2DFloat_ReturnValue_3) == 0x000120, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Multiply_Vector2DFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000130, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateTargetReticle, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000140, "Member 'WBP_ReticleWidget_C_UpdateTargetReticle::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_ReticleWidget.WBP_ReticleWidget_C.UpdateReticleColor
// 0x0068 (0x0068 - 0x0000)
struct WBP_ReticleWidget_C_UpdateReticleColor final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0014)()
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAoCPlayerController*                   K2Node_DynamicCast_AsAo_CPlayer_Controller;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABaseCharacter*                         CallFunc_GetSoftLockTarget_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetSoftLockIndicatorColor_ReturnValue;    // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0014)()
};
static_assert(alignof(WBP_ReticleWidget_C_UpdateReticleColor) == 0x000008, "Wrong alignment on WBP_ReticleWidget_C_UpdateReticleColor");
static_assert(sizeof(WBP_ReticleWidget_C_UpdateReticleColor) == 0x000068, "Wrong size on WBP_ReticleWidget_C_UpdateReticleColor");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, K2Node_DynamicCast_AsAo_CPlayer_Controller) == 0x000020, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::K2Node_DynamicCast_AsAo_CPlayer_Controller' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, CallFunc_GetSoftLockTarget_ReturnValue) == 0x000030, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::CallFunc_GetSoftLockTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, CallFunc_GetSoftLockIndicatorColor_ReturnValue) == 0x00003C, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::CallFunc_GetSoftLockIndicatorColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, CallFunc_IsValid_ReturnValue_1) == 0x00004C, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_UpdateReticleColor, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'WBP_ReticleWidget_C_UpdateReticleColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function WBP_ReticleWidget.WBP_ReticleWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_ReticleWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReticleWidget_C_Tick) == 0x000004, "Wrong alignment on WBP_ReticleWidget_C_Tick");
static_assert(sizeof(WBP_ReticleWidget_C_Tick) == 0x00003C, "Wrong size on WBP_ReticleWidget_C_Tick");
static_assert(offsetof(WBP_ReticleWidget_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_ReticleWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_ReticleWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_ReticleWidget.WBP_ReticleWidget_C.ExecuteUbergraph_WBP_ReticleWidget
// 0x0040 (0x0040 - 0x0000)
struct WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget) == 0x000004, "Wrong alignment on WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget");
static_assert(sizeof(WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget) == 0x000040, "Wrong size on WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget");
static_assert(offsetof(WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget, EntryPoint) == 0x000000, "Member 'WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WBP_ReticleWidget_C_ExecuteUbergraph_WBP_ReticleWidget::K2Node_Event_InDeltaTime' has a wrong offset!");

}

