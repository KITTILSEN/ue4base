﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NVG_Master

#include "Basic.hpp"

#include "BP_NVG_Master_classes.hpp"
#include "BP_NVG_Master_parameters.hpp"


namespace SDK
{

// Function BP_NVG_Master.BP_NVG_Master_C.ExecuteUbergraph_BP_NVG_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::ExecuteUbergraph_BP_NVG_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "ExecuteUbergraph_BP_NVG_Master");

	Params::BP_NVG_Master_C_ExecuteUbergraph_BP_NVG_Master Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnNVGFlippedDownTagChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnNVGFlippedDownTagChanged_Event(int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnNVGFlippedDownTagChanged_Event");

	Params::BP_NVG_Master_C_OnNVGFlippedDownTagChanged_Event Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.RegisterGameplayTagEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::RegisterGameplayTagEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "RegisterGameplayTagEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.RemoveNightVisionCameraModifier
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::RemoveNightVisionCameraModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "RemoveNightVisionCameraModifier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.AddNightVisionCameraModifier
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::AddNightVisionCameraModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "AddNightVisionCameraModifier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.UpdateCameraModifierPPMID
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::UpdateCameraModifierPPMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "UpdateCameraModifierPPMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.LoadCameraModifierPPMID
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::LoadCameraModifierPPMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "LoadCameraModifierPPMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.PostHiddenLightUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::PostHiddenLightUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "PostHiddenLightUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnEndViewTarget_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnEndViewTarget_Event(class APlayerController* PlayerController, class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnEndViewTarget_Event");

	Params::BP_NVG_Master_C_OnEndViewTarget_Event Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnBecomeViewTarget_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnBecomeViewTarget_Event(class APlayerController* PlayerController, class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnBecomeViewTarget_Event");

	Params::BP_NVG_Master_C_OnBecomeViewTarget_Event Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.UnbindViewTargetEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::UnbindViewTargetEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "UnbindViewTargetEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.BindViewTargetEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::BindViewTargetEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "BindViewTargetEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateTickName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FrameDeltaTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateTickName(class FName InName, float FrameDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateTickName");

	Params::BP_NVG_Master_C_NotifyStateTickName Parms{};

	Parms.InName = InName;
	Parms.FrameDeltaTime = FrameDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateEndName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateEndName(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateEndName");

	Params::BP_NVG_Master_C_NotifyStateEndName Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateBeginName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateBeginName(class FName InName, float TotalDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateBeginName");

	Params::BP_NVG_Master_C_NotifyStateBeginName Parms{};

	Parms.InName = InName;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.UpdateBracketRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::UpdateBracketRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "UpdateBracketRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnRemovedFromInventoryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnRemovedFromInventoryEvent(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnRemovedFromInventoryEvent");

	Params::BP_NVG_Master_C_OnRemovedFromInventoryEvent Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnAddedToInventoryEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnAddedToInventoryEvent(class AGBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnAddedToInventoryEvent");

	Params::BP_NVG_Master_C_OnAddedToInventoryEvent Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.SetNVGMountMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>           MountMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_NVG_Master_C::SetNVGMountMesh(TSoftObjectPtr<class UObject> MountMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "SetNVGMountMesh");

	Params::BP_NVG_Master_C_SetNVGMountMesh Parms{};

	Parms.MountMesh = MountMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateTickEnum
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   InEnumAsByte                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FrameDeltaTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateTickEnum(uint8 InEnumAsByte, float FrameDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateTickEnum");

	Params::BP_NVG_Master_C_NotifyStateTickEnum Parms{};

	Parms.InEnumAsByte = InEnumAsByte;
	Parms.FrameDeltaTime = FrameDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateEndEnum
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   InEnumAsByte                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateEndEnum(uint8 InEnumAsByte)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateEndEnum");

	Params::BP_NVG_Master_C_NotifyStateEndEnum Parms{};

	Parms.InEnumAsByte = InEnumAsByte;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyStateBeginEnum
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   InEnumAsByte                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyStateBeginEnum(uint8 InEnumAsByte, float TotalDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyStateBeginEnum");

	Params::BP_NVG_Master_C_NotifyStateBeginEnum Parms{};

	Parms.InEnumAsByte = InEnumAsByte;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyName(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyName");

	Params::BP_NVG_Master_C_NotifyName Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.NotifyEnum
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   InEnumAsByte                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::NotifyEnum(uint8 InEnumAsByte)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "NotifyEnum");

	Params::BP_NVG_Master_C_NotifyEnum Parms{};

	Parms.InEnumAsByte = InEnumAsByte;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnLoaded_706554FACD9C47C081908ABBCD795869
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnLoaded_706554FACD9C47C081908ABBCD795869(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnLoaded_706554FACD9C47C081908ABBCD795869");

	Params::BP_NVG_Master_C_OnLoaded_706554FACD9C47C081908ABBCD795869 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.OnLoaded_000A6EC458D442F7BD1E3720E3CEA6D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::OnLoaded_000A6EC458D442F7BD1E3720E3CEA6D6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "OnLoaded_000A6EC458D442F7BD1E3720E3CEA6D6");

	Params::BP_NVG_Master_C_OnLoaded_000A6EC458D442F7BD1E3720E3CEA6D6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NVG_Master.BP_NVG_Master_C.AllowUsageWhileAttached
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_NVG_Master_C::AllowUsageWhileAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "AllowUsageWhileAttached");

	Params::BP_NVG_Master_C_AllowUsageWhileAttached Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_NVG_Master.BP_NVG_Master_C.GetHiddenComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*>      ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPrimitiveComponent*> ABP_NVG_Master_C::GetHiddenComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "GetHiddenComponents");

	Params::BP_NVG_Master_C_GetHiddenComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_NVG_Master.BP_NVG_Master_C.GetBracketAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                                  OutBracketAlpha                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::GetBracketAlpha(float* OutBracketAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "GetBracketAlpha");

	Params::BP_NVG_Master_C_GetBracketAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutBracketAlpha != nullptr)
		*OutBracketAlpha = Parms.OutBracketAlpha;
}


// Function BP_NVG_Master.BP_NVG_Master_C.ForceGogglesDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_NVG_Master_C::ForceGogglesDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "ForceGogglesDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NVG_Master.BP_NVG_Master_C.GetPPMID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic**        OutPPMID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NVG_Master_C::GetPPMID(class UMaterialInstanceDynamic** OutPPMID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NVG_Master_C", "GetPPMID");

	Params::BP_NVG_Master_C_GetPPMID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPPMID != nullptr)
		*OutPPMID = Parms.OutPPMID;
}

}

