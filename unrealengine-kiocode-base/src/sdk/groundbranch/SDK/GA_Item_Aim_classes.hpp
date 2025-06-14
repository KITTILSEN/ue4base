﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Item_Aim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Item_Aim.GA_Item_Aim_C
// 0x0020 (0x03D8 - 0x03B8)
class UGA_Item_Aim_C final : public UGBEquippedGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         LastDesiredOffTarrgetAlpha;                        // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitDelay*                 HintDelay;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SettingReturnToReadyPostEngaged;                   // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Item_Aim(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void ActivatedByAI(const struct FGameplayEventData& EventData);
	void ActivatedByPlayerInput();
	void ActivateShared();
	void K2_ActivateAbility();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Added_9C4A0BD1863346BBAF09E634CC6AA3E0();
	void EventReceived_BCC8A875874E47CCB7A12500C5385E01(const struct FGameplayEventData& Payload);
	void OnFinish_B266CCE4D1B34295AD42FFCA15F4411E();
	void OnPress_0950CF4AB4AE41FF92906A2659AF58CB(float TimeWaited);
	void OnRelease_B6CA9B9C0C624873ACA179105E09A63E(float TimeHeld);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Item_Aim_C">();
	}
	static class UGA_Item_Aim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Item_Aim_C>();
	}
};
static_assert(alignof(UGA_Item_Aim_C) == 0x000008, "Wrong alignment on UGA_Item_Aim_C");
static_assert(sizeof(UGA_Item_Aim_C) == 0x0003D8, "Wrong size on UGA_Item_Aim_C");
static_assert(offsetof(UGA_Item_Aim_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_Item_Aim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Item_Aim_C, LastDesiredOffTarrgetAlpha) == 0x0003C0, "Member 'UGA_Item_Aim_C::LastDesiredOffTarrgetAlpha' has a wrong offset!");
static_assert(offsetof(UGA_Item_Aim_C, HintDelay) == 0x0003C8, "Member 'UGA_Item_Aim_C::HintDelay' has a wrong offset!");
static_assert(offsetof(UGA_Item_Aim_C, SettingReturnToReadyPostEngaged) == 0x0003D0, "Member 'UGA_Item_Aim_C::SettingReturnToReadyPostEngaged' has a wrong offset!");

}

