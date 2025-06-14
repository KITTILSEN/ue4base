﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryBar_ItemEntry

#include "Basic.hpp"

#include "WBP_InventoryBar_ItemEntry_classes.hpp"
#include "WBP_InventoryBar_ItemEntry_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.ExecuteUbergraph_WBP_InventoryBar_ItemEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryBar_ItemEntry_C::ExecuteUbergraph_WBP_InventoryBar_ItemEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "ExecuteUbergraph_WBP_InventoryBar_ItemEntry");

	Params::WBP_InventoryBar_ItemEntry_C_ExecuteUbergraph_WBP_InventoryBar_ItemEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.SwitchItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InLeftHandItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InRightHandItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryBar_ItemEntry_C::SwitchItems(class UObject* InLeftHandItem, class UObject* InRightHandItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "SwitchItems");

	Params::WBP_InventoryBar_ItemEntry_C_SwitchItems Parms{};

	Parms.InLeftHandItem = InLeftHandItem;
	Parms.InRightHandItem = InRightHandItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.SetItemText
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryBar_ItemEntry_C::SetItemText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "SetItemText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.EquipInventorySlotItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bMainHand                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bImmediate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryBar_ItemEntry_C::EquipInventorySlotItem(bool bMainHand, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "EquipInventorySlotItem");

	Params::WBP_InventoryBar_ItemEntry_C_EquipInventorySlotItem Parms{};

	Parms.bMainHand = bMainHand;
	Parms.bImmediate = bImmediate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.OnIconLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          LoadedAsset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryBar_ItemEntry_C::OnIconLoaded(class UObject* LoadedAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "OnIconLoaded");

	Params::WBP_InventoryBar_ItemEntry_C_OnIconLoaded Parms{};

	Parms.LoadedAsset = LoadedAsset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.SetInventorySlotItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBInvItem*                       InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryBar_ItemEntry_C::SetInventorySlotItem(class AGBInvItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "SetInventorySlotItem");

	Params::WBP_InventoryBar_ItemEntry_C_SetInventorySlotItem Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.InternalSetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryBar_ItemEntry_C::InternalSetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "InternalSetSelected");

	Params::WBP_InventoryBar_ItemEntry_C_InternalSetSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryBar_ItemEntry_C::BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::WBP_InventoryBar_ItemEntry_C_BndEvt__CheckBox_Tab_K2Node_ComponentBoundEvent_1034_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryBar_ItemEntry.WBP_InventoryBar_ItemEntry_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWBP_InventoryBar_ItemEntry_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryBar_ItemEntry_C", "GetVisibility_0");

	Params::WBP_InventoryBar_ItemEntry_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

