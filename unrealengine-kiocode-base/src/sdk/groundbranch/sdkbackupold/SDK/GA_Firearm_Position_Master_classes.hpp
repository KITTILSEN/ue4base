﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Firearm_Position_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Firearm_Position_Master.GA_Firearm_Position_Master_C
// 0x0010 (0x03C8 - 0x03B8)
class UGA_Firearm_Position_Master_C : public UGBEquippedGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Direction;                                         // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewDesiredOffTargetPosition;                       // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Firearm_Position_Master(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPositionAlphasUpdated_Event_0(class AGBCharacter* Character);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Firearm_Position_Master_C">();
	}
	static class UGA_Firearm_Position_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Firearm_Position_Master_C>();
	}
};
static_assert(alignof(UGA_Firearm_Position_Master_C) == 0x000008, "Wrong alignment on UGA_Firearm_Position_Master_C");
static_assert(sizeof(UGA_Firearm_Position_Master_C) == 0x0003C8, "Wrong size on UGA_Firearm_Position_Master_C");
static_assert(offsetof(UGA_Firearm_Position_Master_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_Firearm_Position_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Position_Master_C, Direction) == 0x0003C0, "Member 'UGA_Firearm_Position_Master_C::Direction' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Position_Master_C, NewDesiredOffTargetPosition) == 0x0003C4, "Member 'UGA_Firearm_Position_Master_C::NewDesiredOffTargetPosition' has a wrong offset!");

}

