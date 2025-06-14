﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Helmet_OpsCore_C

#include "Basic.hpp"

#include "BP_Helmet_OpsCore_C_classes.hpp"
#include "BP_Helmet_OpsCore_C_parameters.hpp"


namespace SDK
{

// Function BP_Helmet_OpsCore_C.BP_Helmet_OpsCore_C_C.ExecuteUbergraph_BP_Helmet_OpsCore_C
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Helmet_OpsCore_C_C::ExecuteUbergraph_BP_Helmet_OpsCore_C(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Helmet_OpsCore_C_C", "ExecuteUbergraph_BP_Helmet_OpsCore_C");

	Params::BP_Helmet_OpsCore_C_C_ExecuteUbergraph_BP_Helmet_OpsCore_C Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Helmet_OpsCore_C.BP_Helmet_OpsCore_C_C.OnAddingChild
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGBInvItem*                       AddedChild                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Helmet_OpsCore_C_C::OnAddingChild(class AGBInvItem* AddedChild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Helmet_OpsCore_C_C", "OnAddingChild");

	Params::BP_Helmet_OpsCore_C_C_OnAddingChild Parms{};

	Parms.AddedChild = AddedChild;

	UObject::ProcessEvent(Func, &Parms);
}

}

