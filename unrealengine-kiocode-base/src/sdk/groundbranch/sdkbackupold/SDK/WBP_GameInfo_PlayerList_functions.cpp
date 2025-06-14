﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameInfo_PlayerList

#include "Basic.hpp"

#include "WBP_GameInfo_PlayerList_classes.hpp"
#include "WBP_GameInfo_PlayerList_parameters.hpp"


namespace SDK
{

// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.ExecuteUbergraph_WBP_GameInfo_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameInfo_PlayerList_C::ExecuteUbergraph_WBP_GameInfo_PlayerList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameInfo_PlayerList_C", "ExecuteUbergraph_WBP_GameInfo_PlayerList");

	Params::WBP_GameInfo_PlayerList_C_ExecuteUbergraph_WBP_GameInfo_PlayerList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameInfo_PlayerList_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameInfo_PlayerList_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameInfo_PlayerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameInfo_PlayerList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameInfo_PlayerList.WBP_GameInfo_PlayerList_C.FindOrCreatePlayerEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGBPlayerState*                   GBPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVolunteersAllowed                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_GameInfo_Player_C**          OutPlayerInfo                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameInfo_PlayerList_C::FindOrCreatePlayerEntry(class AGBPlayerState* GBPlayerState, bool bVolunteersAllowed, class UWBP_GameInfo_Player_C** OutPlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameInfo_PlayerList_C", "FindOrCreatePlayerEntry");

	Params::WBP_GameInfo_PlayerList_C_FindOrCreatePlayerEntry Parms{};

	Parms.GBPlayerState = GBPlayerState;
	Parms.bVolunteersAllowed = bVolunteersAllowed;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerInfo != nullptr)
		*OutPlayerInfo = Parms.OutPlayerInfo;
}

}

