﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_ResetSquad

#include "Basic.hpp"

#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_ResetSquad.BT_GB_Ky_ResetSquad_C
// 0x0008 (0x0030 - 0x0028)
class UBT_GB_Ky_ResetSquad_C final : public UKytBTNode
{
public:
	class AKytGroup*                              SquadGroup;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_ResetSquad_C">();
	}
	static class UBT_GB_Ky_ResetSquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_ResetSquad_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_ResetSquad_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_ResetSquad_C");
static_assert(sizeof(UBT_GB_Ky_ResetSquad_C) == 0x000030, "Wrong size on UBT_GB_Ky_ResetSquad_C");
static_assert(offsetof(UBT_GB_Ky_ResetSquad_C, SquadGroup) == 0x000028, "Member 'UBT_GB_Ky_ResetSquad_C::SquadGroup' has a wrong offset!");

}

