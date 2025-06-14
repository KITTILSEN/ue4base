﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hint_Wrapper

#include "Basic.hpp"

#include "WBP_Hint_Wrapper_classes.hpp"
#include "WBP_Hint_Wrapper_parameters.hpp"


namespace SDK
{

// Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.ExecuteUbergraph_WBP_Hint_Wrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hint_Wrapper_C::ExecuteUbergraph_WBP_Hint_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Wrapper_C", "ExecuteUbergraph_WBP_Hint_Wrapper");

	Params::WBP_Hint_Wrapper_C_ExecuteUbergraph_WBP_Hint_Wrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.ResetFadeOutTime
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hint_Wrapper_C::ResetFadeOutTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Wrapper_C", "ResetFadeOutTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.CleanUp
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hint_Wrapper_C::CleanUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Wrapper_C", "CleanUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hint_Wrapper_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Wrapper_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hint_Wrapper.WBP_Hint_Wrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hint_Wrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Wrapper_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

