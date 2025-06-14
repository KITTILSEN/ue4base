﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GBSkyActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GroundBranch_structs.hpp"
#include "GroundBranch_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GBSkyActor.BP_GBSkyActor_C
// 0x0048 (0x1788 - 0x1740)
class ABP_GBSkyActor_C final : public AGBSky
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMulticastInlineDelegate<void(class FName Timespan)> OnTimeSpanChanged;                          // 0x1748(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSubclassOf<class AActor>                     WaterBPClass;                                      // 0x1758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bDisableSkyActorInReadyRoom;                       // 0x1760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1761[0x3];                                     // 0x1761(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ScaleReflectionCaptureTag;                         // 0x1764(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinimumReflectionCaptureBrightness;                // 0x176C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NVGEnabledParameterName;                           // 0x1770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NightVisionEnabledTag;                             // 0x1778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           TimeOfDayMPC;                                      // 0x1780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GBSkyActor(int32 EntryPoint);
	void OnLocalPlayerTagsUpdated_Event_0(class AGBPlayerController* PlayerController);
	void BindToOnLocalPlayerTagsUpdated();
	void ReceiveBeginPlay();
	void UpdateWwiseWithTimeChange();
	void OnTimeChangeEvent(const bool bIsTransitionalTime);
	void OnPlayerReadyRoomStatusChanged(class AGBPlayerState* PlayerState);
	void InternalOnTimeSpanChanged();
	void OnTimeSpanChangeEvent();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GBSkyActor_C">();
	}
	static class ABP_GBSkyActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GBSkyActor_C>();
	}
};
static_assert(alignof(ABP_GBSkyActor_C) == 0x000008, "Wrong alignment on ABP_GBSkyActor_C");
static_assert(sizeof(ABP_GBSkyActor_C) == 0x001788, "Wrong size on ABP_GBSkyActor_C");
static_assert(offsetof(ABP_GBSkyActor_C, UberGraphFrame) == 0x001740, "Member 'ABP_GBSkyActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, OnTimeSpanChanged) == 0x001748, "Member 'ABP_GBSkyActor_C::OnTimeSpanChanged' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, WaterBPClass) == 0x001758, "Member 'ABP_GBSkyActor_C::WaterBPClass' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, bDisableSkyActorInReadyRoom) == 0x001760, "Member 'ABP_GBSkyActor_C::bDisableSkyActorInReadyRoom' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, ScaleReflectionCaptureTag) == 0x001764, "Member 'ABP_GBSkyActor_C::ScaleReflectionCaptureTag' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, MinimumReflectionCaptureBrightness) == 0x00176C, "Member 'ABP_GBSkyActor_C::MinimumReflectionCaptureBrightness' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, NVGEnabledParameterName) == 0x001770, "Member 'ABP_GBSkyActor_C::NVGEnabledParameterName' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, NightVisionEnabledTag) == 0x001778, "Member 'ABP_GBSkyActor_C::NightVisionEnabledTag' has a wrong offset!");
static_assert(offsetof(ABP_GBSkyActor_C, TimeOfDayMPC) == 0x001780, "Member 'ABP_GBSkyActor_C::TimeOfDayMPC' has a wrong offset!");

}

