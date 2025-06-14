﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TakeHit_Overlay

#include "Basic.hpp"

#include "WBP_TakeHit_Overlay_classes.hpp"
#include "WBP_TakeHit_Overlay_parameters.hpp"


namespace SDK
{

// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.ExecuteUbergraph_WBP_TakeHit_Overlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TakeHit_Overlay_C::ExecuteUbergraph_WBP_TakeHit_Overlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "ExecuteUbergraph_WBP_TakeHit_Overlay");

	Params::WBP_TakeHit_Overlay_C_ExecuteUbergraph_WBP_TakeHit_Overlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitForward
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitForward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitDown
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitRight
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitLeft
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.HitBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::HitBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "HitBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.OnPlayerControllerNotifyTakeHit_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   ViewLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FTakeHitInfo&              LastTakeHitInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_TakeHit_Overlay_C::OnPlayerControllerNotifyTakeHit_Event(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, const struct FTakeHitInfo& LastTakeHitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "OnPlayerControllerNotifyTakeHit_Event");

	Params::WBP_TakeHit_Overlay_C_OnPlayerControllerNotifyTakeHit_Event Parms{};

	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.LastTakeHitInfo = std::move(LastTakeHitInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_TakeHit_Overlay.WBP_TakeHit_Overlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TakeHit_Overlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_TakeHit_Overlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

