﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BiomeManager

#include "Basic.hpp"

#include "BP_BiomeManager_classes.hpp"
#include "BP_BiomeManager_parameters.hpp"


namespace SDK
{

// Function BP_BiomeManager.BP_BiomeManager_C.Adds Random to Todays Climate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Degrees_High                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Degrees_Low                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Precipitation_Amount                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Sunshine_Hours                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rain_Days                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Chance_Of_Rain                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Humidity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_SingularClimateData*     StructOut                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Adds_Random_to_Todays_Climate(double Degrees_High, double Degrees_Low, double Precipitation_Amount, int32 Sunshine_Hours, int32 Rain_Days, double Chance_Of_Rain, double Humidity, struct FSTRUCT_SingularClimateData* StructOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Adds Random to Todays Climate");

	Params::BP_BiomeManager_C_Adds_Random_to_Todays_Climate Parms{};

	Parms.Degrees_High = Degrees_High;
	Parms.Degrees_Low = Degrees_Low;
	Parms.Precipitation_Amount = Precipitation_Amount;
	Parms.Sunshine_Hours = Sunshine_Hours;
	Parms.Rain_Days = Rain_Days;
	Parms.Chance_Of_Rain = Chance_Of_Rain;
	Parms.Humidity = Humidity;

	UObject::ProcessEvent(Func, &Parms);

	if (StructOut != nullptr)
		*StructOut = std::move(Parms.StructOut);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Biome to Row Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EBiomes                                 Biome_In                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName*                            Row_Name_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Biome_to_Row_Name(EBiomes Biome_In, class FName* Row_Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Biome to Row Name");

	Params::BP_BiomeManager_C_Biome_to_Row_Name Parms{};

	Parms.Biome_In = Biome_In;

	UObject::ProcessEvent(Func, &Parms);

	if (Row_Name_0 != nullptr)
		*Row_Name_0 = Parms.Row_Name_0;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Blend Biome Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Time_Input                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalAtmosphereOutput&CURRENT_Global_Struct_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Normalized_Year_In                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<class FName, struct FSTRUCT_SingularClimateData>&Biome_Climate_Map                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FSTRUCT_SingularClimateData&Current_Biome_Climate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_GlobalAtmosphereOutput*  Global                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Current_Biome_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_SingularClimateData*     Current_Biome_Climate_Out                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Blend_Biome_Data(const struct FVector2D& Location, double Time_Input, const struct FSTRUCT_GlobalAtmosphereOutput& CURRENT_Global_Struct_0, double Normalized_Year_In, const TMap<class FName, struct FSTRUCT_SingularClimateData>& Biome_Climate_Map, const struct FSTRUCT_SingularClimateData& Current_Biome_Climate, struct FSTRUCT_GlobalAtmosphereOutput* Global, EBiomes* Current_Biome_0, struct FSTRUCT_SingularClimateData* Current_Biome_Climate_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Blend Biome Data");

	Params::BP_BiomeManager_C_Blend_Biome_Data Parms{};

	Parms.Location = std::move(Location);
	Parms.Time_Input = Time_Input;
	Parms.CURRENT_Global_Struct_0 = std::move(CURRENT_Global_Struct_0);
	Parms.Normalized_Year_In = Normalized_Year_In;
	Parms.Biome_Climate_Map = std::move(Biome_Climate_Map);
	Parms.Current_Biome_Climate = std::move(Current_Biome_Climate);

	UObject::ProcessEvent(Func, &Parms);

	if (Global != nullptr)
		*Global = std::move(Parms.Global);

	if (Current_Biome_0 != nullptr)
		*Current_Biome_0 = Parms.Current_Biome_0;

	if (Current_Biome_Climate_Out != nullptr)
		*Current_Biome_Climate_Out = std::move(Parms.Current_Biome_Climate_Out);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Color Lerp Bool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ALPHA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ABP_BiomeManager_C::Color_Lerp_Bool(bool Condition, const struct FLinearColor& A, const struct FLinearColor& B, float ALPHA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Color Lerp Bool");

	Params::BP_BiomeManager_C_Color_Lerp_Bool Parms{};

	Parms.Condition = Condition;
	Parms.A = std::move(A);
	Parms.B = std::move(B);
	Parms.ALPHA = ALPHA;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Determine Month
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  In_Year                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_BiomeManager_C::Determine_Month(double In_Year)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Determine Month");

	Params::BP_BiomeManager_C_Determine_Month Parms{};

	Parms.In_Year = In_Year;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Do Math - Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FLinearColor&              Default__C_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<uint8, struct FLinearColor>& Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*                    Return__C_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Do_Math___Color(const struct FLinearColor& Default__C_, const TMap<uint8, struct FLinearColor>& Colors, struct FLinearColor* Return__C_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Do Math - Color");

	Params::BP_BiomeManager_C_Do_Math___Color Parms{};

	Parms.Default__C_ = std::move(Default__C_);
	Parms.Colors = std::move(Colors);

	UObject::ProcessEvent(Func, &Parms);

	if (Return__C_ != nullptr)
		*Return__C_ = std::move(Parms.Return__C_);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Do Math - Float
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Default_Input__F_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<uint8, double>&              Floats                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// double*                                 Return__F_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Do_Math___Float(double Default_Input__F_, const TMap<uint8, double>& Floats, double* Return__F_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Do Math - Float");

	Params::BP_BiomeManager_C_Do_Math___Float Parms{};

	Parms.Default_Input__F_ = Default_Input__F_;
	Parms.Floats = std::move(Floats);

	UObject::ProcessEvent(Func, &Parms);

	if (Return__F_ != nullptr)
		*Return__F_ = Parms.Return__F_;
}


// Function BP_BiomeManager.BP_BiomeManager_C.ExecuteUbergraph_BP_BiomeManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::ExecuteUbergraph_BP_BiomeManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "ExecuteUbergraph_BP_BiomeManager");

	Params::BP_BiomeManager_C_ExecuteUbergraph_BP_BiomeManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Float Lerp Bool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ALPHA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_BiomeManager_C::Float_Lerp_Bool(bool Condition, double A, double B, double ALPHA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Float Lerp Bool");

	Params::BP_BiomeManager_C_Float_Lerp_Bool Parms{};

	Parms.Condition = Condition;
	Parms.A = A;
	Parms.B = B;
	Parms.ALPHA = ALPHA;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Get Climate For Biome
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EBiomes                                 Biome_In                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<class FName, struct FSTRUCT_SingularClimateData>&TargetMap                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSTRUCT_SingularClimateData*     OVERRIDE_Singular_Day_Climate                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Get_Climate_For_Biome(EBiomes Biome_In, const TMap<class FName, struct FSTRUCT_SingularClimateData>& TargetMap, struct FSTRUCT_SingularClimateData* OVERRIDE_Singular_Day_Climate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Get Climate For Biome");

	Params::BP_BiomeManager_C_Get_Climate_For_Biome Parms{};

	Parms.Biome_In = Biome_In;
	Parms.TargetMap = std::move(TargetMap);

	UObject::ProcessEvent(Func, &Parms);

	if (OVERRIDE_Singular_Day_Climate != nullptr)
		*OVERRIDE_Singular_Day_Climate = std::move(Parms.OVERRIDE_Singular_Day_Climate);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Get Current Biome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBiomes                                 Red_Category_Name_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes                                 Green_Category_Name_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes                                 Blue_Category_Name_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes                                 Alpha_Category_Name_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Current_Biome_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Amount_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Get_Current_Biome(EBiomes Red_Category_Name_0, EBiomes Green_Category_Name_0, EBiomes Blue_Category_Name_0, EBiomes Alpha_Category_Name_0, EBiomes* Current_Biome_0, double* Amount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Get Current Biome");

	Params::BP_BiomeManager_C_Get_Current_Biome Parms{};

	Parms.Red_Category_Name_0 = Red_Category_Name_0;
	Parms.Green_Category_Name_0 = Green_Category_Name_0;
	Parms.Blue_Category_Name_0 = Blue_Category_Name_0;
	Parms.Alpha_Category_Name_0 = Alpha_Category_Name_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Biome_0 != nullptr)
		*Current_Biome_0 = Parms.Current_Biome_0;

	if (Amount_0 != nullptr)
		*Amount_0 = Parms.Amount_0;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Get Override For Biome
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time_Input                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes                                 Biome_In                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalAtmosphereOutput&STRUCT_GlobalAtmosphereOutput                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_GlobalAtmosphereOutput*  OVERRIDE_Global_Struct_0                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_GlobalOverrideAndBool*   OVERRIDE_Global_Struct_BOOL_0                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Get_Override_For_Biome(double Time_Input, EBiomes Biome_In, const struct FSTRUCT_GlobalAtmosphereOutput& STRUCT_GlobalAtmosphereOutput, struct FSTRUCT_GlobalAtmosphereOutput* OVERRIDE_Global_Struct_0, struct FSTRUCT_GlobalOverrideAndBool* OVERRIDE_Global_Struct_BOOL_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Get Override For Biome");

	Params::BP_BiomeManager_C_Get_Override_For_Biome Parms{};

	Parms.Time_Input = Time_Input;
	Parms.Biome_In = Biome_In;
	Parms.STRUCT_GlobalAtmosphereOutput = std::move(STRUCT_GlobalAtmosphereOutput);

	UObject::ProcessEvent(Func, &Parms);

	if (OVERRIDE_Global_Struct_0 != nullptr)
		*OVERRIDE_Global_Struct_0 = std::move(Parms.OVERRIDE_Global_Struct_0);

	if (OVERRIDE_Global_Struct_BOOL_0 != nullptr)
		*OVERRIDE_Global_Struct_BOOL_0 = std::move(Parms.OVERRIDE_Global_Struct_BOOL_0);
}


// Function BP_BiomeManager.BP_BiomeManager_C.INIT Biome Data Tables
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   In_Month                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FSTRUCT_SingularClimateData>*Climate_Single_Day_0                                   (Parm, OutParm)

void ABP_BiomeManager_C::INIT_Biome_Data_Tables(int32 In_Month, TMap<class FName, struct FSTRUCT_SingularClimateData>* Climate_Single_Day_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "INIT Biome Data Tables");

	Params::BP_BiomeManager_C_INIT_Biome_Data_Tables Parms{};

	Parms.In_Month = In_Month;

	UObject::ProcessEvent(Func, &Parms);

	if (Climate_Single_Day_0 != nullptr)
		*Climate_Single_Day_0 = std::move(Parms.Climate_Single_Day_0);
}


// Function BP_BiomeManager.BP_BiomeManager_C.LERP Climate Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ALPHA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_SingularClimateData&Current_Biome_Climate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_SingularClimateData&OVERRIDE_Climate_Data                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_SingularClimateData*     Current_Biome_Climate_Out                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::LERP_Climate_Data(double ALPHA, const struct FSTRUCT_SingularClimateData& Current_Biome_Climate, const struct FSTRUCT_SingularClimateData& OVERRIDE_Climate_Data, struct FSTRUCT_SingularClimateData* Current_Biome_Climate_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "LERP Climate Data");

	Params::BP_BiomeManager_C_LERP_Climate_Data Parms{};

	Parms.ALPHA = ALPHA;
	Parms.Current_Biome_Climate = std::move(Current_Biome_Climate);
	Parms.OVERRIDE_Climate_Data = std::move(OVERRIDE_Climate_Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Biome_Climate_Out != nullptr)
		*Current_Biome_Climate_Out = std::move(Parms.Current_Biome_Climate_Out);
}


// Function BP_BiomeManager.BP_BiomeManager_C.LERP Structs (F)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ALPHA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalAtmosphereOutput&Current_Global_Settings_Struct                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalAtmosphereOutput&Override_Global_Settings_Struct                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalOverrideAndBool&Current_Override_BOOL_Struct                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_GlobalAtmosphereOutput*  CURRENT_Global_Struct_0                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::LERP_Structs__F_(float ALPHA, const struct FSTRUCT_GlobalAtmosphereOutput& Current_Global_Settings_Struct, const struct FSTRUCT_GlobalAtmosphereOutput& Override_Global_Settings_Struct, const struct FSTRUCT_GlobalOverrideAndBool& Current_Override_BOOL_Struct, struct FSTRUCT_GlobalAtmosphereOutput* CURRENT_Global_Struct_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "LERP Structs (F)");

	Params::BP_BiomeManager_C_LERP_Structs__F_ Parms{};

	Parms.ALPHA = ALPHA;
	Parms.Current_Global_Settings_Struct = std::move(Current_Global_Settings_Struct);
	Parms.Override_Global_Settings_Struct = std::move(Override_Global_Settings_Struct);
	Parms.Current_Override_BOOL_Struct = std::move(Current_Override_BOOL_Struct);

	UObject::ProcessEvent(Func, &Parms);

	if (CURRENT_Global_Struct_0 != nullptr)
		*CURRENT_Global_Struct_0 = std::move(Parms.CURRENT_Global_Struct_0);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Pass To Debug
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBiomes*                                Red_Biome                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Red_Amount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Red_Biome_Amount_Previous_0                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Green_Biome                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Green_Amount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Green_Biome_Amount_Previous_0                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Blue_Biome                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Blue_Amount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Blue_Biome_Amount_Previous_0                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Alpha_Biome                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Alpha_Amount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Alpha_Biome_Amount_Previoius_0                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Month_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Pass_To_Debug(EBiomes* Red_Biome, double* Red_Amount, double* Red_Biome_Amount_Previous_0, EBiomes* Green_Biome, double* Green_Amount, double* Green_Biome_Amount_Previous_0, EBiomes* Blue_Biome, double* Blue_Amount, double* Blue_Biome_Amount_Previous_0, EBiomes* Alpha_Biome, double* Alpha_Amount, double* Alpha_Biome_Amount_Previoius_0, int32* Month_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Pass To Debug");

	Params::BP_BiomeManager_C_Pass_To_Debug Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Red_Biome != nullptr)
		*Red_Biome = Parms.Red_Biome;

	if (Red_Amount != nullptr)
		*Red_Amount = Parms.Red_Amount;

	if (Red_Biome_Amount_Previous_0 != nullptr)
		*Red_Biome_Amount_Previous_0 = Parms.Red_Biome_Amount_Previous_0;

	if (Green_Biome != nullptr)
		*Green_Biome = Parms.Green_Biome;

	if (Green_Amount != nullptr)
		*Green_Amount = Parms.Green_Amount;

	if (Green_Biome_Amount_Previous_0 != nullptr)
		*Green_Biome_Amount_Previous_0 = Parms.Green_Biome_Amount_Previous_0;

	if (Blue_Biome != nullptr)
		*Blue_Biome = Parms.Blue_Biome;

	if (Blue_Amount != nullptr)
		*Blue_Amount = Parms.Blue_Amount;

	if (Blue_Biome_Amount_Previous_0 != nullptr)
		*Blue_Biome_Amount_Previous_0 = Parms.Blue_Biome_Amount_Previous_0;

	if (Alpha_Biome != nullptr)
		*Alpha_Biome = Parms.Alpha_Biome;

	if (Alpha_Amount != nullptr)
		*Alpha_Amount = Parms.Alpha_Amount;

	if (Alpha_Biome_Amount_Previoius_0 != nullptr)
		*Alpha_Biome_Amount_Previoius_0 = Parms.Alpha_Biome_Amount_Previoius_0;

	if (Month_0 != nullptr)
		*Month_0 = Parms.Month_0;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Pick Variable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                                   Variable_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  float_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                      Float_Curve                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*                Color_Curve                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Float_Output                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    Color_Output                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Pick_Variable(uint8 Variable_Type, double float_0, class UCurveFloat* Float_Curve, const struct FLinearColor& Color, class UCurveLinearColor* Color_Curve, double Time, double* Float_Output, struct FLinearColor* Color_Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Pick Variable");

	Params::BP_BiomeManager_C_Pick_Variable Parms{};

	Parms.Variable_Type = Variable_Type;
	Parms.float_0 = float_0;
	Parms.Float_Curve = Float_Curve;
	Parms.Color = std::move(Color);
	Parms.Color_Curve = Color_Curve;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (Float_Output != nullptr)
		*Float_Output = Parms.Float_Output;

	if (Color_Output != nullptr)
		*Color_Output = std::move(Parms.Color_Output);
}


// Function BP_BiomeManager.BP_BiomeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BiomeManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BiomeManager.BP_BiomeManager_C.Row Name To Biome
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName&                            In_Row_Name                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                Row_Name_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Row_Name_To_Biome(class FName& In_Row_Name, EBiomes* Row_Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Row Name To Biome");

	Params::BP_BiomeManager_C_Row_Name_To_Biome Parms{};

	Parms.In_Row_Name = In_Row_Name;

	UObject::ProcessEvent(Func, &Parms);

	In_Row_Name = Parms.In_Row_Name;

	if (Row_Name_0 != nullptr)
		*Row_Name_0 = Parms.Row_Name_0;
}


// Function BP_BiomeManager.BP_BiomeManager_C.Run Biome BP Functions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   In_Month                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Time_Input                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_GlobalAtmosphereOutput&CURRENT_Global_Struct_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Normalized_Year_In                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FSTRUCT_SingularClimateData&Current_Biome_Climate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TMap<class FName, struct FSTRUCT_SingularClimateData>&Biome_Climate_Map                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSTRUCT_GlobalAtmosphereOutput*  Global                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSTRUCT_SingularClimateData*     Current_Biome_Climate_Out                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBiomes*                                DEBUG_Current_Biome                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BiomeManager_C::Run_Biome_BP_Functions(int32 In_Month, const struct FVector2D& Location, double Time_Input, const struct FSTRUCT_GlobalAtmosphereOutput& CURRENT_Global_Struct_0, double Normalized_Year_In, const struct FSTRUCT_SingularClimateData& Current_Biome_Climate, const TMap<class FName, struct FSTRUCT_SingularClimateData>& Biome_Climate_Map, struct FSTRUCT_GlobalAtmosphereOutput* Global, struct FSTRUCT_SingularClimateData* Current_Biome_Climate_Out, EBiomes* DEBUG_Current_Biome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "Run Biome BP Functions");

	Params::BP_BiomeManager_C_Run_Biome_BP_Functions Parms{};

	Parms.In_Month = In_Month;
	Parms.Location = std::move(Location);
	Parms.Time_Input = Time_Input;
	Parms.CURRENT_Global_Struct_0 = std::move(CURRENT_Global_Struct_0);
	Parms.Normalized_Year_In = Normalized_Year_In;
	Parms.Current_Biome_Climate = std::move(Current_Biome_Climate);
	Parms.Biome_Climate_Map = std::move(Biome_Climate_Map);

	UObject::ProcessEvent(Func, &Parms);

	if (Global != nullptr)
		*Global = std::move(Parms.Global);

	if (Current_Biome_Climate_Out != nullptr)
		*Current_Biome_Climate_Out = std::move(Parms.Current_Biome_Climate_Out);

	if (DEBUG_Current_Biome != nullptr)
		*DEBUG_Current_Biome = Parms.DEBUG_Current_Biome;
}


// Function BP_BiomeManager.BP_BiomeManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BiomeManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BiomeManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

