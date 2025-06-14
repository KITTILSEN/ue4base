﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "GroundBranch_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameInfo.WBP_GameInfo_C
// 0x0118 (0x0378 - 0x0260)
class UWBP_GameInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_MuteAll;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_MuteTalking;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_NEWBack_1;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_UnmuteAll;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_ServerDetails;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_123;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_225;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_PlayerList;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Admin;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Volunteer;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_GameModeName;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MissionName;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ServerName;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 WBP_GameInfo_Player;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameInfo_Player_C*                 WBP_GameInfo_Player_1;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameInfo_PlayerList_C*             WBP_GameInfo_PlayerList;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         UpdateTime;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenUpdates;                                // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdminMenuOpen;                                    // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPlayerTeamElementMenuOpen;                        // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30A[0x2];                                      // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                FirstTeamHeadingPadding;                           // 0x030C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                TeamHeadingPadding;                                // 0x031C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        ExistingEntries;                                   // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         TeamCount;                                         // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_344[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CampaignMissionServerText;                         // 0x0348(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UnknownServerText;                                 // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_GameInfo(int32 EntryPoint);
	void UpdatePlayerLists();
	void DeterminePlayerLists(int32 NewTeamCount);
	void AddPlayerList(int32 TeamId);
	void BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnVOIPEvent_Event_0(class AGBPlayerState* PlayerState, bool bIsTalking, bool bWasRadio);
	void Construct();
	void Back();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	ESlateVisibility GetAdminVis();
	class UWidget* Get_Button_MuteTalking_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameInfo_C">();
	}
	static class UWBP_GameInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameInfo_C>();
	}
};
static_assert(alignof(UWBP_GameInfo_C) == 0x000008, "Wrong alignment on UWBP_GameInfo_C");
static_assert(sizeof(UWBP_GameInfo_C) == 0x000378, "Wrong size on UWBP_GameInfo_C");
static_assert(offsetof(UWBP_GameInfo_C, UberGraphFrame) == 0x000260, "Member 'UWBP_GameInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Button_MuteAll) == 0x000268, "Member 'UWBP_GameInfo_C::Button_MuteAll' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Button_MuteTalking) == 0x000270, "Member 'UWBP_GameInfo_C::Button_MuteTalking' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Button_NEWBack_1) == 0x000278, "Member 'UWBP_GameInfo_C::Button_NEWBack_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Button_UnmuteAll) == 0x000280, "Member 'UWBP_GameInfo_C::Button_UnmuteAll' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, HorizontalBox_ServerDetails) == 0x000288, "Member 'UWBP_GameInfo_C::HorizontalBox_ServerDetails' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Image) == 0x000290, "Member 'UWBP_GameInfo_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Image_1) == 0x000298, "Member 'UWBP_GameInfo_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Image_2) == 0x0002A0, "Member 'UWBP_GameInfo_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Image_123) == 0x0002A8, "Member 'UWBP_GameInfo_C::Image_123' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, Image_225) == 0x0002B0, "Member 'UWBP_GameInfo_C::Image_225' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, ScrollBox_PlayerList) == 0x0002B8, "Member 'UWBP_GameInfo_C::ScrollBox_PlayerList' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, SizeBox_Admin) == 0x0002C0, "Member 'UWBP_GameInfo_C::SizeBox_Admin' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, SizeBox_Volunteer) == 0x0002C8, "Member 'UWBP_GameInfo_C::SizeBox_Volunteer' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TextBlock_GameModeName) == 0x0002D0, "Member 'UWBP_GameInfo_C::TextBlock_GameModeName' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TextBlock_MissionName) == 0x0002D8, "Member 'UWBP_GameInfo_C::TextBlock_MissionName' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TextBlock_ServerName) == 0x0002E0, "Member 'UWBP_GameInfo_C::TextBlock_ServerName' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, WBP_GameInfo_Player) == 0x0002E8, "Member 'UWBP_GameInfo_C::WBP_GameInfo_Player' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, WBP_GameInfo_Player_1) == 0x0002F0, "Member 'UWBP_GameInfo_C::WBP_GameInfo_Player_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, WBP_GameInfo_PlayerList) == 0x0002F8, "Member 'UWBP_GameInfo_C::WBP_GameInfo_PlayerList' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, UpdateTime) == 0x000300, "Member 'UWBP_GameInfo_C::UpdateTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TimeBetweenUpdates) == 0x000304, "Member 'UWBP_GameInfo_C::TimeBetweenUpdates' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, bAdminMenuOpen) == 0x000308, "Member 'UWBP_GameInfo_C::bAdminMenuOpen' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, bPlayerTeamElementMenuOpen) == 0x000309, "Member 'UWBP_GameInfo_C::bPlayerTeamElementMenuOpen' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, FirstTeamHeadingPadding) == 0x00030C, "Member 'UWBP_GameInfo_C::FirstTeamHeadingPadding' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TeamHeadingPadding) == 0x00031C, "Member 'UWBP_GameInfo_C::TeamHeadingPadding' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, ExistingEntries) == 0x000330, "Member 'UWBP_GameInfo_C::ExistingEntries' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, TeamCount) == 0x000340, "Member 'UWBP_GameInfo_C::TeamCount' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, CampaignMissionServerText) == 0x000348, "Member 'UWBP_GameInfo_C::CampaignMissionServerText' has a wrong offset!");
static_assert(offsetof(UWBP_GameInfo_C, UnknownServerText) == 0x000360, "Member 'UWBP_GameInfo_C::UnknownServerText' has a wrong offset!");

}

