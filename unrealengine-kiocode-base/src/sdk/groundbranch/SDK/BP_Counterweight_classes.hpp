﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Counterweight

#include "Basic.hpp"

#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Counterweight.BP_Counterweight_C
// 0x0030 (0x0478 - 0x0448)
class ABP_Counterweight_C final : public AGBInvItemAttachment_SocketTag
{
public:
	class UStaticMeshComponent*                   SM_Counterweight;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      PatchMaterial;                                     // 0x0450(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	TSoftObjectPtr<class UMaterialInterface> GetStaticMeshPatchMaterial();
	TArray<class UPrimitiveComponent*> GetHiddenComponents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Counterweight_C">();
	}
	static class ABP_Counterweight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Counterweight_C>();
	}
};
static_assert(alignof(ABP_Counterweight_C) == 0x000008, "Wrong alignment on ABP_Counterweight_C");
static_assert(sizeof(ABP_Counterweight_C) == 0x000478, "Wrong size on ABP_Counterweight_C");
static_assert(offsetof(ABP_Counterweight_C, SM_Counterweight) == 0x000448, "Member 'ABP_Counterweight_C::SM_Counterweight' has a wrong offset!");
static_assert(offsetof(ABP_Counterweight_C, PatchMaterial) == 0x000450, "Member 'ABP_Counterweight_C::PatchMaterial' has a wrong offset!");

}

