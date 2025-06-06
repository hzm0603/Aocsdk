﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PCGSplineMesh

#include "Basic.hpp"

#include "GameSystemsPlugin_structs.hpp"


namespace SDK::Params
{

// Function BPI_PCGSplineMesh.BPI_PCGSplineMesh_C.Get Mesh List
// 0x0380 (0x0380 - 0x0000)
struct BPI_PCGSplineMesh_C_Get_Mesh_List final
{
public:
	struct FAoCSplineMeshEntry                    First_Override_Beginning_Mesh;                     // 0x0000(0x00D0)(Parm, OutParm)
	struct FAoCSplineMeshEntry                    First_Override_End_Mesh;                           // 0x00D0(0x00D0)(Parm, OutParm)
	TArray<struct FAoCSplineMeshEntry>            First_Fence_Objects;                               // 0x01A0(0x0010)(Parm, OutParm)
	TArray<struct FAoCSplineDebrisEntry>          First_Debris_Objects;                              // 0x01B0(0x0010)(Parm, OutParm)
	struct FAoCSplineMeshEntry                    Second_Override_Beginning_Mesh;                    // 0x01C0(0x00D0)(Parm, OutParm)
	struct FAoCSplineMeshEntry                    Second_Override_End_Mesh;                          // 0x0290(0x00D0)(Parm, OutParm)
	TArray<struct FAoCSplineMeshEntry>            Second_Fence_Objects;                              // 0x0360(0x0010)(Parm, OutParm)
	TArray<struct FAoCSplineDebrisEntry>          Second_Debris_Objects;                             // 0x0370(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_PCGSplineMesh_C_Get_Mesh_List) == 0x000010, "Wrong alignment on BPI_PCGSplineMesh_C_Get_Mesh_List");
static_assert(sizeof(BPI_PCGSplineMesh_C_Get_Mesh_List) == 0x000380, "Wrong size on BPI_PCGSplineMesh_C_Get_Mesh_List");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, First_Override_Beginning_Mesh) == 0x000000, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::First_Override_Beginning_Mesh' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, First_Override_End_Mesh) == 0x0000D0, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::First_Override_End_Mesh' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, First_Fence_Objects) == 0x0001A0, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::First_Fence_Objects' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, First_Debris_Objects) == 0x0001B0, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::First_Debris_Objects' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, Second_Override_Beginning_Mesh) == 0x0001C0, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::Second_Override_Beginning_Mesh' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, Second_Override_End_Mesh) == 0x000290, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::Second_Override_End_Mesh' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, Second_Fence_Objects) == 0x000360, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::Second_Fence_Objects' has a wrong offset!");
static_assert(offsetof(BPI_PCGSplineMesh_C_Get_Mesh_List, Second_Debris_Objects) == 0x000370, "Member 'BPI_PCGSplineMesh_C_Get_Mesh_List::Second_Debris_Objects' has a wrong offset!");

}

