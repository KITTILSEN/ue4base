﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DumpPouch

#include "Basic.hpp"

#include "BP_DumpPouch_classes.hpp"
#include "BP_DumpPouch_parameters.hpp"


namespace SDK
{

// Function BP_DumpPouch.BP_DumpPouch_C.ExecuteUbergraph_BP_DumpPouch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DumpPouch_C::ExecuteUbergraph_BP_DumpPouch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "ExecuteUbergraph_BP_DumpPouch");

	Params::BP_DumpPouch_C_ExecuteUbergraph_BP_DumpPouch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DumpPouch.BP_DumpPouch_C.Refill
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DumpPouch_C::Refill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "Refill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DumpPouch.BP_DumpPouch_C.FillWith
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPrimaryAssetId&           InvItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FPrimaryAssetId&           InvSkinId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DumpPouch_C::FillWith(const struct FPrimaryAssetId& InvItemId, const struct FPrimaryAssetId& InvSkinId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "FillWith");

	Params::BP_DumpPouch_C_FillWith Parms{};

	Parms.InvItemId = std::move(InvItemId);
	Parms.InvSkinId = std::move(InvSkinId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DumpPouch.BP_DumpPouch_C.OnAddedToItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBInvItem*                       NewParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DumpPouch_C::OnAddedToItem(class AGBInvItem* NewParentItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "OnAddedToItem");

	Params::BP_DumpPouch_C_OnAddedToItem Parms{};

	Parms.NewParentItem = NewParentItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DumpPouch.BP_DumpPouch_C.InheritSkinFromParentItem
// (BlueprintCallable, BlueprintEvent)

void ABP_DumpPouch_C::InheritSkinFromParentItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "InheritSkinFromParentItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DumpPouch.BP_DumpPouch_C.OnAddedToInventoryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DumpPouch_C::OnAddedToInventoryEvent(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "OnAddedToInventoryEvent");

	Params::BP_DumpPouch_C_OnAddedToInventoryEvent Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DumpPouch.BP_DumpPouch_C.Completed_8F52A21ABFC54F7C8F15C711338E09D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DumpPouch_C::Completed_8F52A21ABFC54F7C8F15C711338E09D1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "Completed_8F52A21ABFC54F7C8F15C711338E09D1");

	Params::BP_DumpPouch_C_Completed_8F52A21ABFC54F7C8F15C711338E09D1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DumpPouch.BP_DumpPouch_C.CanAddChild
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBInvItem*                       PotentialChild                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DumpPouch_C::CanAddChild(class AGBInvItem* PotentialChild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DumpPouch_C", "CanAddChild");

	Params::BP_DumpPouch_C_CanAddChild Parms{};

	Parms.PotentialChild = PotentialChild;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

