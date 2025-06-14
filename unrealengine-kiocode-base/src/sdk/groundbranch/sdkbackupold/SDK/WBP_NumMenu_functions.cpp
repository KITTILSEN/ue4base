﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NumMenu

#include "Basic.hpp"

#include "WBP_NumMenu_classes.hpp"
#include "WBP_NumMenu_parameters.hpp"


namespace SDK
{

// Function WBP_NumMenu.WBP_NumMenu_C.ExecuteUbergraph_WBP_NumMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NumMenu_C::ExecuteUbergraph_WBP_NumMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NumMenu_C", "ExecuteUbergraph_WBP_NumMenu");

	Params::WBP_NumMenu_C_ExecuteUbergraph_WBP_NumMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NumMenu.WBP_NumMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NumMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NumMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NumMenu.WBP_NumMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NumMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NumMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NumMenu.WBP_NumMenu_C.OverrideInputKey
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// EBPInputEvent                           EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AmountDepressed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bGamepad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_NumMenu_C::OverrideInputKey(const struct FKey& Key, EBPInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NumMenu_C", "OverrideInputKey");

	Params::WBP_NumMenu_C_OverrideInputKey Parms{};

	Parms.Key = std::move(Key);
	Parms.EventType = EventType;
	Parms.AmountDepressed = AmountDepressed;
	Parms.bGamepad = bGamepad;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_NumMenu.WBP_NumMenu_C.OverrideInputAxis
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumSamples                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bGamepad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_NumMenu_C::OverrideInputAxis(const struct FKey& Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NumMenu_C", "OverrideInputAxis");

	Params::WBP_NumMenu_C_OverrideInputAxis Parms{};

	Parms.Key = std::move(Key);
	Parms.Delta = Delta;
	Parms.DeltaTime = DeltaTime;
	Parms.NumSamples = NumSamples;
	Parms.bGamepad = bGamepad;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

