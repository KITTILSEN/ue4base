﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_CommandMenu.GA_CommandMenu_C
// 0x0018 (0x03D0 - 0x03B8)
class UGA_CommandMenu_C final : public UGBGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGBRadialMenuWidget*                    CommandMenuWidget;                                 // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CommandMenuEntries;                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_CommandMenu(int32 EntryPoint);
	void OnMenuElementSelected_Event_0(int32 Idx);
	void K2_ActivateAbility();
	void CreateComandMenuWidget();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRelease_FB6BA18F6CF6443597F5FCBB061A494D(float TimeHeld);
	void PerformTrace(struct FHitResult* OutHit);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	void GetRadialMenuOptions(TArray<struct FGBRadialMenuOption>* OutRadialMenuOptions) const;
	void GetAICommandAndVoiceCom(int32 Index_0, EGBAICommands* AICommand, class FName* VoiceCom) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_CommandMenu_C">();
	}
	static class UGA_CommandMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_CommandMenu_C>();
	}
};
static_assert(alignof(UGA_CommandMenu_C) == 0x000008, "Wrong alignment on UGA_CommandMenu_C");
static_assert(sizeof(UGA_CommandMenu_C) == 0x0003D0, "Wrong size on UGA_CommandMenu_C");
static_assert(offsetof(UGA_CommandMenu_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_CommandMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_CommandMenu_C, CommandMenuWidget) == 0x0003C0, "Member 'UGA_CommandMenu_C::CommandMenuWidget' has a wrong offset!");
static_assert(offsetof(UGA_CommandMenu_C, CommandMenuEntries) == 0x0003C8, "Member 'UGA_CommandMenu_C::CommandMenuEntries' has a wrong offset!");

}

