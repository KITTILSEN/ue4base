﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OffsetRailAdapter

#include "Basic.hpp"

#include "BP_OffsetRailAdapter_classes.hpp"
#include "BP_OffsetRailAdapter_parameters.hpp"


namespace SDK
{

// Function BP_OffsetRailAdapter.BP_OffsetRailAdapter_C.IsCompatibleWithRail
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGBRailComponent*                 RailComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_OffsetRailAdapter_C::IsCompatibleWithRail(class UGBRailComponent* RailComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OffsetRailAdapter_C", "IsCompatibleWithRail");

	Params::BP_OffsetRailAdapter_C_IsCompatibleWithRail Parms{};

	Parms.RailComp = RailComp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

