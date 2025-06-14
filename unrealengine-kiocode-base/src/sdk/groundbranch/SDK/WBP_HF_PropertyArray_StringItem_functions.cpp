﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_PropertyArray_StringItem

#include "Basic.hpp"

#include "WBP_HF_PropertyArray_StringItem_classes.hpp"
#include "WBP_HF_PropertyArray_StringItem_parameters.hpp"


namespace SDK
{

// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_HF_PropertyArray_StringItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_PropertyArray_StringItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "BP_OnItemExpansionChanged");

	Params::WBP_HF_PropertyArray_StringItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_PropertyArray_StringItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "BP_OnItemSelectionChanged");

	Params::WBP_HF_PropertyArray_StringItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HF_PropertyArray_StringItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_StringItem_C::BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_HF_PropertyArray_StringItem_C_BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.ExecuteUbergraph_WBP_HF_PropertyArray_StringItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_PropertyArray_StringItem_C::ExecuteUbergraph_WBP_HF_PropertyArray_StringItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_PropertyArray_StringItem_C", "ExecuteUbergraph_WBP_HF_PropertyArray_StringItem");

	Params::WBP_HF_PropertyArray_StringItem_C_ExecuteUbergraph_WBP_HF_PropertyArray_StringItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

