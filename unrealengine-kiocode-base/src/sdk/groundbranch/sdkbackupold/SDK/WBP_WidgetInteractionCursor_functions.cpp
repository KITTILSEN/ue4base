﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WidgetInteractionCursor

#include "Basic.hpp"

#include "WBP_WidgetInteractionCursor_classes.hpp"
#include "WBP_WidgetInteractionCursor_parameters.hpp"


namespace SDK
{

// Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.ExecuteUbergraph_WBP_WidgetInteractionCursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WidgetInteractionCursor_C::ExecuteUbergraph_WBP_WidgetInteractionCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WidgetInteractionCursor_C", "ExecuteUbergraph_WBP_WidgetInteractionCursor");

	Params::WBP_WidgetInteractionCursor_C_ExecuteUbergraph_WBP_WidgetInteractionCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_WidgetInteractionCursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WidgetInteractionCursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.OnHoveredWidgetChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*                 WidgetComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetComponent*                 PreviousWidgetComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WidgetInteractionCursor_C::OnHoveredWidgetChanged_Event_0(class UWidgetComponent* WidgetComponent, class UWidgetComponent* PreviousWidgetComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WidgetInteractionCursor_C", "OnHoveredWidgetChanged_Event_0");

	Params::WBP_WidgetInteractionCursor_C_OnHoveredWidgetChanged_Event_0 Parms{};

	Parms.WidgetComponent = WidgetComponent;
	Parms.PreviousWidgetComponent = PreviousWidgetComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WidgetInteractionCursor.WBP_WidgetInteractionCursor_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_WidgetInteractionCursor_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WidgetInteractionCursor_C", "GetVisibility_0");

	Params::WBP_WidgetInteractionCursor_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

