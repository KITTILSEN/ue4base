﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GrenadeBlinkEffect

#include "Basic.hpp"

#include "BP_GrenadeBlinkEffect_classes.hpp"
#include "BP_GrenadeBlinkEffect_parameters.hpp"


namespace SDK
{

// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.ExecuteUbergraph_BP_GrenadeBlinkEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::ExecuteUbergraph_BP_GrenadeBlinkEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "ExecuteUbergraph_BP_GrenadeBlinkEffect");

	Params::BP_GrenadeBlinkEffect_C_ExecuteUbergraph_BP_GrenadeBlinkEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnDeathStarted_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::OnDeathStarted_Event_0(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "OnDeathStarted_Event_0");

	Params::BP_GrenadeBlinkEffect_C_OnDeathStarted_Event_0 Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnPlayerControllerStateChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OldState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::OnPlayerControllerStateChanged_Event_0(class FName OldState, class FName NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "OnPlayerControllerStateChanged_Event_0");

	Params::BP_GrenadeBlinkEffect_C_OnPlayerControllerStateChanged_Event_0 Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.BindToPlayerControllerState
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::BindToPlayerControllerState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "BindToPlayerControllerState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "ReceiveEndPlay");

	Params::BP_GrenadeBlinkEffect_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::K2_OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "K2_OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.StartUpdatingMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::StartUpdatingMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "StartUpdatingMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.SetMateriallUpdateTimelineNewTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::SetMateriallUpdateTimelineNewTime(float NewTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "SetMateriallUpdateTimelineNewTime");

	Params::BP_GrenadeBlinkEffect_C_SetMateriallUpdateTimelineNewTime Parms{};

	Parms.NewTime = NewTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.StopUpdatingMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::StopUpdatingMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "StopUpdatingMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.OnPlayerReadyRoomStatusChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::OnPlayerReadyRoomStatusChanged_Event_0(class AGBPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "OnPlayerReadyRoomStatusChanged_Event_0");

	Params::BP_GrenadeBlinkEffect_C_OnPlayerReadyRoomStatusChanged_Event_0 Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.BindToReadyRoomStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::BindToReadyRoomStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "BindToReadyRoomStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.RemoveStunEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::RemoveStunEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "RemoveStunEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.BindToCharacterDying
// (BlueprintCallable, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::BindToCharacterDying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "BindToCharacterDying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.MaterialUpdateTImeline__UpdateFunc
// (BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::MaterialUpdateTImeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "MaterialUpdateTImeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.MaterialUpdateTImeline__FinishedFunc
// (BlueprintEvent)

void ABP_GrenadeBlinkEffect_C::MaterialUpdateTImeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "MaterialUpdateTImeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrenadeBlinkEffect.BP_GrenadeBlinkEffect_C.AddStunAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InAlpha                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrenadeBlinkEffect_C::AddStunAlpha(float InAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrenadeBlinkEffect_C", "AddStunAlpha");

	Params::BP_GrenadeBlinkEffect_C_AddStunAlpha Parms{};

	Parms.InAlpha = InAlpha;

	UObject::ProcessEvent(Func, &Parms);
}

}

