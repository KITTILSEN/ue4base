﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Riser_15x50mm

#include "Basic.hpp"

#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Riser_15x50mm.BP_Riser_15x50mm_C
// 0x0018 (0x0490 - 0x0478)
class ABP_Riser_15x50mm_C final : public AGBRailAttachment
{
public:
	class UGBRailComponent*                       GBRail;                                            // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGBRailMountComponent*                  GBRailMount;                                       // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Riser_15x50mm;                                  // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Riser_15x50mm_C">();
	}
	static class ABP_Riser_15x50mm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Riser_15x50mm_C>();
	}
};
static_assert(alignof(ABP_Riser_15x50mm_C) == 0x000008, "Wrong alignment on ABP_Riser_15x50mm_C");
static_assert(sizeof(ABP_Riser_15x50mm_C) == 0x000490, "Wrong size on ABP_Riser_15x50mm_C");
static_assert(offsetof(ABP_Riser_15x50mm_C, GBRail) == 0x000478, "Member 'ABP_Riser_15x50mm_C::GBRail' has a wrong offset!");
static_assert(offsetof(ABP_Riser_15x50mm_C, GBRailMount) == 0x000480, "Member 'ABP_Riser_15x50mm_C::GBRailMount' has a wrong offset!");
static_assert(offsetof(ABP_Riser_15x50mm_C, SM_Riser_15x50mm) == 0x000488, "Member 'ABP_Riser_15x50mm_C::SM_Riser_15x50mm' has a wrong offset!");

}

