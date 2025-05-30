﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CombatTooltipGenerator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameSystemsPlugin_structs.hpp"
#include "GameSystemsPlugin_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CombatTooltipGenerator.WBP_CombatTooltipGenerator_C
// 0x0300 (0x0940 - 0x0640)
class UWBP_CombatTooltipGenerator_C final : public UCombatTooltipText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FGameplayTag, class FText>        TagFormat;                                         // 0x0648(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TooltipEffectList;                                 // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TooltipAppendEffectList;                           // 0x06A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 RichText;                                          // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   PhysicalTag;                                       // 0x06C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   MagicalTag;                                        // 0x06D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   healingTag;                                        // 0x06E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 descript;                                          // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TSet<int64>                                   ToolTipEffects;                                    // 0x0708(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class FName>                             SkipStats;                                         // 0x0758(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int64, int64>                            ContestedStatMap;                                  // 0x07A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int64, int64>                            ContestedStatCurveMap;                             // 0x07F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<int64>                                   AttribStats;                                       // 0x0848(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ECharacterClass, int64>                  ArchStatInitMap;                                   // 0x0898(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, int64>              DmgSubTypeTagStatMap;                              // 0x08E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void RecurseFindRecord(const class FString& Input, const struct FAoCAbilityRecord& AbilityRecord, const struct FAbilityHitRecord& HitRecord, const struct FEffectRecord& EffectRecord, const struct FStatModRecord& StatModRecord, const struct FLingeringEffectRecord& LingeringEffectRecord, const struct FProjectileRecord& ProjectileRecord, const struct FReactionRecord& ReactionRecord, struct FAbilityHitRecord* Hit, struct FEffectRecord* Effect, struct FStatModRecord* StatMod, struct FLingeringEffectRecord* LingeringEffect, struct FProjectileRecord* Projectile, struct FReactionRecord* reaction);
	void PreConstruct(bool IsDesignTime);
	void ParseDescription(const class FString& descr, class ABaseCharacter* Source, const struct FEffectRecord& EffectRecord, const struct FAoCAbilityRecord& AbilityRecord, class FString* Output);
	void GetTimeStr(double Time, bool trim1, class FString* Str);
	void GetStatModString(class ABaseCharacter* Source, const struct FStatModRecord& Record, const class FString& Args, TArray<struct FGameplayTag>& hitFlags, class FString* Str);
	void GetStatDescriptionRichText(const struct FStatTypeDefRecord& StatRecord);
	void GetStatDescription(struct FStatTypeDefRecord& Stat);
	void GetStatContested_Target(double PercentValue, double PercentValue_Contesting, double* ContestedValue);
	void GetStatContested(double RawStatValue, int32 Level, int64 ContestedRatingCurve, double* ContestedValue);
	void GetSkillTreeName(const class FString& String, class AActor* Actor, class FString* SkillTreeName);
	void GetRichPower(const class FString& Str, const class FString& Args, class FString* outStr, bool* has);
	void GetRich(const class FString& Str, TArray<struct FGameplayTag>& Tags, class FString* rich);
	void GetRankTooltip(struct FStatFormulaTypeRecord& formula, const class FString& Args, class ABaseCharacter* Source, class FString* outputStr);
	void GetPowerMult(class UAoCStatsComponent* Stats, TArray<struct FGameplayTag>& hitTags, double* Mult);
	void GetPercentValue(double Value, bool isPercent, class FText* Str);
	void GetItemDescriptionText(const struct FItemRecord& ItemRecord);
	void GetItemCertificationText(const class FText& Text);
	void GetIndexBetter(const class FString& Str, const class FString& substr, int32* Index_0);
	void GetHitString(class ABaseCharacter* Source, const struct FAbilityHitRecord& Record, const class FString& Args, class FString* Str);
	void GetGuildEffectDescriptionRichText(const struct FGuildEffectRecord& GuildEffectRecord);
	void GetExpansionDescriptionText(const struct FExpansionRecord& ExpansionRecord);
	void GetEffectString(class ABaseCharacter* Source, const struct FEffectRecord& Record, const class FString& Args, class FString* Str);
	void GetEffectDescriptionRichText(const struct FEffectRecord& EffectRecord, const struct FEffectInstUI& EffectInst, TArray<class FString>* EffectStrings);
	void GetDisplayStatFromRaw(const struct FStatTypeDefRecord& StatRecord, double Raw, double* ret);
	void GetDisplayStat(class UAoCStatsComponent* Stats, const struct FStatTypeDefRecord& StatRecord, double* ret);
	void GetDelimRest(const class FString& Str, class FString* Left, class FString* rest);
	void GetChunks_FAST(const class FString& Description, TArray<class FString>* ret);
	void GetChunks(const class FString& Description, TArray<class FString>* ret);
	void GetAbilityDescriptionRichText(const struct FAoCAbilityRecord& AbilityDescription, TArray<class FString>* EffectStrings);
	void GetAbilityDescription_Internal(struct FAoCAbilityRecord& Ability, class FString* Description);
	void Get_Stat_Base_By_Init(class AAoCPlayerController* Player, int64 statGuid, int64 statInitGuid, double* base);
	void FindFormat(TArray<struct FGameplayTag>& Tags, class FText* Format);
	void ExecuteUbergraph_WBP_CombatTooltipGenerator(int32 EntryPoint);
	void EvalExpressionFloat(struct FAoCExpression& Expression, class ABaseCharacter*& Source, class ABaseCharacter*& Target, class ABaseCharacter*& Instigator, class ABaseCharacter*& Owner, double* Value);
	void EvalExpressionBool(struct FAoCExpression& Expression, class ABaseCharacter*& Source, class ABaseCharacter*& Target, class ABaseCharacter*& Instigator, class ABaseCharacter*& Owner, bool* Value);
	void Construct();
	void CheckSpecificLingeringEffectArgs(const class FString& Args, const struct FLingeringEffectRecord& rec, class ABaseCharacter* Source, class FString* Str);
	void CheckSpecificEffectArgs(const class FString& Args, const struct FEffectRecordBase& EffectRecord, class ABaseCharacter* Source, class FString* ret);
	void CheckSetApplyArgs(class FString& searchStr, bool& Hide, bool& dur, bool& for_0, bool Append, class FString* outStr);
	void BuildFinalTooltip(const class FString& txt);
	void AddRichTextMarkupToEachLine(const class FString& Input, const class FString& markup, class FString* Output);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CombatTooltipGenerator_C">();
	}
	static class UWBP_CombatTooltipGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CombatTooltipGenerator_C>();
	}
};
static_assert(alignof(UWBP_CombatTooltipGenerator_C) == 0x000010, "Wrong alignment on UWBP_CombatTooltipGenerator_C");
static_assert(sizeof(UWBP_CombatTooltipGenerator_C) == 0x000940, "Wrong size on UWBP_CombatTooltipGenerator_C");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, UberGraphFrame) == 0x000640, "Member 'UWBP_CombatTooltipGenerator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, TagFormat) == 0x000648, "Member 'UWBP_CombatTooltipGenerator_C::TagFormat' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, TooltipEffectList) == 0x000698, "Member 'UWBP_CombatTooltipGenerator_C::TooltipEffectList' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, TooltipAppendEffectList) == 0x0006A8, "Member 'UWBP_CombatTooltipGenerator_C::TooltipAppendEffectList' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, RichText) == 0x0006B8, "Member 'UWBP_CombatTooltipGenerator_C::RichText' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, PhysicalTag) == 0x0006C8, "Member 'UWBP_CombatTooltipGenerator_C::PhysicalTag' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, MagicalTag) == 0x0006D8, "Member 'UWBP_CombatTooltipGenerator_C::MagicalTag' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, healingTag) == 0x0006E8, "Member 'UWBP_CombatTooltipGenerator_C::healingTag' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, descript) == 0x0006F8, "Member 'UWBP_CombatTooltipGenerator_C::descript' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, ToolTipEffects) == 0x000708, "Member 'UWBP_CombatTooltipGenerator_C::ToolTipEffects' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, SkipStats) == 0x000758, "Member 'UWBP_CombatTooltipGenerator_C::SkipStats' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, ContestedStatMap) == 0x0007A8, "Member 'UWBP_CombatTooltipGenerator_C::ContestedStatMap' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, ContestedStatCurveMap) == 0x0007F8, "Member 'UWBP_CombatTooltipGenerator_C::ContestedStatCurveMap' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, AttribStats) == 0x000848, "Member 'UWBP_CombatTooltipGenerator_C::AttribStats' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, ArchStatInitMap) == 0x000898, "Member 'UWBP_CombatTooltipGenerator_C::ArchStatInitMap' has a wrong offset!");
static_assert(offsetof(UWBP_CombatTooltipGenerator_C, DmgSubTypeTagStatMap) == 0x0008E8, "Member 'UWBP_CombatTooltipGenerator_C::DmgSubTypeTagStatMap' has a wrong offset!");

}

