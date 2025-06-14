﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KytController_VIP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_KytController_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KytController_VIP.BP_KytController_VIP_C
// 0x0008 (0x04C8 - 0x04C0)
class ABP_KytController_VIP_C final : public ABP_KytController_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_KytController_VIP_C;             // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_KytController_VIP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Find_Hiding_Spot_BP(class AActor* HideFrom, struct FVector* Location, int32* stance, bool* bFound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KytController_VIP_C">();
	}
	static class ABP_KytController_VIP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KytController_VIP_C>();
	}
};
static_assert(alignof(ABP_KytController_VIP_C) == 0x000008, "Wrong alignment on ABP_KytController_VIP_C");
static_assert(sizeof(ABP_KytController_VIP_C) == 0x0004C8, "Wrong size on ABP_KytController_VIP_C");
static_assert(offsetof(ABP_KytController_VIP_C, UberGraphFrame_BP_KytController_VIP_C) == 0x0004C0, "Member 'ABP_KytController_VIP_C::UberGraphFrame_BP_KytController_VIP_C' has a wrong offset!");

}

