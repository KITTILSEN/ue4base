﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIB_DeadBody

#include "Basic.hpp"

#include "AIB_DeadBody_classes.hpp"
#include "AIB_DeadBody_parameters.hpp"


namespace SDK
{

// Function AIB_DeadBody.AIB_DeadBody_C.ExecuteUbergraph_AIB_DeadBody
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIB_DeadBody_C::ExecuteUbergraph_AIB_DeadBody(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_DeadBody_C", "ExecuteUbergraph_AIB_DeadBody");

	Params::AIB_DeadBody_C_ExecuteUbergraph_AIB_DeadBody Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIB_DeadBody.AIB_DeadBody_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAIB_DeadBody_C::OnEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_DeadBody_C", "OnEnterState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIB_DeadBody.AIB_DeadBody_C.PreCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIB_DeadBody_C::PreCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_DeadBody_C", "PreCondition");

	Params::AIB_DeadBody_C_PreCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AIB_DeadBody.AIB_DeadBody_C.GetScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIB_DeadBody_C::GetScore() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_DeadBody_C", "GetScore");

	Params::AIB_DeadBody_C_GetScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

