﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WallClock

#include "Basic.hpp"

#include "BP_WallClock_classes.hpp"
#include "BP_WallClock_parameters.hpp"


namespace SDK
{

// Function BP_WallClock.BP_WallClock_C.ExecuteUbergraph_BP_WallClock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WallClock_C::ExecuteUbergraph_BP_WallClock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "ExecuteUbergraph_BP_WallClock");

	Params::BP_WallClock_C_ExecuteUbergraph_BP_WallClock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WallClock.BP_WallClock_C.Play Sound
// (BlueprintCallable, BlueprintEvent)

void ABP_WallClock_C::Play_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "Play Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WallClock.BP_WallClock_C.UnbindFromSkyActor
// (BlueprintCallable, BlueprintEvent)

void ABP_WallClock_C::UnbindFromSkyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "UnbindFromSkyActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WallClock.BP_WallClock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WallClock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WallClock.BP_WallClock_C.BindToSkyActor
// (BlueprintCallable, BlueprintEvent)

void ABP_WallClock_C::BindToSkyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "BindToSkyActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WallClock.BP_WallClock_C.OnSkyUpdate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBSky*                           SkyActor_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WallClock_C::OnSkyUpdate_Event_0(class AGBSky* SkyActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "OnSkyUpdate_Event_0");

	Params::BP_WallClock_C_OnSkyUpdate_Event_0 Parms{};

	Parms.SkyActor_0 = SkyActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WallClock.BP_WallClock_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void ABP_WallClock_C::K2_OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "K2_OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WallClock.BP_WallClock_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UDamageType*                DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WallClock_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "ReceiveAnyDamage");

	Params::BP_WallClock_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WallClock.BP_WallClock_C.OnRep_bDestroyed
// (BlueprintCallable, BlueprintEvent)

void ABP_WallClock_C::OnRep_bDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WallClock_C", "OnRep_bDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}

