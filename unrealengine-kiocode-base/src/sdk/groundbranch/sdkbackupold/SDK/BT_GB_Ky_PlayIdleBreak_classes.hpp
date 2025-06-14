﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_PlayIdleBreak

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_PlayIdleBreak.BT_GB_Ky_PlayIdleBreak_C
// 0x0018 (0x0040 - 0x0028)
class UBT_GB_Ky_PlayIdleBreak_C final : public UKytBTNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGBCharacter*                           GBChar;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFinished;                                         // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BT_GB_Ky_PlayIdleBreak(int32 EntryPoint);
	void DoCleanup(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);
	void WaitCompletion();
	void Removed_F5BCE81F4A4A7B60FF34268E5AB7B5D1();
	EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);
	EKytBTUpdateResult DoUpdate(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_PlayIdleBreak_C">();
	}
	static class UBT_GB_Ky_PlayIdleBreak_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_PlayIdleBreak_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_PlayIdleBreak_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_PlayIdleBreak_C");
static_assert(sizeof(UBT_GB_Ky_PlayIdleBreak_C) == 0x000040, "Wrong size on UBT_GB_Ky_PlayIdleBreak_C");
static_assert(offsetof(UBT_GB_Ky_PlayIdleBreak_C, UberGraphFrame) == 0x000028, "Member 'UBT_GB_Ky_PlayIdleBreak_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBT_GB_Ky_PlayIdleBreak_C, GBChar) == 0x000030, "Member 'UBT_GB_Ky_PlayIdleBreak_C::GBChar' has a wrong offset!");
static_assert(offsetof(UBT_GB_Ky_PlayIdleBreak_C, bFinished) == 0x000038, "Member 'UBT_GB_Ky_PlayIdleBreak_C::bFinished' has a wrong offset!");

}

