﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Lean_Cancel

#include "Basic.hpp"

#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Lean_Cancel.GA_Lean_Cancel_C
// 0x0000 (0x03B8 - 0x03B8)
class UGA_Lean_Cancel_C final : public UGBGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Lean_Cancel_C">();
	}
	static class UGA_Lean_Cancel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Lean_Cancel_C>();
	}
};
static_assert(alignof(UGA_Lean_Cancel_C) == 0x000008, "Wrong alignment on UGA_Lean_Cancel_C");
static_assert(sizeof(UGA_Lean_Cancel_C) == 0x0003B8, "Wrong size on UGA_Lean_Cancel_C");

}

