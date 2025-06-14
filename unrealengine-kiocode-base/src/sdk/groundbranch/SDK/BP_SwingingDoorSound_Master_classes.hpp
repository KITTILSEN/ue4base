﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SwingingDoorSound_Master

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SwingingDoorSound_Master.BP_SwingingDoorSound_Master_C
// 0x0018 (0x0040 - 0x0028)
class UBP_SwingingDoorSound_Master_C : public UObject
{
public:
	class UAkAudioBank*                           Bank;                                              // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SwitchStateName;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SwingingDoorSound_Master_C">();
	}
	static class UBP_SwingingDoorSound_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SwingingDoorSound_Master_C>();
	}
};
static_assert(alignof(UBP_SwingingDoorSound_Master_C) == 0x000008, "Wrong alignment on UBP_SwingingDoorSound_Master_C");
static_assert(sizeof(UBP_SwingingDoorSound_Master_C) == 0x000040, "Wrong size on UBP_SwingingDoorSound_Master_C");
static_assert(offsetof(UBP_SwingingDoorSound_Master_C, Bank) == 0x000028, "Member 'UBP_SwingingDoorSound_Master_C::Bank' has a wrong offset!");
static_assert(offsetof(UBP_SwingingDoorSound_Master_C, SwitchStateName) == 0x000030, "Member 'UBP_SwingingDoorSound_Master_C::SwitchStateName' has a wrong offset!");

}

