﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BreachingCharge_Place

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BreachingCharge_Place.GA_BreachingCharge_Place_C
// 0x0098 (0x0450 - 0x03B8)
class UGA_BreachingCharge_Place_C final : public UGBEquippedGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BreachingCharge_C*                  BreachingChargeRef;                                // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Detonator_C*                        DetonatorRef;                                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxPlacementRange;                                 // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BreachSocketNamePrefix;                            // 0x03D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         AttachTargetComp;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             AttachTargetTransform;                             // 0x03F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   AttachTargetSocketName;                            // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Montage;                                           // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MoveToOffset;                                      // 0x0430(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightEquipMontageName;                             // 0x043C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_BreachingCharge_Place(int32 EntryPoint);
	void WaitForAttachEvent();
	void BindToDetonator();
	void SwitchToDetonator();
	void K2_OnEndAbility(bool bWasCancelled);
	void AttachChargeToComponent();
	void MoveIntoPosition();
	void PlaceCharge();
	void K2_ActivateAbility();
	void OnSync_79865C1617804143AC8B7F3B7E5ED0B7();
	void OnCompleted_5AE77B4FF35B4E72B338969E8C32A98E();
	void OnBlendOut_5AE77B4FF35B4E72B338969E8C32A98E();
	void OnInterrupted_5AE77B4FF35B4E72B338969E8C32A98E();
	void OnCancelled_5AE77B4FF35B4E72B338969E8C32A98E();
	void EventReceived_B314EE6038484772924FC3CF724689EE(const struct FGameplayEventData& Payload);
	void OnTargetReached_619AAE1F64D04B78B0337741EFEAA367();
	void OnFailureToMove_619AAE1F64D04B78B0337741EFEAA367();
	void EventReceived_FAE60747FE674473A24BB62953D2FC31(const struct FGameplayEventData& Payload);
	void OnCompleted_D1BC8CCDB8EE47A49DF154900F6F76D0();
	void OnBlendOut_D1BC8CCDB8EE47A49DF154900F6F76D0();
	void OnInterrupted_D1BC8CCDB8EE47A49DF154900F6F76D0();
	void OnCancelled_D1BC8CCDB8EE47A49DF154900F6F76D0();
	void PerformTrace(struct FHitResult* OutHit);
	void CanBreach(const struct FHitResult& InHitResult, bool* OutCanBreach, class UMeshComponent** OutMeshComp, class FName* OutSocketName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BreachingCharge_Place_C">();
	}
	static class UGA_BreachingCharge_Place_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BreachingCharge_Place_C>();
	}
};
static_assert(alignof(UGA_BreachingCharge_Place_C) == 0x000010, "Wrong alignment on UGA_BreachingCharge_Place_C");
static_assert(sizeof(UGA_BreachingCharge_Place_C) == 0x000450, "Wrong size on UGA_BreachingCharge_Place_C");
static_assert(offsetof(UGA_BreachingCharge_Place_C, UberGraphFrame) == 0x0003B8, "Member 'UGA_BreachingCharge_Place_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, BreachingChargeRef) == 0x0003C0, "Member 'UGA_BreachingCharge_Place_C::BreachingChargeRef' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, DetonatorRef) == 0x0003C8, "Member 'UGA_BreachingCharge_Place_C::DetonatorRef' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, MaxPlacementRange) == 0x0003D0, "Member 'UGA_BreachingCharge_Place_C::MaxPlacementRange' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, BreachSocketNamePrefix) == 0x0003D4, "Member 'UGA_BreachingCharge_Place_C::BreachSocketNamePrefix' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, AttachTargetComp) == 0x0003E0, "Member 'UGA_BreachingCharge_Place_C::AttachTargetComp' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, AttachTargetTransform) == 0x0003F0, "Member 'UGA_BreachingCharge_Place_C::AttachTargetTransform' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, AttachTargetSocketName) == 0x000420, "Member 'UGA_BreachingCharge_Place_C::AttachTargetSocketName' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, Montage) == 0x000428, "Member 'UGA_BreachingCharge_Place_C::Montage' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, MoveToOffset) == 0x000430, "Member 'UGA_BreachingCharge_Place_C::MoveToOffset' has a wrong offset!");
static_assert(offsetof(UGA_BreachingCharge_Place_C, RightEquipMontageName) == 0x00043C, "Member 'UGA_BreachingCharge_Place_C::RightEquipMontageName' has a wrong offset!");

}

