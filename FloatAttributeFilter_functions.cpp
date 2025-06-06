﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloatAttributeFilter

#include "Basic.hpp"

#include "FloatAttributeFilter_classes.hpp"
#include "FloatAttributeFilter_parameters.hpp"


namespace SDK
{

// Function FloatAttributeFilter.FloatAttributeFilter_C.ExecuteWithContext
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPCGContext&                     InContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FPCGDataCollection&        Input                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPCGDataCollection*              Output                                                 (Parm, OutParm)

void UFloatAttributeFilter_C::ExecuteWithContext(struct FPCGContext& InContext, const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatAttributeFilter_C", "ExecuteWithContext");

	Params::FloatAttributeFilter_C_ExecuteWithContext Parms{};

	Parms.InContext = std::move(InContext);
	Parms.Input = std::move(Input);

	UObject::ProcessEvent(Func, &Parms);

	InContext = std::move(Parms.InContext);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function FloatAttributeFilter.FloatAttributeFilter_C.NodeColorOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UFloatAttributeFilter_C::NodeColorOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatAttributeFilter_C", "NodeColorOverride");

	Params::FloatAttributeFilter_C_NodeColorOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FloatAttributeFilter.FloatAttributeFilter_C.NodeTitleOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UFloatAttributeFilter_C::NodeTitleOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatAttributeFilter_C", "NodeTitleOverride");

	Params::FloatAttributeFilter_C_NodeTitleOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FloatAttributeFilter.FloatAttributeFilter_C.PointLoopBody
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FPCGContext&               InContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const class UPCGPointData*              InData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FPCGPoint&                 InPoint                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPCGPoint*                       OutPoint                                               (Parm, OutParm, NoDestructor)
// class UPCGMetadata*                     OutMetadata                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFloatAttributeFilter_C::PointLoopBody(const struct FPCGContext& InContext, const class UPCGPointData* InData, const struct FPCGPoint& InPoint, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatAttributeFilter_C", "PointLoopBody");

	Params::FloatAttributeFilter_C_PointLoopBody Parms{};

	Parms.InContext = std::move(InContext);
	Parms.InData = InData;
	Parms.InPoint = std::move(InPoint);
	Parms.OutMetadata = OutMetadata;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPoint != nullptr)
		*OutPoint = std::move(Parms.OutPoint);

	return Parms.ReturnValue;
}

}

