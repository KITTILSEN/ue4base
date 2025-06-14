﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CE_ListEntry_Wrapper

#include "Basic.hpp"

#include "WBP_CE_ListEntry_Wrapper_classes.hpp"
#include "WBP_CE_ListEntry_Wrapper_parameters.hpp"


namespace SDK
{

// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.ExecuteUbergraph_WBP_CE_ListEntry_Wrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CE_ListEntry_Wrapper_C::ExecuteUbergraph_WBP_CE_ListEntry_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "ExecuteUbergraph_WBP_CE_ListEntry_Wrapper");

	Params::WBP_CE_ListEntry_Wrapper_C_ExecuteUbergraph_WBP_CE_ListEntry_Wrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CE_ListEntry_Wrapper_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "OnMouseLeave");

	Params::WBP_CE_ListEntry_Wrapper_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CE_ListEntry_Wrapper_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "OnMouseEnter");

	Params::WBP_CE_ListEntry_Wrapper_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.CreateNewContentsMaybe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           NewContentsClass                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CE_ListEntry_Wrapper_C::CreateNewContentsMaybe(class UClass* NewContentsClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "CreateNewContentsMaybe");

	Params::WBP_CE_ListEntry_Wrapper_C_CreateNewContentsMaybe Parms{};

	Parms.NewContentsClass = NewContentsClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWBP_CE_ListEntry_Wrapper_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CE_ListEntry_Wrapper_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "OnListItemObjectSet");

	Params::WBP_CE_ListEntry_Wrapper_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CE_ListEntry_Wrapper_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "BP_OnItemSelectionChanged");

	Params::WBP_CE_ListEntry_Wrapper_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CE_ListEntry_Wrapper.WBP_CE_ListEntry_Wrapper_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CE_ListEntry_Wrapper_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CE_ListEntry_Wrapper_C", "BP_OnItemExpansionChanged");

	Params::WBP_CE_ListEntry_Wrapper_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

}

