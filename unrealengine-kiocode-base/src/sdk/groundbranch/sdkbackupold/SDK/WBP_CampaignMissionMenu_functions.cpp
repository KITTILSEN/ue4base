﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CampaignMissionMenu

#include "Basic.hpp"

#include "WBP_CampaignMissionMenu_classes.hpp"
#include "WBP_CampaignMissionMenu_parameters.hpp"


namespace SDK
{

// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.ExecuteUbergraph_WBP_CampaignMissionMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::ExecuteUbergraph_WBP_CampaignMissionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "ExecuteUbergraph_WBP_CampaignMissionMenu");

	Params::WBP_CampaignMissionMenu_C_ExecuteUbergraph_WBP_CampaignMissionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.PerformTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    TravelCommand_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::PerformTravel(const class FString& TravelCommand_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "PerformTravel");

	Params::WBP_CampaignMissionMenu_C_PerformTravel Parms{};

	Parms.TravelCommand_0 = std::move(TravelCommand_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.LaunchServerAfterModSync
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::LaunchServerAfterModSync()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "LaunchServerAfterModSync");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.ReturnToWorldMap
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::ReturnToWorldMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "ReturnToWorldMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnClickedOkProceedWithDeploymentOffline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnClickedOkProceedWithDeploymentOffline(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnClickedOkProceedWithDeploymentOffline");

	Params::WBP_CampaignMissionMenu_C_OnClickedOkProceedWithDeploymentOffline Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_Offline_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CampaignMissionMenu_C::BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_Offline_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_Offline_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.DivertToOfflineDeployment
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::DivertToOfflineDeployment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "DivertToOfflineDeployment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.PrepLoadingScreenAndConsoleCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOnline                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CampaignMissionMenu_C::PrepLoadingScreenAndConsoleCommand(bool bOnline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "PrepLoadingScreenAndConsoleCommand");

	Params::WBP_CampaignMissionMenu_C_PrepLoadingScreenAndConsoleCommand Parms{};

	Parms.bOnline = bOnline;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnClickedOkResetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnClickedOkResetProgress(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnClickedOkResetProgress");

	Params::WBP_CampaignMissionMenu_C_OnClickedOkResetProgress Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.BndEvt__WBP_CampaignMissionMenu_Button_ResetProgress_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CampaignMissionMenu_C::BndEvt__WBP_CampaignMissionMenu_Button_ResetProgress_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "BndEvt__WBP_CampaignMissionMenu_Button_ResetProgress_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnClickedOkProceedWithDeployment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnClickedOkProceedWithDeployment(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnClickedOkProceedWithDeployment");

	Params::WBP_CampaignMissionMenu_C_OnClickedOkProceedWithDeployment Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.CreateListenServer
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::CreateListenServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "CreateListenServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnModSyncFailed
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::OnModSyncFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnModSyncFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnFinishModSync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CampaignMissionMenu_C::OnFinishModSync(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnFinishModSync");

	Params::WBP_CampaignMissionMenu_C_OnFinishModSync Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.ModSyncAndLaunch
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::ModSyncAndLaunch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "ModSyncAndLaunch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.UpdateMissionDetailsBoxTitle
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::UpdateMissionDetailsBoxTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "UpdateMissionDetailsBoxTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.SwitchScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::SwitchScreen(int32 NewScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "SwitchScreen");

	Params::WBP_CampaignMissionMenu_C_SwitchScreen Parms{};

	Parms.NewScreen = NewScreen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CampaignMissionMenu_C::BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "BndEvt__WBP_CampaignMissionMenu_Button_DeployToHotspot_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.BndEvt__WBP_CampaignMissionMenu_Button_ReturnToWorldMap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CampaignMissionMenu_C::BndEvt__WBP_CampaignMissionMenu_Button_ReturnToWorldMap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "BndEvt__WBP_CampaignMissionMenu_Button_ReturnToWorldMap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.BndEvt__WBP_CampaignMissionMenu_Button_ReturnToMissionSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CampaignMissionMenu_C::BndEvt__WBP_CampaignMissionMenu_Button_ReturnToMissionSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "BndEvt__WBP_CampaignMissionMenu_Button_ReturnToMissionSelect_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Tick");

	Params::WBP_CampaignMissionMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.UpdateMissionDetails
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::UpdateMissionDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "UpdateMissionDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnSelectedMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectedMissionNumber_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnSelectedMission(int32 SelectedMissionNumber_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnSelectedMission");

	Params::WBP_CampaignMissionMenu_C_OnSelectedMission Parms{};

	Parms.SelectedMissionNumber_0 = SelectedMissionNumber_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnHoveredOverMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectedMissionNumber_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnHoveredOverMission(int32 SelectedMissionNumber_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnHoveredOverMission");

	Params::WBP_CampaignMissionMenu_C_OnHoveredOverMission Parms{};

	Parms.SelectedMissionNumber_0 = SelectedMissionNumber_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.StartAnimations
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::StartAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "StartAnimations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.UpdateHotspotDetails
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::UpdateHotspotDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "UpdateHotspotDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.UpdateMissionHeadings
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::UpdateMissionHeadings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "UpdateMissionHeadings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.InitMissions
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::InitMissions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "InitMissions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.StartScreenFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::StartScreenFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "StartScreenFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.SetHotspotRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGBHotspotDataAsset*              HotspotRef_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::SetHotspotRef(class UGBHotspotDataAsset* HotspotRef_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "SetHotspotRef");

	Params::WBP_CampaignMissionMenu_C_SetHotspotRef Parms{};

	Parms.HotspotRef_0 = HotspotRef_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnLoaded_A9302FC548BA2D76764DD19C859BB6E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CampaignMissionMenu_C::OnLoaded_A9302FC548BA2D76764DD19C859BB6E6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnLoaded_A9302FC548BA2D76764DD19C859BB6E6");

	Params::WBP_CampaignMissionMenu_C_OnLoaded_A9302FC548BA2D76764DD19C859BB6E6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Finished_286A0E5843802650B17F288A59C6FD0E
// (BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::Finished_286A0E5843802650B17F288A59C6FD0E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Finished_286A0E5843802650B17F288A59C6FD0E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CampaignMissionMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "OnPreviewKeyDown");

	Params::WBP_CampaignMissionMenu_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Get_Button_DeployToHotspot_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_CampaignMissionMenu_C::Get_Button_DeployToHotspot_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Get_Button_DeployToHotspot_Visibility_0");

	Params::WBP_CampaignMissionMenu_C_Get_Button_DeployToHotspot_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Get_Overlay_MapAndNews_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CampaignMissionMenu_C::Get_Overlay_MapAndNews_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Get_Overlay_MapAndNews_ToolTipWidget_0");

	Params::WBP_CampaignMissionMenu_C_Get_Overlay_MapAndNews_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.PrepLoadingScreen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CampaignMissionMenu_C::PrepLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "PrepLoadingScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Get_Button_DeployToHotspot_Online_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_CampaignMissionMenu_C::Get_Button_DeployToHotspot_Online_bIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Get_Button_DeployToHotspot_Online_bIsEnabled_0");

	Params::WBP_CampaignMissionMenu_C_Get_Button_DeployToHotspot_Online_bIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.CanWeDeployOnline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bCanWeDeployOnline                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CampaignMissionMenu_C::CanWeDeployOnline(bool* bCanWeDeployOnline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "CanWeDeployOnline");

	Params::WBP_CampaignMissionMenu_C_CanWeDeployOnline Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanWeDeployOnline != nullptr)
		*bCanWeDeployOnline = Parms.bCanWeDeployOnline;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Get_Button_DeployToHotspot_Online_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CampaignMissionMenu_C::Get_Button_DeployToHotspot_Online_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Get_Button_DeployToHotspot_Online_ToolTipWidget_0");

	Params::WBP_CampaignMissionMenu_C_Get_Button_DeployToHotspot_Online_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CampaignMissionMenu.WBP_CampaignMissionMenu_C.Get_Button_DeployToHotspot_Offline_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CampaignMissionMenu_C::Get_Button_DeployToHotspot_Offline_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CampaignMissionMenu_C", "Get_Button_DeployToHotspot_Offline_ToolTipWidget_0");

	Params::WBP_CampaignMissionMenu_C_Get_Button_DeployToHotspot_Offline_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

