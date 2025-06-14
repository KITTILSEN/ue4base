﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ComTac

#include "Basic.hpp"

#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ComTac.BP_ComTac_C
// 0x0010 (0x0458 - 0x0448)
class ABP_ComTac_C final : public AGBInvItemAttachment_SocketTag
{
public:
	class UStaticMeshComponent*                   SM_ComTac;                                         // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadGearEarsSocket;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	TArray<class UPrimitiveComponent*> GetHiddenComponents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ComTac_C">();
	}
	static class ABP_ComTac_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ComTac_C>();
	}
};
static_assert(alignof(ABP_ComTac_C) == 0x000008, "Wrong alignment on ABP_ComTac_C");
static_assert(sizeof(ABP_ComTac_C) == 0x000458, "Wrong size on ABP_ComTac_C");
static_assert(offsetof(ABP_ComTac_C, SM_ComTac) == 0x000448, "Member 'ABP_ComTac_C::SM_ComTac' has a wrong offset!");
static_assert(offsetof(ABP_ComTac_C, HeadGearEarsSocket) == 0x000450, "Member 'ABP_ComTac_C::HeadGearEarsSocket' has a wrong offset!");

}

