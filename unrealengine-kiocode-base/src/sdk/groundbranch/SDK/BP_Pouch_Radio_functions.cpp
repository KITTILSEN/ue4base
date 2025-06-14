﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pouch_Radio

#include "Basic.hpp"

#include "BP_Pouch_Radio_classes.hpp"
#include "BP_Pouch_Radio_parameters.hpp"


namespace SDK
{

// Function BP_Pouch_Radio.BP_Pouch_Radio_C.ExecuteUbergraph_BP_Pouch_Radio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Pouch_Radio_C::ExecuteUbergraph_BP_Pouch_Radio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pouch_Radio_C", "ExecuteUbergraph_BP_Pouch_Radio");

	Params::BP_Pouch_Radio_C_ExecuteUbergraph_BP_Pouch_Radio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Pouch_Radio.BP_Pouch_Radio_C.CreateMIDsEvent
// (Event, Protected, BlueprintEvent)

void ABP_Pouch_Radio_C::CreateMIDsEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pouch_Radio_C", "CreateMIDsEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Pouch_Radio.BP_Pouch_Radio_C.OnAddedToItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBInvItem*                       NewParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Pouch_Radio_C::OnAddedToItem(class AGBInvItem* NewParentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pouch_Radio_C", "OnAddedToItem");

	Params::BP_Pouch_Radio_C_OnAddedToItem Parms{};

	Parms.NewParentItem = NewParentItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Pouch_Radio.BP_Pouch_Radio_C.Completed_E7245EB18D764D5CA89B84C6E9049A3E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Pouch_Radio_C::Completed_E7245EB18D764D5CA89B84C6E9049A3E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Pouch_Radio_C", "Completed_E7245EB18D764D5CA89B84C6E9049A3E");

	Params::BP_Pouch_Radio_C_Completed_E7245EB18D764D5CA89B84C6E9049A3E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

