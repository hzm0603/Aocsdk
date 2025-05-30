﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TurnAngleAnimationMap

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct TurnAngleAnimationMap.TurnAngleAnimationMap
// 0x0018 (0x0018 - 0x0000)
struct FTurnAngleAnimationMap final
{
public:
	double                                        Angle_11_950E8F3E4FBA9C864EC7998667B15B4A;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          LeftTurnSequence_16_C371231942D479EA1551159BAF669ACB; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          RightTurnSequence_17_F4A79E4249A330B45D4FDF857AE63520; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FTurnAngleAnimationMap) == 0x000008, "Wrong alignment on FTurnAngleAnimationMap");
static_assert(sizeof(FTurnAngleAnimationMap) == 0x000018, "Wrong size on FTurnAngleAnimationMap");
static_assert(offsetof(FTurnAngleAnimationMap, Angle_11_950E8F3E4FBA9C864EC7998667B15B4A) == 0x000000, "Member 'FTurnAngleAnimationMap::Angle_11_950E8F3E4FBA9C864EC7998667B15B4A' has a wrong offset!");
static_assert(offsetof(FTurnAngleAnimationMap, LeftTurnSequence_16_C371231942D479EA1551159BAF669ACB) == 0x000008, "Member 'FTurnAngleAnimationMap::LeftTurnSequence_16_C371231942D479EA1551159BAF669ACB' has a wrong offset!");
static_assert(offsetof(FTurnAngleAnimationMap, RightTurnSequence_17_F4A79E4249A330B45D4FDF857AE63520) == 0x000010, "Member 'FTurnAngleAnimationMap::RightTurnSequence_17_F4A79E4249A330B45D4FDF857AE63520' has a wrong offset!");

}

