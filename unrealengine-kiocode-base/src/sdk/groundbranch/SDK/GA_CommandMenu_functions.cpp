﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CommandMenu

#include "Basic.hpp"

#include "GA_CommandMenu_classes.hpp"
#include "GA_CommandMenu_parameters.hpp"


namespace SDK
{

// Function GA_CommandMenu.GA_CommandMenu_C.ExecuteUbergraph_GA_CommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CommandMenu_C::ExecuteUbergraph_GA_CommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "ExecuteUbergraph_GA_CommandMenu");

	Params::GA_CommandMenu_C_ExecuteUbergraph_GA_CommandMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CommandMenu.GA_CommandMenu_C.OnMenuElementSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CommandMenu_C::OnMenuElementSelected_Event_0(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "OnMenuElementSelected_Event_0");

	Params::GA_CommandMenu_C_OnMenuElementSelected_Event_0 Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CommandMenu.GA_CommandMenu_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_CommandMenu_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CommandMenu.GA_CommandMenu_C.CreateComandMenuWidget
// (BlueprintCallable, BlueprintEvent)

void UGA_CommandMenu_C::CreateComandMenuWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "CreateComandMenuWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_CommandMenu.GA_CommandMenu_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_CommandMenu_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "K2_OnEndAbility");

	Params::GA_CommandMenu_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CommandMenu.GA_CommandMenu_C.OnRelease_FB6BA18F6CF6443597F5FCBB061A494D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeHeld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CommandMenu_C::OnRelease_FB6BA18F6CF6443597F5FCBB061A494D(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "OnRelease_FB6BA18F6CF6443597F5FCBB061A494D");

	Params::GA_CommandMenu_C_OnRelease_FB6BA18F6CF6443597F5FCBB061A494D Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CommandMenu.GA_CommandMenu_C.PerformTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*                      OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_CommandMenu_C::PerformTrace(struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "PerformTrace");

	Params::GA_CommandMenu_C_PerformTrace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);
}


// Function GA_CommandMenu.GA_CommandMenu_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// const struct FGameplayAbilitySpecHandle&Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer*           RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_CommandMenu_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "K2_CanActivateAbility");

	Params::GA_CommandMenu_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}


// Function GA_CommandMenu.GA_CommandMenu_C.GetRadialMenuOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FGBRadialMenuOption>*     OutRadialMenuOptions                                   (Parm, OutParm)

void UGA_CommandMenu_C::GetRadialMenuOptions(TArray<struct FGBRadialMenuOption>* OutRadialMenuOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "GetRadialMenuOptions");

	Params::GA_CommandMenu_C_GetRadialMenuOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRadialMenuOptions != nullptr)
		*OutRadialMenuOptions = std::move(Parms.OutRadialMenuOptions);
}


// Function GA_CommandMenu.GA_CommandMenu_C.GetAICommandAndVoiceCom
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGBAICommands*                          AICommand                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName*                            VoiceCom                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CommandMenu_C::GetAICommandAndVoiceCom(int32 Index_0, EGBAICommands* AICommand, class FName* VoiceCom) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CommandMenu_C", "GetAICommandAndVoiceCom");

	Params::GA_CommandMenu_C_GetAICommandAndVoiceCom Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (AICommand != nullptr)
		*AICommand = Parms.AICommand;

	if (VoiceCom != nullptr)
		*VoiceCom = Parms.VoiceCom;
}

}

