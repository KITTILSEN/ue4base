﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BoundKey

#include "Basic.hpp"

#include "WBP_BoundKey_classes.hpp"
#include "WBP_BoundKey_parameters.hpp"


namespace SDK
{

// Function WBP_BoundKey.WBP_BoundKey_C.ExecuteUbergraph_WBP_BoundKey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BoundKey_C::ExecuteUbergraph_WBP_BoundKey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "ExecuteUbergraph_WBP_BoundKey");

	Params::WBP_BoundKey_C_ExecuteUbergraph_WBP_BoundKey Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BoundKey.WBP_BoundKey_C.UpdateSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BoundKey_C::UpdateSize(int32 Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "UpdateSize");

	Params::WBP_BoundKey_C_UpdateSize Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BoundKey.WBP_BoundKey_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BoundKey_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "PreConstruct");

	Params::WBP_BoundKey_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BoundKey.WBP_BoundKey_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWBP_BoundKey_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BoundKey.WBP_BoundKey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BoundKey_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BoundKey.WBP_BoundKey_C.DetermineInputBoudKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_BoundKey_C::DetermineInputBoudKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "DetermineInputBoudKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_BoundKey.WBP_BoundKey_C.SetModifierVisAndIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             Action_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BoundKey_C::SetModifierVisAndIcon(bool Condition, class FName Action_0, class UImage* Image, class UWidget* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "SetModifierVisAndIcon");

	Params::WBP_BoundKey_C_SetModifierVisAndIcon Parms{};

	Parms.Condition = Condition;
	Parms.Action_0 = Action_0;
	Parms.Image = Image;
	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BoundKey.WBP_BoundKey_C.GetModifierGamepadButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Action_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey*                            OutModifierButton                                      (Parm, OutParm, HasGetValueTypeHash)

void UWBP_BoundKey_C::GetModifierGamepadButton(class FName Action_0, struct FKey* OutModifierButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "GetModifierGamepadButton");

	Params::WBP_BoundKey_C_GetModifierGamepadButton Parms{};

	Parms.Action_0 = Action_0;

	UObject::ProcessEvent(Func, &Parms);

	if (OutModifierButton != nullptr)
		*OutModifierButton = std::move(Parms.OutModifierButton);
}


// Function WBP_BoundKey.WBP_BoundKey_C.GetModifierKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Action_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey*                            OutModifierKey                                         (Parm, OutParm, HasGetValueTypeHash)

void UWBP_BoundKey_C::GetModifierKey(class FName Action_0, struct FKey* OutModifierKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "GetModifierKey");

	Params::WBP_BoundKey_C_GetModifierKey Parms{};

	Parms.Action_0 = Action_0;

	UObject::ProcessEvent(Func, &Parms);

	if (OutModifierKey != nullptr)
		*OutModifierKey = std::move(Parms.OutModifierKey);
}


// Function WBP_BoundKey.WBP_BoundKey_C.GetModifierIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Action_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D**                      Icon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BoundKey_C::GetModifierIcon(class FName Action_0, class UTexture2D** Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BoundKey_C", "GetModifierIcon");

	Params::WBP_BoundKey_C_GetModifierIcon Parms{};

	Parms.Action_0 = Action_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}

}

