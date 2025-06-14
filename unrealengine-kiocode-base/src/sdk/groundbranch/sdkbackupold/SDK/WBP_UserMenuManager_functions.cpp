﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UserMenuManager

#include "Basic.hpp"

#include "WBP_UserMenuManager_classes.hpp"
#include "WBP_UserMenuManager_parameters.hpp"


namespace SDK
{

// Function WBP_UserMenuManager.WBP_UserMenuManager_C.ExecuteUbergraph_WBP_UserMenuManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::ExecuteUbergraph_WBP_UserMenuManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "ExecuteUbergraph_WBP_UserMenuManager");

	Params::WBP_UserMenuManager_C_ExecuteUbergraph_WBP_UserMenuManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.ForceClosed
// (BlueprintCallable, BlueprintEvent)

void UWBP_UserMenuManager_C::ForceClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "ForceClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::OnSelected_Event(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "OnSelected_Event");

	Params::WBP_UserMenuManager_C_OnSelected_Event Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildRadialMenu
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFUserMenuData&            UserMenu                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::BuildRadialMenu(const struct FFUserMenuData& UserMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "BuildRadialMenu");

	Params::WBP_UserMenuManager_C_BuildRadialMenu Parms{};

	Parms.UserMenu = std::move(UserMenu);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.OnSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::OnSelected_Event_0(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "OnSelected_Event_0");

	Params::WBP_UserMenuManager_C_OnSelected_Event_0 Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildLinearMenu
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFUserMenuData&            UserMenu                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::BuildLinearMenu(const struct FFUserMenuData& UserMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "BuildLinearMenu");

	Params::WBP_UserMenuManager_C_BuildLinearMenu Parms{};

	Parms.UserMenu = std::move(UserMenu);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.BuildMenu
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFUserMenuData&            UserMenu                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::BuildMenu(const struct FFUserMenuData& UserMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "BuildMenu");

	Params::WBP_UserMenuManager_C_BuildMenu Parms{};

	Parms.UserMenu = std::move(UserMenu);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UserMenuManager.WBP_UserMenuManager_C.Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    MenuName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             MenuType_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UserMenuManager_C::Open(const class FString& MenuName, class FName MenuType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UserMenuManager_C", "Open");

	Params::WBP_UserMenuManager_C_Open Parms{};

	Parms.MenuName = std::move(MenuName);
	Parms.MenuType_0 = MenuType_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

