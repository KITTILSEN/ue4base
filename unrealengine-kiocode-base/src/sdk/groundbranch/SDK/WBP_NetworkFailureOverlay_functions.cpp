﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NetworkFailureOverlay

#include "Basic.hpp"

#include "WBP_NetworkFailureOverlay_classes.hpp"
#include "WBP_NetworkFailureOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NetworkFailureOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_NetworkFailureOverlay_C::BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "BndEvt__Button_Password_Ok_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.RemoveLoadingScreen
// (BlueprintCallable, BlueprintEvent)

void UWBP_NetworkFailureOverlay_C::RemoveLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "RemoveLoadingScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromErrorString
// (BlueprintCallable, BlueprintEvent)

void UWBP_NetworkFailureOverlay_C::SetupFromErrorString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "SetupFromErrorString");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.SetupFromNetworkFailureType
// (BlueprintCallable, BlueprintEvent)

void UWBP_NetworkFailureOverlay_C::SetupFromNetworkFailureType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "SetupFromNetworkFailureType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NetworkFailureOverlay.WBP_NetworkFailureOverlay_C.ExecuteUbergraph_WBP_NetworkFailureOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NetworkFailureOverlay_C::ExecuteUbergraph_WBP_NetworkFailureOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NetworkFailureOverlay_C", "ExecuteUbergraph_WBP_NetworkFailureOverlay");

	Params::WBP_NetworkFailureOverlay_C_ExecuteUbergraph_WBP_NetworkFailureOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

