﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Firearm_Attachment_Use_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Firearm_Attachment_Use_Master.GA_Firearm_Attachment_Use_Master_C
// 0x0028 (0x03E0 - 0x03B8)
class UGA_Firearm_Attachment_Use_Master_C : public UGBEquippedGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGBInvItem*                             TargetInvItem;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                 DoubltTapTimeoutTask;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventOffTag;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bContinueUsingOnEnd;                               // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Firearm_Attachment_Use_Master(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ActivateShared();
	void WaitForInput();
	void WaitForEndInput();
	void ClearDoubleTapTimeoutTask();
	void EventReceived_E4D553E108E249079AB9E0B8321F6612(const struct FGameplayEventData& Payload);
	void EventReceived_45D30E8D8EE7427CA0D5BFFEFCBD8EBC(const struct FGameplayEventData& Payload);
	void OnPress_D7171DB79A564DAABDE2191F951A5447(float TimeWaited);
	void OnFinish_443E3ACA058342F3ACFC87793F153568();
	void OnRelease_3F18C194AD9644609DBFEC41A523D1C7(float TimeHeld);
	void OnPress_881D324264BB4FA19640FFBA7CAF2EC8(float TimeWaited);
	void InitReferences(bool* bOutSuccess);
	void ClearReferences();
	void StartUsing();
	void StopUsing();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Firearm_Attachment_Use_Master_C">();
	}
	static class UGA_Firearm_Attachment_Use_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Firearm_Attachment_Use_Master_C>();
	}
};
static_assert(alignof(UGA_Firearm_Attachment_Use_Master_C) == 0x000008, "Wrong alignment on UGA_Firearm_Attachment_Use_Master_C");
static_assert(sizeof(UGA_Firearm_Attachment_Use_Master_C) == 0x0003E0, "Wrong size on UGA_Firearm_Attachment_Use_Master_C");
static_assert(offsetof(UGA_Firearm_Attachment_Use_Master_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_Firearm_Attachment_Use_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Attachment_Use_Master_C, TargetInvItem) == 0x0003C0, "Member 'UGA_Firearm_Attachment_Use_Master_C::TargetInvItem' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Attachment_Use_Master_C, DoubltTapTimeoutTask) == 0x0003C8, "Member 'UGA_Firearm_Attachment_Use_Master_C::DoubltTapTimeoutTask' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Attachment_Use_Master_C, EventOffTag) == 0x0003D0, "Member 'UGA_Firearm_Attachment_Use_Master_C::EventOffTag' has a wrong offset!");
static_assert(offsetof(UGA_Firearm_Attachment_Use_Master_C, bContinueUsingOnEnd) == 0x0003D8, "Member 'UGA_Firearm_Attachment_Use_Master_C::bContinueUsingOnEnd' has a wrong offset!");

}

