﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SmokeGrenade_Throw

#include "Basic.hpp"

#include "GA_Grenade_Throw_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SmokeGrenade_Throw.GA_SmokeGrenade_Throw_C
// 0x0000 (0x0468 - 0x0468)
class UGA_SmokeGrenade_Throw_C final : public UGA_Grenade_Throw_C
{
public:
	void GetLaunchVelocity(struct FVector* OutVelocity) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SmokeGrenade_Throw_C">();
	}
	static class UGA_SmokeGrenade_Throw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SmokeGrenade_Throw_C>();
	}
};
static_assert(alignof(UGA_SmokeGrenade_Throw_C) == 0x000008, "Wrong alignment on UGA_SmokeGrenade_Throw_C");
static_assert(sizeof(UGA_SmokeGrenade_Throw_C) == 0x000468, "Wrong size on UGA_SmokeGrenade_Throw_C");

}

