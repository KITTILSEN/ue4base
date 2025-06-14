﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CampaignMissionDetails_Wide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CampaignMissionDetails_Wide.WBP_CampaignMissionDetails_Wide_C
// 0x0048 (0x02A8 - 0x0260)
class UWBP_CampaignMissionDetails_Wide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CampaignMissionBriefingText_C*     WBP_CampaignMissionBriefingText;                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CampaignMissionObjectives_C*       WBP_CampaignMissionObjectives;                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   HotspotCodename;                                   // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MissionSequenceNumber;                             // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGBObjectiveData                       ObjectiveData;                                     // 0x0288(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_CampaignMissionDetails_Wide(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CampaignMissionDetails_Wide_C">();
	}
	static class UWBP_CampaignMissionDetails_Wide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CampaignMissionDetails_Wide_C>();
	}
};
static_assert(alignof(UWBP_CampaignMissionDetails_Wide_C) == 0x000008, "Wrong alignment on UWBP_CampaignMissionDetails_Wide_C");
static_assert(sizeof(UWBP_CampaignMissionDetails_Wide_C) == 0x0002A8, "Wrong size on UWBP_CampaignMissionDetails_Wide_C");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, UberGraphFrame) == 0x000260, "Member 'UWBP_CampaignMissionDetails_Wide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, WBP_CampaignMissionBriefingText) == 0x000268, "Member 'UWBP_CampaignMissionDetails_Wide_C::WBP_CampaignMissionBriefingText' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, WBP_CampaignMissionObjectives) == 0x000270, "Member 'UWBP_CampaignMissionDetails_Wide_C::WBP_CampaignMissionObjectives' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, HotspotCodename) == 0x000278, "Member 'UWBP_CampaignMissionDetails_Wide_C::HotspotCodename' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, MissionSequenceNumber) == 0x000280, "Member 'UWBP_CampaignMissionDetails_Wide_C::MissionSequenceNumber' has a wrong offset!");
static_assert(offsetof(UWBP_CampaignMissionDetails_Wide_C, ObjectiveData) == 0x000288, "Member 'UWBP_CampaignMissionDetails_Wide_C::ObjectiveData' has a wrong offset!");

}

