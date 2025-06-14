﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Platform_PlateCarrier_MPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Platform_PlateCarrier_MPC.BP_Platform_PlateCarrier_MPC_C
// 0x0008 (0x04D8 - 0x04D0)
class ABP_Platform_PlateCarrier_MPC_C final : public AGBPlatform
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Platform_PlateCarrier_MPC(int32 EntryPoint);
	void OnAddedToInventoryEvent(class AGBCharacter* Character);
	void Completed_88B54725AFC14B3BBBF92A5F460284FD(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Platform_PlateCarrier_MPC_C">();
	}
	static class ABP_Platform_PlateCarrier_MPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Platform_PlateCarrier_MPC_C>();
	}
};
static_assert(alignof(ABP_Platform_PlateCarrier_MPC_C) == 0x000008, "Wrong alignment on ABP_Platform_PlateCarrier_MPC_C");
static_assert(sizeof(ABP_Platform_PlateCarrier_MPC_C) == 0x0004D8, "Wrong size on ABP_Platform_PlateCarrier_MPC_C");
static_assert(offsetof(ABP_Platform_PlateCarrier_MPC_C, UberGraphFrame) == 0x0004D0, "Member 'ABP_Platform_PlateCarrier_MPC_C::UberGraphFrame' has a wrong offset!");

}

