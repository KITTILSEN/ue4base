﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_SelectedDetails

#include "Basic.hpp"

#include "WBP_HF_SelectedDetails_classes.hpp"
#include "WBP_HF_SelectedDetails_parameters.hpp"


namespace SDK
{

// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_SelectedDetails_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "OnKeyDown");

	Params::WBP_HF_SelectedDetails_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.CreatePropertyWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHFSharedProperty&         SharedProperty                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UUserWidget**                     PropertyWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_SelectedDetails_C::CreatePropertyWidget(const struct FHFSharedProperty& SharedProperty, class UUserWidget** PropertyWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "CreatePropertyWidget");

	Params::WBP_HF_SelectedDetails_C_CreatePropertyWidget Parms{};

	Parms.SharedProperty = std::move(SharedProperty);

	UObject::ProcessEvent(Func, &Parms);

	if (PropertyWidget != nullptr)
		*PropertyWidget = Parms.PropertyWidget;
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_SelectedDetails_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnSelectionChanged_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_SelectedDetails_C::OnSelectionChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "OnSelectionChanged_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.BindOnSelectionChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_SelectedDetails_C::BindOnSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "BindOnSelectionChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.Bind ActorStatusChangeDelegates
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_SelectedDetails_C::Bind_ActorStatusChangeDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "Bind ActorStatusChangeDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnActorSpawned_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_SelectedDetails_C::OnActorSpawned_Event_0(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "OnActorSpawned_Event_0");

	Params::WBP_HF_SelectedDetails_C_OnActorSpawned_Event_0 Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.SetHotfootManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHFManager*                       HotFootManagerRef_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_SelectedDetails_C::SetHotfootManager(class AHFManager* HotFootManagerRef_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "SetHotfootManager");

	Params::WBP_HF_SelectedDetails_C_SetHotfootManager Parms{};

	Parms.HotFootManagerRef_0 = HotFootManagerRef_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.ExecuteUbergraph_WBP_HF_SelectedDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_SelectedDetails_C::ExecuteUbergraph_WBP_HF_SelectedDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_SelectedDetails_C", "ExecuteUbergraph_WBP_HF_SelectedDetails");

	Params::WBP_HF_SelectedDetails_C_ExecuteUbergraph_WBP_HF_SelectedDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

