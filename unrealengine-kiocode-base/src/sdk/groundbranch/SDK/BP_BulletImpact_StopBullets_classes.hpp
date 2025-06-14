﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletImpact_StopBullets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BulletImpact_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BulletImpact_StopBullets.BP_BulletImpact_StopBullets_C
// 0x0008 (0x0378 - 0x0370)
class ABP_BulletImpact_StopBullets_C final : public ABP_BulletImpact_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BulletImpact_StopBullets_C;      // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_BulletImpact_StopBullets(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulletImpact_StopBullets_C">();
	}
	static class ABP_BulletImpact_StopBullets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BulletImpact_StopBullets_C>();
	}
};
static_assert(alignof(ABP_BulletImpact_StopBullets_C) == 0x000008, "Wrong alignment on ABP_BulletImpact_StopBullets_C");
static_assert(sizeof(ABP_BulletImpact_StopBullets_C) == 0x000378, "Wrong size on ABP_BulletImpact_StopBullets_C");
static_assert(offsetof(ABP_BulletImpact_StopBullets_C, UberGraphFrame_BP_BulletImpact_StopBullets_C) == 0x000370, "Member 'ABP_BulletImpact_StopBullets_C::UberGraphFrame_BP_BulletImpact_StopBullets_C' has a wrong offset!");

}

