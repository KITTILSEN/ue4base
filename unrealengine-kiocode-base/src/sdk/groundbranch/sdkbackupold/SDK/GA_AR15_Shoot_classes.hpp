﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AR15_Shoot

#include "Basic.hpp"

#include "GA_Shoot_ExternalMag_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_AR15_Shoot.GA_AR15_Shoot_C
// 0x0000 (0x0420 - 0x0420)
class UGA_AR15_Shoot_C final : public UGA_Shoot_ExternalMag_Master_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AR15_Shoot_C">();
	}
	static class UGA_AR15_Shoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AR15_Shoot_C>();
	}
};
static_assert(alignof(UGA_AR15_Shoot_C) == 0x000008, "Wrong alignment on UGA_AR15_Shoot_C");
static_assert(sizeof(UGA_AR15_Shoot_C) == 0x000420, "Wrong size on UGA_AR15_Shoot_C");

}

