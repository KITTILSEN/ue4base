﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_PlaceableDragIcon

#include "Basic.hpp"

#include "WBP_HF_PlaceableDragIcon_classes.hpp"
#include "WBP_HF_PlaceableDragIcon_parameters.hpp"


namespace SDK
{

// Function WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HF_PlaceableDragIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PlaceableDragIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C.ExecuteUbergraph_WBP_HF_PlaceableDragIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PlaceableDragIcon_C::ExecuteUbergraph_WBP_HF_PlaceableDragIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PlaceableDragIcon_C", "ExecuteUbergraph_WBP_HF_PlaceableDragIcon");

	Params::WBP_HF_PlaceableDragIcon_C_ExecuteUbergraph_WBP_HF_PlaceableDragIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

