﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Patch_ListObj

#include "Basic.hpp"

#include "BP_Patch_ListObj_classes.hpp"
#include "BP_Patch_ListObj_parameters.hpp"


namespace SDK
{

// Function BP_Patch_ListObj.BP_Patch_ListObj_C.InitPatch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    InPatchFilename                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Patch_ListObj_C::InitPatch(const class FString& InPatchFilename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Patch_ListObj_C", "InitPatch");

	Params::BP_Patch_ListObj_C_InitPatch Parms{};

	Parms.InPatchFilename = std::move(InPatchFilename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Patch_ListObj.BP_Patch_ListObj_C.ValidPatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                                   bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Patch_ListObj_C::ValidPatch(bool* bResult) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Patch_ListObj_C", "ValidPatch");

	Params::BP_Patch_ListObj_C_ValidPatch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}

