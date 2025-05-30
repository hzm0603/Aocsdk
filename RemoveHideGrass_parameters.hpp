﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RemoveHideGrass

#include "Basic.hpp"

#include "PCG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RemoveHideGrass.RemoveHideGrass_C.ExecuteWithContext
// 0x0470 (0x0470 - 0x0000)
struct RemoveHideGrass_C_ExecuteWithContext final
{
public:
	struct FPCGContext                            InContext;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPCGDataCollection                     Input;                                             // 0x00B8(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPCGDataCollection                     Output;                                            // 0x00D8(0x0020)(Parm, OutParm)
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPCGPoint                              Current_Point;                                     // 0x0100(0x00D0)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringAttribute_ReturnValue;           // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAttributeSet_ReturnValue;              // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F5[0x3];                                      // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPCGComponent*                          CallFunc_GetComponent_ReturnValue;                 // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPCGMetadata*                           CallFunc_MutableMetadata_ReturnValue;              // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UInstancedStaticMeshComponent*>  CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0220(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UInstancedStaticMeshComponent*          CallFunc_Array_Get_Item;                           // 0x0230(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0268(0x0010)(ReferenceParm)
	struct FSoftObjectPath                        CallFunc_GetSoftObjectPath_ReturnValue;            // 0x0278(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BreakSoftObjectPath_PathString;           // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UPCGPointData*                    CallFunc_ToPointDataWithContext_ReturnValue;       // 0x02B8(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPCGTaggedData                         K2Node_MakeStruct_PCGTaggedData;                   // 0x02C0(0x0068)()
	const class UPCGPointData*                    CallFunc_ToPointDataWithContext_ReturnValue_1;     // 0x0328(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPCGTaggedData>                 K2Node_MakeArray_Array;                            // 0x0330(0x0010)(ReferenceParm)
	TArray<struct FPCGPoint>                      CallFunc_GetPoints_ReturnValue;                    // 0x0340(0x0010)(ConstParm, ReferenceParm)
	struct FPCGDataCollection                     K2Node_MakeStruct_PCGDataCollection;               // 0x0350(0x0020)()
	struct FPCGPoint                              CallFunc_Array_Get_Item_1;                         // 0x0370(0x00D0)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_445[0x3];                                      // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPCGTaggedData>                 CallFunc_GetInputs_ReturnValue;                    // 0x0448(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_459[0x7];                                      // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPCGSpatialData*                        K2Node_DynamicCast_AsPCGSpatial_Data;              // 0x0460(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RemoveHideGrass_C_ExecuteWithContext) == 0x000010, "Wrong alignment on RemoveHideGrass_C_ExecuteWithContext");
static_assert(sizeof(RemoveHideGrass_C_ExecuteWithContext) == 0x000470, "Wrong size on RemoveHideGrass_C_ExecuteWithContext");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, InContext) == 0x000000, "Member 'RemoveHideGrass_C_ExecuteWithContext::InContext' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Input) == 0x0000B8, "Member 'RemoveHideGrass_C_ExecuteWithContext::Input' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Output) == 0x0000D8, "Member 'RemoveHideGrass_C_ExecuteWithContext::Output' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Current_Point) == 0x000100, "Member 'RemoveHideGrass_C_ExecuteWithContext::Current_Point' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Temp_int_Loop_Counter_Variable) == 0x0001D0, "Member 'RemoveHideGrass_C_ExecuteWithContext::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Add_IntInt_ReturnValue) == 0x0001D4, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Temp_int_Array_Index_Variable) == 0x0001D8, "Member 'RemoveHideGrass_C_ExecuteWithContext::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetStringAttribute_ReturnValue) == 0x0001E0, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetStringAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Temp_int_Array_Index_Variable_1) == 0x0001F0, "Member 'RemoveHideGrass_C_ExecuteWithContext::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_HasAttributeSet_ReturnValue) == 0x0001F4, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_HasAttributeSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, Temp_int_Loop_Counter_Variable_1) == 0x0001F8, "Member 'RemoveHideGrass_C_ExecuteWithContext::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_AddUnique_ReturnValue) == 0x0001FC, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Add_IntInt_ReturnValue_1) == 0x000200, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetComponent_ReturnValue) == 0x000208, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_MutableMetadata_ReturnValue) == 0x000210, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_MutableMetadata_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetOwner_ReturnValue) == 0x000218, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000220, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_Get_Item) == 0x000230, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_Length_ReturnValue) == 0x000238, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetMaterial_ReturnValue) == 0x000240, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Less_IntInt_ReturnValue) == 0x000248, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000250, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000258, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetMaterials_ReturnValue) == 0x000268, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetSoftObjectPath_ReturnValue) == 0x000278, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetSoftObjectPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000298, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_BreakSoftObjectPath_PathString) == 0x0002A0, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_BreakSoftObjectPath_PathString' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_Contains_ReturnValue) == 0x0002B0, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_ToPointDataWithContext_ReturnValue) == 0x0002B8, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_ToPointDataWithContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_MakeStruct_PCGTaggedData) == 0x0002C0, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_MakeStruct_PCGTaggedData' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_ToPointDataWithContext_ReturnValue_1) == 0x000328, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_ToPointDataWithContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_MakeArray_Array) == 0x000330, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetPoints_ReturnValue) == 0x000340, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetPoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_MakeStruct_PCGDataCollection) == 0x000350, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_MakeStruct_PCGDataCollection' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_Get_Item_1) == 0x000370, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Array_Length_ReturnValue_1) == 0x000440, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_Less_IntInt_ReturnValue_1) == 0x000444, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_GetInputs_ReturnValue) == 0x000448, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_GetInputs_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, CallFunc_IsValid_ReturnValue) == 0x000458, "Member 'RemoveHideGrass_C_ExecuteWithContext::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_DynamicCast_AsPCGSpatial_Data) == 0x000460, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_DynamicCast_AsPCGSpatial_Data' has a wrong offset!");
static_assert(offsetof(RemoveHideGrass_C_ExecuteWithContext, K2Node_DynamicCast_bSuccess_1) == 0x000468, "Member 'RemoveHideGrass_C_ExecuteWithContext::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

