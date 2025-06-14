﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chemlight_Projectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chemlight_Projectile.BP_Chemlight_Projectile_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_Chemlight_Projectile_C final : public AGBItemProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bAlignToFloor;                                     // 0x0298(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_BP_Chemlight_Projectile(int32 EntryPoint);
	void OnReplaceClientsideProxyEvent(class AGBInvItem* ClientsideProxyAssociatedItem, bool bSyncedLocations);
	void AlignToFloor();
	void BndEvt__BP_Chemlight_Projectile_ItemProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnComponentHit_Event_0(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_bAlignToFloor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chemlight_Projectile_C">();
	}
	static class ABP_Chemlight_Projectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chemlight_Projectile_C>();
	}
};
static_assert(alignof(ABP_Chemlight_Projectile_C) == 0x000008, "Wrong alignment on ABP_Chemlight_Projectile_C");
static_assert(sizeof(ABP_Chemlight_Projectile_C) == 0x0002A0, "Wrong size on ABP_Chemlight_Projectile_C");
static_assert(offsetof(ABP_Chemlight_Projectile_C, UberGraphFrame) == 0x000290, "Member 'ABP_Chemlight_Projectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Chemlight_Projectile_C, bAlignToFloor) == 0x000298, "Member 'ABP_Chemlight_Projectile_C::bAlignToFloor' has a wrong offset!");

}

