﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FireSelect_Master

#include "Basic.hpp"

#include "GA_FireSelect_Master_classes.hpp"
#include "GA_FireSelect_Master_parameters.hpp"


namespace SDK
{

// Function GA_FireSelect_Master.GA_FireSelect_Master_C.ExecuteUbergraph_GA_FireSelect_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FireSelect_Master_C::ExecuteUbergraph_GA_FireSelect_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "ExecuteUbergraph_GA_FireSelect_Master");

	Params::GA_FireSelect_Master_C_ExecuteUbergraph_GA_FireSelect_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_FireSelect_Master_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.OnCompleted_EA568C2D4191408A9FD67E8859D96886
// (BlueprintCallable, BlueprintEvent)

void UGA_FireSelect_Master_C::OnCompleted_EA568C2D4191408A9FD67E8859D96886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "OnCompleted_EA568C2D4191408A9FD67E8859D96886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.OnBlendOut_EA568C2D4191408A9FD67E8859D96886
// (BlueprintCallable, BlueprintEvent)

void UGA_FireSelect_Master_C::OnBlendOut_EA568C2D4191408A9FD67E8859D96886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "OnBlendOut_EA568C2D4191408A9FD67E8859D96886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.OnInterrupted_EA568C2D4191408A9FD67E8859D96886
// (BlueprintCallable, BlueprintEvent)

void UGA_FireSelect_Master_C::OnInterrupted_EA568C2D4191408A9FD67E8859D96886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "OnInterrupted_EA568C2D4191408A9FD67E8859D96886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.OnCancelled_EA568C2D4191408A9FD67E8859D96886
// (BlueprintCallable, BlueprintEvent)

void UGA_FireSelect_Master_C::OnCancelled_EA568C2D4191408A9FD67E8859D96886()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "OnCancelled_EA568C2D4191408A9FD67E8859D96886");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FireSelect_Master.GA_FireSelect_Master_C.EventReceived_FF1CD329F9A447D48DFC9CEE09E265EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FireSelect_Master_C::EventReceived_FF1CD329F9A447D48DFC9CEE09E265EE(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FireSelect_Master_C", "EventReceived_FF1CD329F9A447D48DFC9CEE09E265EE");

	Params::GA_FireSelect_Master_C_EventReceived_FF1CD329F9A447D48DFC9CEE09E265EE Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

