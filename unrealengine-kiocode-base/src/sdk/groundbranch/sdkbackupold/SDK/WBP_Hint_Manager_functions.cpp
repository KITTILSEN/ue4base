﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hint_Manager

#include "Basic.hpp"

#include "WBP_Hint_Manager_classes.hpp"
#include "WBP_Hint_Manager_parameters.hpp"


namespace SDK
{

// Function WBP_Hint_Manager.WBP_Hint_Manager_C.ExecuteUbergraph_WBP_Hint_Manager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hint_Manager_C::ExecuteUbergraph_WBP_Hint_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "ExecuteUbergraph_WBP_Hint_Manager");

	Params::WBP_Hint_Manager_C_ExecuteUbergraph_WBP_Hint_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hint_Manager.WBP_Hint_Manager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Hint_Manager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hint_Manager.WBP_Hint_Manager_C.OnShowHUDChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBHUD*                           GBHUD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hint_Manager_C::OnShowHUDChanged_Event_0(class AGBHUD* GBHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "OnShowHUDChanged_Event_0");

	Params::WBP_Hint_Manager_C_OnShowHUDChanged_Event_0 Parms{};

	Parms.GBHUD = GBHUD;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hint_Manager.WBP_Hint_Manager_C.ClearAll
// (BlueprintCallable, BlueprintEvent)

void UWBP_Hint_Manager_C::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "ClearAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Hint_Manager.WBP_Hint_Manager_C.AddHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           HintWidgetClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hint_Manager_C::AddHint(class UClass* HintWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "AddHint");

	Params::WBP_Hint_Manager_C_AddHint Parms{};

	Parms.HintWidgetClass = HintWidgetClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Hint_Manager.WBP_Hint_Manager_C.GetHintWrapperByHintClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           HintClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Hint_Wrapper_C**             OutHintWrapper                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Hint_Manager_C::GetHintWrapperByHintClass(class UClass* HintClass, class UWBP_Hint_Wrapper_C** OutHintWrapper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Hint_Manager_C", "GetHintWrapperByHintClass");

	Params::WBP_Hint_Manager_C_GetHintWrapperByHintClass Parms{};

	Parms.HintClass = HintClass;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHintWrapper != nullptr)
		*OutHintWrapper = Parms.OutHintWrapper;
}

}

