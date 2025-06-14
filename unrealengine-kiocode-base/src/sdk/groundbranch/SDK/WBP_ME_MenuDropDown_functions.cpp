﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ME_MenuDropDown

#include "Basic.hpp"

#include "WBP_ME_MenuDropDown_classes.hpp"
#include "WBP_ME_MenuDropDown_parameters.hpp"


namespace SDK
{

// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.GetSaveToStagedModFolder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bSaveToStagedModFolder                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ME_MenuDropDown_C::GetSaveToStagedModFolder(bool* bSaveToStagedModFolder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "GetSaveToStagedModFolder");

	Params::WBP_ME_MenuDropDown_C_GetSaveToStagedModFolder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSaveToStagedModFolder != nullptr)
		*bSaveToStagedModFolder = Parms.bSaveToStagedModFolder;
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.GetSaveMissionModID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUInt64*                         ModID                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::GetSaveMissionModID(struct FUInt64* ModID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "GetSaveMissionModID");

	Params::WBP_ME_MenuDropDown_C_GetSaveMissionModID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ModID != nullptr)
		*ModID = std::move(Parms.ModID);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.PopulateAILoadouts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGBMissionData*                   InMissionData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::PopulateAILoadouts(class UGBMissionData* InMissionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "PopulateAILoadouts");

	Params::WBP_ME_MenuDropDown_C_PopulateAILoadouts Parms{};

	Parms.InMissionData = InMissionData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.FindActorWithName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    ActorNameToFind                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor**                          ActorRef                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::FindActorWithName(const class FString& ActorNameToFind, class AActor** ActorRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "FindActorWithName");

	Params::WBP_ME_MenuDropDown_C_FindActorWithName Parms{};

	Parms.ActorNameToFind = std::move(ActorNameToFind);

	UObject::ProcessEvent(Func, &Parms);

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnLoaded_C6C859BA7CDB44A69B368F6010652881
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnLoaded_C6C859BA7CDB44A69B368F6010652881(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnLoaded_C6C859BA7CDB44A69B368F6010652881");

	Params::WBP_ME_MenuDropDown_C_OnLoaded_C6C859BA7CDB44A69B368F6010652881 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.BndEvt__Button_Load_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ME_MenuDropDown_C::BndEvt__Button_Load_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "BndEvt__Button_Load_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.GetSuggestedSaveAsFilename
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString*                          SuggestedFilename                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::GetSuggestedSaveAsFilename(class FString* SuggestedFilename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "GetSuggestedSaveAsFilename");

	Params::WBP_ME_MenuDropDown_C_GetSuggestedSaveAsFilename Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SuggestedFilename != nullptr)
		*SuggestedFilename = std::move(Parms.SuggestedFilename);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.LoadFileInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::LoadFileInternal(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "LoadFileInternal");

	Params::WBP_ME_MenuDropDown_C_LoadFileInternal Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnLoad_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    MissionFileName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGBMissionData*                   MissionData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnLoad_Event_0(const class FString& MissionFileName, class UGBMissionData* MissionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnLoad_Event_0");

	Params::WBP_ME_MenuDropDown_C_OnLoad_Event_0 Parms{};

	Parms.MissionFileName = std::move(MissionFileName);
	Parms.MissionData = MissionData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ME_MenuDropDown_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnSave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ME_MenuDropDown_C::OnSave_Event(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnSave_Event");

	Params::WBP_ME_MenuDropDown_C_OnSave_Event Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnSaveOkClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnSaveOkClicked_Event(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnSaveOkClicked_Event");

	Params::WBP_ME_MenuDropDown_C_OnSaveOkClicked_Event Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnSaveComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ME_MenuDropDown_C::OnSaveComplete_Event(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnSaveComplete_Event");

	Params::WBP_ME_MenuDropDown_C_OnSaveComplete_Event Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.BndEvt__Button_SaveAs_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ME_MenuDropDown_C::BndEvt__Button_SaveAs_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "BndEvt__Button_SaveAs_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.BndEvt__Button_New_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ME_MenuDropDown_C::BndEvt__Button_New_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "BndEvt__Button_New_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnOkNewConfirm_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnOkNewConfirm_Event(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnOkNewConfirm_Event");

	Params::WBP_ME_MenuDropDown_C_OnOkNewConfirm_Event Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.PreOpen
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::PreOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "PreOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.BndEvt__WBP_ME_MenuDropDown_Button_Validate_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ME_MenuDropDown_C::BndEvt__WBP_ME_MenuDropDown_Button_Validate_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "BndEvt__WBP_ME_MenuDropDown_Button_Validate_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnOkClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnOkClicked_Event_0(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnOkClicked_Event_0");

	Params::WBP_ME_MenuDropDown_C_OnOkClicked_Event_0 Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.ClearAndGCMissionActors
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::ClearAndGCMissionActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "ClearAndGCMissionActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.SharedLoadFileInternal
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::SharedLoadFileInternal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "SharedLoadFileInternal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.SharedSaveFile
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::SharedSaveFile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "SharedSaveFile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.OnReceivedActorName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    StringToPass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::OnReceivedActorName(const class FString& StringToPass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "OnReceivedActorName");

	Params::WBP_ME_MenuDropDown_C_OnReceivedActorName Parms{};

	Parms.StringToPass = std::move(StringToPass);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.LoadTimerEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::LoadTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "LoadTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.CheckStagedModFolderExists
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_MenuDropDown_C::CheckStagedModFolderExists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "CheckStagedModFolderExists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_MenuDropDown.WBP_ME_MenuDropDown_C.ExecuteUbergraph_WBP_ME_MenuDropDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_MenuDropDown_C::ExecuteUbergraph_WBP_ME_MenuDropDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_MenuDropDown_C", "ExecuteUbergraph_WBP_ME_MenuDropDown");

	Params::WBP_ME_MenuDropDown_C_ExecuteUbergraph_WBP_ME_MenuDropDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

