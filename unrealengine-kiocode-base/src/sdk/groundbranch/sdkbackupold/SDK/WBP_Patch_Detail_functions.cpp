﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Patch_Detail

#include "Basic.hpp"

#include "WBP_Patch_Detail_classes.hpp"
#include "WBP_Patch_Detail_parameters.hpp"


namespace SDK
{

// Function WBP_Patch_Detail.WBP_Patch_Detail_C.ExecuteUbergraph_WBP_Patch_Detail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Patch_Detail_C::ExecuteUbergraph_WBP_Patch_Detail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "ExecuteUbergraph_WBP_Patch_Detail");

	Params::WBP_Patch_Detail_C_ExecuteUbergraph_WBP_Patch_Detail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.BndEvt__WBP_Patch_Detail_MainPatch_ButtonThumbnail_K2Node_ComponentBoundEvent_3_OnPostRefreshThumbnail__DelegateSignature
// (BlueprintEvent)

void UWBP_Patch_Detail_C::BndEvt__WBP_Patch_Detail_MainPatch_ButtonThumbnail_K2Node_ComponentBoundEvent_3_OnPostRefreshThumbnail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "BndEvt__WBP_Patch_Detail_MainPatch_ButtonThumbnail_K2Node_ComponentBoundEvent_3_OnPostRefreshThumbnail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.UpdateCensoredStateOfMainPatch
// (BlueprintCallable, BlueprintEvent)

void UWBP_Patch_Detail_C::UpdateCensoredStateOfMainPatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "UpdateCensoredStateOfMainPatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Patch_Detail_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "PreConstruct");

	Params::WBP_Patch_Detail_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.UpdateIsNativeMainPatch
// (BlueprintCallable, BlueprintEvent)

void UWBP_Patch_Detail_C::UpdateIsNativeMainPatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "UpdateIsNativeMainPatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.EnsureNativeFallbackExists
// (BlueprintCallable, BlueprintEvent)

void UWBP_Patch_Detail_C::EnsureNativeFallbackExists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "EnsureNativeFallbackExists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.SetPatchJson
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*                JsonObj                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFallback                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Patch_Detail_C::SetPatchJson(class UVaRestJsonObject* JsonObj, bool bFallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "SetPatchJson");

	Params::WBP_Patch_Detail_C_SetPatchJson Parms{};

	Parms.JsonObj = JsonObj;
	Parms.bFallback = bFallback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFallback                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Patch_Detail_C::SetSelected(bool bSelected, bool bFallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "SetSelected");

	Params::WBP_Patch_Detail_C_SetSelected Parms{};

	Parms.bSelected = bSelected;
	Parms.bFallback = bFallback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.UpdateSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFallback                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Patch_Detail_C::UpdateSelected(bool bSelected, bool bFallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "UpdateSelected");

	Params::WBP_Patch_Detail_C_UpdateSelected Parms{};

	Parms.bSelected = bSelected;
	Parms.bFallback = bFallback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.BndEvt__WBP_Patch_Detail_Button_FallBackPatch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Patch_Detail_C::BndEvt__WBP_Patch_Detail_Button_FallBackPatch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "BndEvt__WBP_Patch_Detail_Button_FallBackPatch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.BndEvt__WBP_Patch_Detail_Button_MainPatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Patch_Detail_C::BndEvt__WBP_Patch_Detail_Button_MainPatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "BndEvt__WBP_Patch_Detail_Button_MainPatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Patch_Detail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.HasBeenChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWBP_Patch_Detail_C::HasBeenChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "HasBeenChanged");

	Params::WBP_Patch_Detail_C_HasBeenChanged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.GetPatchJson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject**               OutDataEntry                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Patch_Detail_C::GetPatchJson(class UVaRestJsonObject** OutDataEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "GetPatchJson");

	Params::WBP_Patch_Detail_C_GetPatchJson Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDataEntry != nullptr)
		*OutDataEntry = Parms.OutDataEntry;
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.GetFallbackVis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_Patch_Detail_C::GetFallbackVis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "GetFallbackVis");

	Params::WBP_Patch_Detail_C_GetFallbackVis Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Patch_Detail.WBP_Patch_Detail_C.Get_TextBlock_FallbackPatch_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Patch_Detail_C::Get_TextBlock_FallbackPatch_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Patch_Detail_C", "Get_TextBlock_FallbackPatch_ToolTipWidget_0");

	Params::WBP_Patch_Detail_C_Get_TextBlock_FallbackPatch_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

