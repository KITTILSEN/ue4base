﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AN_PEQ_Laser_Use

#include "Basic.hpp"

#include "GA_AN_PEQ_Laser_Use_classes.hpp"
#include "GA_AN_PEQ_Laser_Use_parameters.hpp"


namespace SDK
{

// Function GA_AN_PEQ_Laser_Use.GA_AN_PEQ_Laser_Use_C.StartUsing
// (Protected, BlueprintCallable, BlueprintEvent)

void UGA_AN_PEQ_Laser_Use_C::StartUsing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AN_PEQ_Laser_Use_C", "StartUsing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AN_PEQ_Laser_Use.GA_AN_PEQ_Laser_Use_C.StopUsing
// (Protected, BlueprintCallable, BlueprintEvent)

void UGA_AN_PEQ_Laser_Use_C::StopUsing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AN_PEQ_Laser_Use_C", "StopUsing");

	UObject::ProcessEvent(Func, nullptr);
}

}

