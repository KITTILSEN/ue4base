﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Zil131

#include "Basic.hpp"

#include "BP_Zil131_classes.hpp"
#include "BP_Zil131_parameters.hpp"


namespace SDK
{

// Function BP_Zil131.BP_Zil131_C.ExecuteUbergraph_BP_Zil131
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zil131_C::ExecuteUbergraph_BP_Zil131(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zil131_C", "ExecuteUbergraph_BP_Zil131");

	Params::BP_Zil131_C_ExecuteUbergraph_BP_Zil131 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Zil131.BP_Zil131_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)

void ABP_Zil131_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zil131_C", "Reconstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Zil131.BP_Zil131_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Zil131_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zil131_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

