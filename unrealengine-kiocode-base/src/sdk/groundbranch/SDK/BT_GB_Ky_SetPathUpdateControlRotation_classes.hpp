﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_SetPathUpdateControlRotation

#include "Basic.hpp"

#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_SetPathUpdateControlRotation.BT_GB_Ky_SetPathUpdateControlRotation_C
// 0x0008 (0x0030 - 0x0028)
class UBT_GB_Ky_SetPathUpdateControlRotation_C final : public UKytBTNode
{
public:
	bool                                          bUpdateControlRotation;                            // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_SetPathUpdateControlRotation_C">();
	}
	static class UBT_GB_Ky_SetPathUpdateControlRotation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_SetPathUpdateControlRotation_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_SetPathUpdateControlRotation_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_SetPathUpdateControlRotation_C");
static_assert(sizeof(UBT_GB_Ky_SetPathUpdateControlRotation_C) == 0x000030, "Wrong size on UBT_GB_Ky_SetPathUpdateControlRotation_C");
static_assert(offsetof(UBT_GB_Ky_SetPathUpdateControlRotation_C, bUpdateControlRotation) == 0x000028, "Member 'UBT_GB_Ky_SetPathUpdateControlRotation_C::bUpdateControlRotation' has a wrong offset!");

}

