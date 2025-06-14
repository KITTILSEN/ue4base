﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_Drop_Smoke

#include "Basic.hpp"

#include "BT_GB_Ky_Drop_Smoke_classes.hpp"
#include "BT_GB_Ky_Drop_Smoke_parameters.hpp"


namespace SDK
{

// Function BT_GB_Ky_Drop_Smoke.BT_GB_Ky_Drop_Smoke_C.ExecuteUbergraph_BT_GB_Ky_Drop_Smoke
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBT_GB_Ky_Drop_Smoke_C::ExecuteUbergraph_BT_GB_Ky_Drop_Smoke(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_GB_Ky_Drop_Smoke_C", "ExecuteUbergraph_BT_GB_Ky_Drop_Smoke");

	Params::BT_GB_Ky_Drop_Smoke_C_ExecuteUbergraph_BT_GB_Ky_Drop_Smoke Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BT_GB_Ky_Drop_Smoke.BT_GB_Ky_Drop_Smoke_C.WaitGAEnd
// (BlueprintCallable, BlueprintEvent)

void UBT_GB_Ky_Drop_Smoke_C::WaitGAEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_GB_Ky_Drop_Smoke_C", "WaitGAEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BT_GB_Ky_Drop_Smoke.BT_GB_Ky_Drop_Smoke_C.EventReceived_C9A3F5CC4AC5125A01FEE382A655B961
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBT_GB_Ky_Drop_Smoke_C::EventReceived_C9A3F5CC4AC5125A01FEE382A655B961(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_GB_Ky_Drop_Smoke_C", "EventReceived_C9A3F5CC4AC5125A01FEE382A655B961");

	Params::BT_GB_Ky_Drop_Smoke_C_EventReceived_C9A3F5CC4AC5125A01FEE382A655B961 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BT_GB_Ky_Drop_Smoke.BT_GB_Ky_Drop_Smoke_C.DoUpdate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKytController*                   Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKytBlackboard*                   BehaviorBlackboard                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EKytBTUpdateResult                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EKytBTUpdateResult UBT_GB_Ky_Drop_Smoke_C::DoUpdate(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_GB_Ky_Drop_Smoke_C", "DoUpdate");

	Params::BT_GB_Ky_Drop_Smoke_C_DoUpdate Parms{};

	Parms.Controller = Controller;
	Parms.BehaviorBlackboard = BehaviorBlackboard;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BT_GB_Ky_Drop_Smoke.BT_GB_Ky_Drop_Smoke_C.DoEnter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKytController*                   Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKytBlackboard*                   BehaviorBlackboard                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EKytBTEnterResult                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EKytBTEnterResult UBT_GB_Ky_Drop_Smoke_C::DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BT_GB_Ky_Drop_Smoke_C", "DoEnter");

	Params::BT_GB_Ky_Drop_Smoke_C_DoEnter Parms{};

	Parms.Controller = Controller;
	Parms.BehaviorBlackboard = BehaviorBlackboard;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

