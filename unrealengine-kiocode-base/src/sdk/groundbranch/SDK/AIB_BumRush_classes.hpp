﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIB_BumRush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIB_BumRush.AIB_BumRush_C
// 0x0008 (0x0048 - 0x0040)
class UAIB_BumRush_C final : public UGBAIBehaviorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AIB_BumRush(int32 EntryPoint);
	void OnEnterState();

	bool PreCondition() const;
	float GetScore() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIB_BumRush_C">();
	}
	static class UAIB_BumRush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIB_BumRush_C>();
	}
};
static_assert(alignof(UAIB_BumRush_C) == 0x000008, "Wrong alignment on UAIB_BumRush_C");
static_assert(sizeof(UAIB_BumRush_C) == 0x000048, "Wrong size on UAIB_BumRush_C");
static_assert(offsetof(UAIB_BumRush_C, UberGraphFrame) == 0x000040, "Member 'UAIB_BumRush_C::UberGraphFrame' has a wrong offset!");

}

