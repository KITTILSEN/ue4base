﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_CheckSquad

#include "Basic.hpp"

#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_CheckSquad.BT_GB_Ky_CheckSquad_C
// 0x0010 (0x0038 - 0x0028)
class UBT_GB_Ky_CheckSquad_C final : public UKytBTConditional
{
public:
	class AKytGroup*                              SquadGroup;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 AimTarget;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	EKytBTConditionResult CheckCondition(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_CheckSquad_C">();
	}
	static class UBT_GB_Ky_CheckSquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_CheckSquad_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_CheckSquad_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_CheckSquad_C");
static_assert(sizeof(UBT_GB_Ky_CheckSquad_C) == 0x000038, "Wrong size on UBT_GB_Ky_CheckSquad_C");
static_assert(offsetof(UBT_GB_Ky_CheckSquad_C, SquadGroup) == 0x000028, "Member 'UBT_GB_Ky_CheckSquad_C::SquadGroup' has a wrong offset!");
static_assert(offsetof(UBT_GB_Ky_CheckSquad_C, AimTarget) == 0x000030, "Member 'UBT_GB_Ky_CheckSquad_C::AimTarget' has a wrong offset!");

}

