﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MatchInfo_VoteButtonTick

#include "Basic.hpp"

#include "WBP_MatchInfo_VoteButtonTick_classes.hpp"
#include "WBP_MatchInfo_VoteButtonTick_parameters.hpp"


namespace SDK
{

// Function WBP_MatchInfo_VoteButtonTick.WBP_MatchInfo_VoteButtonTick_C.ExecuteUbergraph_WBP_MatchInfo_VoteButtonTick
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MatchInfo_VoteButtonTick_C::ExecuteUbergraph_WBP_MatchInfo_VoteButtonTick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchInfo_VoteButtonTick_C", "ExecuteUbergraph_WBP_MatchInfo_VoteButtonTick");

	Params::WBP_MatchInfo_VoteButtonTick_C_ExecuteUbergraph_WBP_MatchInfo_VoteButtonTick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MatchInfo_VoteButtonTick.WBP_MatchInfo_VoteButtonTick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MatchInfo_VoteButtonTick_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MatchInfo_VoteButtonTick_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

