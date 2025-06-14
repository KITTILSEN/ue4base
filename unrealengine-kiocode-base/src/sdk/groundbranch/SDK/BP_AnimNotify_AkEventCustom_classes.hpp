﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotify_AkEventCustom

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AnimNotify_AkEventCustom.BP_AnimNotify_AkEventCustom_C
// 0x0048 (0x0080 - 0x0038)
class UBP_AnimNotify_AkEventCustom_C final : public UAnimNotify
{
public:
	class UAkAudioEvent*                          FirstPersonEvent;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          ThirdPersonEvent;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxThirdPersonEventDistanceSq;                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkSwitchValue*                         SwitchValue;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ManualRTPC_Name;                                   // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         ManualRTPC_Value;                                  // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WeightRTPC_Name;                                   // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;
	void PostEventOnCharacter(class UAkAudioEvent* InEvent, class UMeshComponent* InMeshComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_AkEventCustom_C">();
	}
	static class UBP_AnimNotify_AkEventCustom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_AkEventCustom_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_AkEventCustom_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_AkEventCustom_C");
static_assert(sizeof(UBP_AnimNotify_AkEventCustom_C) == 0x000080, "Wrong size on UBP_AnimNotify_AkEventCustom_C");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, FirstPersonEvent) == 0x000038, "Member 'UBP_AnimNotify_AkEventCustom_C::FirstPersonEvent' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, ThirdPersonEvent) == 0x000040, "Member 'UBP_AnimNotify_AkEventCustom_C::ThirdPersonEvent' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, MaxThirdPersonEventDistanceSq) == 0x000048, "Member 'UBP_AnimNotify_AkEventCustom_C::MaxThirdPersonEventDistanceSq' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, SwitchValue) == 0x000050, "Member 'UBP_AnimNotify_AkEventCustom_C::SwitchValue' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, ManualRTPC_Name) == 0x000058, "Member 'UBP_AnimNotify_AkEventCustom_C::ManualRTPC_Name' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, ManualRTPC_Value) == 0x000068, "Member 'UBP_AnimNotify_AkEventCustom_C::ManualRTPC_Value' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_AkEventCustom_C, WeightRTPC_Name) == 0x000070, "Member 'UBP_AnimNotify_AkEventCustom_C::WeightRTPC_Name' has a wrong offset!");

}

