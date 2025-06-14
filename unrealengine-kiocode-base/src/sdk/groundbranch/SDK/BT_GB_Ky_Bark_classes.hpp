﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BT_GB_Ky_Bark

#include "Basic.hpp"

#include "KytheraPlugin_structs.hpp"
#include "KytheraPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BT_GB_Ky_Bark.BT_GB_Ky_Bark_C
// 0x0018 (0x0040 - 0x0028)
class UBT_GB_Ky_Bark_C final : public UKytBTNode
{
public:
	class FString                                 BarkType;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   BarkKey;                                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BT_GB_Ky_Bark_C">();
	}
	static class UBT_GB_Ky_Bark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBT_GB_Ky_Bark_C>();
	}
};
static_assert(alignof(UBT_GB_Ky_Bark_C) == 0x000008, "Wrong alignment on UBT_GB_Ky_Bark_C");
static_assert(sizeof(UBT_GB_Ky_Bark_C) == 0x000040, "Wrong size on UBT_GB_Ky_Bark_C");
static_assert(offsetof(UBT_GB_Ky_Bark_C, BarkType) == 0x000028, "Member 'UBT_GB_Ky_Bark_C::BarkType' has a wrong offset!");
static_assert(offsetof(UBT_GB_Ky_Bark_C, BarkKey) == 0x000038, "Member 'UBT_GB_Ky_Bark_C::BarkKey' has a wrong offset!");

}

