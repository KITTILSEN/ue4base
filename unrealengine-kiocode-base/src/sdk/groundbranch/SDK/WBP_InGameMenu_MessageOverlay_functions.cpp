﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameMenu_MessageOverlay

#include "Basic.hpp"

#include "WBP_InGameMenu_MessageOverlay_classes.hpp"
#include "WBP_InGameMenu_MessageOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_InGameMenu_MessageOverlay.WBP_InGameMenu_MessageOverlay_C.ExecuteUbergraph_WBP_InGameMenu_MessageOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMenu_MessageOverlay_C::ExecuteUbergraph_WBP_InGameMenu_MessageOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMenu_MessageOverlay_C", "ExecuteUbergraph_WBP_InGameMenu_MessageOverlay");

	Params::WBP_InGameMenu_MessageOverlay_C_ExecuteUbergraph_WBP_InGameMenu_MessageOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGameMenu_MessageOverlay.WBP_InGameMenu_MessageOverlay_C.OnDelayedFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMenu_MessageOverlay_C::OnDelayedFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMenu_MessageOverlay_C", "OnDelayedFadeOutFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMenu_MessageOverlay.WBP_InGameMenu_MessageOverlay_C.OnFlashOnFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMenu_MessageOverlay_C::OnFlashOnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMenu_MessageOverlay_C", "OnFlashOnFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMenu_MessageOverlay.WBP_InGameMenu_MessageOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameMenu_MessageOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMenu_MessageOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMenu_MessageOverlay.WBP_InGameMenu_MessageOverlay_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InGameMenu_MessageOverlay_C::SetMessage(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMenu_MessageOverlay_C", "SetMessage");

	Params::WBP_InGameMenu_MessageOverlay_C_SetMessage Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}

}

