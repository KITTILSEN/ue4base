﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Kyt_AnimNotify_OpenDoor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Kyt_AnimNotify_OpenDoor.BP_Kyt_AnimNotify_OpenDoor_C
// 0x0008 (0x0040 - 0x0038)
class UBP_Kyt_AnimNotify_OpenDoor_C final : public UAnimNotify
{
public:
	class AActor*                                 Char;                                              // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Kyt_AnimNotify_OpenDoor_C">();
	}
	static class UBP_Kyt_AnimNotify_OpenDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Kyt_AnimNotify_OpenDoor_C>();
	}
};
static_assert(alignof(UBP_Kyt_AnimNotify_OpenDoor_C) == 0x000008, "Wrong alignment on UBP_Kyt_AnimNotify_OpenDoor_C");
static_assert(sizeof(UBP_Kyt_AnimNotify_OpenDoor_C) == 0x000040, "Wrong size on UBP_Kyt_AnimNotify_OpenDoor_C");
static_assert(offsetof(UBP_Kyt_AnimNotify_OpenDoor_C, Char) == 0x000038, "Member 'UBP_Kyt_AnimNotify_OpenDoor_C::Char' has a wrong offset!");

}

