﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IE_InvItemSkin_ComboBox_Content

#include "Basic.hpp"

#include "WBP_IE_InvItemSkin_ComboBox_Content_classes.hpp"
#include "WBP_IE_InvItemSkin_ComboBox_Content_parameters.hpp"


namespace SDK
{

// Function WBP_IE_InvItemSkin_ComboBox_Content.WBP_IE_InvItemSkin_ComboBox_Content_C.ExecuteUbergraph_WBP_IE_InvItemSkin_ComboBox_Content
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IE_InvItemSkin_ComboBox_Content_C::ExecuteUbergraph_WBP_IE_InvItemSkin_ComboBox_Content(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IE_InvItemSkin_ComboBox_Content_C", "ExecuteUbergraph_WBP_IE_InvItemSkin_ComboBox_Content");

	Params::WBP_IE_InvItemSkin_ComboBox_Content_C_ExecuteUbergraph_WBP_IE_InvItemSkin_ComboBox_Content Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IE_InvItemSkin_ComboBox_Content.WBP_IE_InvItemSkin_ComboBox_Content_C.BndEvt__WBP_CE_ItemSkin_ComboBox_Content_GBCustomTileView_List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IE_InvItemSkin_ComboBox_Content_C::BndEvt__WBP_CE_ItemSkin_ComboBox_Content_GBCustomTileView_List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IE_InvItemSkin_ComboBox_Content_C", "BndEvt__WBP_CE_ItemSkin_ComboBox_Content_GBCustomTileView_List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	Params::WBP_IE_InvItemSkin_ComboBox_Content_C_BndEvt__WBP_CE_ItemSkin_ComboBox_Content_GBCustomTileView_List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IE_InvItemSkin_ComboBox_Content.WBP_IE_InvItemSkin_ComboBox_Content_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IE_InvItemSkin_ComboBox_Content_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IE_InvItemSkin_ComboBox_Content_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IE_InvItemSkin_ComboBox_Content.WBP_IE_InvItemSkin_ComboBox_Content_C.BP_OnEntryGenerated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IE_InvItemSkin_ComboBox_Content_C::BP_OnEntryGenerated_Event_0(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IE_InvItemSkin_ComboBox_Content_C", "BP_OnEntryGenerated_Event_0");

	Params::WBP_IE_InvItemSkin_ComboBox_Content_C_BP_OnEntryGenerated_Event_0 Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

}

