﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HF_Editor

#include "Basic.hpp"

#include "WBP_HF_Editor_classes.hpp"
#include "WBP_HF_Editor_parameters.hpp"


namespace SDK
{

// Function WBP_HF_Editor.WBP_HF_Editor_C.SetInitialRenameFilename
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::SetInitialRenameFilename()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "SetInitialRenameFilename");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.UpdateRightPanelSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::UpdateRightPanelSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "UpdateRightPanelSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderRightResizeMouseMove
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderRightResizeMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderRightResizeMouseMove");

	Params::WBP_HF_Editor_C_OnBorderRightResizeMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderRightResizeMouseButtonUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderRightResizeMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderRightResizeMouseButtonUp");

	Params::WBP_HF_Editor_C_OnBorderRightResizeMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderRightResizeMouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderRightResizeMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderRightResizeMouseButtonDown");

	Params::WBP_HF_Editor_C_OnBorderRightResizeMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.UpdateLeftPanelSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::UpdateLeftPanelSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "UpdateLeftPanelSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderLeftResizeMouseMove
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderLeftResizeMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderLeftResizeMouseMove");

	Params::WBP_HF_Editor_C_OnBorderLeftResizeMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderLeftResizeMouseButtonUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderLeftResizeMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderLeftResizeMouseButtonUp");

	Params::WBP_HF_Editor_C_OnBorderLeftResizeMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnBorderLeftResizeMouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnBorderLeftResizeMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnBorderLeftResizeMouseButtonDown");

	Params::WBP_HF_Editor_C_OnBorderLeftResizeMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnMouseButtonUp");

	Params::WBP_HF_Editor_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnMouseButtonDown");

	Params::WBP_HF_Editor_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnKeyUp");

	Params::WBP_HF_Editor_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnKeyDown");

	Params::WBP_HF_Editor_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_HF_Editor_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnMouseMove");

	Params::WBP_HF_Editor_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_HF_Editor_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnDrop");

	Params::WBP_HF_Editor_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnToolNotificationMessage_Event_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HF_Editor_C::OnToolNotificationMessage_Event_1(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnToolNotificationMessage_Event_1");

	Params::WBP_HF_Editor_C_OnToolNotificationMessage_Event_1 Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__CheckBox_Translate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__CheckBox_Translate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__CheckBox_Translate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__CheckBox_Translate_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__CheckBox_Rotate_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__CheckBox_Rotate_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__CheckBox_Rotate_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__CheckBox_Rotate_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__CheckBox_Scale_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__CheckBox_Scale_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__CheckBox_Scale_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__CheckBox_Scale_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__CheckBox_Space_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__CheckBox_Space_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__CheckBox_Space_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__CheckBox_Space_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_RightPanel_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BindToolNotification
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::BindToolNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BindToolNotification");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.ShowRenamePrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::ShowRenamePrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "ShowRenamePrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnOkClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::OnOkClicked_Event_0(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnOkClicked_Event_0");

	Params::WBP_HF_Editor_C_OnOkClicked_Event_0 Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnOkClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::OnOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnOkClicked_Event_1");

	Params::WBP_HF_Editor_C_OnOkClicked_Event_1 Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__ComboBoxString_108_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const class FString&                    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::BndEvt__ComboBoxString_108_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__ComboBoxString_108_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__ComboBoxString_108_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__CheckBox_GridSnap_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__CheckBox_GridSnap_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__CheckBox_GridSnap_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__CheckBox_GridSnap_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_LeftPanel_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHFManager*                       HotFootManagerRef_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::Setup(class AHFManager* HotFootManagerRef_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "Setup");

	Params::WBP_HF_Editor_C_Setup Parms{};

	Parms.HotFootManagerRef_0 = HotFootManagerRef_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Outline_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Outline_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Outline_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BindRenameSelected
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::BindRenameSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BindRenameSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnRenameSelected_Event_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::OnRenameSelected_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnRenameSelected_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__ComboBoxString_GridSize_1_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const class FString&                    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::BndEvt__ComboBoxString_GridSize_1_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__ComboBoxString_GridSize_1_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__ComboBoxString_GridSize_1_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.UpdateSpeedCombo
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::UpdateSpeedCombo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "UpdateSpeedCombo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__WBP_HF_Editor_Plant_Actor_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__WBP_HF_Editor_Plant_Actor_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__WBP_HF_Editor_Plant_Actor_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__WBP_HF_Editor_CheckBox_ShowBlockAlls_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::BndEvt__WBP_HF_Editor_CheckBox_ShowBlockAlls_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__WBP_HF_Editor_CheckBox_ShowBlockAlls_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_HF_Editor_C_BndEvt__WBP_HF_Editor_CheckBox_ShowBlockAlls_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BndEvt__WBP_HF_Editor_TabButton_Overview_K2Node_ComponentBoundEvent_16_OnTabClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_HF_Editor_C::BndEvt__WBP_HF_Editor_TabButton_Overview_K2Node_ComponentBoundEvent_16_OnTabClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BndEvt__WBP_HF_Editor_TabButton_Overview_K2Node_ComponentBoundEvent_16_OnTabClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.SelectTranslateGizmo
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::SelectTranslateGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "SelectTranslateGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.SelectRotateGizmo
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::SelectRotateGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "SelectRotateGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.SelectScaleGizmo
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::SelectScaleGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "SelectScaleGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BindChangeSpeed
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::BindChangeSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BindChangeSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnSpeedChangeRequested_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::OnSpeedChangeRequested_Event_0(int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnSpeedChangeRequested_Event_0");

	Params::WBP_HF_Editor_C_OnSpeedChangeRequested_Event_0 Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.OnPlayerInputChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayerInputEnabled                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HF_Editor_C::OnPlayerInputChanged_Event_0(bool bPlayerInputEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "OnPlayerInputChanged_Event_0");

	Params::WBP_HF_Editor_C_OnPlayerInputChanged_Event_0 Parms{};

	Parms.bPlayerInputEnabled = bPlayerInputEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.BindPlayerInputChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_HF_Editor_C::BindPlayerInputChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "BindPlayerInputChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HF_Editor.WBP_HF_Editor_C.ExecuteUbergraph_WBP_HF_Editor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HF_Editor_C::ExecuteUbergraph_WBP_HF_Editor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HF_Editor_C", "ExecuteUbergraph_WBP_HF_Editor");

	Params::WBP_HF_Editor_C_ExecuteUbergraph_WBP_HF_Editor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

