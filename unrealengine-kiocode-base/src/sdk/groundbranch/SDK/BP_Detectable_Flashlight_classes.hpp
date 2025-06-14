﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Detectable_Flashlight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DetectableActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Detectable_Flashlight.BP_Detectable_Flashlight_C
// 0x0028 (0x0270 - 0x0248)
class ABP_Detectable_Flashlight_C final : public ABP_DetectableActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LightForwardDirection;                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         IgnoreActors;                                      // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_Detectable_Flashlight(int32 EntryPoint);
	void Detected(class AActor* DetectedBy);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Detectable_Flashlight_C">();
	}
	static class ABP_Detectable_Flashlight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Detectable_Flashlight_C>();
	}
};
static_assert(alignof(ABP_Detectable_Flashlight_C) == 0x000008, "Wrong alignment on ABP_Detectable_Flashlight_C");
static_assert(sizeof(ABP_Detectable_Flashlight_C) == 0x000270, "Wrong size on ABP_Detectable_Flashlight_C");
static_assert(offsetof(ABP_Detectable_Flashlight_C, UberGraphFrame) == 0x000248, "Member 'ABP_Detectable_Flashlight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Detectable_Flashlight_C, Capsule) == 0x000250, "Member 'ABP_Detectable_Flashlight_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_Detectable_Flashlight_C, LightForwardDirection) == 0x000258, "Member 'ABP_Detectable_Flashlight_C::LightForwardDirection' has a wrong offset!");
static_assert(offsetof(ABP_Detectable_Flashlight_C, IgnoreActors) == 0x000260, "Member 'ABP_Detectable_Flashlight_C::IgnoreActors' has a wrong offset!");

}

