﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuickPlayerAdmin

#include "Basic.hpp"

#include "WBP_QuickPlayerAdmin_classes.hpp"
#include "WBP_QuickPlayerAdmin_parameters.hpp"


namespace SDK
{

// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.ExecuteUbergraph_WBP_QuickPlayerAdmin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::ExecuteUbergraph_WBP_QuickPlayerAdmin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "ExecuteUbergraph_WBP_QuickPlayerAdmin");

	Params::WBP_QuickPlayerAdmin_C_ExecuteUbergraph_WBP_QuickPlayerAdmin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnNoKickReason_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_DialogueBox_C*               Dialogue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::OnNoKickReason_Event(class UWBP_DialogueBox_C* Dialogue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnNoKickReason_Event");

	Params::WBP_QuickPlayerAdmin_C_OnNoKickReason_Event Parms{};

	Parms.Dialogue = Dialogue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnKickReason_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::OnKickReason_Event(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnKickReason_Event");

	Params::WBP_QuickPlayerAdmin_C_OnKickReason_Event Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.KickPlayer
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlayerAdmin_C::KickPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "KickPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BanPlayer
// (BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlayerAdmin_C::BanPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "BanPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanDuration_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::OnBanDuration_Event(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnBanDuration_Event");

	Params::WBP_QuickPlayerAdmin_C_OnBanDuration_Event Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanReason_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::OnBanReason_Event(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnBanReason_Event");

	Params::WBP_QuickPlayerAdmin_C_OnBanReason_Event Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_QuickPlayerAdmin_C::BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::WBP_QuickPlayerAdmin_C_BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnIndexChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::OnIndexChanged_Event(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnIndexChanged_Event");

	Params::WBP_QuickPlayerAdmin_C_OnIndexChanged_Event Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.SetupContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ComboBox_Content_C*          MenuDropdownContent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QuickPlayerAdmin_C::SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "SetupContent");

	Params::WBP_QuickPlayerAdmin_C_SetupContent Parms{};

	Parms.MenuDropdownContent = MenuDropdownContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_QuickPlayerAdmin_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlayerAdmin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnGetMenuContent_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QuickPlayerAdmin_C::OnGetMenuContent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "OnGetMenuContent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_QuickPlayerAdmin_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "GetToolTipWidget_0");

	Params::WBP_QuickPlayerAdmin_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.On Get User Menu Content 0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UWBP_QuickPlayerAdmin_C::On_Get_User_Menu_Content_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_QuickPlayerAdmin_C", "On Get User Menu Content 0");

	Params::WBP_QuickPlayerAdmin_C_On_Get_User_Menu_Content_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

