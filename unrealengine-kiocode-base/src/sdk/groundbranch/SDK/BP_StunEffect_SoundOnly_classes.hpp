﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StunEffect_SoundOnly

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_StunEffect_SoundOnly_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           AkComponent;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MaxStunRadius;                                     // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OccludedStunRadius;                                // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ExplosionOrigin;                                   // 0x0240(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocalEyesLocation;                                 // 0x024C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeafnessDurationNormal;                            // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeafnessDurationClose;                             // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeafnessDurationOccluded;                          // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOccluded;                                       // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ChareacterStateGroup;                              // 0x026C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DeafState;                                         // 0x0274(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StunnedState;                                      // 0x027C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          EarRingingEvent;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EarRingingPlayingID;                               // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          EarRingingStopEvent;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EarRingingStopPlayingID;                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeafToStunnedDelay;                                // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DeafToStunnedTimer;                                // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         StunnedToNoneStateDelay;                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           StunnedToNoneStateTimer;                           // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_StunEffect_SoundOnly(int32 EntryPoint);
	void OnDeathStarted_Event_0(class AGBCharacter* Character);
	void OnPlayerControllerStateChanged_Event_0(class FName OldState, class FName NewState);
	void BindToPlayerControllerState();
	void RemoveStunEffect();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void K2_OnReset();
	void OnPlayerReadyRoomStatusChanged_Event_0(class AGBPlayerState* PlayerState);
	void BindToReadyRoomStatus();
	void BindToCharacterDying();
	void StunnedToNoneState();
	void ReceiveBeginPlay();
	void StunLocalPlayer();
	void StopSounds();
	void DeafToStunnedState();
	void StopEarsRinging();
	void StartEarsRinging();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StunEffect_SoundOnly_C">();
	}
	static class ABP_StunEffect_SoundOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StunEffect_SoundOnly_C>();
	}
};
static_assert(alignof(ABP_StunEffect_SoundOnly_C) == 0x000008, "Wrong alignment on ABP_StunEffect_SoundOnly_C");
static_assert(sizeof(ABP_StunEffect_SoundOnly_C) == 0x0002C0, "Wrong size on ABP_StunEffect_SoundOnly_C");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, UberGraphFrame) == 0x000220, "Member 'ABP_StunEffect_SoundOnly_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, AkComponent) == 0x000228, "Member 'ABP_StunEffect_SoundOnly_C::AkComponent' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_StunEffect_SoundOnly_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, MaxStunRadius) == 0x000238, "Member 'ABP_StunEffect_SoundOnly_C::MaxStunRadius' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, OccludedStunRadius) == 0x00023C, "Member 'ABP_StunEffect_SoundOnly_C::OccludedStunRadius' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, ExplosionOrigin) == 0x000240, "Member 'ABP_StunEffect_SoundOnly_C::ExplosionOrigin' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, LocalEyesLocation) == 0x00024C, "Member 'ABP_StunEffect_SoundOnly_C::LocalEyesLocation' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, Distance) == 0x000258, "Member 'ABP_StunEffect_SoundOnly_C::Distance' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafnessDurationNormal) == 0x00025C, "Member 'ABP_StunEffect_SoundOnly_C::DeafnessDurationNormal' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafnessDurationClose) == 0x000260, "Member 'ABP_StunEffect_SoundOnly_C::DeafnessDurationClose' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafnessDurationOccluded) == 0x000264, "Member 'ABP_StunEffect_SoundOnly_C::DeafnessDurationOccluded' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, bIsOccluded) == 0x000268, "Member 'ABP_StunEffect_SoundOnly_C::bIsOccluded' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, ChareacterStateGroup) == 0x00026C, "Member 'ABP_StunEffect_SoundOnly_C::ChareacterStateGroup' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafState) == 0x000274, "Member 'ABP_StunEffect_SoundOnly_C::DeafState' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, StunnedState) == 0x00027C, "Member 'ABP_StunEffect_SoundOnly_C::StunnedState' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, EarRingingEvent) == 0x000288, "Member 'ABP_StunEffect_SoundOnly_C::EarRingingEvent' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, EarRingingPlayingID) == 0x000290, "Member 'ABP_StunEffect_SoundOnly_C::EarRingingPlayingID' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, EarRingingStopEvent) == 0x000298, "Member 'ABP_StunEffect_SoundOnly_C::EarRingingStopEvent' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, EarRingingStopPlayingID) == 0x0002A0, "Member 'ABP_StunEffect_SoundOnly_C::EarRingingStopPlayingID' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafToStunnedDelay) == 0x0002A4, "Member 'ABP_StunEffect_SoundOnly_C::DeafToStunnedDelay' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, DeafToStunnedTimer) == 0x0002A8, "Member 'ABP_StunEffect_SoundOnly_C::DeafToStunnedTimer' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, StunnedToNoneStateDelay) == 0x0002B0, "Member 'ABP_StunEffect_SoundOnly_C::StunnedToNoneStateDelay' has a wrong offset!");
static_assert(offsetof(ABP_StunEffect_SoundOnly_C, StunnedToNoneStateTimer) == 0x0002B8, "Member 'ABP_StunEffect_SoundOnly_C::StunnedToNoneStateTimer' has a wrong offset!");

}

