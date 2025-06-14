﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_StunEffect

#include "Basic.hpp"

#include "CM_StunEffect_classes.hpp"
#include "CM_StunEffect_parameters.hpp"


namespace SDK
{

// Function CM_StunEffect.CM_StunEffect_C.ExecuteUbergraph_CM_StunEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_StunEffect_C::ExecuteUbergraph_CM_StunEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_StunEffect_C", "ExecuteUbergraph_CM_StunEffect");

	Params::CM_StunEffect_C_ExecuteUbergraph_CM_StunEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_StunEffect.CM_StunEffect_C.BlueprintAddedToCamera
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class AGBPlayerCameraManager*           GBPlayerCameraManager                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_StunEffect_C::BlueprintAddedToCamera(class AGBPlayerCameraManager* GBPlayerCameraManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_StunEffect_C", "BlueprintAddedToCamera");

	Params::CM_StunEffect_C_BlueprintAddedToCamera Parms{};

	Parms.GBPlayerCameraManager = GBPlayerCameraManager;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_StunEffect.CM_StunEffect_C.BlueprintPreApplyCameraModifier
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class AGBPlayerCameraManager*           GBPlayerCameraManager                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCM_StunEffect_C::BlueprintPreApplyCameraModifier(class AGBPlayerCameraManager* GBPlayerCameraManager, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_StunEffect_C", "BlueprintPreApplyCameraModifier");

	Params::CM_StunEffect_C_BlueprintPreApplyCameraModifier Parms{};

	Parms.GBPlayerCameraManager = GBPlayerCameraManager;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CM_StunEffect.CM_StunEffect_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  PostProcessBlendWeight                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings*            PostProcessSettings                                    (Parm, OutParm)

void UCM_StunEffect_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CM_StunEffect_C", "BlueprintModifyPostProcess");

	Params::CM_StunEffect_C_BlueprintModifyPostProcess Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);
}

}

