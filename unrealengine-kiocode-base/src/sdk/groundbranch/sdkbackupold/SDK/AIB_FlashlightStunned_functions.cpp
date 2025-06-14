﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIB_FlashlightStunned

#include "Basic.hpp"

#include "AIB_FlashlightStunned_classes.hpp"
#include "AIB_FlashlightStunned_parameters.hpp"


namespace SDK
{

// Function AIB_FlashlightStunned.AIB_FlashlightStunned_C.ExecuteUbergraph_AIB_FlashlightStunned
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIB_FlashlightStunned_C::ExecuteUbergraph_AIB_FlashlightStunned(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_FlashlightStunned_C", "ExecuteUbergraph_AIB_FlashlightStunned");

	Params::AIB_FlashlightStunned_C_ExecuteUbergraph_AIB_FlashlightStunned Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIB_FlashlightStunned.AIB_FlashlightStunned_C.OnExitState
// (Event, Public, BlueprintEvent)

void UAIB_FlashlightStunned_C::OnExitState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_FlashlightStunned_C", "OnExitState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIB_FlashlightStunned.AIB_FlashlightStunned_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAIB_FlashlightStunned_C::OnEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_FlashlightStunned_C", "OnEnterState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIB_FlashlightStunned.AIB_FlashlightStunned_C.PreCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIB_FlashlightStunned_C::PreCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_FlashlightStunned_C", "PreCondition");

	Params::AIB_FlashlightStunned_C_PreCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AIB_FlashlightStunned.AIB_FlashlightStunned_C.GetScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIB_FlashlightStunned_C::GetScore() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_FlashlightStunned_C", "GetScore");

	Params::AIB_FlashlightStunned_C_GetScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

