﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerLocation

#include "Basic.hpp"

#include "WBP_PlayerLocation_classes.hpp"
#include "WBP_PlayerLocation_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerLocation.WBP_PlayerLocation_C.ExecuteUbergraph_WBP_PlayerLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerLocation_C::ExecuteUbergraph_WBP_PlayerLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerLocation_C", "ExecuteUbergraph_WBP_PlayerLocation");

	Params::WBP_PlayerLocation_C_ExecuteUbergraph_WBP_PlayerLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerLocation.WBP_PlayerLocation_C.UpdatePosition
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerLocation_C::UpdatePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerLocation_C", "UpdatePosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerLocation.WBP_PlayerLocation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerLocation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerLocation_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerLocation.WBP_PlayerLocation_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerLocation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerLocation_C", "Tick");

	Params::WBP_PlayerLocation_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerLocation.WBP_PlayerLocation_C.CalcPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors*                        OutAnchors                                             (Parm, OutParm, NoDestructor)

void UWBP_PlayerLocation_C::CalcPosition(const struct FVector& InLocation, struct FAnchors* OutAnchors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerLocation_C", "CalcPosition");

	Params::WBP_PlayerLocation_C_CalcPosition Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutAnchors != nullptr)
		*OutAnchors = std::move(Parms.OutAnchors);
}

}

