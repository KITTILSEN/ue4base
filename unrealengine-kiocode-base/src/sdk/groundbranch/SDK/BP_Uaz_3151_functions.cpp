﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Uaz_3151

#include "Basic.hpp"

#include "BP_Uaz_3151_classes.hpp"
#include "BP_Uaz_3151_parameters.hpp"


namespace SDK
{

// Function BP_Uaz_3151.BP_Uaz_3151_C.ExecuteUbergraph_BP_Uaz_3151
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Uaz_3151_C::ExecuteUbergraph_BP_Uaz_3151(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Uaz_3151_C", "ExecuteUbergraph_BP_Uaz_3151");

	Params::BP_Uaz_3151_C_ExecuteUbergraph_BP_Uaz_3151 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Uaz_3151.BP_Uaz_3151_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Uaz_3151_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Uaz_3151_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Uaz_3151.BP_Uaz_3151_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Uaz_3151_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Uaz_3151_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

