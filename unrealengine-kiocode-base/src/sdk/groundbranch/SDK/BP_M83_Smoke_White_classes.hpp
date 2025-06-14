﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_M83_Smoke_White

#include "Basic.hpp"

#include "BP_Grenade_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_M83_Smoke_White.BP_M83_Smoke_White_C
// 0x0008 (0x04A0 - 0x0498)
class ABP_M83_Smoke_White_C final : public ABP_Grenade_Master_C
{
public:
	class ABP_Grenade_Projectile_C*               GrenadeProjectileRef;                              // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_M83_Smoke_White_C">();
	}
	static class ABP_M83_Smoke_White_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_M83_Smoke_White_C>();
	}
};
static_assert(alignof(ABP_M83_Smoke_White_C) == 0x000008, "Wrong alignment on ABP_M83_Smoke_White_C");
static_assert(sizeof(ABP_M83_Smoke_White_C) == 0x0004A0, "Wrong size on ABP_M83_Smoke_White_C");
static_assert(offsetof(ABP_M83_Smoke_White_C, GrenadeProjectileRef) == 0x000498, "Member 'ABP_M83_Smoke_White_C::GrenadeProjectileRef' has a wrong offset!");

}

