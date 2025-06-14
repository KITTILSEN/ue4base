﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModIcon

#include "Basic.hpp"

#include "WBP_ModIcon_classes.hpp"
#include "WBP_ModIcon_parameters.hpp"


namespace SDK
{

// Function WBP_ModIcon.WBP_ModIcon_C.ExecuteUbergraph_WBP_ModIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModIcon_C::ExecuteUbergraph_WBP_ModIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "ExecuteUbergraph_WBP_ModIcon");

	Params::WBP_ModIcon_C_ExecuteUbergraph_WBP_ModIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "PreConstruct");

	Params::WBP_ModIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.UpdateOutlineSize
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::UpdateOutlineSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "UpdateOutlineSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.ShowStaticImage
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::ShowStaticImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "ShowStaticImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.InternalShowKnownMod
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::InternalShowKnownMod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "InternalShowKnownMod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.ShowKnownMod
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::ShowKnownMod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "ShowKnownMod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SharedShow
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::SharedShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SharedShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.OnReceivedModDetails
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FUGCFileInfo&              ModDetails                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bSuccess_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModIcon_C::OnReceivedModDetails(const struct FUGCFileInfo& ModDetails, bool bSuccess_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "OnReceivedModDetails");

	Params::WBP_ModIcon_C_OnReceivedModDetails Parms{};

	Parms.ModDetails = std::move(ModDetails);
	Parms.bSuccess_0 = bSuccess_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.ShowUnknownMod
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModIcon_C::ShowUnknownMod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "ShowUnknownMod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SetUnknownMod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUnknown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModIcon_C::SetUnknownMod(bool bUnknown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SetUnknownMod");

	Params::WBP_ModIcon_C_SetUnknownMod Parms{};

	Parms.bUnknown = bUnknown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SetModID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FUInt64&                   SetModID_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_ModIcon_C::SetModID(const struct FUInt64& SetModID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SetModID");

	Params::WBP_ModIcon_C_SetModID Parms{};

	Parms.SetModID_0 = std::move(SetModID_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SetObjectReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectReference                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModIcon_C::SetObjectReference(class UObject* ObjectReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SetObjectReference");

	Params::WBP_ModIcon_C_SetObjectReference Parms{};

	Parms.ObjectReference = ObjectReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SetPrimaryAssetId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPrimaryAssetId&           PrimaryAssetId_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ModIcon_C::SetPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SetPrimaryAssetId");

	Params::WBP_ModIcon_C_SetPrimaryAssetId Parms{};

	Parms.PrimaryAssetId_0 = std::move(PrimaryAssetId_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModIcon.WBP_ModIcon_C.SetAssetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FAssetData&                AssetData_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ModIcon_C::SetAssetData(const struct FAssetData& AssetData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "SetAssetData");

	Params::WBP_ModIcon_C_SetAssetData Parms{};

	Parms.AssetData_0 = std::move(AssetData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModIcon.WBP_ModIcon_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ModIcon_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModIcon_C", "GetToolTipWidget_0");

	Params::WBP_ModIcon_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

