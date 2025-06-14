﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotify_SetCurrentAnimLayerClass

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotify_SetCurrentAnimLayerClass.BP_AnimNotify_SetCurrentAnimLayerClass_C
// 0x0008 (0x0040 - 0x0038)
class UBP_AnimNotify_SetCurrentAnimLayerClass_C final : public UAnimNotify
{
public:
	TSubclassOf<class UAnimInstance>              AnimLayerClass;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	class FString GetNotifyName() const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_SetCurrentAnimLayerClass_C">();
	}
	static class UBP_AnimNotify_SetCurrentAnimLayerClass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_SetCurrentAnimLayerClass_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_SetCurrentAnimLayerClass_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_SetCurrentAnimLayerClass_C");
static_assert(sizeof(UBP_AnimNotify_SetCurrentAnimLayerClass_C) == 0x000040, "Wrong size on UBP_AnimNotify_SetCurrentAnimLayerClass_C");
static_assert(offsetof(UBP_AnimNotify_SetCurrentAnimLayerClass_C, AnimLayerClass) == 0x000038, "Member 'UBP_AnimNotify_SetCurrentAnimLayerClass_C::AnimLayerClass' has a wrong offset!");

}

