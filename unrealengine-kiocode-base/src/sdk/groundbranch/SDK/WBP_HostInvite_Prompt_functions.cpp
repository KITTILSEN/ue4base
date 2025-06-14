﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HostInvite_Prompt

#include "Basic.hpp"

#include "WBP_HostInvite_Prompt_classes.hpp"
#include "WBP_HostInvite_Prompt_parameters.hpp"


namespace SDK
{

// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.ExecuteUbergraph_WBP_HostInvite_Prompt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HostInvite_Prompt_C::ExecuteUbergraph_WBP_HostInvite_Prompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "ExecuteUbergraph_WBP_HostInvite_Prompt");

	Params::WBP_HostInvite_Prompt_C_ExecuteUbergraph_WBP_HostInvite_Prompt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.SaveHideDialogChoice
// (BlueprintCallable, BlueprintEvent)

void UWBP_HostInvite_Prompt_C::SaveHideDialogChoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "SaveHideDialogChoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HostInvite_Prompt_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "BndEvt__Button_Ok_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HostInvite_Prompt_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HostInvite_Prompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.OnLoaded_208274E944378AF26DAA9D9CBC51E7C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_HostInvite_Prompt_C::OnLoaded_208274E944378AF26DAA9D9CBC51E7C4(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "OnLoaded_208274E944378AF26DAA9D9CBC51E7C4");

	Params::WBP_HostInvite_Prompt_C_OnLoaded_208274E944378AF26DAA9D9CBC51E7C4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.GetReponseTimeLeft
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_HostInvite_Prompt_C::GetReponseTimeLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "GetReponseTimeLeft");

	Params::WBP_HostInvite_Prompt_C_GetReponseTimeLeft Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.OverrideInputKey
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// EBPInputEvent                           EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AmountDepressed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bGamepad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_HostInvite_Prompt_C::OverrideInputKey(const struct FKey& Key, EBPInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "OverrideInputKey");

	Params::WBP_HostInvite_Prompt_C_OverrideInputKey Parms{};

	Parms.Key = std::move(Key);
	Parms.EventType = EventType;
	Parms.AmountDepressed = AmountDepressed;
	Parms.bGamepad = bGamepad;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HostInvite_Prompt.WBP_HostInvite_Prompt_C.OverrideInputAxis
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumSamples                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bGamepad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_HostInvite_Prompt_C::OverrideInputAxis(const struct FKey& Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HostInvite_Prompt_C", "OverrideInputAxis");

	Params::WBP_HostInvite_Prompt_C_OverrideInputAxis Parms{};

	Parms.Key = std::move(Key);
	Parms.Delta = Delta;
	Parms.DeltaTime = DeltaTime;
	Parms.NumSamples = NumSamples;
	Parms.bGamepad = bGamepad;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

