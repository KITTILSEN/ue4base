﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIB_Command_Cover

#include "Basic.hpp"

#include "AIB_Command_Cover_classes.hpp"
#include "AIB_Command_Cover_parameters.hpp"


namespace SDK
{

// Function AIB_Command_Cover.AIB_Command_Cover_C.ExecuteUbergraph_AIB_Command_Cover
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIB_Command_Cover_C::ExecuteUbergraph_AIB_Command_Cover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_Command_Cover_C", "ExecuteUbergraph_AIB_Command_Cover");

	Params::AIB_Command_Cover_C_ExecuteUbergraph_AIB_Command_Cover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIB_Command_Cover.AIB_Command_Cover_C.OnEnterState
// (Event, Public, BlueprintEvent)

void UAIB_Command_Cover_C::OnEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_Command_Cover_C", "OnEnterState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIB_Command_Cover.AIB_Command_Cover_C.GetScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIB_Command_Cover_C::GetScore() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_Command_Cover_C", "GetScore");

	Params::AIB_Command_Cover_C_GetScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AIB_Command_Cover.AIB_Command_Cover_C.PreCondition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIB_Command_Cover_C::PreCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIB_Command_Cover_C", "PreCondition");

	Params::AIB_Command_Cover_C_PreCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

