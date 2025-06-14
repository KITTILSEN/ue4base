﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadGear_Master

#include "Basic.hpp"

#include "BP_HeadGear_Master_classes.hpp"
#include "BP_HeadGear_Master_parameters.hpp"


namespace SDK
{

// Function BP_HeadGear_Master.BP_HeadGear_Master_C.ExecuteUbergraph_BP_HeadGear_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::ExecuteUbergraph_BP_HeadGear_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "ExecuteUbergraph_BP_HeadGear_Master");

	Params::BP_HeadGear_Master_C_ExecuteUbergraph_BP_HeadGear_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnCosmeticTagsUpdated_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTagContainer&     InCosmeticTags                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HeadGear_Master_C::OnCosmeticTagsUpdated_Event_0(const struct FGameplayTagContainer& InCosmeticTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnCosmeticTagsUpdated_Event_0");

	Params::BP_HeadGear_Master_C_OnCosmeticTagsUpdated_Event_0 Parms{};

	Parms.InCosmeticTags = std::move(InCosmeticTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnDeathStarted_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::OnDeathStarted_Event_0(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnDeathStarted_Event_0");

	Params::BP_HeadGear_Master_C_OnDeathStarted_Event_0 Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.CreateMIDsEvent
// (Event, Protected, BlueprintEvent)

void ABP_HeadGear_Master_C::CreateMIDsEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "CreateMIDsEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnAddedToInventoryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::OnAddedToInventoryEvent(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnAddedToInventoryEvent");

	Params::BP_HeadGear_Master_C_OnAddedToInventoryEvent Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnRemovedFromInventoryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::OnRemovedFromInventoryEvent(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnRemovedFromInventoryEvent");

	Params::BP_HeadGear_Master_C_OnRemovedFromInventoryEvent Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnRemovedFromCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     OldParentCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OldSocketName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, class FName OldSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnRemovedFromCharacter");

	Params::BP_HeadGear_Master_C_OnRemovedFromCharacter Parms{};

	Parms.OldParentCharacter = OldParentCharacter;
	Parms.OldSocketName = OldSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnAddedToCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     NewParentCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeadGear_Master_C::OnAddedToCharacter(class AGBCharacter* NewParentCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "OnAddedToCharacter");

	Params::BP_HeadGear_Master_C_OnAddedToCharacter Parms{};

	Parms.NewParentCharacter = NewParentCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HeadGear_Master_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.DecodeKit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVaRestJsonObject*                ItemAsJson                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DecodedOwner                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGBInvItem*                       DecodedParentItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FName&                      ProfileName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_HeadGear_Master_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBInvItem* DecodedParentItem, const class FName& ProfileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "DecodeKit");

	Params::BP_HeadGear_Master_C_DecodeKit Parms{};

	Parms.ItemAsJson = ItemAsJson;
	Parms.DecodedOwner = DecodedOwner;
	Parms.DecodedParentItem = DecodedParentItem;
	Parms.ProfileName = ProfileName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetHiddenComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*>      ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPrimitiveComponent*> ABP_HeadGear_Master_C::GetHiddenComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "GetHiddenComponents");

	Params::BP_HeadGear_Master_C_GetHiddenComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetStaticMeshPatchMaterial
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>ReturnValue                                            (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UMaterialInterface> ABP_HeadGear_Master_C::GetStaticMeshPatchMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadGear_Master_C", "GetStaticMeshPatchMaterial");

	Params::BP_HeadGear_Master_C_GetStaticMeshPatchMaterial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

