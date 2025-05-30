﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NodeSummary

#include "Basic.hpp"

#include "GameSystemsPlugin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NodeSummary.WBP_NodeSummary_C
// 0x0038 (0x03D8 - 0x03A0)
class UWBP_NodeSummary_C final : public UNodeSummary
{
public:
	class UImage*                                 IMG_IconFrame;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                        NodeInfoButton;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    PatronGuildTextBlock;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    PopulationTextBlock;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    TB_DuesLabel;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    TB_PatronGuildLabel;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAoCCommonTextBlock*                    TypeTextBlock;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NodeSummary_C">();
	}
	static class UWBP_NodeSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NodeSummary_C>();
	}
};
static_assert(alignof(UWBP_NodeSummary_C) == 0x000008, "Wrong alignment on UWBP_NodeSummary_C");
static_assert(sizeof(UWBP_NodeSummary_C) == 0x0003D8, "Wrong size on UWBP_NodeSummary_C");
static_assert(offsetof(UWBP_NodeSummary_C, IMG_IconFrame) == 0x0003A0, "Member 'UWBP_NodeSummary_C::IMG_IconFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, NodeInfoButton) == 0x0003A8, "Member 'UWBP_NodeSummary_C::NodeInfoButton' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, PatronGuildTextBlock) == 0x0003B0, "Member 'UWBP_NodeSummary_C::PatronGuildTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, PopulationTextBlock) == 0x0003B8, "Member 'UWBP_NodeSummary_C::PopulationTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, TB_DuesLabel) == 0x0003C0, "Member 'UWBP_NodeSummary_C::TB_DuesLabel' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, TB_PatronGuildLabel) == 0x0003C8, "Member 'UWBP_NodeSummary_C::TB_PatronGuildLabel' has a wrong offset!");
static_assert(offsetof(UWBP_NodeSummary_C, TypeTextBlock) == 0x0003D0, "Member 'UWBP_NodeSummary_C::TypeTextBlock' has a wrong offset!");

}

