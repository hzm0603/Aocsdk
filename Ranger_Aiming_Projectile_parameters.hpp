﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ranger_Aiming_Projectile

#include "Basic.hpp"


namespace SDK::Params
{

// Function Ranger_Aiming_Projectile.Ranger_Aiming_Projectile_C.ExecuteUbergraph_Ranger_Aiming_Projectile
// 0x0018 (0x0018 - 0x0000)
struct Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_Local_Player;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile) == 0x000008, "Wrong alignment on Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile");
static_assert(sizeof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile) == 0x000018, "Wrong size on Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile");
static_assert(offsetof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile, EntryPoint) == 0x000000, "Member 'Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile, CallFunc_IsServer_ReturnValue) == 0x000004, "Member 'Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile, CallFunc_IsLocalPlayer_Local_Player) == 0x000010, "Member 'Ranger_Aiming_Projectile_C_ExecuteUbergraph_Ranger_Aiming_Projectile::CallFunc_IsLocalPlayer_Local_Player' has a wrong offset!");

}

