﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ME_Dialogue_Script

#include "Basic.hpp"

#include "WBP_ME_Dialogue_Script_classes.hpp"
#include "WBP_ME_Dialogue_Script_parameters.hpp"


namespace SDK
{

// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_Dialogue_Script_C::BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_ME_Dialogue_Script_C_BndEvt__EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.CheckOkEnable
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_Dialogue_Script_C::CheckOkEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "CheckOkEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ME_Dialogue_Script_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.OnOkClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_Dialogue_Script_C::OnOkClicked_Event(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "OnOkClicked_Event");

	Params::WBP_ME_Dialogue_Script_C_OnOkClicked_Event Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.OnClicked_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_ME_Dialogue_Script_C::OnClicked_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "OnClicked_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ME_Dialogue_Script.WBP_ME_Dialogue_Script_C.ExecuteUbergraph_WBP_ME_Dialogue_Script
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ME_Dialogue_Script_C::ExecuteUbergraph_WBP_ME_Dialogue_Script(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ME_Dialogue_Script_C", "ExecuteUbergraph_WBP_ME_Dialogue_Script");

	Params::WBP_ME_Dialogue_Script_C_ExecuteUbergraph_WBP_ME_Dialogue_Script Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

