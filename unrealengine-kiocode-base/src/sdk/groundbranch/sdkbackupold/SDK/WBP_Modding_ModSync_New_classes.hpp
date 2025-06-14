﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modding_ModSync_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "EGB_ModDisplayStatus_structs.hpp"
#include "FMModdingPlugin_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modding_ModSync_New.WBP_Modding_ModSync_New_C
// 0x0230 (0x0490 - 0x0260)
class UWBP_Modding_ModSync_New_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DownloadArrow_Bob;                                 // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Cancel;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Continue;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_254;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_Download;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ServerMods;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_DownloadProgress;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ModName;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ServerModList;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_StatusDownloading;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Server_ModDetails_C*               WBP_Server_ModDetails;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Server_ModDetails_C*               WBP_Server_ModDetails_1;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Server_ModDetails_C*               WBP_Server_ModDetails_2;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Status;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ToolTipCancel;                                     // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ToolTipJoin;                                       // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bModsAreSynchronised;                              // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FMModdingModSync_C*                 ModSync;                                           // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnContinued;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bJoinCountdownStarted;                             // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           JoinCountdownTimer;                                // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   TextJoinServer;                                    // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EGB_ModDisplayStatus                          CurrentSyncStatus;                                 // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnCancelledSync;                                   // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         ContinueCountdownLength;                           // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ConfirmCancelSyncTitle;                            // 0x0390(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConfirmCancelSyncMessage;                          // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   ConfirmCancelDialogName;                           // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   MountingText;                                      // 0x03C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UnmountingText;                                    // 0x03E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   CheckDownloadModsDialog;                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProceedToDownloadModsTitle;                        // 0x0400(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ProceedToDownloadModsMessage;                      // 0x0418(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DownloadStatusText;                                // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UnmountingStatusText;                              // 0x0448(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MountingStatusText;                                // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WaitingStatusText;                                 // 0x0478(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Modding_ModSync_New(int32 EntryPoint);
	void TryClickContinue();
	void ForceCloseSelf();
	void OnCancelDownloadMods();
	void OnConfirmProceedDownloadMods(class UWBP_DialogueBox_C* Dialogue);
	void UpdateDownloadAnimation();
	void OnConfirmedCancelSync(class UWBP_DialogueBox_C* Dialogue);
	void ConfirmedCancelSync();
	void RebuildModList();
	void CloseSelfIfNeeded();
	void MarkModSynced(const struct FUInt64& ModID, bool bSuccess);
	void BndEvt__WBP_Modding_ModSync_New_Button_Join_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetDownloadStatus(EGB_ModDisplayStatus NewSyncStatus);
	void BndEvt__WBP_Modding_ModSync_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void JoinCountdownTimerEvent();
	void StartContinueCountdown(float JoinCountdownLength);
	void OnModListPopulated();
	void WaitForModList();
	class UWidget* Get_TextBlock_1_ToolTipWidget_0();
	class UWidget* Get_Button_Apply_ToolTipWidget_0();
	class FText Get_TextBlock_0_Text_0();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modding_ModSync_New_C">();
	}
	static class UWBP_Modding_ModSync_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modding_ModSync_New_C>();
	}
};
static_assert(alignof(UWBP_Modding_ModSync_New_C) == 0x000008, "Wrong alignment on UWBP_Modding_ModSync_New_C");
static_assert(sizeof(UWBP_Modding_ModSync_New_C) == 0x000490, "Wrong size on UWBP_Modding_ModSync_New_C");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, UberGraphFrame) == 0x000260, "Member 'UWBP_Modding_ModSync_New_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, DownloadArrow_Bob) == 0x000268, "Member 'UWBP_Modding_ModSync_New_C::DownloadArrow_Bob' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, Button_Cancel) == 0x000270, "Member 'UWBP_Modding_ModSync_New_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, Button_Continue) == 0x000278, "Member 'UWBP_Modding_ModSync_New_C::Button_Continue' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, Image) == 0x000280, "Member 'UWBP_Modding_ModSync_New_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, Image_1) == 0x000288, "Member 'UWBP_Modding_ModSync_New_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, Image_254) == 0x000290, "Member 'UWBP_Modding_ModSync_New_C::Image_254' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ProgressBar_Download) == 0x000298, "Member 'UWBP_Modding_ModSync_New_C::ProgressBar_Download' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ScrollBox_ServerMods) == 0x0002A0, "Member 'UWBP_Modding_ModSync_New_C::ScrollBox_ServerMods' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_0) == 0x0002A8, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_1) == 0x0002B0, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_DownloadProgress) == 0x0002B8, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_DownloadProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_ModName) == 0x0002C0, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_ModName' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_ServerModList) == 0x0002C8, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_ServerModList' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextBlock_StatusDownloading) == 0x0002D0, "Member 'UWBP_Modding_ModSync_New_C::TextBlock_StatusDownloading' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, WBP_Server_ModDetails) == 0x0002D8, "Member 'UWBP_Modding_ModSync_New_C::WBP_Server_ModDetails' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, WBP_Server_ModDetails_1) == 0x0002E0, "Member 'UWBP_Modding_ModSync_New_C::WBP_Server_ModDetails_1' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, WBP_Server_ModDetails_2) == 0x0002E8, "Member 'UWBP_Modding_ModSync_New_C::WBP_Server_ModDetails_2' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, WidgetSwitcher_Status) == 0x0002F0, "Member 'UWBP_Modding_ModSync_New_C::WidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ToolTipCancel) == 0x0002F8, "Member 'UWBP_Modding_ModSync_New_C::ToolTipCancel' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ToolTipJoin) == 0x000310, "Member 'UWBP_Modding_ModSync_New_C::ToolTipJoin' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, bModsAreSynchronised) == 0x000328, "Member 'UWBP_Modding_ModSync_New_C::bModsAreSynchronised' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ModSync) == 0x000330, "Member 'UWBP_Modding_ModSync_New_C::ModSync' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, OnContinued) == 0x000338, "Member 'UWBP_Modding_ModSync_New_C::OnContinued' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, bJoinCountdownStarted) == 0x000348, "Member 'UWBP_Modding_ModSync_New_C::bJoinCountdownStarted' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, JoinCountdownTimer) == 0x000350, "Member 'UWBP_Modding_ModSync_New_C::JoinCountdownTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, TextJoinServer) == 0x000358, "Member 'UWBP_Modding_ModSync_New_C::TextJoinServer' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, CurrentSyncStatus) == 0x000370, "Member 'UWBP_Modding_ModSync_New_C::CurrentSyncStatus' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, OnCancelledSync) == 0x000378, "Member 'UWBP_Modding_ModSync_New_C::OnCancelledSync' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ContinueCountdownLength) == 0x000388, "Member 'UWBP_Modding_ModSync_New_C::ContinueCountdownLength' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ConfirmCancelSyncTitle) == 0x000390, "Member 'UWBP_Modding_ModSync_New_C::ConfirmCancelSyncTitle' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ConfirmCancelSyncMessage) == 0x0003A8, "Member 'UWBP_Modding_ModSync_New_C::ConfirmCancelSyncMessage' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ConfirmCancelDialogName) == 0x0003C0, "Member 'UWBP_Modding_ModSync_New_C::ConfirmCancelDialogName' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, MountingText) == 0x0003C8, "Member 'UWBP_Modding_ModSync_New_C::MountingText' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, UnmountingText) == 0x0003E0, "Member 'UWBP_Modding_ModSync_New_C::UnmountingText' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, CheckDownloadModsDialog) == 0x0003F8, "Member 'UWBP_Modding_ModSync_New_C::CheckDownloadModsDialog' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ProceedToDownloadModsTitle) == 0x000400, "Member 'UWBP_Modding_ModSync_New_C::ProceedToDownloadModsTitle' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, ProceedToDownloadModsMessage) == 0x000418, "Member 'UWBP_Modding_ModSync_New_C::ProceedToDownloadModsMessage' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, DownloadStatusText) == 0x000430, "Member 'UWBP_Modding_ModSync_New_C::DownloadStatusText' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, UnmountingStatusText) == 0x000448, "Member 'UWBP_Modding_ModSync_New_C::UnmountingStatusText' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, MountingStatusText) == 0x000460, "Member 'UWBP_Modding_ModSync_New_C::MountingStatusText' has a wrong offset!");
static_assert(offsetof(UWBP_Modding_ModSync_New_C, WaitingStatusText) == 0x000478, "Member 'UWBP_Modding_ModSync_New_C::WaitingStatusText' has a wrong offset!");

}

