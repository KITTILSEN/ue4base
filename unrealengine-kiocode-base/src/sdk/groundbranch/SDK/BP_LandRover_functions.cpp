﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LandRover

#include "Basic.hpp"

#include "BP_LandRover_classes.hpp"
#include "BP_LandRover_parameters.hpp"


namespace SDK
{

// Function BP_LandRover.BP_LandRover_C.ExecuteUbergraph_BP_LandRover
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LandRover_C::ExecuteUbergraph_BP_LandRover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LandRover_C", "ExecuteUbergraph_BP_LandRover");

	Params::BP_LandRover_C_ExecuteUbergraph_BP_LandRover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LandRover.BP_LandRover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LandRover_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LandRover_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LandRover.BP_LandRover_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LandRover_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LandRover_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

