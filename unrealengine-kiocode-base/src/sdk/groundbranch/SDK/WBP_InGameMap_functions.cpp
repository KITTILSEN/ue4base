﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InGameMap

#include "Basic.hpp"

#include "WBP_InGameMap_classes.hpp"
#include "WBP_InGameMap_parameters.hpp"


namespace SDK
{

// Function WBP_InGameMap.WBP_InGameMap_C.ExecuteUbergraph_WBP_InGameMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMap_C::ExecuteUbergraph_WBP_InGameMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "ExecuteUbergraph_WBP_InGameMap");

	Params::WBP_InGameMap_C_ExecuteUbergraph_WBP_InGameMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGameMap.WBP_InGameMap_C.CheckDebugMode
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::CheckDebugMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "CheckDebugMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdateDebugMode
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::UpdateDebugMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdateDebugMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.DisplayCampaignMapMarkers
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::DisplayCampaignMapMarkers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "DisplayCampaignMapMarkers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.SpawnMapWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGBMapMarker&              MapMarkerInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   WidgetIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMap_C::SpawnMapWidget(const struct FGBMapMarker& MapMarkerInfo, int32 WidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "SpawnMapWidget");

	Params::WBP_InGameMap_C_SpawnMapWidget Parms{};

	Parms.MapMarkerInfo = std::move(MapMarkerInfo);
	Parms.WidgetIndex = WidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdatePlayerTeamID
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::UpdatePlayerTeamID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdatePlayerTeamID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectiveMarkersTimer
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::UpdateObjectiveMarkersTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdateObjectiveMarkersTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.BndEvt__WBP_InGameMap_GoDeltaBtn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameMap_C::BndEvt__WBP_InGameMap_GoDeltaBtn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "BndEvt__WBP_InGameMap_GoDeltaBtn_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.BndEvt__WBP_InGameMap_AdvanceForceBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameMap_C::BndEvt__WBP_InGameMap_AdvanceForceBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "BndEvt__WBP_InGameMap_AdvanceForceBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.BndEvt__WBP_InGameMap_AdvanceBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameMap_C::BndEvt__WBP_InGameMap_AdvanceBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "BndEvt__WBP_InGameMap_AdvanceBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.BndEvt__WBP_InGameMap_HoldBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameMap_C::BndEvt__WBP_InGameMap_HoldBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "BndEvt__WBP_InGameMap_HoldBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.BndEvt__WBP_InGameMap_Button_127_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameMap_C::BndEvt__WBP_InGameMap_Button_127_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "BndEvt__WBP_InGameMap_Button_127_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdatePlayerBlips
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMap_C::UpdatePlayerBlips(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdatePlayerBlips");

	Params::WBP_InGameMap_C_UpdatePlayerBlips Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGameMap.WBP_InGameMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "Tick");

	Params::WBP_InGameMap_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGameMap.WBP_InGameMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.FindOrAddPlayerBlip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBPlayerState*                   InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_InGameMap_PlayerBlip_C**     OutPlayerBlip                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGameMap_C::FindOrAddPlayerBlip(class AGBPlayerState* InPlayerState, class UWBP_InGameMap_PlayerBlip_C** OutPlayerBlip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "FindOrAddPlayerBlip");

	Params::WBP_InGameMap_C_FindOrAddPlayerBlip Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerBlip != nullptr)
		*OutPlayerBlip = Parms.OutPlayerBlip;
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::UpdateObjectives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdateObjectives");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.UpdateObjectiveMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameMap_C::UpdateObjectiveMarkers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "UpdateObjectiveMarkers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InGameMap.WBP_InGameMap_C.CorrespondsToPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBPlayerState*                   ComparePlayerState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   MatchesOwningPlayerState                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InGameMap_C::CorrespondsToPlayerState(class AGBPlayerState* ComparePlayerState, bool* MatchesOwningPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "CorrespondsToPlayerState");

	Params::WBP_InGameMap_C_CorrespondsToPlayerState Parms{};

	Parms.ComparePlayerState = ComparePlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchesOwningPlayerState != nullptr)
		*MatchesOwningPlayerState = Parms.MatchesOwningPlayerState;
}


// Function WBP_InGameMap.WBP_InGameMap_C.CanAddPlayerBlip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBPlayerState*                   InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InGameMap_C::CanAddPlayerBlip(class AGBPlayerState* InPlayerState, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGameMap_C", "CanAddPlayerBlip");

	Params::WBP_InGameMap_C_CanAddPlayerBlip Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

