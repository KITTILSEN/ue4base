﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ural_375_Flatbed

#include "Basic.hpp"

#include "BP_Ural_375_Flatbed_classes.hpp"
#include "BP_Ural_375_Flatbed_parameters.hpp"


namespace SDK
{

// Function BP_Ural_375_Flatbed.BP_Ural_375_Flatbed_C.ExecuteUbergraph_BP_Ural_375_Flatbed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ural_375_Flatbed_C::ExecuteUbergraph_BP_Ural_375_Flatbed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ural_375_Flatbed_C", "ExecuteUbergraph_BP_Ural_375_Flatbed");

	Params::BP_Ural_375_Flatbed_C_ExecuteUbergraph_BP_Ural_375_Flatbed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ural_375_Flatbed.BP_Ural_375_Flatbed_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)

void ABP_Ural_375_Flatbed_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ural_375_Flatbed_C", "Reconstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ural_375_Flatbed.BP_Ural_375_Flatbed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ural_375_Flatbed_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ural_375_Flatbed_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

