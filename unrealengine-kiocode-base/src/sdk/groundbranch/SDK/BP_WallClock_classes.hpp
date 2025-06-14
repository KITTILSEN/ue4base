﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WallClock

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WallClock.BP_WallClock_C
// 0x0040 (0x0260 - 0x0220)
class ABP_WallClock_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           AK;                                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Clock_Secondshand;                                 // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Clock_Minuteshand;                                 // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Clock_Hourshand;                                   // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WallClock;                                         // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_GBSkyActor_C*                       SkyActor;                                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDestroyed;                                        // 0x0258(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_BP_WallClock(int32 EntryPoint);
	void Play_Sound();
	void UnbindFromSkyActor();
	void ReceiveBeginPlay();
	void BindToSkyActor();
	void OnSkyUpdate_Event_0(class AGBSky* SkyActor_0);
	void K2_OnReset();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnRep_bDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WallClock_C">();
	}
	static class ABP_WallClock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WallClock_C>();
	}
};
static_assert(alignof(ABP_WallClock_C) == 0x000008, "Wrong alignment on ABP_WallClock_C");
static_assert(sizeof(ABP_WallClock_C) == 0x000260, "Wrong size on ABP_WallClock_C");
static_assert(offsetof(ABP_WallClock_C, UberGraphFrame) == 0x000220, "Member 'ABP_WallClock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, AK) == 0x000228, "Member 'ABP_WallClock_C::AK' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, Clock_Secondshand) == 0x000230, "Member 'ABP_WallClock_C::Clock_Secondshand' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, Clock_Minuteshand) == 0x000238, "Member 'ABP_WallClock_C::Clock_Minuteshand' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, Clock_Hourshand) == 0x000240, "Member 'ABP_WallClock_C::Clock_Hourshand' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, WallClock) == 0x000248, "Member 'ABP_WallClock_C::WallClock' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, SkyActor) == 0x000250, "Member 'ABP_WallClock_C::SkyActor' has a wrong offset!");
static_assert(offsetof(ABP_WallClock_C, bDestroyed) == 0x000258, "Member 'ABP_WallClock_C::bDestroyed' has a wrong offset!");

}

