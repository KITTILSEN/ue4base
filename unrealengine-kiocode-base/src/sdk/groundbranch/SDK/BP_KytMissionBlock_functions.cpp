﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KytMissionBlock

#include "Basic.hpp"

#include "BP_KytMissionBlock_classes.hpp"
#include "BP_KytMissionBlock_parameters.hpp"


namespace SDK
{

// Function BP_KytMissionBlock.BP_KytMissionBlock_C.ExecuteUbergraph_BP_KytMissionBlock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KytMissionBlock_C::ExecuteUbergraph_BP_KytMissionBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "ExecuteUbergraph_BP_KytMissionBlock");

	Params::BP_KytMissionBlock_C_ExecuteUbergraph_BP_KytMissionBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.SetupMeshComponentIfRequired
// (BlueprintCallable, BlueprintEvent)

void ABP_KytMissionBlock_C::SetupMeshComponentIfRequired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "SetupMeshComponentIfRequired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.RegenerateNavMeshWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Extent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KytMissionBlock_C::RegenerateNavMeshWithDelay(const struct FVector& Origin, const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "RegenerateNavMeshWithDelay");

	Params::BP_KytMissionBlock_C_RegenerateNavMeshWithDelay Parms{};

	Parms.Origin = std::move(Origin);
	Parms.Extent = std::move(Extent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.RegenerateNavmeshIfActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Extent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KytMissionBlock_C::RegenerateNavmeshIfActive(const struct FVector& Origin, const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "RegenerateNavmeshIfActive");

	Params::BP_KytMissionBlock_C_RegenerateNavmeshIfActive Parms{};

	Parms.Origin = std::move(Origin);
	Parms.Extent = std::move(Extent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.SetNavBlockMeshCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_KytMissionBlock_C::SetNavBlockMeshCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "SetNavBlockMeshCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsActive_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KytMissionBlock_C::SetActive(bool bIsActive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "SetActive");

	Params::BP_KytMissionBlock_C_SetActive Parms{};

	Parms.bIsActive_0 = bIsActive_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KytMissionBlock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KytMissionBlock_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "ReceiveEndPlay");

	Params::BP_KytMissionBlock_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.ConformToBoundingBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Extent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KytMissionBlock_C::ConformToBoundingBox(const struct FVector& Origin, const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "ConformToBoundingBox");

	Params::BP_KytMissionBlock_C_ConformToBoundingBox Parms{};

	Parms.Origin = std::move(Origin);
	Parms.Extent = std::move(Extent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KytMissionBlock.BP_KytMissionBlock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KytMissionBlock_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KytMissionBlock_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

