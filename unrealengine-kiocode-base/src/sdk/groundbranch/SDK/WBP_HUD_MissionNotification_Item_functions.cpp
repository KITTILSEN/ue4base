﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_MissionNotification_Item

#include "Basic.hpp"

#include "WBP_HUD_MissionNotification_Item_classes.hpp"
#include "WBP_HUD_MissionNotification_Item_parameters.hpp"


namespace SDK
{

// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.ExecuteUbergraph_WBP_HUD_MissionNotification_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_MissionNotification_Item_C::ExecuteUbergraph_WBP_HUD_MissionNotification_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "ExecuteUbergraph_WBP_HUD_MissionNotification_Item");

	Params::WBP_HUD_MissionNotification_Item_C_ExecuteUbergraph_WBP_HUD_MissionNotification_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.AttemptToSendGameMessage
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_MissionNotification_Item_C::AttemptToSendGameMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "AttemptToSendGameMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.PleaseKillMeNow
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_MissionNotification_Item_C::PleaseKillMeNow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "PleaseKillMeNow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_MissionNotification_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "Tick");

	Params::WBP_HUD_MissionNotification_Item_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.UpdateObjectiveText
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUD_MissionNotification_Item_C::UpdateObjectiveText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "UpdateObjectiveText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.SetMessageOrder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MessageOrder                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFirstUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_MissionNotification_Item_C::SetMessageOrder(int32 MessageOrder, bool bFirstUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "SetMessageOrder");

	Params::WBP_HUD_MissionNotification_Item_C_SetMessageOrder Parms{};

	Parms.MessageOrder = MessageOrder;
	Parms.bFirstUse = bFirstUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.SetFlashState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFlash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUD_MissionNotification_Item_C::SetFlashState(bool bFlash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "SetFlashState");

	Params::WBP_HUD_MissionNotification_Item_C_SetFlashState Parms{};

	Parms.bFlash = bFlash;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUD_MissionNotification_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUD_MissionNotification_Item.WBP_HUD_MissionNotification_Item_C.GetBestTextLookup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FString&                    GenericToken                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    SpecificToken                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText*                            LookupText                                             (Parm, OutParm)

void UWBP_HUD_MissionNotification_Item_C::GetBestTextLookup(const class FString& GenericToken, const class FString& SpecificToken, class FText* LookupText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUD_MissionNotification_Item_C", "GetBestTextLookup");

	Params::WBP_HUD_MissionNotification_Item_C_GetBestTextLookup Parms{};

	Parms.GenericToken = std::move(GenericToken);
	Parms.SpecificToken = std::move(SpecificToken);

	UObject::ProcessEvent(Func, &Parms);

	if (LookupText != nullptr)
		*LookupText = std::move(Parms.LookupText);
}

}

