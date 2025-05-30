﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_DamageMeterBarData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_DamageMeterBarData.ST_DamageMeterBarData
// 0x0078 (0x0078 - 0x0000)
struct FST_DamageMeterBarData final
{
public:
	double                                        value_18_2C75B8DC4A80B67F6D5604BCE7470F69;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        effectiveValue_49_DDC6937A49CA9035C18326BE28E9707B; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         count_20_3A29219E4D7DAA522F8004894ADD1B40;         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         total_43_1565B55B47933E7F2F9A089A03CD2004;         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   name_22_8D2358794BB08EE3340DE281573A300F;          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  instigatorGuid_25_2E9562854DF3339845096BBA5D3AF466; // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  targetGuid_36_19B6E07F430F27941412C8B806B3C76C;    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         hitGuid_28_B144A48040A6C7682E9151BB21A7B6BB;       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           color_33_7A6DBF6C49AB0252FC11029A1D70366A;         // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        iconPath_46_A515AADC44C2C51A2B9C53873282302B;      // 0x0058(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_DamageMeterBarData) == 0x000008, "Wrong alignment on FST_DamageMeterBarData");
static_assert(sizeof(FST_DamageMeterBarData) == 0x000078, "Wrong size on FST_DamageMeterBarData");
static_assert(offsetof(FST_DamageMeterBarData, value_18_2C75B8DC4A80B67F6D5604BCE7470F69) == 0x000000, "Member 'FST_DamageMeterBarData::value_18_2C75B8DC4A80B67F6D5604BCE7470F69' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, effectiveValue_49_DDC6937A49CA9035C18326BE28E9707B) == 0x000008, "Member 'FST_DamageMeterBarData::effectiveValue_49_DDC6937A49CA9035C18326BE28E9707B' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, count_20_3A29219E4D7DAA522F8004894ADD1B40) == 0x000010, "Member 'FST_DamageMeterBarData::count_20_3A29219E4D7DAA522F8004894ADD1B40' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, total_43_1565B55B47933E7F2F9A089A03CD2004) == 0x000014, "Member 'FST_DamageMeterBarData::total_43_1565B55B47933E7F2F9A089A03CD2004' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, name_22_8D2358794BB08EE3340DE281573A300F) == 0x000018, "Member 'FST_DamageMeterBarData::name_22_8D2358794BB08EE3340DE281573A300F' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, instigatorGuid_25_2E9562854DF3339845096BBA5D3AF466) == 0x000020, "Member 'FST_DamageMeterBarData::instigatorGuid_25_2E9562854DF3339845096BBA5D3AF466' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, targetGuid_36_19B6E07F430F27941412C8B806B3C76C) == 0x000030, "Member 'FST_DamageMeterBarData::targetGuid_36_19B6E07F430F27941412C8B806B3C76C' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, hitGuid_28_B144A48040A6C7682E9151BB21A7B6BB) == 0x000040, "Member 'FST_DamageMeterBarData::hitGuid_28_B144A48040A6C7682E9151BB21A7B6BB' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, color_33_7A6DBF6C49AB0252FC11029A1D70366A) == 0x000048, "Member 'FST_DamageMeterBarData::color_33_7A6DBF6C49AB0252FC11029A1D70366A' has a wrong offset!");
static_assert(offsetof(FST_DamageMeterBarData, iconPath_46_A515AADC44C2C51A2B9C53873282302B) == 0x000058, "Member 'FST_DamageMeterBarData::iconPath_46_A515AADC44C2C51A2B9C53873282302B' has a wrong offset!");

}

