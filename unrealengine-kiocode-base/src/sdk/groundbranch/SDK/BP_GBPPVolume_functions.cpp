﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GBPPVolume

#include "Basic.hpp"

#include "BP_GBPPVolume_classes.hpp"
#include "BP_GBPPVolume_parameters.hpp"


namespace SDK
{

// Function BP_GBPPVolume.BP_GBPPVolume_C.ExecuteUbergraph_BP_GBPPVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GBPPVolume_C::ExecuteUbergraph_BP_GBPPVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "ExecuteUbergraph_BP_GBPPVolume");

	Params::BP_GBPPVolume_C_ExecuteUbergraph_BP_GBPPVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GBPPVolume.BP_GBPPVolume_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GBPPVolume_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "SetEnabled");

	Params::BP_GBPPVolume_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GBPPVolume.BP_GBPPVolume_C.OnTimeSpanChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Timespan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GBPPVolume_C::OnTimeSpanChanged_Event_0(class FName Timespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "OnTimeSpanChanged_Event_0");

	Params::BP_GBPPVolume_C_OnTimeSpanChanged_Event_0 Parms{};

	Parms.Timespan = Timespan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GBPPVolume.BP_GBPPVolume_C.BindToSkyActor
// (BlueprintCallable, BlueprintEvent)

void ABP_GBPPVolume_C::BindToSkyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "BindToSkyActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GBPPVolume.BP_GBPPVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GBPPVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GBPPVolume.BP_GBPPVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GBPPVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GBPPVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

