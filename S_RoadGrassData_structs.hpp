﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_RoadGrassData

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_RoadGrassData.S_RoadGrassData
// 0x0038 (0x0038 - 0x0000)
struct FS_RoadGrassData final
{
public:
	bool                                          EnableGrass_16_57E11F8B4D03FA1C8293C1AC139B2329;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GrassSeed_19_DA6968734FA9E31902A1C5A22B8184AB;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAoCRoadTerrainEntry>           GrassObjects_3_F0D23C8A4F4C7920C72F8696CF76DFD4;   // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          AffectedByExclusionPCGRoadExclusion_28_1BC070C04392085ED4749D8EEA8ADAC3; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GrassMeshDensity_14_B399178D43C1464CA56724B78AC49583; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GrassRoadDensity_13_27445F264DEA31F6D52C96B199BEF1BC; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableLeftGrass_23_4C3B9FE949527759A6EA2BA6392864F3; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableCenterGrass_24_95D7EF3148E060521E224C938B46CFF7; // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableRightGrass_25_44A52B264E4FE2A5F9A215B12DEC53A7; // 0x0032(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_RoadGrassData) == 0x000008, "Wrong alignment on FS_RoadGrassData");
static_assert(sizeof(FS_RoadGrassData) == 0x000038, "Wrong size on FS_RoadGrassData");
static_assert(offsetof(FS_RoadGrassData, EnableGrass_16_57E11F8B4D03FA1C8293C1AC139B2329) == 0x000000, "Member 'FS_RoadGrassData::EnableGrass_16_57E11F8B4D03FA1C8293C1AC139B2329' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, GrassSeed_19_DA6968734FA9E31902A1C5A22B8184AB) == 0x000004, "Member 'FS_RoadGrassData::GrassSeed_19_DA6968734FA9E31902A1C5A22B8184AB' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, GrassObjects_3_F0D23C8A4F4C7920C72F8696CF76DFD4) == 0x000008, "Member 'FS_RoadGrassData::GrassObjects_3_F0D23C8A4F4C7920C72F8696CF76DFD4' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, AffectedByExclusionPCGRoadExclusion_28_1BC070C04392085ED4749D8EEA8ADAC3) == 0x000018, "Member 'FS_RoadGrassData::AffectedByExclusionPCGRoadExclusion_28_1BC070C04392085ED4749D8EEA8ADAC3' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, GrassMeshDensity_14_B399178D43C1464CA56724B78AC49583) == 0x000020, "Member 'FS_RoadGrassData::GrassMeshDensity_14_B399178D43C1464CA56724B78AC49583' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, GrassRoadDensity_13_27445F264DEA31F6D52C96B199BEF1BC) == 0x000028, "Member 'FS_RoadGrassData::GrassRoadDensity_13_27445F264DEA31F6D52C96B199BEF1BC' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, EnableLeftGrass_23_4C3B9FE949527759A6EA2BA6392864F3) == 0x000030, "Member 'FS_RoadGrassData::EnableLeftGrass_23_4C3B9FE949527759A6EA2BA6392864F3' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, EnableCenterGrass_24_95D7EF3148E060521E224C938B46CFF7) == 0x000031, "Member 'FS_RoadGrassData::EnableCenterGrass_24_95D7EF3148E060521E224C938B46CFF7' has a wrong offset!");
static_assert(offsetof(FS_RoadGrassData, EnableRightGrass_25_44A52B264E4FE2A5F9A215B12DEC53A7) == 0x000032, "Member 'FS_RoadGrassData::EnableRightGrass_25_44A52B264E4FE2A5F9A215B12DEC53A7' has a wrong offset!");

}

