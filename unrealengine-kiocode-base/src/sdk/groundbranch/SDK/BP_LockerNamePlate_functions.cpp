﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LockerNamePlate

#include "Basic.hpp"

#include "BP_LockerNamePlate_classes.hpp"
#include "BP_LockerNamePlate_parameters.hpp"


namespace SDK
{

// Function BP_LockerNamePlate.BP_LockerNamePlate_C.ExecuteUbergraph_BP_LockerNamePlate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LockerNamePlate_C::ExecuteUbergraph_BP_LockerNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockerNamePlate_C", "ExecuteUbergraph_BP_LockerNamePlate");

	Params::BP_LockerNamePlate_C_ExecuteUbergraph_BP_LockerNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LockerNamePlate.BP_LockerNamePlate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LockerNamePlate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockerNamePlate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LockerNamePlate.BP_LockerNamePlate_C.OnLoaded_B9D76E9F43F6524996A306BA2CE42ABB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_LockerNamePlate_C::OnLoaded_B9D76E9F43F6524996A306BA2CE42ABB(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LockerNamePlate_C", "OnLoaded_B9D76E9F43F6524996A306BA2CE42ABB");

	Params::BP_LockerNamePlate_C_OnLoaded_B9D76E9F43F6524996A306BA2CE42ABB Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

