﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CampaignMissionHotspotBackgroundBriefing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CampaignMissionHotspotBackgroundBriefing.WBP_CampaignMissionHotspotBackgroundBriefing_C
// 0x0038 (0x0298 - 0x0260)
class UWBP_CampaignMissionHotspotBackgroundBriefing_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_Briefing;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   HotspotCodename;                                   // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   InvalidMissionText;                                // 0x0278(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   MissionDetailsTableId;                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CampaignMissionHotspotBackgroundBriefing(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CampaignMissionHotspotBackgroundBriefing_C">();
	}
	static class UWBP_CampaignMissionHotspotBackgroundBriefing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CampaignMissionHotspotBackgroundBriefing_C>();
	}
};
static_assert(alignof(UWBP_CampaignMissionHotspotBackgroundBriefing_C) == 0x000008, "Wrong alignment on UWBP_CampaignMissionHotspotBackgroundBriefing_C");
static_assert(sizeof(UWBP_CampaignMissionHotspotBackgroundBriefing_C) == 0x000298, "Wrong size on UWBP_CampaignMissionHotspotBackgroundBriefing_C");
static_assert(offsetof(UWBP_CampaignMissionHotspotBackgroundBriefing_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CampaignMissionHotspotBackgroundBriefing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionHotspotBackgroundBriefing_C, TextBlock_Briefing) == 0x000268, "Member 'UWBP_CampaignMissionHotspotBackgroundBriefing_C::TextBlock_Briefing' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionHotspotBackgroundBriefing_C, HotspotCodename) == 0x000270, "Member 'UWBP_CampaignMissionHotspotBackgroundBriefing_C::HotspotCodename' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionHotspotBackgroundBriefing_C, InvalidMissionText) == 0x000278, "Member 'UWBP_CampaignMissionHotspotBackgroundBriefing_C::InvalidMissionText' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionHotspotBackgroundBriefing_C, MissionDetailsTableId) == 0x000290, "Member 'UWBP_CampaignMissionHotspotBackgroundBriefing_C::MissionDetailsTableId' has a wrong offset!");

}

