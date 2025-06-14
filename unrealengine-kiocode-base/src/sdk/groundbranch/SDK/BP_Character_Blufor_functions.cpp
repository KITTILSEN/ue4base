﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Blufor

#include "Basic.hpp"

#include "BP_Character_Blufor_classes.hpp"
#include "BP_Character_Blufor_parameters.hpp"


namespace SDK
{

// Function BP_Character_Blufor.BP_Character_Blufor_C.ExecuteUbergraph_BP_Character_Blufor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Blufor_C::ExecuteUbergraph_BP_Character_Blufor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Blufor_C", "ExecuteUbergraph_BP_Character_Blufor");

	Params::BP_Character_Blufor_C_ExecuteUbergraph_BP_Character_Blufor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Blufor.BP_Character_Blufor_C.AddDefaultItemsEvent
// (Event, Protected, BlueprintEvent)

void ABP_Character_Blufor_C::AddDefaultItemsEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Blufor_C", "AddDefaultItemsEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_Blufor.BP_Character_Blufor_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_Blufor_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Blufor_C", "ReceivePossessed");

	Params::BP_Character_Blufor_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Blufor.BP_Character_Blufor_C.Completed_3EC7DF01B6864D5FA3D612FE0199D784
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Character_Blufor_C::Completed_3EC7DF01B6864D5FA3D612FE0199D784(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Blufor_C", "Completed_3EC7DF01B6864D5FA3D612FE0199D784");

	Params::BP_Character_Blufor_C_Completed_3EC7DF01B6864D5FA3D612FE0199D784 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_Blufor.BP_Character_Blufor_C.Completed_2FAE710774BD4C5E93D701AF85FD1AF1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Character_Blufor_C::Completed_2FAE710774BD4C5E93D701AF85FD1AF1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_Blufor_C", "Completed_2FAE710774BD4C5E93D701AF85FD1AF1");

	Params::BP_Character_Blufor_C_Completed_2FAE710774BD4C5E93D701AF85FD1AF1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

