﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteriorVolume

#include "Basic.hpp"

#include "BP_InteriorVolume_classes.hpp"
#include "BP_InteriorVolume_parameters.hpp"


namespace SDK
{

// Function BP_InteriorVolume.BP_InteriorVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Update Blending Editor Time
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::Update_Blending_Editor_Time()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Update Blending Editor Time");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Toggle Interior Map
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::Toggle_Interior_Map(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Toggle Interior Map");

	Params::BP_InteriorVolume_C_Toggle_Interior_Map Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Stop Previewing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::Stop_Previewing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Stop Previewing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Start Previewing
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::Start_Previewing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Start Previewing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Set Master Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Master_Value_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::Set_Master_Value(double Master_Value_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Set Master Value");

	Params::BP_InteriorVolume_C_Set_Master_Value Parms{};

	Parms.Master_Value_0 = Master_Value_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.RevertToWorldDefaults
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::RevertToWorldDefaults()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "RevertToWorldDefaults");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Refresh Preview
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::Refresh_Preview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Refresh Preview");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "ReceiveTick");

	Params::BP_InteriorVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "ReceiveEndPlay");

	Params::BP_InteriorVolume_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_InteriorVolume_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteriorVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.PreviewModifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::PreviewModifications()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "PreviewModifications");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.PPV Blend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Blend_Weight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::PPV_Blend(float Blend_Weight, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "PPV Blend");

	Params::BP_InteriorVolume_C_PPV_Blend Parms{};

	Parms.Blend_Weight = Blend_Weight;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void ABP_InteriorVolume_C::K2_OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "K2_OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.ExecuteUbergraph_BP_InteriorVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::ExecuteUbergraph_BP_InteriorVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "ExecuteUbergraph_BP_InteriorVolume");

	Params::BP_InteriorVolume_C_ExecuteUbergraph_BP_InteriorVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Editor Compute Blend
// (BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::Editor_Compute_Blend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Editor Compute Blend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Catch Initial Overlaps
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::Catch_Initial_Overlaps(class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Catch Initial Overlaps");

	Params::BP_InteriorVolume_C_Catch_Initial_Overlaps Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Brush End Overlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteriorVolume_C::Brush_End_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Brush End Overlap");

	Params::BP_InteriorVolume_C_Brush_End_Overlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.Brush Begin Overlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_InteriorVolume_C::Brush_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "Brush Begin Overlap");

	Params::BP_InteriorVolume_C_Brush_Begin_Overlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteriorVolume.BP_InteriorVolume_C.AllowTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_InteriorVolume_C::AllowTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteriorVolume_C", "AllowTrigger");

	UObject::ProcessEvent(Func, nullptr);
}

}

