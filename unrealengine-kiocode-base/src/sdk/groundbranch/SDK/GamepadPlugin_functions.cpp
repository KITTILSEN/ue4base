﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadPlugin

#include "Basic.hpp"

#include "GamepadPlugin_classes.hpp"
#include "GamepadPlugin_parameters.hpp"


namespace SDK
{

// Function GamepadPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VirtualCursorFunctionLibrary", "DisableVirtualCursor");

	Params::VirtualCursorFunctionLibrary_DisableVirtualCursor Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GamepadPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VirtualCursorFunctionLibrary", "EnableVirtualCursor");

	Params::VirtualCursorFunctionLibrary_EnableVirtualCursor Parms{};

	Parms.PC = PC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GamepadPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VirtualCursorFunctionLibrary", "IsCursorOverInteractableWidget");

	Params::VirtualCursorFunctionLibrary_IsCursorOverInteractableWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GamepadPlugin.GamepadInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerInputType                        NewInputType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGamepadInputSubsystem::SetCurrentInputType(EPlayerInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadInputSubsystem", "SetCurrentInputType");

	Params::GamepadInputSubsystem_SetCurrentInputType Parms{};

	Parms.NewInputType = NewInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

