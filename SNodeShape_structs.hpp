﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SNodeShape

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SNodeRoadConnection_structs.hpp"
#include "SNodeRiverConnection_structs.hpp"


namespace SDK
{

// UserDefinedStruct SNodeShape.SNodeShape
// 0x00A0 (0x00A0 - 0x0000)
struct FSNodeShape final
{
public:
	TSoftObjectPtr<class UTexture2D>              Height_41_A751F9CE4939DF25CD27149243796FF8;        // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Mask_42_7F2EE4E34C2D36A6BAAB3FAF9AD763C1;          // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector                                TextureBrushLocation_45_04F2918C407088DCBAC4AEAD30528BE2; // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TextureBrushScale_47_375B0D5842DF61B85E98C58746E3903F; // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSNodeRoadConnection>           RoadConnections_35_9003048F4F49048391DA019351D49A50; // 0x0080(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSNodeRiverConnection>          RiverConnections_49_2C01C3EA4CEF2B05FB345383759283C7; // 0x0090(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSNodeShape) == 0x000008, "Wrong alignment on FSNodeShape");
static_assert(sizeof(FSNodeShape) == 0x0000A0, "Wrong size on FSNodeShape");
static_assert(offsetof(FSNodeShape, Height_41_A751F9CE4939DF25CD27149243796FF8) == 0x000000, "Member 'FSNodeShape::Height_41_A751F9CE4939DF25CD27149243796FF8' has a wrong offset!");
static_assert(offsetof(FSNodeShape, Mask_42_7F2EE4E34C2D36A6BAAB3FAF9AD763C1) == 0x000028, "Member 'FSNodeShape::Mask_42_7F2EE4E34C2D36A6BAAB3FAF9AD763C1' has a wrong offset!");
static_assert(offsetof(FSNodeShape, TextureBrushLocation_45_04F2918C407088DCBAC4AEAD30528BE2) == 0x000050, "Member 'FSNodeShape::TextureBrushLocation_45_04F2918C407088DCBAC4AEAD30528BE2' has a wrong offset!");
static_assert(offsetof(FSNodeShape, TextureBrushScale_47_375B0D5842DF61B85E98C58746E3903F) == 0x000068, "Member 'FSNodeShape::TextureBrushScale_47_375B0D5842DF61B85E98C58746E3903F' has a wrong offset!");
static_assert(offsetof(FSNodeShape, RoadConnections_35_9003048F4F49048391DA019351D49A50) == 0x000080, "Member 'FSNodeShape::RoadConnections_35_9003048F4F49048391DA019351D49A50' has a wrong offset!");
static_assert(offsetof(FSNodeShape, RiverConnections_49_2C01C3EA4CEF2B05FB345383759283C7) == 0x000090, "Member 'FSNodeShape::RiverConnections_49_2C01C3EA4CEF2B05FB345383759283C7' has a wrong offset!");

}

