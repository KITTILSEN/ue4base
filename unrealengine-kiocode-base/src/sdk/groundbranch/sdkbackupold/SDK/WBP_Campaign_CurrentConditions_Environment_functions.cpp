﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Campaign_CurrentConditions_Environment

#include "Basic.hpp"

#include "WBP_Campaign_CurrentConditions_Environment_classes.hpp"
#include "WBP_Campaign_CurrentConditions_Environment_parameters.hpp"


namespace SDK
{

// Function WBP_Campaign_CurrentConditions_Environment.WBP_Campaign_CurrentConditions_Environment_C.ExecuteUbergraph_WBP_Campaign_CurrentConditions_Environment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Campaign_CurrentConditions_Environment_C::ExecuteUbergraph_WBP_Campaign_CurrentConditions_Environment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Campaign_CurrentConditions_Environment_C", "ExecuteUbergraph_WBP_Campaign_CurrentConditions_Environment");

	Params::WBP_Campaign_CurrentConditions_Environment_C_ExecuteUbergraph_WBP_Campaign_CurrentConditions_Environment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Campaign_CurrentConditions_Environment.WBP_Campaign_CurrentConditions_Environment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Campaign_CurrentConditions_Environment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Campaign_CurrentConditions_Environment_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

