﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Jimmy_CJ20

#include "Basic.hpp"

#include "BP_Jimmy_CJ20_classes.hpp"
#include "BP_Jimmy_CJ20_parameters.hpp"


namespace SDK
{

// Function BP_Jimmy_CJ20.BP_Jimmy_CJ20_C.ExecuteUbergraph_BP_Jimmy_CJ20
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Jimmy_CJ20_C::ExecuteUbergraph_BP_Jimmy_CJ20(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jimmy_CJ20_C", "ExecuteUbergraph_BP_Jimmy_CJ20");

	Params::BP_Jimmy_CJ20_C_ExecuteUbergraph_BP_Jimmy_CJ20 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Jimmy_CJ20.BP_Jimmy_CJ20_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Jimmy_CJ20_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jimmy_CJ20_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Jimmy_CJ20.BP_Jimmy_CJ20_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Jimmy_CJ20_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Jimmy_CJ20_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

