﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mission_MatchSummaryPVE

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mission_MatchSummaryPVE.WBP_Mission_MatchSummaryPVE_C
// 0x0090 (0x02F0 - 0x0260)
class UWBP_Mission_MatchSummaryPVE_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             GameMode_Text;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RoundsPlayed;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RoundsWon;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_List;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Dash;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TeamName;                                // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TeamRole_1;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         TeamId;                                            // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalScore;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CurrentTeamColour;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OtherTeamColour;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TeamName;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           TextColourOverride;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetTeamRole(class FName TeamRole);
	ESlateVisibility GetTotalTeamBoxVis();
	void Construct();
	void BindMatchStats();
	void OnMatchStatsUpdated(class AGBGameState* GameState);
	void ExecuteUbergraph_WBP_Mission_MatchSummaryPVE(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mission_MatchSummaryPVE_C">();
	}
	static class UWBP_Mission_MatchSummaryPVE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mission_MatchSummaryPVE_C>();
	}
};
static_assert(alignof(UWBP_Mission_MatchSummaryPVE_C) == 0x000008, "Wrong alignment on UWBP_Mission_MatchSummaryPVE_C");
static_assert(sizeof(UWBP_Mission_MatchSummaryPVE_C) == 0x0002F0, "Wrong size on UWBP_Mission_MatchSummaryPVE_C");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, UberGraphFrame) == 0x000260, "Member 'UWBP_Mission_MatchSummaryPVE_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, GameMode_Text) == 0x000268, "Member 'UWBP_Mission_MatchSummaryPVE_C::GameMode_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, RoundsPlayed) == 0x000270, "Member 'UWBP_Mission_MatchSummaryPVE_C::RoundsPlayed' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, RoundsWon) == 0x000278, "Member 'UWBP_Mission_MatchSummaryPVE_C::RoundsWon' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, ScrollBox_List) == 0x000280, "Member 'UWBP_Mission_MatchSummaryPVE_C::ScrollBox_List' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TextBlock_Dash) == 0x000288, "Member 'UWBP_Mission_MatchSummaryPVE_C::TextBlock_Dash' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TextBlock_TeamName) == 0x000290, "Member 'UWBP_Mission_MatchSummaryPVE_C::TextBlock_TeamName' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TextBlock_TeamRole_1) == 0x000298, "Member 'UWBP_Mission_MatchSummaryPVE_C::TextBlock_TeamRole_1' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TeamId) == 0x0002A0, "Member 'UWBP_Mission_MatchSummaryPVE_C::TeamId' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TotalScore) == 0x0002A4, "Member 'UWBP_Mission_MatchSummaryPVE_C::TotalScore' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, CurrentTeamColour) == 0x0002A8, "Member 'UWBP_Mission_MatchSummaryPVE_C::CurrentTeamColour' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, OtherTeamColour) == 0x0002B8, "Member 'UWBP_Mission_MatchSummaryPVE_C::OtherTeamColour' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TeamName) == 0x0002C8, "Member 'UWBP_Mission_MatchSummaryPVE_C::TeamName' has a wrong offset!");
static_assert(offsetof(UWBP_Mission_MatchSummaryPVE_C, TextColourOverride) == 0x0002E0, "Member 'UWBP_Mission_MatchSummaryPVE_C::TextColourOverride' has a wrong offset!");

}

