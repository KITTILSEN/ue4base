﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FrontEndMenuManager

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FrontEndMenuManager.WBP_FrontEndMenuManager_C
// 0x0440 (0x06A0 - 0x0260)
class UWBP_FrontEndMenuManager_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BuildInfo_C*                       BuildInfo_129;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Credits;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_CustomiseOperator;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_HostGame;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ModSupport;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_PlayCampaign;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_PlayOffline;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Quit;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ServerBrowser;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Settings;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Training;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HideIfNotCTE;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_GameVersion;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_3;                                       // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1371;                                    // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_CTEOrNot;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_News_C*                            WBP_News;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            HoveredFontColour;                                 // 0x0310(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DefaultFontColour;                                 // 0x0338(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Training;                                     // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Training_ToolTip;                             // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Settings;                                     // 0x0390(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Settings_ToolTip;                             // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Credits;                                      // 0x03C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Credits_ToolTip;                              // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Quit;                                         // 0x03F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Quit_ToolTip;                                 // 0x0408(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                            CurrentScreen;                                     // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text_PlayOffline;                                  // 0x0428(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_PlayOffline_ToolTip;                          // 0x0440(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_ServerBrowser;                                // 0x0458(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_ServerBrowser_ToolTip;                        // 0x0470(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_CustomiseOperator;                            // 0x0488(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_CustomiseOperator_ToolTip;                    // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Host;                                         // 0x04B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_Host_ToolTip;                                 // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WriteAccessFailureTitle;                           // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   WriteAccessFailureMessage;                         // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConfimRunTrainingTitle;                            // 0x0518(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConfirmRunTrainingMessage;                         // 0x0530(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConfirmQuitTitle;                                  // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConfirmQuitMessage;                                // 0x0560(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Training;                                          // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TheFarm;                                           // 0x0590(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DefaultMaxFPS;                                     // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AC[0x4];                                      // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    CachedScreens;                                     // 0x05B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   NoTeamLoadoutName;                                 // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ConvertTitle;                                      // 0x05C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConvertMessage;                                    // 0x05E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConvertOkText;                                     // 0x05F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ConvertCancelText;                                 // 0x0610(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_FMModdingModSync_C*                 ModSyncActor;                                      // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   FailedToSyncTitle;                                 // 0x0630(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   FailedToSyncMessage;                               // 0x0648(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_PlayCampaign;                                 // 0x0660(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Text_PlayCampaign_ToolTip;                         // 0x0678(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TravelCommand;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void PerformTravel(const class FString& TravelCommand_0);
	void ExecuteUbergraph_WBP_FrontEndMenuManager(int32 EntryPoint);
	class UWidget* Get_Button_PlayCampaign_ToolTipWidget_0();
	class UWidget* GetToolTipWidget_1();
	class UWidget* GetToolTipWidget_0();
	class UWidget* Get_Button_CustomiseOperator_ToolTipWidget_0();
	class UWidget* Get_Button_ServerBrowser_ToolTipWidget_0();
	class UWidget* Get_Button_HostGame_ToolTipWidget_0();
	class UWidget* Get_Button_PlayOffline_ToolTipWidget_0();
	class UWidget* Get_Button_Training_ToolTipWidget_0();
	void OnLoaded_F58963B04C789C48C74184BBEC45BF6B(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB31E4BFBF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB52EBA4D3(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB6BBD4CD6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB75BADC38(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB49F34926(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB7E3305E0(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F58963B04C789C48C74184BB8E3CCBF3(TSubclassOf<class UObject> Loaded);
	void Construct();
	void BndEvt__Button_Quit_K2Node_ComponentBoundEvent_537_OnButtonClickedEvent__DelegateSignature();
	void ChectForNetworkOrTravelFailure();
	void BndEvt__Button_Training_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_PlayOffline_K2Node_ComponentBoundEvent_380_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ServerBrowser_K2Node_ComponentBoundEvent_399_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_CustomiseOperator_K2Node_ComponentBoundEvent_419_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_440_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Credits_K2Node_ComponentBoundEvent_462_OnButtonClickedEvent__DelegateSignature();
	void ShowMenu();
	void BndEvt__Button_HostGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnClickedOkRunTraining(class UWBP_DialogueBox_C* Dialogue);
	void OnOkClickedQuit(class UWBP_DialogueBox_C* Dialogue);
	void BndEvt__WBP_FrontEndMenuManager_Button_ModSupport_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void WriteAccessCheck();
	void ConvertKitsCheck();
	void OnOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue);
	void OnCancelClicked_Event_0();
	void ShowWriteAccessFailure();
	void UpdateCheckedKitVersionNumber();
	void OnFinishModSync(bool bSuccess);
	void TravelToTrainingMap();
	void DestroyModSyncActor();
	void BndEvt__WBP_FrontEndMenuManager_Button_PlayCampaign_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnModSyncFailed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FrontEndMenuManager_C">();
	}
	static class UWBP_FrontEndMenuManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FrontEndMenuManager_C>();
	}
};
static_assert(alignof(UWBP_FrontEndMenuManager_C) == 0x000008, "Wrong alignment on UWBP_FrontEndMenuManager_C");
static_assert(sizeof(UWBP_FrontEndMenuManager_C) == 0x0006A0, "Wrong size on UWBP_FrontEndMenuManager_C");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, UberGraphFrame) == 0x000260, "Member 'UWBP_FrontEndMenuManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, BuildInfo_129) == 0x000268, "Member 'UWBP_FrontEndMenuManager_C::BuildInfo_129' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_Credits) == 0x000270, "Member 'UWBP_FrontEndMenuManager_C::Button_Credits' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_CustomiseOperator) == 0x000278, "Member 'UWBP_FrontEndMenuManager_C::Button_CustomiseOperator' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_HostGame) == 0x000280, "Member 'UWBP_FrontEndMenuManager_C::Button_HostGame' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_ModSupport) == 0x000288, "Member 'UWBP_FrontEndMenuManager_C::Button_ModSupport' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_PlayCampaign) == 0x000290, "Member 'UWBP_FrontEndMenuManager_C::Button_PlayCampaign' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_PlayOffline) == 0x000298, "Member 'UWBP_FrontEndMenuManager_C::Button_PlayOffline' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_Quit) == 0x0002A0, "Member 'UWBP_FrontEndMenuManager_C::Button_Quit' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_ServerBrowser) == 0x0002A8, "Member 'UWBP_FrontEndMenuManager_C::Button_ServerBrowser' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_Settings) == 0x0002B0, "Member 'UWBP_FrontEndMenuManager_C::Button_Settings' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Button_Training) == 0x0002B8, "Member 'UWBP_FrontEndMenuManager_C::Button_Training' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, HideIfNotCTE) == 0x0002C0, "Member 'UWBP_FrontEndMenuManager_C::HideIfNotCTE' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_GameVersion) == 0x0002C8, "Member 'UWBP_FrontEndMenuManager_C::Text_GameVersion' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_0) == 0x0002D0, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_1) == 0x0002D8, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_2) == 0x0002E0, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_3) == 0x0002E8, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_3' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_4) == 0x0002F0, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_1371) == 0x0002F8, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_1371' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TextBlock_CTEOrNot) == 0x000300, "Member 'UWBP_FrontEndMenuManager_C::TextBlock_CTEOrNot' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, WBP_News) == 0x000308, "Member 'UWBP_FrontEndMenuManager_C::WBP_News' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, HoveredFontColour) == 0x000310, "Member 'UWBP_FrontEndMenuManager_C::HoveredFontColour' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, DefaultFontColour) == 0x000338, "Member 'UWBP_FrontEndMenuManager_C::DefaultFontColour' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Training) == 0x000360, "Member 'UWBP_FrontEndMenuManager_C::Text_Training' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Training_ToolTip) == 0x000378, "Member 'UWBP_FrontEndMenuManager_C::Text_Training_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Settings) == 0x000390, "Member 'UWBP_FrontEndMenuManager_C::Text_Settings' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Settings_ToolTip) == 0x0003A8, "Member 'UWBP_FrontEndMenuManager_C::Text_Settings_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Credits) == 0x0003C0, "Member 'UWBP_FrontEndMenuManager_C::Text_Credits' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Credits_ToolTip) == 0x0003D8, "Member 'UWBP_FrontEndMenuManager_C::Text_Credits_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Quit) == 0x0003F0, "Member 'UWBP_FrontEndMenuManager_C::Text_Quit' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Quit_ToolTip) == 0x000408, "Member 'UWBP_FrontEndMenuManager_C::Text_Quit_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, CurrentScreen) == 0x000420, "Member 'UWBP_FrontEndMenuManager_C::CurrentScreen' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_PlayOffline) == 0x000428, "Member 'UWBP_FrontEndMenuManager_C::Text_PlayOffline' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_PlayOffline_ToolTip) == 0x000440, "Member 'UWBP_FrontEndMenuManager_C::Text_PlayOffline_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_ServerBrowser) == 0x000458, "Member 'UWBP_FrontEndMenuManager_C::Text_ServerBrowser' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_ServerBrowser_ToolTip) == 0x000470, "Member 'UWBP_FrontEndMenuManager_C::Text_ServerBrowser_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_CustomiseOperator) == 0x000488, "Member 'UWBP_FrontEndMenuManager_C::Text_CustomiseOperator' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_CustomiseOperator_ToolTip) == 0x0004A0, "Member 'UWBP_FrontEndMenuManager_C::Text_CustomiseOperator_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Host) == 0x0004B8, "Member 'UWBP_FrontEndMenuManager_C::Text_Host' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_Host_ToolTip) == 0x0004D0, "Member 'UWBP_FrontEndMenuManager_C::Text_Host_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, WriteAccessFailureTitle) == 0x0004E8, "Member 'UWBP_FrontEndMenuManager_C::WriteAccessFailureTitle' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, WriteAccessFailureMessage) == 0x000500, "Member 'UWBP_FrontEndMenuManager_C::WriteAccessFailureMessage' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConfimRunTrainingTitle) == 0x000518, "Member 'UWBP_FrontEndMenuManager_C::ConfimRunTrainingTitle' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConfirmRunTrainingMessage) == 0x000530, "Member 'UWBP_FrontEndMenuManager_C::ConfirmRunTrainingMessage' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConfirmQuitTitle) == 0x000548, "Member 'UWBP_FrontEndMenuManager_C::ConfirmQuitTitle' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConfirmQuitMessage) == 0x000560, "Member 'UWBP_FrontEndMenuManager_C::ConfirmQuitMessage' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Training) == 0x000578, "Member 'UWBP_FrontEndMenuManager_C::Training' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TheFarm) == 0x000590, "Member 'UWBP_FrontEndMenuManager_C::TheFarm' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, DefaultMaxFPS) == 0x0005A8, "Member 'UWBP_FrontEndMenuManager_C::DefaultMaxFPS' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, CachedScreens) == 0x0005B0, "Member 'UWBP_FrontEndMenuManager_C::CachedScreens' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, NoTeamLoadoutName) == 0x0005C0, "Member 'UWBP_FrontEndMenuManager_C::NoTeamLoadoutName' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConvertTitle) == 0x0005C8, "Member 'UWBP_FrontEndMenuManager_C::ConvertTitle' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConvertMessage) == 0x0005E0, "Member 'UWBP_FrontEndMenuManager_C::ConvertMessage' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConvertOkText) == 0x0005F8, "Member 'UWBP_FrontEndMenuManager_C::ConvertOkText' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ConvertCancelText) == 0x000610, "Member 'UWBP_FrontEndMenuManager_C::ConvertCancelText' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, ModSyncActor) == 0x000628, "Member 'UWBP_FrontEndMenuManager_C::ModSyncActor' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, FailedToSyncTitle) == 0x000630, "Member 'UWBP_FrontEndMenuManager_C::FailedToSyncTitle' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, FailedToSyncMessage) == 0x000648, "Member 'UWBP_FrontEndMenuManager_C::FailedToSyncMessage' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_PlayCampaign) == 0x000660, "Member 'UWBP_FrontEndMenuManager_C::Text_PlayCampaign' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, Text_PlayCampaign_ToolTip) == 0x000678, "Member 'UWBP_FrontEndMenuManager_C::Text_PlayCampaign_ToolTip' has a wrong offset!");
static_assert(offsetof(UWBP_FrontEndMenuManager_C, TravelCommand) == 0x000690, "Member 'UWBP_FrontEndMenuManager_C::TravelCommand' has a wrong offset!");

}

