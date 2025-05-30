﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElderDragon_Ice_IceGaol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NPCPawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ElderDragon_Ice_IceGaol.ElderDragon_Ice_IceGaol_C
// 0x0010 (0x1D60 - 0x1D50)
class AElderDragon_Ice_IceGaol_C final : public ANPCPawn_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ElderDragon_Ice_IceGaol_C;          // 0x1D50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x1D58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ElderDragon_Ice_IceGaol(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ElderDragon_Ice_IceGaol_C">();
	}
	static class AElderDragon_Ice_IceGaol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElderDragon_Ice_IceGaol_C>();
	}
};
static_assert(alignof(AElderDragon_Ice_IceGaol_C) == 0x000010, "Wrong alignment on AElderDragon_Ice_IceGaol_C");
static_assert(sizeof(AElderDragon_Ice_IceGaol_C) == 0x001D60, "Wrong size on AElderDragon_Ice_IceGaol_C");
static_assert(offsetof(AElderDragon_Ice_IceGaol_C, UberGraphFrame_ElderDragon_Ice_IceGaol_C) == 0x001D50, "Member 'AElderDragon_Ice_IceGaol_C::UberGraphFrame_ElderDragon_Ice_IceGaol_C' has a wrong offset!");
static_assert(offsetof(AElderDragon_Ice_IceGaol_C, Niagara) == 0x001D58, "Member 'AElderDragon_Ice_IceGaol_C::Niagara' has a wrong offset!");

}

