﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_SetHighReady

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_SetHighReady.BT_GB_Ky_SetHighReady_C
// 0x0010 (0x0038 - 0x0028)
class UBT_GB_Ky_SetHighReady_C final : public UKytBTNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGBCharacter*                           Char;                                              // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BT_GB_Ky_SetHighReady(int32 EntryPoint);
	EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_SetHighReady_C">();
	}
	static class UBT_GB_Ky_SetHighReady_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_SetHighReady_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_SetHighReady_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_SetHighReady_C");
static_assert(sizeof(UBT_GB_Ky_SetHighReady_C) == 0x000038, "Wrong size on UBT_GB_Ky_SetHighReady_C");
static_assert(offsetof(UBT_GB_Ky_SetHighReady_C, UberGraphFrame) == 0x000028, "Member 'UBT_GB_Ky_SetHighReady_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBT_GB_Ky_SetHighReady_C, Char) == 0x000030, "Member 'UBT_GB_Ky_SetHighReady_C::Char' has a wrong offset!");

}

