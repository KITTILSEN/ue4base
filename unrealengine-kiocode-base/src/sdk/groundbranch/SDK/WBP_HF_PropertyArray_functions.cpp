﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_PropertyArray

#include "Basic.hpp"

#include "WBP_HF_PropertyArray_classes.hpp"
#include "WBP_HF_PropertyArray_parameters.hpp"


namespace SDK
{

// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.GetNumberElementsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWBP_HF_PropertyArray_C::GetNumberElementsText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "GetNumberElementsText");

	Params::WBP_HF_PropertyArray_C_GetNumberElementsText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__Button_Empty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_PropertyArray_C::BndEvt__Button_Empty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "BndEvt__Button_Empty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__Button_AddNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_PropertyArray_C::BndEvt__Button_AddNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "BndEvt__Button_AddNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_C::BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::WBP_HF_PropertyArray_C_BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnInsert_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_HF_PropertyArray_Entry_C*    Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_C::OnInsert_Event_0(class UWBP_HF_PropertyArray_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "OnInsert_Event_0");

	Params::WBP_HF_PropertyArray_C_OnInsert_Event_0 Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnDelete_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_HF_PropertyArray_Entry_C*    Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_C::OnDelete_Event_0(class UWBP_HF_PropertyArray_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "OnDelete_Event_0");

	Params::WBP_HF_PropertyArray_C_OnDelete_Event_0 Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.ExecuteUbergraph_WBP_HF_PropertyArray
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_C::ExecuteUbergraph_WBP_HF_PropertyArray(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_C", "ExecuteUbergraph_WBP_HF_PropertyArray");

	Params::WBP_HF_PropertyArray_C_ExecuteUbergraph_WBP_HF_PropertyArray Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

